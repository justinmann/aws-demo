#include <stdio.h>
#include <sstream>
#include <emscripten/emscripten.h>
#include <emscripten/bind.h>
#include "rapidjson/include/rapidjson/document.h"
namespace es = emscripten;
namespace rj = rapidjson;

#define no_attribs std::map<std::string, std::string>()

class h {
public:
    h(std::string tag, std::map<std::string, std::string> attribs, std::vector<h> children);
    h(std::string tag, std::map<std::string, std::string> attribs, std::string inner);
    void render(std::stringstream& ss);

private:
    std::string tag;
    std::map<std::string, std::string> attribs;
    std::vector<h> children;
    std::string inner;
};

h::h(std::string tag, std::map<std::string, std::string> attribs, std::vector<h> children) :
    tag(tag), attribs(attribs), children(children) { }

h::h(std::string tag, std::map<std::string, std::string> attribs, std::string inner) : 
    tag(tag), attribs(attribs), inner(inner) { }

void h::render(std::stringstream& ss) {
    ss << "<" << tag;

    for (auto attrib : attribs) {
        ss << " " << attrib.first << "=\"" << attrib.second << "\"";
    }

    ss << ">";

    for (auto child : children) {
        child.render(ss);
    }

    ss << inner;

    ss << "</" << tag << ">";
}

EMSCRIPTEN_KEEPALIVE

void handleRequestHyperscript(es::val req, es::val res, es::val service) {
    auto raw = service["getData"]().as<std::string>();

    rj::Document document;
    document.Parse(raw.c_str());

    std::vector<h> children;
    const rj::Value& people = document["people"];
    for (auto itr = people.Begin(); itr != people.End(); ++itr) {
        children.push_back(h(
            "div", { { "class", "person" } }, {
                h("span", no_attribs, (*itr)["name"].GetString())
            }
        ));
    }

    auto result = h("div", { { "class", "list" } }, children);
    std::stringstream ss;
    result.render(ss);
    res(ss.str());
}

void handleRequestStringStream(es::val req, es::val res, es::val service) {
    auto raw = service["getData"]().as<std::string>();

    rj::Document document;
    document.Parse(raw.c_str());

    std::stringstream ss;
    ss << "<div class=\"list\">";
    const rj::Value& people = document["people"];
    for (auto itr = people.Begin(); itr != people.End(); ++itr) {
        ss << "<div class=\"person\">";
        ss << "<span>" << (*itr)["name"].GetString() << "</span>";
        ss << "</div>";
    }
    ss << "</div>";

    res(ss.str());
}

void handleRequestString(es::val req, es::val res, es::val service) {
    auto raw = service["getData"]().as<std::string>();

    rj::Document document;
    document.Parse(raw.c_str());

    std::string s;
    s.reserve(50000);
    s += "<div class=\"list\">";
    const rj::Value& people = document["people"];
    for (auto itr = people.Begin(); itr != people.End(); ++itr) {
        s += "<div class=\"person\">";
        s += "<span>";
        s += (*itr)["name"].GetString();
        s += "</span>";
        s += "</div>";
    }
    s += "</div>";

    res(s);
}

void handleRequestPing(es::val req, es::val res, es::val service) {
    res(std::string("ok"));
}

EMSCRIPTEN_BINDINGS(my_module) {
    function("handleRequestHyperscript", &handleRequestHyperscript);
    function("handleRequestStringStream", &handleRequestStringStream);
    function("handleRequestString", &handleRequestString);
    function("handleRequestPing", &handleRequestPing);
}