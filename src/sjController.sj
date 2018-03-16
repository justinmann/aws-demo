library "release-1.0:https://github.com/justinmann/sj-lib-json.git"
include "hyperscript.sj"

handleRequestHyperscript() {
    test : "{ \"people\" : [ { \"name\" : \"Justin\" },  { \"name\" : \"Joe\" },  { \"name\" : \"John\" },  { \"name\" : \"Jake\" } ] }"
    model : json.parse(test)

    h : h("div", [ ("class", "list") ], 
        model["people"]?.a?.map!h(^(person:'json.value) {
            h("div", [ ("class", "person") ], [
                h("span", text : person["name"]?? as string)
            ])
        })
    )

    writer : heap stringWriter()
    h.render(writer as #writer)
    writer.text
}

handleRequestString() {
    test : "{ \"people\" : [ { \"name\" : \"Justin\" },  { \"name\" : \"Joe\" },  { \"name\" : \"John\" },  { \"name\" : \"Jake\" } ] }"
    // model : json.parse(test)

    html := "<div class=\"list\">";
    // people : model["people"]?.a??
    // for i : 0 to people.count {
    //     person : people[i]
    //     html += "<div class=\"person\"><span>" + person["name"]?? as string + "</span></div>"        
    // }
    html += "</div>"
    html
    // "hi"
}

--cinclude--
##include <emscripten/emscripten.h>
##include <emscripten/bind.h>
--cinclude--

--cfunction--
EMSCRIPTEN_KEEPALIVE

void handleRequestHyperscriptWrapper(emscripten::val req, emscripten::val res, emscripten::val service) {
    auto raw = service["getData"]().as<std::string>();

    // sjs_array* v = createarray(1, raw.size() + 1);
    // memcpy(v->data, raw.c_str(), raw.size() + 1);
    // v->refcount = 1;
    // v->count = raw.size();

    // sjs_string str;
    // str._refCount = 1;
    // str.offset = 0;
    // str.count = raw.size();
    // str.data._refCount = 1;
    // str.data.v = v;
    // str._isnullterminated = true;
    // sjf_string(&str);

    // printf("%s----\n", string_char(&str));

    sjs_string result;
    #functionStack(handleRequestHyperscript)(&result);
    res(std::string(string_char(&result)));
    sjf_string_destroy(&result);
}

void handleRequestStringWrapper(emscripten::val req, emscripten::val res, emscripten::val service) {
    auto raw = service["getData"]().as<std::string>();

    // sjs_array* v = createarray(1, raw.size() + 1);
    // memcpy(v->data, raw.c_str(), raw.size() + 1);
    // v->refcount = 1;
    // v->count = raw.size();

    // sjs_string str;
    // str._refCount = 1;
    // str.offset = 0;
    // str.count = raw.size();
    // str.data._refCount = 1;
    // str.data.v = v;
    // str._isnullterminated = true;
    // sjf_string(&str);

    // printf("%s----\n", string_char(&str));
    
    sjs_string result;
    #functionStack(handleRequestString)(&result);
    res(std::string(string_char(&result)));
    sjf_string_destroy(&result);
}

EMSCRIPTEN_BINDINGS(my_module) {
    function("handleRequestHyperscript", &handleRequestHyperscriptWrapper);
    function("handleRequestString", &handleRequestStringWrapper);
}
--cfunction--