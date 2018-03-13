#include <stdio.h>
#include <emscripten/emscripten.h>

#ifdef __cplusplus
extern "C" {
#endif

EMSCRIPTEN_KEEPALIVE
void sayHello() {
    printf("hello!\n");
}

#ifdef __cplusplus
}
#endif