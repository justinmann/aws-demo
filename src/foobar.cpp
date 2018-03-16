#include <stdio.h>
#include <emscripten/emscripten.h>
#include <emscripten/bind.h>
using namespace emscripten;

EMSCRIPTEN_KEEPALIVE

void handleRequest(emscripten::val req, emscripten::val res) {
    std::string t = req["originalUrl"].as<std::string>();
    std::string result = "hello! " + t;
    res(result);
}

EMSCRIPTEN_BINDINGS(my_module) {
    function("handleRequest", &handleRequest);
}