#include <lib/sj-lib-common/common.h>
#include <emscripten/emscripten.h>
#include <emscripten/bind.h>

struct {
    int refcount;
    int size;
    int count;
    char data[593];
} sjg_string1 = { 1, 593, 592, "                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                "};
struct {
    int refcount;
    int size;
    int count;
    char data[5];
} sjg_string10 = { 1, 5, 4, "span"};
struct {
    int refcount;
    int size;
    int count;
    char data[5];
} sjg_string11 = { 1, 5, 4, "name"};
struct {
    int refcount;
    int size;
    int count;
    char data[2];
} sjg_string12 = { 1, 2, 1, "<"};
struct {
    int refcount;
    int size;
    int count;
    char data[2];
} sjg_string13 = { 1, 2, 1, " "};
struct {
    int refcount;
    int size;
    int count;
    char data[3];
} sjg_string14 = { 1, 3, 2, "=\""};
struct {
    int refcount;
    int size;
    int count;
    char data[2];
} sjg_string15 = { 1, 2, 1, "\""};
struct {
    int refcount;
    int size;
    int count;
    char data[2];
} sjg_string16 = { 1, 2, 1, ">"};
struct {
    int refcount;
    int size;
    int count;
    char data[3];
} sjg_string17 = { 1, 3, 2, "</"};
struct {
    int refcount;
    int size;
    int count;
    char data[19];
} sjg_string18 = { 1, 19, 18, "<div class=\"list\">"};
struct {
    int refcount;
    int size;
    int count;
    char data[27];
} sjg_string19 = { 1, 27, 26, "<div class=\"person\"><span>"};
struct {
    int refcount;
    int size;
    int count;
    char data[106];
} sjg_string2 = { 1, 106, 105, "{ \"people\" : [ { \"name\" : \"Justin\" },  { \"name\" : \"Joe\" },  { \"name\" : \"John\" },  { \"name\" : \"Jake\" } ] }"};
struct {
    int refcount;
    int size;
    int count;
    char data[14];
} sjg_string20 = { 1, 14, 13, "</span></div>"};
struct {
    int refcount;
    int size;
    int count;
    char data[7];
} sjg_string21 = { 1, 7, 6, "</div>"};
struct {
    int refcount;
    int size;
    int count;
    char data[1];
} sjg_string3 = { 1, 1, 0, ""};
struct {
    int refcount;
    int size;
    int count;
    char data[14];
} sjg_string4 = { 1, 14, 13, "out of bounds"};
struct {
    int refcount;
    int size;
    int count;
    char data[4];
} sjg_string5 = { 1, 4, 3, "div"};
struct {
    int refcount;
    int size;
    int count;
    char data[6];
} sjg_string6 = { 1, 6, 5, "class"};
struct {
    int refcount;
    int size;
    int count;
    char data[5];
} sjg_string7 = { 1, 5, 4, "list"};
struct {
    int refcount;
    int size;
    int count;
    char data[7];
} sjg_string8 = { 1, 7, 6, "people"};
struct {
    int refcount;
    int size;
    int count;
    char data[7];
} sjg_string9 = { 1, 7, 6, "person"};

struct {
    int refcount;
    int size;
    int count;
    char data[0];
} g_empty = { 1, 0, 0 };
#define sjs_hash_type_bool_typeId 15
#define sjs_log_typeId 20
#define sjs_array_char_typeId 23
#define sjs_string_typeId 21
#define sjs_array_value_typeId 45
#define sjs_hash_string_value_typeId 35
#define sjs_json_value_typeId 28
#define sjs_tuple2_i32_string_typeId 40
#define sjs_tuple2_i32_value_typeId 30
#define sjs_list_value_typeId 46
#define sjs_array_tuple2_string_string_typeId 56
#define sjs_array_h_typeId 57
#define sjs_h_typeId 54
#define sjs_tuple2_stringstring_typeId 55
#define cb_value_h_typeId 62
#define cb_value_h_heap_typeId 62
#define sjs_lambda8_typeId 64
#define cb_value_h_heap_h_typeId 68
#define cb_value_h_heap_h_heap_typeId 68
#define sjs_stringwriter_typeId 70
#define sji_writer_typeId 75
#define cb_tuple2_string_string_void_typeId 78
#define cb_tuple2_string_string_void_heap_typeId 78
#define sjs_lambda6_typeId 80
#define cb_h_void_typeId 84
#define cb_h_void_heap_typeId 84
#define sjs_lambda7_typeId 86

typedef struct td_sjs_hash_type_bool sjs_hash_type_bool;
typedef struct td_sjs_log sjs_log;
typedef struct td_sjs_array_char sjs_array_char;
typedef struct td_sjs_string sjs_string;
typedef struct td_sjs_array_value sjs_array_value;
typedef struct td_sjs_hash_string_value sjs_hash_string_value;
typedef struct td_sjs_json_value sjs_json_value;
typedef struct td_sjs_tuple2_i32_string sjs_tuple2_i32_string;
typedef struct td_sjs_tuple2_i32_value sjs_tuple2_i32_value;
typedef struct td_sjs_list_value sjs_list_value;
typedef struct td_sjs_array_tuple2_string_string sjs_array_tuple2_string_string;
typedef struct td_sjs_array_h sjs_array_h;
typedef struct td_sjs_h sjs_h;
typedef struct td_sjs_tuple2_stringstring sjs_tuple2_stringstring;
typedef struct td_cb_value_h cb_value_h;
typedef struct td_cb_value_h_heap cb_value_h_heap;
typedef struct td_sjs_lambda8 sjs_lambda8;
typedef struct td_cb_value_h_heap_h cb_value_h_heap_h;
typedef struct td_cb_value_h_heap_h_heap cb_value_h_heap_h_heap;
typedef struct td_sjs_stringwriter sjs_stringwriter;
typedef struct td_sji_writer_vtbl sji_writer_vtbl;
typedef struct td_sji_writer sji_writer;
typedef struct td_cb_tuple2_string_string_void cb_tuple2_string_string_void;
typedef struct td_cb_tuple2_string_string_void_heap cb_tuple2_string_string_void_heap;
typedef struct td_sjs_lambda6 sjs_lambda6;
typedef struct td_cb_h_void cb_h_void;
typedef struct td_cb_h_void_heap cb_h_void_heap;
typedef struct td_sjs_lambda7 sjs_lambda7;

struct td_sjs_hash_type_bool {
    int _refCount;
    void* _hash;
};

struct td_sjs_log {
    int _refCount;
    int32_t minlevel;
    sjs_hash_type_bool traceincludes;
    sjs_hash_type_bool debugincludes;
    sjs_hash_type_bool infoincludes;
    sjs_hash_type_bool warnincludes;
    sjs_hash_type_bool errorincludes;
    sjs_hash_type_bool fatalincludes;
};

struct td_sjs_array_char {
    int _refCount;
    void* v;
};

struct td_sjs_string {
    int _refCount;
    int32_t offset;
    int32_t count;
    sjs_array_char data;
    bool _isnullterminated;
};

struct td_sjs_array_value {
    int _refCount;
    void* v;
};

struct td_sjs_hash_string_value {
    int _refCount;
    void* _hash;
};

struct td_sjs_json_value {
    int _refCount;
    sjs_string s;
    sjs_array_value a;
    sjs_hash_string_value h;
};

struct td_sjs_tuple2_i32_string {
    int _refCount;
    int32_t item1;
    sjs_string item2;
};

struct td_sjs_tuple2_i32_value {
    int _refCount;
    int32_t item1;
    sjs_json_value item2;
};

struct td_sjs_list_value {
    int _refCount;
    sjs_array_value arr;
};

struct td_sjs_array_tuple2_string_string {
    int _refCount;
    void* v;
};

struct td_sjs_array_h {
    int _refCount;
    void* v;
};

struct td_sjs_h {
    int _refCount;
    sjs_string childtagname;
    sjs_array_tuple2_string_string attrs;
    sjs_array_h children;
    sjs_string text;
};

struct td_sjs_tuple2_stringstring {
    int _refCount;
    sjs_string item1;
    sjs_string item2;
};

struct td_cb_value_h {
    sjs_object* _parent;
    void (*_cb)(sjs_object* _parent, sjs_json_value*, sjs_h* _return);
};

struct td_cb_value_h_heap {
    cb_value_h inner;
    void (*_destroy)(sjs_object*);
};

struct td_sjs_lambda8 {
    int _refCount;
};

struct td_cb_value_h_heap_h {
    sjs_object* _parent;
    void (*_cb)(sjs_object* _parent, sjs_json_value*, sjs_h* _return);
    void (*_cb_heap)(sjs_object* _parent, sjs_json_value*, sjs_h** _return);
};

struct td_cb_value_h_heap_h_heap {
    cb_value_h_heap_h inner;
    void (*_destroy)(sjs_object*);
};

struct td_sjs_stringwriter {
    int _refCount;
    sjs_string text;
};

struct td_sji_writer_vtbl {
    void (*destroy)(void* _this);
    void (*asinterface)(sjs_object* _this, int typeId, sjs_interface* _return);
    void (*getclasstype)(sjs_object* _parent, int32_t* _return);
    void (*write)(sjs_object* _parent, sjs_string* s);
    void (*reset)(sjs_object* _parent);
};

struct td_sji_writer {
    sjs_object* _parent;
    sji_writer_vtbl* _vtbl;
};

struct td_cb_tuple2_string_string_void {
    sjs_object* _parent;
    void (*_cb)(sjs_object* _parent, sjs_tuple2_stringstring*);
};

struct td_cb_tuple2_string_string_void_heap {
    cb_tuple2_string_string_void inner;
    void (*_destroy)(sjs_object*);
};

struct td_sjs_lambda6 {
    int _refCount;
    sji_writer lambdaparam1;
    sji_writer lambdaparam2;
    sji_writer lambdaparam3;
    sji_writer lambdaparam4;
    sji_writer lambdaparam5;
    sji_writer lambdaparam6;
    sji_writer lambdaparam7;
    sji_writer lambdaparam8;
    sji_writer lambdaparam9;
    sji_writer lambdaparam10;
};

struct td_cb_h_void {
    sjs_object* _parent;
    void (*_cb)(sjs_object* _parent, sjs_h*);
};

struct td_cb_h_void_heap {
    cb_h_void inner;
    void (*_destroy)(sjs_object*);
};

struct td_sjs_lambda7 {
    int _refCount;
    sji_writer lambdaparam11;
    sji_writer lambdaparam12;
};

sji_writer_vtbl sjs_stringwriter_writer_vtbl;
#ifndef type_bool_hash_typedef
#define type_bool_hash_typedef
KHASH_INIT_TYPEDEF(type_bool_hash_type, int32_t, bool)
#endif
#ifndef type_bool_hash_typedef
#define type_bool_hash_typedef
KHASH_INIT_TYPEDEF(type_bool_hash_type, int32_t, bool)
#endif
char* string_char(sjs_string* str);
#ifndef string_value_hash_typedef
#define string_value_hash_typedef
KHASH_INIT_TYPEDEF(string_value_hash_type, sjs_string, sjs_json_value)
#endif
#ifndef string_value_hash_typedef
#define string_value_hash_typedef
KHASH_INIT_TYPEDEF(string_value_hash_type, sjs_string, sjs_json_value)
#endif
int32_t g_loglevel_debug;
int32_t g_loglevel_error;
int32_t g_loglevel_fatal;
int32_t g_loglevel_info;
int32_t g_loglevel_trace;
int32_t g_loglevel_warn;

sjs_string g_allthespaces = { -1 };
int32_t g_clocks_per_sec;
float g_f32_pi;
int32_t g_i32_maxvalue;
int32_t g_i32_minvalue;
sjs_log g_log = { -1 };
sjs_hash_type_bool g_log_excludeall = { -1 };
sjs_hash_type_bool g_log_includeall = { -1 };
uint32_t g_u32_maxvalue;
int32_t result1;
sjs_hash_type_bool sjt_value1 = { -1 };

void sjf_array_char(sjs_array_char* _this);
void sjf_array_char_clone(sjs_array_char* _parent, int32_t offset, int32_t count, int32_t newsize, sjs_array_char* _return);
void sjf_array_char_clone_heap(sjs_array_char* _parent, int32_t offset, int32_t count, int32_t newsize, sjs_array_char** _return);
void sjf_array_char_copy(sjs_array_char* _this, sjs_array_char* _from);
void sjf_array_char_destroy(sjs_array_char* _this);
void sjf_array_char_getat(sjs_array_char* _parent, int32_t index, char* _return);
void sjf_array_char_getcount(sjs_array_char* _parent, int32_t* _return);
void sjf_array_char_gettotalcount(sjs_array_char* _parent, int32_t* _return);
void sjf_array_char_heap(sjs_array_char* _this);
void sjf_array_char_initat(sjs_array_char* _parent, int32_t index, char item);
void sjf_array_h(sjs_array_h* _this);
void sjf_array_h_copy(sjs_array_h* _this, sjs_array_h* _from);
void sjf_array_h_destroy(sjs_array_h* _this);
void sjf_array_h_each(sjs_array_h* _parent, cb_h_void cb);
void sjf_array_h_getat(sjs_array_h* _parent, int32_t index, sjs_h* _return);
void sjf_array_h_getat_heap(sjs_array_h* _parent, int32_t index, sjs_h** _return);
void sjf_array_h_getcount(sjs_array_h* _parent, int32_t* _return);
void sjf_array_h_heap(sjs_array_h* _this);
void sjf_array_h_initat(sjs_array_h* _parent, int32_t index, sjs_h* item);
void sjf_array_tuple2_string_string(sjs_array_tuple2_string_string* _this);
void sjf_array_tuple2_string_string_copy(sjs_array_tuple2_string_string* _this, sjs_array_tuple2_string_string* _from);
void sjf_array_tuple2_string_string_destroy(sjs_array_tuple2_string_string* _this);
void sjf_array_tuple2_string_string_each(sjs_array_tuple2_string_string* _parent, cb_tuple2_string_string_void cb);
void sjf_array_tuple2_string_string_getat(sjs_array_tuple2_string_string* _parent, int32_t index, sjs_tuple2_stringstring* _return);
void sjf_array_tuple2_string_string_getat_heap(sjs_array_tuple2_string_string* _parent, int32_t index, sjs_tuple2_stringstring** _return);
void sjf_array_tuple2_string_string_getcount(sjs_array_tuple2_string_string* _parent, int32_t* _return);
void sjf_array_tuple2_string_string_heap(sjs_array_tuple2_string_string* _this);
void sjf_array_tuple2_string_string_initat(sjs_array_tuple2_string_string* _parent, int32_t index, sjs_tuple2_stringstring* item);
void sjf_array_value(sjs_array_value* _this);
void sjf_array_value_clone(sjs_array_value* _parent, int32_t offset, int32_t count, int32_t newsize, sjs_array_value* _return);
void sjf_array_value_clone_heap(sjs_array_value* _parent, int32_t offset, int32_t count, int32_t newsize, sjs_array_value** _return);
void sjf_array_value_copy(sjs_array_value* _this, sjs_array_value* _from);
void sjf_array_value_destroy(sjs_array_value* _this);
void sjf_array_value_getat(sjs_array_value* _parent, int32_t index, sjs_json_value* _return);
void sjf_array_value_getat_heap(sjs_array_value* _parent, int32_t index, sjs_json_value** _return);
void sjf_array_value_getcount(sjs_array_value* _parent, int32_t* _return);
void sjf_array_value_gettotalcount(sjs_array_value* _parent, int32_t* _return);
void sjf_array_value_heap(sjs_array_value* _this);
void sjf_array_value_initat(sjs_array_value* _parent, int32_t index, sjs_json_value* item);
void sjf_array_value_map_h(sjs_array_value* _parent, cb_value_h cb, sjs_array_h* _return);
void sjf_array_value_map_h_heap(sjs_array_value* _parent, cb_value_h cb, sjs_array_h** _return);
void sjf_h(sjs_h* _this);
void sjf_h_copy(sjs_h* _this, sjs_h* _from);
void sjf_h_destroy(sjs_h* _this);
void sjf_h_heap(sjs_h* _this);
void sjf_h_render(sjs_h* _parent, sji_writer writer);
void sjf_halt(sjs_string* reason);
void sjf_handlerequesthyperscript(sjs_string* _return);
void sjf_handlerequesthyperscript_heap(sjs_string** _return);
void sjf_handlerequeststring(sjs_string* _return);
void sjf_handlerequeststring_heap(sjs_string** _return);
void sjf_hash_string_value(sjs_hash_string_value* _this);
void sjf_hash_string_value__weakptrremovekey(sjs_hash_string_value* _parent, sjs_string* key);
void sjf_hash_string_value__weakptrremovevalue(sjs_hash_string_value* _parent, sjs_json_value* val);
void sjf_hash_string_value_copy(sjs_hash_string_value* _this, sjs_hash_string_value* _from);
void sjf_hash_string_value_destroy(sjs_hash_string_value* _this);
void sjf_hash_string_value_getat(sjs_hash_string_value* _parent, sjs_string* key, sjs_json_value* _return);
void sjf_hash_string_value_getat_heap(sjs_hash_string_value* _parent, sjs_string* key, sjs_json_value** _return);
void sjf_hash_string_value_heap(sjs_hash_string_value* _this);
void sjf_hash_string_value_setat(sjs_hash_string_value* _parent, sjs_string* key, sjs_json_value* val);
void sjf_hash_type_bool(sjs_hash_type_bool* _this);
void sjf_hash_type_bool__weakptrremovekey(sjs_hash_type_bool* _parent, int32_t key);
void sjf_hash_type_bool__weakptrremovevalue(sjs_hash_type_bool* _parent, bool val);
void sjf_hash_type_bool_copy(sjs_hash_type_bool* _this, sjs_hash_type_bool* _from);
void sjf_hash_type_bool_destroy(sjs_hash_type_bool* _this);
void sjf_hash_type_bool_heap(sjs_hash_type_bool* _this);
void sjf_i32_max(int32_t a, int32_t b, int32_t* _return);
void sjf_json_parse(sjs_string* s, sjs_json_value* _return);
void sjf_json_parse_heap(sjs_string* s, sjs_json_value** _return);
void sjf_json_parse_number(sjs_string* s, int32_t startindex, sjs_tuple2_i32_string* _return);
void sjf_json_parse_number_heap(sjs_string* s, int32_t startindex, sjs_tuple2_i32_string** _return);
void sjf_json_parse_string(sjs_string* s, int32_t startindex, sjs_tuple2_i32_string* _return);
void sjf_json_parse_string_heap(sjs_string* s, int32_t startindex, sjs_tuple2_i32_string** _return);
void sjf_json_parse_value(sjs_string* s, int32_t startindex, sjs_tuple2_i32_value* _return);
void sjf_json_parse_value_heap(sjs_string* s, int32_t startindex, sjs_tuple2_i32_value** _return);
void sjf_json_parse_whitespace(sjs_string* s, int32_t startindex, int32_t* _return);
void sjf_json_value(sjs_json_value* _this);
void sjf_json_value_asstring(sjs_json_value* _parent, sjs_string* _return);
void sjf_json_value_asstring_heap(sjs_json_value* _parent, sjs_string** _return);
void sjf_json_value_copy(sjs_json_value* _this, sjs_json_value* _from);
void sjf_json_value_destroy(sjs_json_value* _this);
void sjf_json_value_getat(sjs_json_value* _parent, sjs_string* key, sjs_json_value* _return);
void sjf_json_value_getat_heap(sjs_json_value* _parent, sjs_string* key, sjs_json_value** _return);
void sjf_json_value_heap(sjs_json_value* _this);
void sjf_lambda6(sjs_lambda6* _this);
void sjf_lambda6_copy(sjs_lambda6* _this, sjs_lambda6* _from);
void sjf_lambda6_destroy(sjs_lambda6* _this);
void sjf_lambda6_heap(sjs_lambda6* _this);
void sjf_lambda6_invoke(sjs_lambda6* _parent, sjs_tuple2_stringstring* _1);
void sjf_lambda7(sjs_lambda7* _this);
void sjf_lambda7_copy(sjs_lambda7* _this, sjs_lambda7* _from);
void sjf_lambda7_destroy(sjs_lambda7* _this);
void sjf_lambda7_heap(sjs_lambda7* _this);
void sjf_lambda7_invoke(sjs_lambda7* _parent, sjs_h* _1);
void sjf_lambda8(sjs_lambda8* _this);
void sjf_lambda8_copy(sjs_lambda8* _this, sjs_lambda8* _from);
void sjf_lambda8_destroy(sjs_lambda8* _this);
void sjf_lambda8_heap(sjs_lambda8* _this);
void sjf_lambda8_invoke(sjs_lambda8* _parent, sjs_json_value* person, sjs_h* _return);
void sjf_lambda8_invoke_heap(sjs_lambda8* _parent, sjs_json_value* person, sjs_h** _return);
void sjf_list_value(sjs_list_value* _this);
void sjf_list_value_add(sjs_list_value* _parent, sjs_json_value* item);
void sjf_list_value_copy(sjs_list_value* _this, sjs_list_value* _from);
void sjf_list_value_destroy(sjs_list_value* _this);
void sjf_list_value_heap(sjs_list_value* _this);
void sjf_log(sjs_log* _this);
void sjf_log_copy(sjs_log* _this, sjs_log* _from);
void sjf_log_destroy(sjs_log* _this);
void sjf_log_heap(sjs_log* _this);
void sjf_string(sjs_string* _this);
void sjf_string_add(sjs_string* _parent, sjs_string* item, sjs_string* _return);
void sjf_string_add_heap(sjs_string* _parent, sjs_string* item, sjs_string** _return);
void sjf_string_copy(sjs_string* _this, sjs_string* _from);
void sjf_string_destroy(sjs_string* _this);
void sjf_string_getat(sjs_string* _parent, int32_t index, char* _return);
void sjf_string_hash(sjs_string* _parent, uint32_t* _return);
void sjf_string_heap(sjs_string* _this);
void sjf_string_isequal(sjs_string* _parent, sjs_string* test, bool* _return);
void sjf_string_nullterminate(sjs_string* _parent);
void sjf_string_substr(sjs_string* _parent, int32_t o, int32_t c, sjs_string* _return);
void sjf_string_substr_heap(sjs_string* _parent, int32_t o, int32_t c, sjs_string** _return);
void sjf_stringwriter(sjs_stringwriter* _this);
void sjf_stringwriter_as_sji_writer(sjs_stringwriter* _this, sji_writer* _return);
void sjf_stringwriter_asinterface(sjs_stringwriter* _this, int typeId, sjs_interface* _return);
void sjf_stringwriter_copy(sjs_stringwriter* _this, sjs_stringwriter* _from);
void sjf_stringwriter_destroy(sjs_stringwriter* _this);
void sjf_stringwriter_getclasstype(sjs_object* _this, int* _return);
void sjf_stringwriter_heap(sjs_stringwriter* _this);
void sjf_stringwriter_reset(sjs_stringwriter* _parent);
void sjf_stringwriter_write(sjs_stringwriter* _parent, sjs_string* s);
void sjf_tuple2_i32_string(sjs_tuple2_i32_string* _this);
void sjf_tuple2_i32_string_copy(sjs_tuple2_i32_string* _this, sjs_tuple2_i32_string* _from);
void sjf_tuple2_i32_string_destroy(sjs_tuple2_i32_string* _this);
void sjf_tuple2_i32_string_heap(sjs_tuple2_i32_string* _this);
void sjf_tuple2_i32_value(sjs_tuple2_i32_value* _this);
void sjf_tuple2_i32_value_copy(sjs_tuple2_i32_value* _this, sjs_tuple2_i32_value* _from);
void sjf_tuple2_i32_value_destroy(sjs_tuple2_i32_value* _this);
void sjf_tuple2_i32_value_heap(sjs_tuple2_i32_value* _this);
void sjf_tuple2_stringstring(sjs_tuple2_stringstring* _this);
void sjf_tuple2_stringstring_copy(sjs_tuple2_stringstring* _this, sjs_tuple2_stringstring* _from);
void sjf_tuple2_stringstring_destroy(sjs_tuple2_stringstring* _this);
void sjf_tuple2_stringstring_heap(sjs_tuple2_stringstring* _this);
void sjf_type_hash(int32_t val, uint32_t* _return);
void sjf_type_isequal(int32_t l, int32_t r, bool* _return);
void main_destroy(void);

#ifndef type_bool_hash_function
#define type_bool_hash_function
#if false
KHASH_INIT_FUNCTION_DEREF(type_bool_hash_type, int32_t, bool, 1, sjf_type_hash, sjf_type_isequal)
#else
KHASH_INIT_FUNCTION(type_bool_hash_type, int32_t, bool, 1, sjf_type_hash, sjf_type_isequal)
#endif
#endif
#ifndef type_bool_hash_function
#define type_bool_hash_function
#if false
KHASH_INIT_FUNCTION_DEREF(type_bool_hash_type, int32_t, bool, 1, sjf_type_hash, sjf_type_isequal)
#else
KHASH_INIT_FUNCTION(type_bool_hash_type, int32_t, bool, 1, sjf_type_hash, sjf_type_isequal)
#endif
#endif
char* string_char(sjs_string* str) {
    sjf_string_nullterminate(str);
    return ((sjs_array*)str->data.v)->data + str->offset;
}
#include <lib/sj-lib-common/common.cpp>
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
    sjf_handlerequesthyperscript(&result);
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
    sjf_handlerequeststring(&result);
    res(std::string(string_char(&result)));
    sjf_string_destroy(&result);
}
EMSCRIPTEN_BINDINGS(my_module) {
    function("handleRequestHyperscript", &handleRequestHyperscriptWrapper);
    function("handleRequestString", &handleRequestStringWrapper);
}
#ifndef string_value_hash_function
#define string_value_hash_function
#if true
KHASH_INIT_FUNCTION_DEREF(string_value_hash_type, sjs_string, sjs_json_value, 1, sjf_string_hash, sjf_string_isequal)
#else
KHASH_INIT_FUNCTION(string_value_hash_type, sjs_string, sjs_json_value, 1, sjf_string_hash, sjf_string_isequal)
#endif
#endif
#ifndef string_value_hash_function
#define string_value_hash_function
#if true
KHASH_INIT_FUNCTION_DEREF(string_value_hash_type, sjs_string, sjs_json_value, 1, sjf_string_hash, sjf_string_isequal)
#else
KHASH_INIT_FUNCTION(string_value_hash_type, sjs_string, sjs_json_value, 1, sjf_string_hash, sjf_string_isequal)
#endif
#endif
void sjf_array_char(sjs_array_char* _this) {
#line 363 "lib/sj-lib-common/array.sj"
    if (_this->v == 0) {
#line 364
        _this->v = &g_empty;
#line 365
    }
#line 366
    sjs_array* arr = (sjs_array*)_this->v;
#line 367
    arr->refcount++;
}

void sjf_array_char_clone(sjs_array_char* _parent, int32_t offset, int32_t count, int32_t newsize, sjs_array_char* _return) {
    void* newv;

#line 169 "lib/sj-lib-common/array.sj"
    newv = 0;
#line 171
    sjs_array* arr = (sjs_array*)_parent->v;
#line 172
    if (offset + count > arr->count) {
#line 173
        halt("grow: offset %d count %d out of bounds %d\n", offset, count, arr->count);
#line 174
    }
#line 176
    if (count > arr->count - offset) {
#line 177
        halt("grow: new count larger than old count %d:%d\n", count, arr->count - offset);
#line 178
    }
#line 180
    sjs_array* newArr = createarray(sizeof(char), newsize);
#line 181
    if (!newArr) {
#line 182
        halt("grow: out of memory\n");
#line 183
    }
#line 185
    newv = newArr;
#line 186
    char* p = (char*)arr->data + offset;
#line 187
    char* newp = (char*)newArr->data;
#line 189
    newArr->size = newsize;
#line 190
    newArr->count = count;
#line 192
    #if true
#line 193
    memcpy(newp, p, sizeof(char) * count);
#line 194
    #else
#line 195
    for (int i = 0; i < count; i++) {
#line 196
        #line 170 "lib/sj-lib-common/array.sj"
newp[i] = p[i];
;
#line 197
    }
#line 198
    #endif
#line 198
    _return->_refCount = 1;
#line 200
    _return->v = newv;
#line 200
    sjf_array_char(_return);
}

void sjf_array_char_clone_heap(sjs_array_char* _parent, int32_t offset, int32_t count, int32_t newsize, sjs_array_char** _return) {
    void* newv;

#line 169 "lib/sj-lib-common/array.sj"
    newv = 0;
#line 171
    sjs_array* arr = (sjs_array*)_parent->v;
#line 172
    if (offset + count > arr->count) {
#line 173
        halt("grow: offset %d count %d out of bounds %d\n", offset, count, arr->count);
#line 174
    }
#line 176
    if (count > arr->count - offset) {
#line 177
        halt("grow: new count larger than old count %d:%d\n", count, arr->count - offset);
#line 178
    }
#line 180
    sjs_array* newArr = createarray(sizeof(char), newsize);
#line 181
    if (!newArr) {
#line 182
        halt("grow: out of memory\n");
#line 183
    }
#line 185
    newv = newArr;
#line 186
    char* p = (char*)arr->data + offset;
#line 187
    char* newp = (char*)newArr->data;
#line 189
    newArr->size = newsize;
#line 190
    newArr->count = count;
#line 192
    #if true
#line 193
    memcpy(newp, p, sizeof(char) * count);
#line 194
    #else
#line 195
    for (int i = 0; i < count; i++) {
#line 196
        #line 170 "lib/sj-lib-common/array.sj"
newp[i] = p[i];
;
#line 197
    }
#line 198
    #endif
#line 198
    (*_return) = (sjs_array_char*)malloc(sizeof(sjs_array_char));
#line 198
    (*_return)->_refCount = 1;
#line 200
    (*_return)->v = newv;
#line 200
    sjf_array_char_heap((*_return));
}

void sjf_array_char_copy(sjs_array_char* _this, sjs_array_char* _from) {
#line 26 "lib/sj-lib-common/array.sj"
    _this->v = _from->v;
#line 372
    sjs_array* arr = (sjs_array*)_this->v;
#line 373
    arr->refcount++;
}

void sjf_array_char_destroy(sjs_array_char* _this) {
#line 377 "lib/sj-lib-common/array.sj"
    sjs_array* arr = (sjs_array*)_this->v;
#line 378
    arr->refcount--;
#line 379
    if (arr->refcount == 0) {
#line 380
        #if !true && !false
#line 381
        char* p = (char*)arr->data;
#line 382
        for (int i = 0; i < arr->count; i++) {
#line 383
            ;
#line 384
        }
#line 385
        #endif
#line 386
        free(arr);
#line 387
    }
}

void sjf_array_char_getat(sjs_array_char* _parent, int32_t index, char* _return) {
#line 43 "lib/sj-lib-common/array.sj"
    sjs_array* arr = (sjs_array*)_parent->v;
#line 44
    if (index >= arr->count || index < 0) {
#line 45
        halt("getAt: out of bounds\n");
#line 46
    }
#line 47
    char* p = (char*)arr->data;
#line 48
    #line 42 "lib/sj-lib-common/array.sj"
(*_return) = p[index];
return;;       
}

void sjf_array_char_getcount(sjs_array_char* _parent, int32_t* _return) {
#line 31 "lib/sj-lib-common/array.sj"
    #line 30 "lib/sj-lib-common/array.sj"
(*_return) = ((sjs_array*)_parent->v)->count;
return;;
}

void sjf_array_char_gettotalcount(sjs_array_char* _parent, int32_t* _return) {
#line 37 "lib/sj-lib-common/array.sj"
    #line 36 "lib/sj-lib-common/array.sj"
(*_return) = ((sjs_array*)_parent->v)->size;
return;;
}

void sjf_array_char_heap(sjs_array_char* _this) {
#line 363 "lib/sj-lib-common/array.sj"
    if (_this->v == 0) {
#line 364
        _this->v = &g_empty;
#line 365
    }
#line 366
    sjs_array* arr = (sjs_array*)_this->v;
#line 367
    arr->refcount++;
}

void sjf_array_char_initat(sjs_array_char* _parent, int32_t index, char item) {
#line 54 "lib/sj-lib-common/array.sj"
    sjs_array* arr = (sjs_array*)_parent->v;
#line 55
    if (index != arr->count) {
#line 56
        halt("initAt: can only initialize last element\n");     
#line 57
    }
#line 58
    if (index >= arr->size || index < 0) {
#line 59
        halt("initAt: out of bounds %d:%d\n", index, arr->size);
#line 60
    }
#line 62
    char* p = (char*)arr->data;
#line 63
    #line 52 "lib/sj-lib-common/array.sj"
p[index] = item;
;
#line 64
    arr->count = index + 1;
}

void sjf_array_h(sjs_array_h* _this) {
#line 363 "lib/sj-lib-common/array.sj"
    if (_this->v == 0) {
#line 364
        _this->v = &g_empty;
#line 365
    }
#line 366
    sjs_array* arr = (sjs_array*)_this->v;
#line 367
    arr->refcount++;
}

void sjf_array_h_copy(sjs_array_h* _this, sjs_array_h* _from) {
#line 26 "lib/sj-lib-common/array.sj"
    _this->v = _from->v;
#line 372
    sjs_array* arr = (sjs_array*)_this->v;
#line 373
    arr->refcount++;
}

void sjf_array_h_destroy(sjs_array_h* _this) {
#line 377 "lib/sj-lib-common/array.sj"
    sjs_array* arr = (sjs_array*)_this->v;
#line 378
    arr->refcount--;
#line 379
    if (arr->refcount == 0) {
#line 380
        #if !false && !true
#line 381
        sjs_h* p = (sjs_h*)arr->data;
#line 382
        for (int i = 0; i < arr->count; i++) {
#line 383
            ;
#line 384
        }
#line 385
        #endif
#line 386
        free(arr);
#line 387
    }
}

void sjf_array_h_each(sjs_array_h* _parent, cb_h_void cb) {
    int32_t i;
    int32_t sjt_forEnd8;
    int32_t sjt_forStart8;

#line 109 "lib/sj-lib-common/array.sj"
    sjt_forStart8 = 0;
#line 109
    sjf_array_h_getcount(_parent, &sjt_forEnd8);
#line 109
    i = sjt_forStart8;
    while (i < sjt_forEnd8) {
        sjs_h sjt_call47 = { -1 };
        sjs_h* sjt_functionParam167 = 0;
        int32_t sjt_functionParam168;

#line 109 "lib/sj-lib-common/array.sj"
        sjt_functionParam168 = i;
#line 109
        sjf_array_h_getat(_parent, sjt_functionParam168, &sjt_call47);
#line 110
        sjt_functionParam167 = &sjt_call47;
#line 110
        cb._cb(cb._parent, sjt_functionParam167);
#line 109
        i++;

        if (sjt_call47._refCount == 1) { sjf_h_destroy(&sjt_call47); }
;
    }
}

void sjf_array_h_getat(sjs_array_h* _parent, int32_t index, sjs_h* _return) {
#line 43 "lib/sj-lib-common/array.sj"
    sjs_array* arr = (sjs_array*)_parent->v;
#line 44
    if (index >= arr->count || index < 0) {
#line 45
        halt("getAt: out of bounds\n");
#line 46
    }
#line 47
    sjs_h* p = (sjs_h*)arr->data;
#line 48
    _return->_refCount = 1;
#line 42 "lib/sj-lib-common/array.sj"
sjf_h_copy(_return, &p[index]);
return;;       
}

void sjf_array_h_getat_heap(sjs_array_h* _parent, int32_t index, sjs_h** _return) {
#line 43 "lib/sj-lib-common/array.sj"
    sjs_array* arr = (sjs_array*)_parent->v;
#line 44
    if (index >= arr->count || index < 0) {
#line 45
        halt("getAt: out of bounds\n");
#line 46
    }
#line 47
    sjs_h* p = (sjs_h*)arr->data;
#line 48
    (*_return) = (sjs_h*)malloc(sizeof(sjs_h));
(*_return)->_refCount = 1;
#line 42 "lib/sj-lib-common/array.sj"
sjf_h_copy((*_return), &p[index]);
return;;       
}

void sjf_array_h_getcount(sjs_array_h* _parent, int32_t* _return) {
#line 31 "lib/sj-lib-common/array.sj"
    #line 30 "lib/sj-lib-common/array.sj"
(*_return) = ((sjs_array*)_parent->v)->count;
return;;
}

void sjf_array_h_heap(sjs_array_h* _this) {
#line 363 "lib/sj-lib-common/array.sj"
    if (_this->v == 0) {
#line 364
        _this->v = &g_empty;
#line 365
    }
#line 366
    sjs_array* arr = (sjs_array*)_this->v;
#line 367
    arr->refcount++;
}

void sjf_array_h_initat(sjs_array_h* _parent, int32_t index, sjs_h* item) {
#line 54 "lib/sj-lib-common/array.sj"
    sjs_array* arr = (sjs_array*)_parent->v;
#line 55
    if (index != arr->count) {
#line 56
        halt("initAt: can only initialize last element\n");     
#line 57
    }
#line 58
    if (index >= arr->size || index < 0) {
#line 59
        halt("initAt: out of bounds %d:%d\n", index, arr->size);
#line 60
    }
#line 62
    sjs_h* p = (sjs_h*)arr->data;
#line 63
    p[index]._refCount = 1;
#line 52 "lib/sj-lib-common/array.sj"
sjf_h_copy(&p[index], item);
;
#line 64
    arr->count = index + 1;
}

void sjf_array_tuple2_string_string(sjs_array_tuple2_string_string* _this) {
#line 363 "lib/sj-lib-common/array.sj"
    if (_this->v == 0) {
#line 364
        _this->v = &g_empty;
#line 365
    }
#line 366
    sjs_array* arr = (sjs_array*)_this->v;
#line 367
    arr->refcount++;
}

void sjf_array_tuple2_string_string_copy(sjs_array_tuple2_string_string* _this, sjs_array_tuple2_string_string* _from) {
#line 26 "lib/sj-lib-common/array.sj"
    _this->v = _from->v;
#line 372
    sjs_array* arr = (sjs_array*)_this->v;
#line 373
    arr->refcount++;
}

void sjf_array_tuple2_string_string_destroy(sjs_array_tuple2_string_string* _this) {
#line 377 "lib/sj-lib-common/array.sj"
    sjs_array* arr = (sjs_array*)_this->v;
#line 378
    arr->refcount--;
#line 379
    if (arr->refcount == 0) {
#line 380
        #if !false && !true
#line 381
        sjs_tuple2_stringstring* p = (sjs_tuple2_stringstring*)arr->data;
#line 382
        for (int i = 0; i < arr->count; i++) {
#line 383
            ;
#line 384
        }
#line 385
        #endif
#line 386
        free(arr);
#line 387
    }
}

void sjf_array_tuple2_string_string_each(sjs_array_tuple2_string_string* _parent, cb_tuple2_string_string_void cb) {
    int32_t i;
    int32_t sjt_forEnd7;
    int32_t sjt_forStart7;

#line 109 "lib/sj-lib-common/array.sj"
    sjt_forStart7 = 0;
#line 109
    sjf_array_tuple2_string_string_getcount(_parent, &sjt_forEnd7);
#line 109
    i = sjt_forStart7;
    while (i < sjt_forEnd7) {
        sjs_tuple2_stringstring sjt_call41 = { -1 };
        sjs_tuple2_stringstring* sjt_functionParam164 = 0;
        int32_t sjt_functionParam165;

#line 109 "lib/sj-lib-common/array.sj"
        sjt_functionParam165 = i;
#line 109
        sjf_array_tuple2_string_string_getat(_parent, sjt_functionParam165, &sjt_call41);
#line 110
        sjt_functionParam164 = &sjt_call41;
#line 110
        cb._cb(cb._parent, sjt_functionParam164);
#line 109
        i++;

        if (sjt_call41._refCount == 1) { sjf_tuple2_stringstring_destroy(&sjt_call41); }
;
    }
}

void sjf_array_tuple2_string_string_getat(sjs_array_tuple2_string_string* _parent, int32_t index, sjs_tuple2_stringstring* _return) {
#line 43 "lib/sj-lib-common/array.sj"
    sjs_array* arr = (sjs_array*)_parent->v;
#line 44
    if (index >= arr->count || index < 0) {
#line 45
        halt("getAt: out of bounds\n");
#line 46
    }
#line 47
    sjs_tuple2_stringstring* p = (sjs_tuple2_stringstring*)arr->data;
#line 48
    _return->_refCount = 1;
#line 42 "lib/sj-lib-common/array.sj"
sjf_tuple2_stringstring_copy(_return, &p[index]);
return;;       
}

void sjf_array_tuple2_string_string_getat_heap(sjs_array_tuple2_string_string* _parent, int32_t index, sjs_tuple2_stringstring** _return) {
#line 43 "lib/sj-lib-common/array.sj"
    sjs_array* arr = (sjs_array*)_parent->v;
#line 44
    if (index >= arr->count || index < 0) {
#line 45
        halt("getAt: out of bounds\n");
#line 46
    }
#line 47
    sjs_tuple2_stringstring* p = (sjs_tuple2_stringstring*)arr->data;
#line 48
    (*_return) = (sjs_tuple2_stringstring*)malloc(sizeof(sjs_tuple2_stringstring));
(*_return)->_refCount = 1;
#line 42 "lib/sj-lib-common/array.sj"
sjf_tuple2_stringstring_copy((*_return), &p[index]);
return;;       
}

void sjf_array_tuple2_string_string_getcount(sjs_array_tuple2_string_string* _parent, int32_t* _return) {
#line 31 "lib/sj-lib-common/array.sj"
    #line 30 "lib/sj-lib-common/array.sj"
(*_return) = ((sjs_array*)_parent->v)->count;
return;;
}

void sjf_array_tuple2_string_string_heap(sjs_array_tuple2_string_string* _this) {
#line 363 "lib/sj-lib-common/array.sj"
    if (_this->v == 0) {
#line 364
        _this->v = &g_empty;
#line 365
    }
#line 366
    sjs_array* arr = (sjs_array*)_this->v;
#line 367
    arr->refcount++;
}

void sjf_array_tuple2_string_string_initat(sjs_array_tuple2_string_string* _parent, int32_t index, sjs_tuple2_stringstring* item) {
#line 54 "lib/sj-lib-common/array.sj"
    sjs_array* arr = (sjs_array*)_parent->v;
#line 55
    if (index != arr->count) {
#line 56
        halt("initAt: can only initialize last element\n");     
#line 57
    }
#line 58
    if (index >= arr->size || index < 0) {
#line 59
        halt("initAt: out of bounds %d:%d\n", index, arr->size);
#line 60
    }
#line 62
    sjs_tuple2_stringstring* p = (sjs_tuple2_stringstring*)arr->data;
#line 63
    p[index]._refCount = 1;
#line 52 "lib/sj-lib-common/array.sj"
sjf_tuple2_stringstring_copy(&p[index], item);
;
#line 64
    arr->count = index + 1;
}

void sjf_array_value(sjs_array_value* _this) {
#line 363 "lib/sj-lib-common/array.sj"
    if (_this->v == 0) {
#line 364
        _this->v = &g_empty;
#line 365
    }
#line 366
    sjs_array* arr = (sjs_array*)_this->v;
#line 367
    arr->refcount++;
}

void sjf_array_value_clone(sjs_array_value* _parent, int32_t offset, int32_t count, int32_t newsize, sjs_array_value* _return) {
    void* newv;

#line 169 "lib/sj-lib-common/array.sj"
    newv = 0;
#line 171
    sjs_array* arr = (sjs_array*)_parent->v;
#line 172
    if (offset + count > arr->count) {
#line 173
        halt("grow: offset %d count %d out of bounds %d\n", offset, count, arr->count);
#line 174
    }
#line 176
    if (count > arr->count - offset) {
#line 177
        halt("grow: new count larger than old count %d:%d\n", count, arr->count - offset);
#line 178
    }
#line 180
    sjs_array* newArr = createarray(sizeof(sjs_json_value), newsize);
#line 181
    if (!newArr) {
#line 182
        halt("grow: out of memory\n");
#line 183
    }
#line 185
    newv = newArr;
#line 186
    sjs_json_value* p = (sjs_json_value*)arr->data + offset;
#line 187
    sjs_json_value* newp = (sjs_json_value*)newArr->data;
#line 189
    newArr->size = newsize;
#line 190
    newArr->count = count;
#line 192
    #if false
#line 193
    memcpy(newp, p, sizeof(sjs_json_value) * count);
#line 194
    #else
#line 195
    for (int i = 0; i < count; i++) {
#line 196
        newp[i]._refCount = 1;
#line 170 "lib/sj-lib-common/array.sj"
sjf_json_value_copy(&newp[i], &p[i]);
;
#line 197
    }
#line 198
    #endif
#line 198
    _return->_refCount = 1;
#line 200
    _return->v = newv;
#line 200
    sjf_array_value(_return);
}

void sjf_array_value_clone_heap(sjs_array_value* _parent, int32_t offset, int32_t count, int32_t newsize, sjs_array_value** _return) {
    void* newv;

#line 169 "lib/sj-lib-common/array.sj"
    newv = 0;
#line 171
    sjs_array* arr = (sjs_array*)_parent->v;
#line 172
    if (offset + count > arr->count) {
#line 173
        halt("grow: offset %d count %d out of bounds %d\n", offset, count, arr->count);
#line 174
    }
#line 176
    if (count > arr->count - offset) {
#line 177
        halt("grow: new count larger than old count %d:%d\n", count, arr->count - offset);
#line 178
    }
#line 180
    sjs_array* newArr = createarray(sizeof(sjs_json_value), newsize);
#line 181
    if (!newArr) {
#line 182
        halt("grow: out of memory\n");
#line 183
    }
#line 185
    newv = newArr;
#line 186
    sjs_json_value* p = (sjs_json_value*)arr->data + offset;
#line 187
    sjs_json_value* newp = (sjs_json_value*)newArr->data;
#line 189
    newArr->size = newsize;
#line 190
    newArr->count = count;
#line 192
    #if false
#line 193
    memcpy(newp, p, sizeof(sjs_json_value) * count);
#line 194
    #else
#line 195
    for (int i = 0; i < count; i++) {
#line 196
        newp[i]._refCount = 1;
#line 170 "lib/sj-lib-common/array.sj"
sjf_json_value_copy(&newp[i], &p[i]);
;
#line 197
    }
#line 198
    #endif
#line 198
    (*_return) = (sjs_array_value*)malloc(sizeof(sjs_array_value));
#line 198
    (*_return)->_refCount = 1;
#line 200
    (*_return)->v = newv;
#line 200
    sjf_array_value_heap((*_return));
}

void sjf_array_value_copy(sjs_array_value* _this, sjs_array_value* _from) {
#line 26 "lib/sj-lib-common/array.sj"
    _this->v = _from->v;
#line 372
    sjs_array* arr = (sjs_array*)_this->v;
#line 373
    arr->refcount++;
}

void sjf_array_value_destroy(sjs_array_value* _this) {
#line 377 "lib/sj-lib-common/array.sj"
    sjs_array* arr = (sjs_array*)_this->v;
#line 378
    arr->refcount--;
#line 379
    if (arr->refcount == 0) {
#line 380
        #if !false && !true
#line 381
        sjs_json_value* p = (sjs_json_value*)arr->data;
#line 382
        for (int i = 0; i < arr->count; i++) {
#line 383
            ;
#line 384
        }
#line 385
        #endif
#line 386
        free(arr);
#line 387
    }
}

void sjf_array_value_getat(sjs_array_value* _parent, int32_t index, sjs_json_value* _return) {
#line 43 "lib/sj-lib-common/array.sj"
    sjs_array* arr = (sjs_array*)_parent->v;
#line 44
    if (index >= arr->count || index < 0) {
#line 45
        halt("getAt: out of bounds\n");
#line 46
    }
#line 47
    sjs_json_value* p = (sjs_json_value*)arr->data;
#line 48
    _return->_refCount = 1;
#line 42 "lib/sj-lib-common/array.sj"
sjf_json_value_copy(_return, &p[index]);
return;;       
}

void sjf_array_value_getat_heap(sjs_array_value* _parent, int32_t index, sjs_json_value** _return) {
#line 43 "lib/sj-lib-common/array.sj"
    sjs_array* arr = (sjs_array*)_parent->v;
#line 44
    if (index >= arr->count || index < 0) {
#line 45
        halt("getAt: out of bounds\n");
#line 46
    }
#line 47
    sjs_json_value* p = (sjs_json_value*)arr->data;
#line 48
    (*_return) = (sjs_json_value*)malloc(sizeof(sjs_json_value));
(*_return)->_refCount = 1;
#line 42 "lib/sj-lib-common/array.sj"
sjf_json_value_copy((*_return), &p[index]);
return;;       
}

void sjf_array_value_getcount(sjs_array_value* _parent, int32_t* _return) {
#line 31 "lib/sj-lib-common/array.sj"
    #line 30 "lib/sj-lib-common/array.sj"
(*_return) = ((sjs_array*)_parent->v)->count;
return;;
}

void sjf_array_value_gettotalcount(sjs_array_value* _parent, int32_t* _return) {
#line 37 "lib/sj-lib-common/array.sj"
    #line 36 "lib/sj-lib-common/array.sj"
(*_return) = ((sjs_array*)_parent->v)->size;
return;;
}

void sjf_array_value_heap(sjs_array_value* _this) {
#line 363 "lib/sj-lib-common/array.sj"
    if (_this->v == 0) {
#line 364
        _this->v = &g_empty;
#line 365
    }
#line 366
    sjs_array* arr = (sjs_array*)_this->v;
#line 367
    arr->refcount++;
}

void sjf_array_value_initat(sjs_array_value* _parent, int32_t index, sjs_json_value* item) {
#line 54 "lib/sj-lib-common/array.sj"
    sjs_array* arr = (sjs_array*)_parent->v;
#line 55
    if (index != arr->count) {
#line 56
        halt("initAt: can only initialize last element\n");     
#line 57
    }
#line 58
    if (index >= arr->size || index < 0) {
#line 59
        halt("initAt: out of bounds %d:%d\n", index, arr->size);
#line 60
    }
#line 62
    sjs_json_value* p = (sjs_json_value*)arr->data;
#line 63
    p[index]._refCount = 1;
#line 52 "lib/sj-lib-common/array.sj"
sjf_json_value_copy(&p[index], item);
;
#line 64
    arr->count = index + 1;
}

void sjf_array_value_map_h(sjs_array_value* _parent, cb_value_h cb, sjs_array_h* _return) {
    int32_t i;
    void* newdata;
    int32_t sjt_forEnd1;
    int32_t sjt_forStart1;

#line 115 "lib/sj-lib-common/array.sj"
    newdata = 0;
#line 117
    sjs_array* arr = (sjs_array*)_parent->v;
#line 118
    sjs_array* newArr = createarray(sizeof(sjs_h), arr->count);
#line 119
    newArr->count = arr->count;
#line 120
    newdata = (void*)newArr;
#line 122
    sjt_forStart1 = 0;
#line 122
    sjf_array_value_getcount(_parent, &sjt_forEnd1);
#line 122
    i = sjt_forStart1;
    while (i < sjt_forEnd1) {
        sjs_h newitem = { -1 };
        sjs_json_value sjt_call13 = { -1 };
        sjs_json_value* sjt_functionParam118 = 0;
        int32_t sjt_functionParam119;

#line 122 "lib/sj-lib-common/array.sj"
        sjt_functionParam119 = i;
#line 122
        sjf_array_value_getat(_parent, sjt_functionParam119, &sjt_call13);
#line 123
        sjt_functionParam118 = &sjt_call13;
#line 123
        cb._cb(cb._parent, sjt_functionParam118, &newitem);
#line 125
        sjs_h* p = (sjs_h*)newArr->data;
#line 126
        p[i]._refCount = 1;
#line 124 "lib/sj-lib-common/array.sj"
sjf_h_copy(&p[i], &newitem);
;
#line 122
        i++;

        if (newitem._refCount == 1) { sjf_h_destroy(&newitem); }
;
        if (sjt_call13._refCount == 1) { sjf_json_value_destroy(&sjt_call13); }
;
    }

#line 122
    _return->_refCount = 1;
#line 129
    _return->v = newdata;
#line 129
    sjf_array_h(_return);
}

void sjf_array_value_map_h_heap(sjs_array_value* _parent, cb_value_h cb, sjs_array_h** _return) {
    int32_t i;
    void* newdata;
    int32_t sjt_forEnd2;
    int32_t sjt_forStart2;

#line 115 "lib/sj-lib-common/array.sj"
    newdata = 0;
#line 117
    sjs_array* arr = (sjs_array*)_parent->v;
#line 118
    sjs_array* newArr = createarray(sizeof(sjs_h), arr->count);
#line 119
    newArr->count = arr->count;
#line 120
    newdata = (void*)newArr;
#line 122
    sjt_forStart2 = 0;
#line 122
    sjf_array_value_getcount(_parent, &sjt_forEnd2);
#line 122
    i = sjt_forStart2;
    while (i < sjt_forEnd2) {
        sjs_h newitem = { -1 };
        sjs_json_value sjt_call14 = { -1 };
        sjs_json_value* sjt_functionParam120 = 0;
        int32_t sjt_functionParam121;

#line 122 "lib/sj-lib-common/array.sj"
        sjt_functionParam121 = i;
#line 122
        sjf_array_value_getat(_parent, sjt_functionParam121, &sjt_call14);
#line 123
        sjt_functionParam120 = &sjt_call14;
#line 123
        cb._cb(cb._parent, sjt_functionParam120, &newitem);
#line 125
        sjs_h* p = (sjs_h*)newArr->data;
#line 126
        p[i]._refCount = 1;
#line 124 "lib/sj-lib-common/array.sj"
sjf_h_copy(&p[i], &newitem);
;
#line 122
        i++;

        if (newitem._refCount == 1) { sjf_h_destroy(&newitem); }
;
        if (sjt_call14._refCount == 1) { sjf_json_value_destroy(&sjt_call14); }
;
    }

#line 122
    (*_return) = (sjs_array_h*)malloc(sizeof(sjs_array_h));
#line 122
    (*_return)->_refCount = 1;
#line 129
    (*_return)->v = newdata;
#line 129
    sjf_array_h_heap((*_return));
}

void sjf_h(sjs_h* _this) {
}

void sjf_h_copy(sjs_h* _this, sjs_h* _from) {
    _this->childtagname._refCount = 1;
#line 1 "hyperscript.sj"
    sjf_string_copy(&_this->childtagname, &_from->childtagname);
#line 1
    sjs_array_tuple2_string_string* copyoption26 = (_from->attrs._refCount != -1 ? &_from->attrs : 0);
    if (copyoption26 != 0) {
        _this->attrs._refCount = 1;
#line 1 "hyperscript.sj"
        sjf_array_tuple2_string_string_copy(&_this->attrs, copyoption26);
    } else {
        _this->attrs._refCount = -1;
    }

#line 1
    sjs_array_h* copyoption27 = (_from->children._refCount != -1 ? &_from->children : 0);
    if (copyoption27 != 0) {
        _this->children._refCount = 1;
#line 1 "hyperscript.sj"
        sjf_array_h_copy(&_this->children, copyoption27);
    } else {
        _this->children._refCount = -1;
    }

#line 1
    sjs_string* copyoption28 = (_from->text._refCount != -1 ? &_from->text : 0);
    if (copyoption28 != 0) {
        _this->text._refCount = 1;
#line 1 "hyperscript.sj"
        sjf_string_copy(&_this->text, copyoption28);
    } else {
        _this->text._refCount = -1;
    }
}

void sjf_h_destroy(sjs_h* _this) {
    if (_this->childtagname._refCount == 1) { sjf_string_destroy(&_this->childtagname); }
;
    if (_this->attrs._refCount == 1) { sjf_array_tuple2_string_string_destroy(&_this->attrs); }
;
    if (_this->children._refCount == 1) { sjf_array_h_destroy(&_this->children); }
;
    if (_this->text._refCount == 1) { sjf_string_destroy(&_this->text); }
;
}

void sjf_h_heap(sjs_h* _this) {
}

void sjf_h_render(sjs_h* _parent, sji_writer writer) {
    sjs_string sjt_call40 = { -1 };
    sjs_string sjt_call46 = { -1 };
    sjs_string sjt_call49 = { -1 };
    sjs_string sjt_call50 = { -1 };
    sjs_string* sjt_interfaceParam1 = 0;
    sjs_string* sjt_interfaceParam10 = 0;
    sjs_string* sjt_interfaceParam11 = 0;
    sjs_string* sjt_interfaceParam12 = 0;
    sjs_string* sjt_interfaceParam2 = 0;
    sjs_string* sjt_interfaceParam8 = 0;
    sji_writer sjt_parent100 = { 0 };
    sji_writer sjt_parent101 = { 0 };
    sji_writer sjt_parent102 = { 0 };
    sji_writer sjt_parent88 = { 0 };
    sji_writer sjt_parent89 = { 0 };
    sji_writer sjt_parent96 = { 0 };

#line 7 "hyperscript.sj"
    sjt_parent88 = writer;
#line 7
    sjt_call40._refCount = 1;
#line 8
    sjt_call40.offset = 0;
#line 8
    sjt_call40.count = 1;
#line 8
    sjt_call40.data._refCount = 1;
#line 8
    sjt_call40.data.v = &sjg_string12;
#line 8
    sjf_array_char(&sjt_call40.data);
#line 16 "lib/sj-lib-common/string.sj"
    sjt_call40._isnullterminated = false;
#line 16
    sjf_string(&sjt_call40);
#line 8 "hyperscript.sj"
    sjt_interfaceParam1 = &sjt_call40;
#line 8
    sjt_parent88._vtbl->write(sjt_parent88._parent, sjt_interfaceParam1);
#line 7
    sjt_parent89 = writer;
#line 9
    sjt_interfaceParam2 = &_parent->childtagname;
#line 9
    sjt_parent89._vtbl->write(sjt_parent89._parent, sjt_interfaceParam2);
    if (((_parent->attrs._refCount != -1 ? &_parent->attrs : 0) != 0)) {
        sjs_array_tuple2_string_string* ifValue5 = 0;
        sjs_lambda6 sjt_call42 = { -1 };
        cb_tuple2_string_string_void sjt_functionParam166;
        sjs_array_tuple2_string_string* sjt_parent90 = 0;

#line 10 "hyperscript.sj"
        ifValue5 = (_parent->attrs._refCount != -1 ? &_parent->attrs : 0);
#line 108 "lib/sj-lib-common/array.sj"
        sjt_parent90 = ifValue5;
#line 11 "hyperscript.sj"
        sjs_lambda6* lambainit2;
#line 11
        sjt_call42._refCount = 1;
#line 7
        sjt_call42.lambdaparam1 = writer;
#line 7
        sjt_call42.lambdaparam2 = writer;
#line 7
        sjt_call42.lambdaparam3 = writer;
#line 7
        sjt_call42.lambdaparam4 = writer;
#line 7
        sjt_call42.lambdaparam5 = writer;
#line 7
        sjt_call42.lambdaparam6 = writer;
#line 7
        sjt_call42.lambdaparam7 = writer;
#line 7
        sjt_call42.lambdaparam8 = writer;
#line 7
        sjt_call42.lambdaparam9 = writer;
#line 7
        sjt_call42.lambdaparam10 = writer;
#line 7
        sjf_lambda6(&sjt_call42);
#line 11
        lambainit2 = &sjt_call42;
#line 11
        sjt_functionParam166._parent = (sjs_object*)lambainit2;
#line 11
        sjt_functionParam166._cb = (void(*)(sjs_object*,sjs_tuple2_stringstring*))sjf_lambda6_invoke;
#line 11
        sjf_array_tuple2_string_string_each(sjt_parent90, sjt_functionParam166);

        if (sjt_call42._refCount == 1) { sjf_lambda6_destroy(&sjt_call42); }
;
    }

#line 7
    sjt_parent96 = writer;
#line 7
    sjt_call46._refCount = 1;
#line 19
    sjt_call46.offset = 0;
#line 19
    sjt_call46.count = 1;
#line 19
    sjt_call46.data._refCount = 1;
#line 19
    sjt_call46.data.v = &sjg_string16;
#line 19
    sjf_array_char(&sjt_call46.data);
#line 16 "lib/sj-lib-common/string.sj"
    sjt_call46._isnullterminated = false;
#line 16
    sjf_string(&sjt_call46);
#line 19 "hyperscript.sj"
    sjt_interfaceParam8 = &sjt_call46;
#line 19
    sjt_parent96._vtbl->write(sjt_parent96._parent, sjt_interfaceParam8);
    if (((_parent->children._refCount != -1 ? &_parent->children : 0) != 0)) {
        sjs_array_h* ifValue6 = 0;
        sjs_lambda7 sjt_call48 = { -1 };
        cb_h_void sjt_functionParam169;
        sjs_array_h* sjt_parent97 = 0;

#line 21 "hyperscript.sj"
        ifValue6 = (_parent->children._refCount != -1 ? &_parent->children : 0);
#line 108 "lib/sj-lib-common/array.sj"
        sjt_parent97 = ifValue6;
#line 22 "hyperscript.sj"
        sjs_lambda7* lambainit3;
#line 22
        sjt_call48._refCount = 1;
#line 7
        sjt_call48.lambdaparam11 = writer;
#line 7
        sjt_call48.lambdaparam12 = writer;
#line 7
        sjf_lambda7(&sjt_call48);
#line 22
        lambainit3 = &sjt_call48;
#line 22
        sjt_functionParam169._parent = (sjs_object*)lambainit3;
#line 22
        sjt_functionParam169._cb = (void(*)(sjs_object*,sjs_h*))sjf_lambda7_invoke;
#line 22
        sjf_array_h_each(sjt_parent97, sjt_functionParam169);

        if (sjt_call48._refCount == 1) { sjf_lambda7_destroy(&sjt_call48); }
;
    }

    if (((_parent->text._refCount != -1 ? &_parent->text : 0) != 0)) {
        sjs_string* ifValue7 = 0;
        sjs_string* sjt_interfaceParam9 = 0;
        sji_writer sjt_parent99 = { 0 };

#line 27 "hyperscript.sj"
        ifValue7 = (_parent->text._refCount != -1 ? &_parent->text : 0);
#line 7
        sjt_parent99 = writer;
#line 28
        sjt_interfaceParam9 = ifValue7;
#line 28
        sjt_parent99._vtbl->write(sjt_parent99._parent, sjt_interfaceParam9);
    }

#line 7
    sjt_parent100 = writer;
#line 7
    sjt_call49._refCount = 1;
#line 31
    sjt_call49.offset = 0;
#line 31
    sjt_call49.count = 2;
#line 31
    sjt_call49.data._refCount = 1;
#line 31
    sjt_call49.data.v = &sjg_string17;
#line 31
    sjf_array_char(&sjt_call49.data);
#line 16 "lib/sj-lib-common/string.sj"
    sjt_call49._isnullterminated = false;
#line 16
    sjf_string(&sjt_call49);
#line 31 "hyperscript.sj"
    sjt_interfaceParam10 = &sjt_call49;
#line 31
    sjt_parent100._vtbl->write(sjt_parent100._parent, sjt_interfaceParam10);
#line 7
    sjt_parent101 = writer;
#line 32
    sjt_interfaceParam11 = &_parent->childtagname;
#line 32
    sjt_parent101._vtbl->write(sjt_parent101._parent, sjt_interfaceParam11);
#line 7
    sjt_parent102 = writer;
#line 7
    sjt_call50._refCount = 1;
#line 33
    sjt_call50.offset = 0;
#line 33
    sjt_call50.count = 1;
#line 33
    sjt_call50.data._refCount = 1;
#line 33
    sjt_call50.data.v = &sjg_string16;
#line 33
    sjf_array_char(&sjt_call50.data);
#line 16 "lib/sj-lib-common/string.sj"
    sjt_call50._isnullterminated = false;
#line 16
    sjf_string(&sjt_call50);
#line 33 "hyperscript.sj"
    sjt_interfaceParam12 = &sjt_call50;
#line 33
    sjt_parent102._vtbl->write(sjt_parent102._parent, sjt_interfaceParam12);

    if (sjt_call40._refCount == 1) { sjf_string_destroy(&sjt_call40); }
;
    if (sjt_call46._refCount == 1) { sjf_string_destroy(&sjt_call46); }
;
    if (sjt_call49._refCount == 1) { sjf_string_destroy(&sjt_call49); }
;
    if (sjt_call50._refCount == 1) { sjf_string_destroy(&sjt_call50); }
;
}

void sjf_halt(sjs_string* reason) {
#line 3 "lib/sj-lib-common/halt.sj"
    halt("%s\n", string_char(reason));
}

void sjf_handlerequesthyperscript(sjs_string* _return) {
    sjs_h h = { -1 };
    sjs_json_value model = { -1 };
    sjs_string sjt_call10 = { -1 };
    sjs_json_value sjt_call11 = { -1 };
    sjs_string sjt_call12 = { -1 };
    sjs_json_value sjt_call15 = { -1 };
    sjs_string sjt_call16 = { -1 };
    sjs_json_value sjt_call17 = { -1 };
    sjs_string sjt_call18 = { -1 };
    sjs_lambda8 sjt_call19 = { -1 };
    sjs_array_tuple2_string_string sjt_call7 = { -1 };
    sjs_tuple2_stringstring sjt_call8 = { -1 };
    sjs_json_value sjt_call9 = { -1 };
    sjs_array_value* sjt_capture40 = 0;
    sjs_json_value* sjt_capture41 = 0;
    sjs_stringwriter* sjt_cast2 = 0;
    sjs_string* sjt_functionParam111 = 0;
    int32_t sjt_functionParam112;
    sjs_tuple2_stringstring* sjt_functionParam113 = 0;
    sji_writer sjt_functionParam171 = { 0 };
    sjs_h* sjt_parent103 = 0;
    sjs_array_tuple2_string_string* sjt_parent47 = 0;
    sjs_array_h sjt_value4 = { -1 };
    sjs_string test = { -1 };
    sjs_stringwriter* writer = 0;

    test._refCount = 1;
#line 5 "sjController.sj"
    test.offset = 0;
#line 5
    test.count = 105;
#line 5
    test.data._refCount = 1;
#line 5
    test.data.v = &sjg_string2;
#line 5
    sjf_array_char(&test.data);
#line 16 "lib/sj-lib-common/string.sj"
    test._isnullterminated = false;
#line 16
    sjf_string(&test);
#line 6 "sjController.sj"
    sjt_functionParam111 = &test;
#line 6
    sjf_json_parse(sjt_functionParam111, &model);
#line 6
    h._refCount = 1;
#line 6
    h.childtagname._refCount = 1;
#line 8
    h.childtagname.offset = 0;
#line 8
    h.childtagname.count = 3;
#line 8
    h.childtagname.data._refCount = 1;
#line 8
    h.childtagname.data.v = &sjg_string5;
#line 8
    sjf_array_char(&h.childtagname.data);
#line 16 "lib/sj-lib-common/string.sj"
    h.childtagname._isnullterminated = false;
#line 16
    sjf_string(&h.childtagname);
#line 16
    sjt_call7._refCount = 1;
#line 8 "sjController.sj"
    sjt_call7.v = createarray(sizeof(sjs_tuple2_stringstring), 1);
#line 8
    sjf_array_tuple2_string_string(&sjt_call7);
#line 8
    sjs_array_tuple2_string_string* copyoption29 = &sjt_call7;
    if (copyoption29 != 0) {
        h.attrs._refCount = 1;
#line 8 "sjController.sj"
        sjf_array_tuple2_string_string_copy(&h.attrs, copyoption29);
    } else {
        h.attrs._refCount = -1;
    }

#line 8
    sjs_array_tuple2_string_string* array1;
#line 8
    array1 = (h.attrs._refCount != -1 ? &h.attrs : 0);
#line 8
    sjt_parent47 = array1;
#line 8
    sjt_functionParam112 = 0;
#line 8
    sjt_call8._refCount = 1;
#line 8
    sjt_call8.item1._refCount = 1;
#line 8
    sjt_call8.item1.offset = 0;
#line 8
    sjt_call8.item1.count = 5;
#line 8
    sjt_call8.item1.data._refCount = 1;
#line 8
    sjt_call8.item1.data.v = &sjg_string6;
#line 8
    sjf_array_char(&sjt_call8.item1.data);
#line 16 "lib/sj-lib-common/string.sj"
    sjt_call8.item1._isnullterminated = false;
#line 16
    sjf_string(&sjt_call8.item1);
#line 16
    sjt_call8.item2._refCount = 1;
#line 8 "sjController.sj"
    sjt_call8.item2.offset = 0;
#line 8
    sjt_call8.item2.count = 4;
#line 8
    sjt_call8.item2.data._refCount = 1;
#line 8
    sjt_call8.item2.data.v = &sjg_string7;
#line 8
    sjf_array_char(&sjt_call8.item2.data);
#line 16 "lib/sj-lib-common/string.sj"
    sjt_call8.item2._isnullterminated = false;
#line 16
    sjf_string(&sjt_call8.item2);
#line 16
    sjf_tuple2_stringstring(&sjt_call8);
#line 8 "sjController.sj"
    sjt_functionParam113 = &sjt_call8;
#line 8
    sjf_array_tuple2_string_string_initat(sjt_parent47, sjt_functionParam112, sjt_functionParam113);
    if ((model._refCount != -1 ? &model : 0) != 0) {
        sjs_string* sjt_functionParam116 = 0;
        sjs_json_value* sjt_parent50 = 0;

#line 7 "lib/sj-lib-json/value.sj"
        sjt_parent50 = (model._refCount != -1 ? &model : 0);
#line 7
        sjt_call10._refCount = 1;
#line 9 "sjController.sj"
        sjt_call10.offset = 0;
#line 9
        sjt_call10.count = 6;
#line 9
        sjt_call10.data._refCount = 1;
#line 9
        sjt_call10.data.v = &sjg_string8;
#line 9
        sjf_array_char(&sjt_call10.data);
#line 16 "lib/sj-lib-common/string.sj"
        sjt_call10._isnullterminated = false;
#line 16
        sjf_string(&sjt_call10);
#line 9 "sjController.sj"
        sjt_functionParam116 = &sjt_call10;
#line 9
        sjf_json_value_getat(sjt_parent50, sjt_functionParam116, &sjt_call9);
#line 9
        sjt_capture41 = (sjt_call9._refCount != -1 ? &sjt_call9 : 0);
    } else {
#line 9 "sjController.sj"
        sjt_capture41 = 0;
    }

    if (sjt_capture41 != 0) {
        sjs_json_value* sjt_capture42 = 0;

        if ((model._refCount != -1 ? &model : 0) != 0) {
            sjs_string* sjt_functionParam117 = 0;
            sjs_json_value* sjt_parent51 = 0;

#line 7 "lib/sj-lib-json/value.sj"
            sjt_parent51 = (model._refCount != -1 ? &model : 0);
#line 7
            sjt_call12._refCount = 1;
#line 9 "sjController.sj"
            sjt_call12.offset = 0;
#line 9
            sjt_call12.count = 6;
#line 9
            sjt_call12.data._refCount = 1;
#line 9
            sjt_call12.data.v = &sjg_string8;
#line 9
            sjf_array_char(&sjt_call12.data);
#line 16 "lib/sj-lib-common/string.sj"
            sjt_call12._isnullterminated = false;
#line 16
            sjf_string(&sjt_call12);
#line 9 "sjController.sj"
            sjt_functionParam117 = &sjt_call12;
#line 9
            sjf_json_value_getat(sjt_parent51, sjt_functionParam117, &sjt_call11);
#line 9
            sjt_capture42 = (sjt_call11._refCount != -1 ? &sjt_call11 : 0);
        } else {
#line 9 "sjController.sj"
            sjt_capture42 = 0;
        }

#line 9 "sjController.sj"
        sjt_capture40 = (sjt_capture42->a._refCount != -1 ? &sjt_capture42->a : 0);
    } else {
#line 9 "sjController.sj"
        sjt_capture40 = 0;
    }

    if (sjt_capture40 != 0) {
        sjs_json_value* sjt_capture43 = 0;
        cb_value_h sjt_functionParam124;
        sjs_array_value* sjt_parent52 = 0;

        if ((model._refCount != -1 ? &model : 0) != 0) {
            sjs_string* sjt_functionParam122 = 0;
            sjs_json_value* sjt_parent53 = 0;

#line 7 "lib/sj-lib-json/value.sj"
            sjt_parent53 = (model._refCount != -1 ? &model : 0);
#line 7
            sjt_call16._refCount = 1;
#line 9 "sjController.sj"
            sjt_call16.offset = 0;
#line 9
            sjt_call16.count = 6;
#line 9
            sjt_call16.data._refCount = 1;
#line 9
            sjt_call16.data.v = &sjg_string8;
#line 9
            sjf_array_char(&sjt_call16.data);
#line 16 "lib/sj-lib-common/string.sj"
            sjt_call16._isnullterminated = false;
#line 16
            sjf_string(&sjt_call16);
#line 9 "sjController.sj"
            sjt_functionParam122 = &sjt_call16;
#line 9
            sjf_json_value_getat(sjt_parent53, sjt_functionParam122, &sjt_call15);
#line 9
            sjt_capture43 = (sjt_call15._refCount != -1 ? &sjt_call15 : 0);
        } else {
#line 9 "sjController.sj"
            sjt_capture43 = 0;
        }

        if (sjt_capture43 != 0) {
            sjs_json_value* sjt_capture44 = 0;

            if ((model._refCount != -1 ? &model : 0) != 0) {
                sjs_string* sjt_functionParam123 = 0;
                sjs_json_value* sjt_parent54 = 0;

#line 7 "lib/sj-lib-json/value.sj"
                sjt_parent54 = (model._refCount != -1 ? &model : 0);
#line 7
                sjt_call18._refCount = 1;
#line 9 "sjController.sj"
                sjt_call18.offset = 0;
#line 9
                sjt_call18.count = 6;
#line 9
                sjt_call18.data._refCount = 1;
#line 9
                sjt_call18.data.v = &sjg_string8;
#line 9
                sjf_array_char(&sjt_call18.data);
#line 16 "lib/sj-lib-common/string.sj"
                sjt_call18._isnullterminated = false;
#line 16
                sjf_string(&sjt_call18);
#line 9 "sjController.sj"
                sjt_functionParam123 = &sjt_call18;
#line 9
                sjf_json_value_getat(sjt_parent54, sjt_functionParam123, &sjt_call17);
#line 9
                sjt_capture44 = (sjt_call17._refCount != -1 ? &sjt_call17 : 0);
            } else {
#line 9 "sjController.sj"
                sjt_capture44 = 0;
            }

#line 114 "lib/sj-lib-common/array.sj"
            sjt_parent52 = (sjt_capture44->a._refCount != -1 ? &sjt_capture44->a : 0);
        } else {
#line 9 "sjController.sj"
            sjt_parent52 = 0;
        }

#line 9 "sjController.sj"
        sjs_lambda8* lambainit1;
#line 9
        sjt_call19._refCount = 1;
#line 9
        sjf_lambda8(&sjt_call19);
#line 9
        lambainit1 = &sjt_call19;
#line 9
        sjt_functionParam124._parent = (sjs_object*)lambainit1;
#line 9
        sjt_functionParam124._cb = (void(*)(sjs_object*,sjs_json_value*, sjs_h*))sjf_lambda8_invoke;
#line 9
        sjf_array_value_map_h(sjt_parent52, sjt_functionParam124, &sjt_value4);
#line 9
        sjs_array_h* copyoption38 = &sjt_value4;
        if (copyoption38 != 0) {
            h.children._refCount = 1;
#line 9 "sjController.sj"
            sjf_array_h_copy(&h.children, copyoption38);
        } else {
            h.children._refCount = -1;
        }
    } else {
#line 9 "sjController.sj"
        h.children._refCount = -1;
    }

#line 5 "hyperscript.sj"
    h.text._refCount = -1;
#line 5
    sjf_h(&h);
#line 5
    writer = (sjs_stringwriter*)malloc(sizeof(sjs_stringwriter));
#line 5
    writer->_refCount = 1;
#line 5
    writer->text._refCount = 1;
#line 223 "lib/sj-lib-common/string.sj"
    writer->text.offset = 0;
#line 223
    writer->text.count = 0;
#line 223
    writer->text.data._refCount = 1;
#line 223
    writer->text.data.v = &sjg_string3;
#line 223
    sjf_array_char(&writer->text.data);
#line 16
    writer->text._isnullterminated = false;
#line 16
    sjf_string(&writer->text);
#line 16
    sjf_stringwriter_heap(writer);
#line 7 "hyperscript.sj"
    sjt_parent103 = &h;
#line 17 "sjController.sj"
    sjt_cast2 = writer;
#line 1 "lib/sj-lib-common/writer.sj"
    sjf_stringwriter_as_sji_writer(sjt_cast2, &sjt_functionParam171);
#line 1
    sjf_h_render(sjt_parent103, sjt_functionParam171);
#line 1
    _return->_refCount = 1;
#line 4 "sjController.sj"
    sjf_string_copy(_return, &writer->text);

    writer->_refCount--;
    if (writer->_refCount <= 0) {
        weakptr_release(writer);
        sjf_stringwriter_destroy(writer);
        free(writer);
    }
    if (h._refCount == 1) { sjf_h_destroy(&h); }
;
    if (model._refCount == 1) { sjf_json_value_destroy(&model); }
;
    if (sjt_call10._refCount == 1) { sjf_string_destroy(&sjt_call10); }
;
    if (sjt_call11._refCount == 1) { sjf_json_value_destroy(&sjt_call11); }
;
    if (sjt_call12._refCount == 1) { sjf_string_destroy(&sjt_call12); }
;
    if (sjt_call15._refCount == 1) { sjf_json_value_destroy(&sjt_call15); }
;
    if (sjt_call16._refCount == 1) { sjf_string_destroy(&sjt_call16); }
;
    if (sjt_call17._refCount == 1) { sjf_json_value_destroy(&sjt_call17); }
;
    if (sjt_call18._refCount == 1) { sjf_string_destroy(&sjt_call18); }
;
    if (sjt_call19._refCount == 1) { sjf_lambda8_destroy(&sjt_call19); }
;
    if (sjt_call7._refCount == 1) { sjf_array_tuple2_string_string_destroy(&sjt_call7); }
;
    if (sjt_call8._refCount == 1) { sjf_tuple2_stringstring_destroy(&sjt_call8); }
;
    if (sjt_call9._refCount == 1) { sjf_json_value_destroy(&sjt_call9); }
;
    if (sjt_value4._refCount == 1) { sjf_array_h_destroy(&sjt_value4); }
;
    if (test._refCount == 1) { sjf_string_destroy(&test); }
;
}

void sjf_handlerequesthyperscript_heap(sjs_string** _return) {
    sjs_h h = { -1 };
    sjs_json_value model = { -1 };
    sjs_array_tuple2_string_string sjt_call51 = { -1 };
    sjs_tuple2_stringstring sjt_call52 = { -1 };
    sjs_json_value sjt_call53 = { -1 };
    sjs_string sjt_call54 = { -1 };
    sjs_json_value sjt_call55 = { -1 };
    sjs_string sjt_call56 = { -1 };
    sjs_json_value sjt_call57 = { -1 };
    sjs_string sjt_call58 = { -1 };
    sjs_json_value sjt_call59 = { -1 };
    sjs_string sjt_call60 = { -1 };
    sjs_lambda8 sjt_call61 = { -1 };
    sjs_array_value* sjt_capture57 = 0;
    sjs_json_value* sjt_capture58 = 0;
    sjs_stringwriter* sjt_cast3 = 0;
    sjs_string* sjt_functionParam172 = 0;
    int32_t sjt_functionParam173;
    sjs_tuple2_stringstring* sjt_functionParam174 = 0;
    sji_writer sjt_functionParam180 = { 0 };
    sjs_array_tuple2_string_string* sjt_parent104 = 0;
    sjs_h* sjt_parent110 = 0;
    sjs_array_h sjt_value5 = { -1 };
    sjs_string test = { -1 };
    sjs_stringwriter* writer = 0;

    test._refCount = 1;
#line 5 "sjController.sj"
    test.offset = 0;
#line 5
    test.count = 105;
#line 5
    test.data._refCount = 1;
#line 5
    test.data.v = &sjg_string2;
#line 5
    sjf_array_char(&test.data);
#line 16 "lib/sj-lib-common/string.sj"
    test._isnullterminated = false;
#line 16
    sjf_string(&test);
#line 6 "sjController.sj"
    sjt_functionParam172 = &test;
#line 6
    sjf_json_parse(sjt_functionParam172, &model);
#line 6
    h._refCount = 1;
#line 6
    h.childtagname._refCount = 1;
#line 8
    h.childtagname.offset = 0;
#line 8
    h.childtagname.count = 3;
#line 8
    h.childtagname.data._refCount = 1;
#line 8
    h.childtagname.data.v = &sjg_string5;
#line 8
    sjf_array_char(&h.childtagname.data);
#line 16 "lib/sj-lib-common/string.sj"
    h.childtagname._isnullterminated = false;
#line 16
    sjf_string(&h.childtagname);
#line 16
    sjt_call51._refCount = 1;
#line 8 "sjController.sj"
    sjt_call51.v = createarray(sizeof(sjs_tuple2_stringstring), 1);
#line 8
    sjf_array_tuple2_string_string(&sjt_call51);
#line 8
    sjs_array_tuple2_string_string* copyoption39 = &sjt_call51;
    if (copyoption39 != 0) {
        h.attrs._refCount = 1;
#line 8 "sjController.sj"
        sjf_array_tuple2_string_string_copy(&h.attrs, copyoption39);
    } else {
        h.attrs._refCount = -1;
    }

#line 8
    sjs_array_tuple2_string_string* array6;
#line 8
    array6 = (h.attrs._refCount != -1 ? &h.attrs : 0);
#line 8
    sjt_parent104 = array6;
#line 8
    sjt_functionParam173 = 0;
#line 8
    sjt_call52._refCount = 1;
#line 8
    sjt_call52.item1._refCount = 1;
#line 8
    sjt_call52.item1.offset = 0;
#line 8
    sjt_call52.item1.count = 5;
#line 8
    sjt_call52.item1.data._refCount = 1;
#line 8
    sjt_call52.item1.data.v = &sjg_string6;
#line 8
    sjf_array_char(&sjt_call52.item1.data);
#line 16 "lib/sj-lib-common/string.sj"
    sjt_call52.item1._isnullterminated = false;
#line 16
    sjf_string(&sjt_call52.item1);
#line 16
    sjt_call52.item2._refCount = 1;
#line 8 "sjController.sj"
    sjt_call52.item2.offset = 0;
#line 8
    sjt_call52.item2.count = 4;
#line 8
    sjt_call52.item2.data._refCount = 1;
#line 8
    sjt_call52.item2.data.v = &sjg_string7;
#line 8
    sjf_array_char(&sjt_call52.item2.data);
#line 16 "lib/sj-lib-common/string.sj"
    sjt_call52.item2._isnullterminated = false;
#line 16
    sjf_string(&sjt_call52.item2);
#line 16
    sjf_tuple2_stringstring(&sjt_call52);
#line 8 "sjController.sj"
    sjt_functionParam174 = &sjt_call52;
#line 8
    sjf_array_tuple2_string_string_initat(sjt_parent104, sjt_functionParam173, sjt_functionParam174);
    if ((model._refCount != -1 ? &model : 0) != 0) {
        sjs_string* sjt_functionParam175 = 0;
        sjs_json_value* sjt_parent105 = 0;

#line 7 "lib/sj-lib-json/value.sj"
        sjt_parent105 = (model._refCount != -1 ? &model : 0);
#line 7
        sjt_call54._refCount = 1;
#line 9 "sjController.sj"
        sjt_call54.offset = 0;
#line 9
        sjt_call54.count = 6;
#line 9
        sjt_call54.data._refCount = 1;
#line 9
        sjt_call54.data.v = &sjg_string8;
#line 9
        sjf_array_char(&sjt_call54.data);
#line 16 "lib/sj-lib-common/string.sj"
        sjt_call54._isnullterminated = false;
#line 16
        sjf_string(&sjt_call54);
#line 9 "sjController.sj"
        sjt_functionParam175 = &sjt_call54;
#line 9
        sjf_json_value_getat(sjt_parent105, sjt_functionParam175, &sjt_call53);
#line 9
        sjt_capture58 = (sjt_call53._refCount != -1 ? &sjt_call53 : 0);
    } else {
#line 9 "sjController.sj"
        sjt_capture58 = 0;
    }

    if (sjt_capture58 != 0) {
        sjs_json_value* sjt_capture59 = 0;

        if ((model._refCount != -1 ? &model : 0) != 0) {
            sjs_string* sjt_functionParam176 = 0;
            sjs_json_value* sjt_parent106 = 0;

#line 7 "lib/sj-lib-json/value.sj"
            sjt_parent106 = (model._refCount != -1 ? &model : 0);
#line 7
            sjt_call56._refCount = 1;
#line 9 "sjController.sj"
            sjt_call56.offset = 0;
#line 9
            sjt_call56.count = 6;
#line 9
            sjt_call56.data._refCount = 1;
#line 9
            sjt_call56.data.v = &sjg_string8;
#line 9
            sjf_array_char(&sjt_call56.data);
#line 16 "lib/sj-lib-common/string.sj"
            sjt_call56._isnullterminated = false;
#line 16
            sjf_string(&sjt_call56);
#line 9 "sjController.sj"
            sjt_functionParam176 = &sjt_call56;
#line 9
            sjf_json_value_getat(sjt_parent106, sjt_functionParam176, &sjt_call55);
#line 9
            sjt_capture59 = (sjt_call55._refCount != -1 ? &sjt_call55 : 0);
        } else {
#line 9 "sjController.sj"
            sjt_capture59 = 0;
        }

#line 9 "sjController.sj"
        sjt_capture57 = (sjt_capture59->a._refCount != -1 ? &sjt_capture59->a : 0);
    } else {
#line 9 "sjController.sj"
        sjt_capture57 = 0;
    }

    if (sjt_capture57 != 0) {
        sjs_json_value* sjt_capture60 = 0;
        cb_value_h sjt_functionParam179;
        sjs_array_value* sjt_parent107 = 0;

        if ((model._refCount != -1 ? &model : 0) != 0) {
            sjs_string* sjt_functionParam177 = 0;
            sjs_json_value* sjt_parent108 = 0;

#line 7 "lib/sj-lib-json/value.sj"
            sjt_parent108 = (model._refCount != -1 ? &model : 0);
#line 7
            sjt_call58._refCount = 1;
#line 9 "sjController.sj"
            sjt_call58.offset = 0;
#line 9
            sjt_call58.count = 6;
#line 9
            sjt_call58.data._refCount = 1;
#line 9
            sjt_call58.data.v = &sjg_string8;
#line 9
            sjf_array_char(&sjt_call58.data);
#line 16 "lib/sj-lib-common/string.sj"
            sjt_call58._isnullterminated = false;
#line 16
            sjf_string(&sjt_call58);
#line 9 "sjController.sj"
            sjt_functionParam177 = &sjt_call58;
#line 9
            sjf_json_value_getat(sjt_parent108, sjt_functionParam177, &sjt_call57);
#line 9
            sjt_capture60 = (sjt_call57._refCount != -1 ? &sjt_call57 : 0);
        } else {
#line 9 "sjController.sj"
            sjt_capture60 = 0;
        }

        if (sjt_capture60 != 0) {
            sjs_json_value* sjt_capture61 = 0;

            if ((model._refCount != -1 ? &model : 0) != 0) {
                sjs_string* sjt_functionParam178 = 0;
                sjs_json_value* sjt_parent109 = 0;

#line 7 "lib/sj-lib-json/value.sj"
                sjt_parent109 = (model._refCount != -1 ? &model : 0);
#line 7
                sjt_call60._refCount = 1;
#line 9 "sjController.sj"
                sjt_call60.offset = 0;
#line 9
                sjt_call60.count = 6;
#line 9
                sjt_call60.data._refCount = 1;
#line 9
                sjt_call60.data.v = &sjg_string8;
#line 9
                sjf_array_char(&sjt_call60.data);
#line 16 "lib/sj-lib-common/string.sj"
                sjt_call60._isnullterminated = false;
#line 16
                sjf_string(&sjt_call60);
#line 9 "sjController.sj"
                sjt_functionParam178 = &sjt_call60;
#line 9
                sjf_json_value_getat(sjt_parent109, sjt_functionParam178, &sjt_call59);
#line 9
                sjt_capture61 = (sjt_call59._refCount != -1 ? &sjt_call59 : 0);
            } else {
#line 9 "sjController.sj"
                sjt_capture61 = 0;
            }

#line 114 "lib/sj-lib-common/array.sj"
            sjt_parent107 = (sjt_capture61->a._refCount != -1 ? &sjt_capture61->a : 0);
        } else {
#line 9 "sjController.sj"
            sjt_parent107 = 0;
        }

#line 9 "sjController.sj"
        sjs_lambda8* lambainit6;
#line 9
        sjt_call61._refCount = 1;
#line 9
        sjf_lambda8(&sjt_call61);
#line 9
        lambainit6 = &sjt_call61;
#line 9
        sjt_functionParam179._parent = (sjs_object*)lambainit6;
#line 9
        sjt_functionParam179._cb = (void(*)(sjs_object*,sjs_json_value*, sjs_h*))sjf_lambda8_invoke;
#line 9
        sjf_array_value_map_h(sjt_parent107, sjt_functionParam179, &sjt_value5);
#line 9
        sjs_array_h* copyoption40 = &sjt_value5;
        if (copyoption40 != 0) {
            h.children._refCount = 1;
#line 9 "sjController.sj"
            sjf_array_h_copy(&h.children, copyoption40);
        } else {
            h.children._refCount = -1;
        }
    } else {
#line 9 "sjController.sj"
        h.children._refCount = -1;
    }

#line 5 "hyperscript.sj"
    h.text._refCount = -1;
#line 5
    sjf_h(&h);
#line 5
    writer = (sjs_stringwriter*)malloc(sizeof(sjs_stringwriter));
#line 5
    writer->_refCount = 1;
#line 5
    writer->text._refCount = 1;
#line 223 "lib/sj-lib-common/string.sj"
    writer->text.offset = 0;
#line 223
    writer->text.count = 0;
#line 223
    writer->text.data._refCount = 1;
#line 223
    writer->text.data.v = &sjg_string3;
#line 223
    sjf_array_char(&writer->text.data);
#line 16
    writer->text._isnullterminated = false;
#line 16
    sjf_string(&writer->text);
#line 16
    sjf_stringwriter_heap(writer);
#line 7 "hyperscript.sj"
    sjt_parent110 = &h;
#line 17 "sjController.sj"
    sjt_cast3 = writer;
#line 1 "lib/sj-lib-common/writer.sj"
    sjf_stringwriter_as_sji_writer(sjt_cast3, &sjt_functionParam180);
#line 1
    sjf_h_render(sjt_parent110, sjt_functionParam180);
#line 1
    (*_return) = (sjs_string*)malloc(sizeof(sjs_string));
#line 1
    (*_return)->_refCount = 1;
#line 4 "sjController.sj"
    sjf_string_copy((*_return), &writer->text);

    writer->_refCount--;
    if (writer->_refCount <= 0) {
        weakptr_release(writer);
        sjf_stringwriter_destroy(writer);
        free(writer);
    }
    if (h._refCount == 1) { sjf_h_destroy(&h); }
;
    if (model._refCount == 1) { sjf_json_value_destroy(&model); }
;
    if (sjt_call51._refCount == 1) { sjf_array_tuple2_string_string_destroy(&sjt_call51); }
;
    if (sjt_call52._refCount == 1) { sjf_tuple2_stringstring_destroy(&sjt_call52); }
;
    if (sjt_call53._refCount == 1) { sjf_json_value_destroy(&sjt_call53); }
;
    if (sjt_call54._refCount == 1) { sjf_string_destroy(&sjt_call54); }
;
    if (sjt_call55._refCount == 1) { sjf_json_value_destroy(&sjt_call55); }
;
    if (sjt_call56._refCount == 1) { sjf_string_destroy(&sjt_call56); }
;
    if (sjt_call57._refCount == 1) { sjf_json_value_destroy(&sjt_call57); }
;
    if (sjt_call58._refCount == 1) { sjf_string_destroy(&sjt_call58); }
;
    if (sjt_call59._refCount == 1) { sjf_json_value_destroy(&sjt_call59); }
;
    if (sjt_call60._refCount == 1) { sjf_string_destroy(&sjt_call60); }
;
    if (sjt_call61._refCount == 1) { sjf_lambda8_destroy(&sjt_call61); }
;
    if (sjt_value5._refCount == 1) { sjf_array_h_destroy(&sjt_value5); }
;
    if (test._refCount == 1) { sjf_string_destroy(&test); }
;
}

void sjf_handlerequeststring(sjs_string* _return) {
    sjs_string html = { -1 };
    int32_t i;
    sjs_json_value model = { -1 };
    sjs_array_value people = { -1 };
    sjs_json_value sjt_call62 = { -1 };
    sjs_string sjt_call63 = { -1 };
    sjs_json_value sjt_call64 = { -1 };
    sjs_string sjt_call65 = { -1 };
    sjs_json_value sjt_call66 = { -1 };
    sjs_string sjt_call67 = { -1 };
    sjs_json_value sjt_call68 = { -1 };
    sjs_string sjt_call69 = { -1 };
    sjs_string sjt_call80 = { -1 };
    sjs_array_value* sjt_capture62 = 0;
    sjs_json_value* sjt_capture63 = 0;
    int32_t sjt_forEnd9;
    int32_t sjt_forStart9;
    sjs_string sjt_funcold20 = { -1 };
    sjs_string* sjt_functionParam181 = 0;
    sjs_string* sjt_functionParam192 = 0;
    sjs_array_value* sjt_parent115 = 0;
    sjs_string* sjt_parent123 = 0;
    sjs_string test = { -1 };

    test._refCount = 1;
#line 22 "sjController.sj"
    test.offset = 0;
#line 22
    test.count = 105;
#line 22
    test.data._refCount = 1;
#line 22
    test.data.v = &sjg_string2;
#line 22
    sjf_array_char(&test.data);
#line 16 "lib/sj-lib-common/string.sj"
    test._isnullterminated = false;
#line 16
    sjf_string(&test);
#line 23 "sjController.sj"
    sjt_functionParam181 = &test;
#line 23
    sjf_json_parse(sjt_functionParam181, &model);
#line 23
    html._refCount = 1;
#line 25
    html.offset = 0;
#line 25
    html.count = 18;
#line 25
    html.data._refCount = 1;
#line 25
    html.data.v = &sjg_string18;
#line 25
    sjf_array_char(&html.data);
#line 16 "lib/sj-lib-common/string.sj"
    html._isnullterminated = false;
#line 16
    sjf_string(&html);
    if ((model._refCount != -1 ? &model : 0) != 0) {
        sjs_string* sjt_functionParam182 = 0;
        sjs_json_value* sjt_parent111 = 0;

#line 7 "lib/sj-lib-json/value.sj"
        sjt_parent111 = (model._refCount != -1 ? &model : 0);
#line 7
        sjt_call63._refCount = 1;
#line 26 "sjController.sj"
        sjt_call63.offset = 0;
#line 26
        sjt_call63.count = 6;
#line 26
        sjt_call63.data._refCount = 1;
#line 26
        sjt_call63.data.v = &sjg_string8;
#line 26
        sjf_array_char(&sjt_call63.data);
#line 16 "lib/sj-lib-common/string.sj"
        sjt_call63._isnullterminated = false;
#line 16
        sjf_string(&sjt_call63);
#line 26 "sjController.sj"
        sjt_functionParam182 = &sjt_call63;
#line 26
        sjf_json_value_getat(sjt_parent111, sjt_functionParam182, &sjt_call62);
#line 26
        sjt_capture63 = (sjt_call62._refCount != -1 ? &sjt_call62 : 0);
    } else {
#line 26 "sjController.sj"
        sjt_capture63 = 0;
    }

    if (sjt_capture63 != 0) {
        sjs_json_value* sjt_capture64 = 0;

        if ((model._refCount != -1 ? &model : 0) != 0) {
            sjs_string* sjt_functionParam183 = 0;
            sjs_json_value* sjt_parent112 = 0;

#line 7 "lib/sj-lib-json/value.sj"
            sjt_parent112 = (model._refCount != -1 ? &model : 0);
#line 7
            sjt_call65._refCount = 1;
#line 26 "sjController.sj"
            sjt_call65.offset = 0;
#line 26
            sjt_call65.count = 6;
#line 26
            sjt_call65.data._refCount = 1;
#line 26
            sjt_call65.data.v = &sjg_string8;
#line 26
            sjf_array_char(&sjt_call65.data);
#line 16 "lib/sj-lib-common/string.sj"
            sjt_call65._isnullterminated = false;
#line 16
            sjf_string(&sjt_call65);
#line 26 "sjController.sj"
            sjt_functionParam183 = &sjt_call65;
#line 26
            sjf_json_value_getat(sjt_parent112, sjt_functionParam183, &sjt_call64);
#line 26
            sjt_capture64 = (sjt_call64._refCount != -1 ? &sjt_call64 : 0);
        } else {
#line 26 "sjController.sj"
            sjt_capture64 = 0;
        }

#line 26 "sjController.sj"
        sjt_capture62 = (sjt_capture64->a._refCount != -1 ? &sjt_capture64->a : 0);
    } else {
#line 26 "sjController.sj"
        sjt_capture62 = 0;
    }

    if (sjt_capture62 != 0) {
        sjs_json_value* sjt_capture65 = 0;

        if ((model._refCount != -1 ? &model : 0) != 0) {
            sjs_string* sjt_functionParam184 = 0;
            sjs_json_value* sjt_parent113 = 0;

#line 7 "lib/sj-lib-json/value.sj"
            sjt_parent113 = (model._refCount != -1 ? &model : 0);
#line 7
            sjt_call67._refCount = 1;
#line 26 "sjController.sj"
            sjt_call67.offset = 0;
#line 26
            sjt_call67.count = 6;
#line 26
            sjt_call67.data._refCount = 1;
#line 26
            sjt_call67.data.v = &sjg_string8;
#line 26
            sjf_array_char(&sjt_call67.data);
#line 16 "lib/sj-lib-common/string.sj"
            sjt_call67._isnullterminated = false;
#line 16
            sjf_string(&sjt_call67);
#line 26 "sjController.sj"
            sjt_functionParam184 = &sjt_call67;
#line 26
            sjf_json_value_getat(sjt_parent113, sjt_functionParam184, &sjt_call66);
#line 26
            sjt_capture65 = (sjt_call66._refCount != -1 ? &sjt_call66 : 0);
        } else {
#line 26 "sjController.sj"
            sjt_capture65 = 0;
        }

        if (sjt_capture65 != 0) {
            sjs_json_value* sjt_capture66 = 0;

            if ((model._refCount != -1 ? &model : 0) != 0) {
                sjs_string* sjt_functionParam185 = 0;
                sjs_json_value* sjt_parent114 = 0;

#line 7 "lib/sj-lib-json/value.sj"
                sjt_parent114 = (model._refCount != -1 ? &model : 0);
#line 7
                sjt_call69._refCount = 1;
#line 26 "sjController.sj"
                sjt_call69.offset = 0;
#line 26
                sjt_call69.count = 6;
#line 26
                sjt_call69.data._refCount = 1;
#line 26
                sjt_call69.data.v = &sjg_string8;
#line 26
                sjf_array_char(&sjt_call69.data);
#line 16 "lib/sj-lib-common/string.sj"
                sjt_call69._isnullterminated = false;
#line 16
                sjf_string(&sjt_call69);
#line 26 "sjController.sj"
                sjt_functionParam185 = &sjt_call69;
#line 26
                sjf_json_value_getat(sjt_parent114, sjt_functionParam185, &sjt_call68);
#line 26
                sjt_capture66 = (sjt_call68._refCount != -1 ? &sjt_call68 : 0);
            } else {
#line 26 "sjController.sj"
                sjt_capture66 = 0;
            }

#line 26 "sjController.sj"
            sjs_array_value* copyoption41 = (sjt_capture66->a._refCount != -1 ? &sjt_capture66->a : 0);
            if (copyoption41 != 0) {
                people._refCount = 1;
#line 26 "sjController.sj"
                sjf_array_value_copy(&people, copyoption41);
            } else {
                people._refCount = -1;
            }
        } else {
#line 26 "sjController.sj"
            people._refCount = -1;
        }
    } else {
        people._refCount = 1;
#line 27 "lib/sj-lib-common/array.sj"
        people.v = 0;
#line 27
        sjf_array_value(&people);
    }

#line 27 "sjController.sj"
    sjt_forStart9 = 0;
#line 29 "lib/sj-lib-common/array.sj"
    sjt_parent115 = &people;
#line 29
    sjf_array_value_getcount(sjt_parent115, &sjt_forEnd9);
#line 27 "sjController.sj"
    i = sjt_forStart9;
    while (i < sjt_forEnd9) {
        sjs_json_value person = { -1 };
        sjs_string sjt_call70 = { -1 };
        sjs_string sjt_call71 = { -1 };
        sjs_string sjt_call72 = { -1 };
        sjs_string sjt_call73 = { -1 };
        sjs_json_value sjt_call74 = { -1 };
        sjs_string sjt_call75 = { -1 };
        sjs_json_value sjt_call76 = { -1 };
        sjs_string sjt_call77 = { -1 };
        sjs_json_value sjt_call78 = { -1 };
        sjs_string sjt_call79 = { -1 };
        sjs_string sjt_funcold19 = { -1 };
        int32_t sjt_functionParam186;
        sjs_string* sjt_functionParam187 = 0;
        sjs_string* sjt_functionParam188 = 0;
        sjs_string* sjt_functionParam189 = 0;
        sjs_string* sjt_functionParam191 = 0;
        sjs_array_value* sjt_parent116 = 0;
        sjs_string* sjt_parent117 = 0;
        sjs_string* sjt_parent118 = 0;
        sjs_string* sjt_parent119 = 0;
        sjs_json_value* sjt_parent120 = 0;
        sjs_json_value* sjt_parent121 = 0;

#line 41 "lib/sj-lib-common/array.sj"
        sjt_parent116 = &people;
#line 27 "sjController.sj"
        sjt_functionParam186 = i;
#line 27
        sjf_array_value_getat(sjt_parent116, sjt_functionParam186, &person);
#line 18 "lib/sj-lib-common/string.sj"
        sjt_parent117 = &html;
#line 18
        sjt_call72._refCount = 1;
#line 29 "sjController.sj"
        sjt_call72.offset = 0;
#line 29
        sjt_call72.count = 26;
#line 29
        sjt_call72.data._refCount = 1;
#line 29
        sjt_call72.data.v = &sjg_string19;
#line 29
        sjf_array_char(&sjt_call72.data);
#line 16 "lib/sj-lib-common/string.sj"
        sjt_call72._isnullterminated = false;
#line 16
        sjf_string(&sjt_call72);
#line 29 "sjController.sj"
        sjt_parent119 = &sjt_call72;
#line 7 "lib/sj-lib-json/value.sj"
        sjt_parent121 = &person;
#line 7
        sjt_call75._refCount = 1;
#line 29 "sjController.sj"
        sjt_call75.offset = 0;
#line 29
        sjt_call75.count = 4;
#line 29
        sjt_call75.data._refCount = 1;
#line 29
        sjt_call75.data.v = &sjg_string11;
#line 29
        sjf_array_char(&sjt_call75.data);
#line 16 "lib/sj-lib-common/string.sj"
        sjt_call75._isnullterminated = false;
#line 16
        sjf_string(&sjt_call75);
#line 29 "sjController.sj"
        sjt_functionParam189 = &sjt_call75;
#line 29
        sjf_json_value_getat(sjt_parent121, sjt_functionParam189, &sjt_call74);
        if ((sjt_call74._refCount != -1 ? &sjt_call74 : 0) != 0) {
            sjs_string* sjt_functionParam190 = 0;
            sjs_json_value* sjt_parent122 = 0;

#line 7 "lib/sj-lib-json/value.sj"
            sjt_parent122 = &person;
#line 7
            sjt_call77._refCount = 1;
#line 29 "sjController.sj"
            sjt_call77.offset = 0;
#line 29
            sjt_call77.count = 4;
#line 29
            sjt_call77.data._refCount = 1;
#line 29
            sjt_call77.data.v = &sjg_string11;
#line 29
            sjf_array_char(&sjt_call77.data);
#line 16 "lib/sj-lib-common/string.sj"
            sjt_call77._isnullterminated = false;
#line 16
            sjf_string(&sjt_call77);
#line 29 "sjController.sj"
            sjt_functionParam190 = &sjt_call77;
#line 29
            sjf_json_value_getat(sjt_parent122, sjt_functionParam190, &sjt_call76);
#line 29
            sjt_parent120 = (sjt_call76._refCount != -1 ? &sjt_call76 : 0);
        } else {
            sjt_call78._refCount = 1;
#line 3 "lib/sj-lib-json/value.sj"
            sjt_call78.s._refCount = -1;
#line 4
            sjt_call78.a._refCount = -1;
#line 5
            sjt_call78.h._refCount = -1;
#line 5
            sjf_json_value(&sjt_call78);
#line 29 "sjController.sj"
            sjt_parent120 = &sjt_call78;
        }

#line 29
        sjf_json_value_asstring(sjt_parent120, &sjt_call73);
#line 29
        sjt_functionParam188 = &sjt_call73;
#line 29
        sjf_string_add(sjt_parent119, sjt_functionParam188, &sjt_call71);
#line 29
        sjt_parent118 = &sjt_call71;
#line 29
        sjt_call79._refCount = 1;
#line 29
        sjt_call79.offset = 0;
#line 29
        sjt_call79.count = 13;
#line 29
        sjt_call79.data._refCount = 1;
#line 29
        sjt_call79.data.v = &sjg_string20;
#line 29
        sjf_array_char(&sjt_call79.data);
#line 16 "lib/sj-lib-common/string.sj"
        sjt_call79._isnullterminated = false;
#line 16
        sjf_string(&sjt_call79);
#line 29 "sjController.sj"
        sjt_functionParam191 = &sjt_call79;
#line 29
        sjf_string_add(sjt_parent118, sjt_functionParam191, &sjt_call70);
#line 29
        sjt_functionParam187 = &sjt_call70;
#line 29
        sjf_string_add(sjt_parent117, sjt_functionParam187, &sjt_funcold19);
#line 29
        if (html._refCount == 1) { sjf_string_destroy(&html); }
;
#line 18 "lib/sj-lib-common/string.sj"
        sjf_string_copy(&html, &sjt_funcold19);
#line 27 "sjController.sj"
        i++;

        if (person._refCount == 1) { sjf_json_value_destroy(&person); }
;
        if (sjt_call70._refCount == 1) { sjf_string_destroy(&sjt_call70); }
;
        if (sjt_call71._refCount == 1) { sjf_string_destroy(&sjt_call71); }
;
        if (sjt_call72._refCount == 1) { sjf_string_destroy(&sjt_call72); }
;
        if (sjt_call73._refCount == 1) { sjf_string_destroy(&sjt_call73); }
;
        if (sjt_call74._refCount == 1) { sjf_json_value_destroy(&sjt_call74); }
;
        if (sjt_call75._refCount == 1) { sjf_string_destroy(&sjt_call75); }
;
        if (sjt_call76._refCount == 1) { sjf_json_value_destroy(&sjt_call76); }
;
        if (sjt_call77._refCount == 1) { sjf_string_destroy(&sjt_call77); }
;
        if (sjt_call78._refCount == 1) { sjf_json_value_destroy(&sjt_call78); }
;
        if (sjt_call79._refCount == 1) { sjf_string_destroy(&sjt_call79); }
;
        if (sjt_funcold19._refCount == 1) { sjf_string_destroy(&sjt_funcold19); }
;
    }

#line 18 "lib/sj-lib-common/string.sj"
    sjt_parent123 = &html;
#line 18
    sjt_call80._refCount = 1;
#line 31 "sjController.sj"
    sjt_call80.offset = 0;
#line 31
    sjt_call80.count = 6;
#line 31
    sjt_call80.data._refCount = 1;
#line 31
    sjt_call80.data.v = &sjg_string21;
#line 31
    sjf_array_char(&sjt_call80.data);
#line 16 "lib/sj-lib-common/string.sj"
    sjt_call80._isnullterminated = false;
#line 16
    sjf_string(&sjt_call80);
#line 31 "sjController.sj"
    sjt_functionParam192 = &sjt_call80;
#line 31
    sjf_string_add(sjt_parent123, sjt_functionParam192, &sjt_funcold20);
#line 31
    if (html._refCount == 1) { sjf_string_destroy(&html); }
;
#line 18 "lib/sj-lib-common/string.sj"
    sjf_string_copy(&html, &sjt_funcold20);
#line 18
    _return->_refCount = 1;
#line 21 "sjController.sj"
    sjf_string_copy(_return, &html);

    if (html._refCount == 1) { sjf_string_destroy(&html); }
;
    if (model._refCount == 1) { sjf_json_value_destroy(&model); }
;
    if (people._refCount == 1) { sjf_array_value_destroy(&people); }
;
    if (sjt_call62._refCount == 1) { sjf_json_value_destroy(&sjt_call62); }
;
    if (sjt_call63._refCount == 1) { sjf_string_destroy(&sjt_call63); }
;
    if (sjt_call64._refCount == 1) { sjf_json_value_destroy(&sjt_call64); }
;
    if (sjt_call65._refCount == 1) { sjf_string_destroy(&sjt_call65); }
;
    if (sjt_call66._refCount == 1) { sjf_json_value_destroy(&sjt_call66); }
;
    if (sjt_call67._refCount == 1) { sjf_string_destroy(&sjt_call67); }
;
    if (sjt_call68._refCount == 1) { sjf_json_value_destroy(&sjt_call68); }
;
    if (sjt_call69._refCount == 1) { sjf_string_destroy(&sjt_call69); }
;
    if (sjt_call80._refCount == 1) { sjf_string_destroy(&sjt_call80); }
;
    if (sjt_funcold20._refCount == 1) { sjf_string_destroy(&sjt_funcold20); }
;
    if (test._refCount == 1) { sjf_string_destroy(&test); }
;
}

void sjf_handlerequeststring_heap(sjs_string** _return) {
    sjs_string html = { -1 };
    int32_t i;
    sjs_json_value model = { -1 };
    sjs_array_value people = { -1 };
    sjs_json_value sjt_call81 = { -1 };
    sjs_string sjt_call82 = { -1 };
    sjs_json_value sjt_call83 = { -1 };
    sjs_string sjt_call84 = { -1 };
    sjs_json_value sjt_call85 = { -1 };
    sjs_string sjt_call86 = { -1 };
    sjs_json_value sjt_call87 = { -1 };
    sjs_string sjt_call88 = { -1 };
    sjs_string sjt_call99 = { -1 };
    sjs_array_value* sjt_capture67 = 0;
    sjs_json_value* sjt_capture68 = 0;
    int32_t sjt_forEnd10;
    int32_t sjt_forStart10;
    sjs_string sjt_funcold22 = { -1 };
    sjs_string* sjt_functionParam193 = 0;
    sjs_string* sjt_functionParam204 = 0;
    sjs_array_value* sjt_parent128 = 0;
    sjs_string* sjt_parent136 = 0;
    sjs_string test = { -1 };

    test._refCount = 1;
#line 22 "sjController.sj"
    test.offset = 0;
#line 22
    test.count = 105;
#line 22
    test.data._refCount = 1;
#line 22
    test.data.v = &sjg_string2;
#line 22
    sjf_array_char(&test.data);
#line 16 "lib/sj-lib-common/string.sj"
    test._isnullterminated = false;
#line 16
    sjf_string(&test);
#line 23 "sjController.sj"
    sjt_functionParam193 = &test;
#line 23
    sjf_json_parse(sjt_functionParam193, &model);
#line 23
    html._refCount = 1;
#line 25
    html.offset = 0;
#line 25
    html.count = 18;
#line 25
    html.data._refCount = 1;
#line 25
    html.data.v = &sjg_string18;
#line 25
    sjf_array_char(&html.data);
#line 16 "lib/sj-lib-common/string.sj"
    html._isnullterminated = false;
#line 16
    sjf_string(&html);
    if ((model._refCount != -1 ? &model : 0) != 0) {
        sjs_string* sjt_functionParam194 = 0;
        sjs_json_value* sjt_parent124 = 0;

#line 7 "lib/sj-lib-json/value.sj"
        sjt_parent124 = (model._refCount != -1 ? &model : 0);
#line 7
        sjt_call82._refCount = 1;
#line 26 "sjController.sj"
        sjt_call82.offset = 0;
#line 26
        sjt_call82.count = 6;
#line 26
        sjt_call82.data._refCount = 1;
#line 26
        sjt_call82.data.v = &sjg_string8;
#line 26
        sjf_array_char(&sjt_call82.data);
#line 16 "lib/sj-lib-common/string.sj"
        sjt_call82._isnullterminated = false;
#line 16
        sjf_string(&sjt_call82);
#line 26 "sjController.sj"
        sjt_functionParam194 = &sjt_call82;
#line 26
        sjf_json_value_getat(sjt_parent124, sjt_functionParam194, &sjt_call81);
#line 26
        sjt_capture68 = (sjt_call81._refCount != -1 ? &sjt_call81 : 0);
    } else {
#line 26 "sjController.sj"
        sjt_capture68 = 0;
    }

    if (sjt_capture68 != 0) {
        sjs_json_value* sjt_capture69 = 0;

        if ((model._refCount != -1 ? &model : 0) != 0) {
            sjs_string* sjt_functionParam195 = 0;
            sjs_json_value* sjt_parent125 = 0;

#line 7 "lib/sj-lib-json/value.sj"
            sjt_parent125 = (model._refCount != -1 ? &model : 0);
#line 7
            sjt_call84._refCount = 1;
#line 26 "sjController.sj"
            sjt_call84.offset = 0;
#line 26
            sjt_call84.count = 6;
#line 26
            sjt_call84.data._refCount = 1;
#line 26
            sjt_call84.data.v = &sjg_string8;
#line 26
            sjf_array_char(&sjt_call84.data);
#line 16 "lib/sj-lib-common/string.sj"
            sjt_call84._isnullterminated = false;
#line 16
            sjf_string(&sjt_call84);
#line 26 "sjController.sj"
            sjt_functionParam195 = &sjt_call84;
#line 26
            sjf_json_value_getat(sjt_parent125, sjt_functionParam195, &sjt_call83);
#line 26
            sjt_capture69 = (sjt_call83._refCount != -1 ? &sjt_call83 : 0);
        } else {
#line 26 "sjController.sj"
            sjt_capture69 = 0;
        }

#line 26 "sjController.sj"
        sjt_capture67 = (sjt_capture69->a._refCount != -1 ? &sjt_capture69->a : 0);
    } else {
#line 26 "sjController.sj"
        sjt_capture67 = 0;
    }

    if (sjt_capture67 != 0) {
        sjs_json_value* sjt_capture70 = 0;

        if ((model._refCount != -1 ? &model : 0) != 0) {
            sjs_string* sjt_functionParam196 = 0;
            sjs_json_value* sjt_parent126 = 0;

#line 7 "lib/sj-lib-json/value.sj"
            sjt_parent126 = (model._refCount != -1 ? &model : 0);
#line 7
            sjt_call86._refCount = 1;
#line 26 "sjController.sj"
            sjt_call86.offset = 0;
#line 26
            sjt_call86.count = 6;
#line 26
            sjt_call86.data._refCount = 1;
#line 26
            sjt_call86.data.v = &sjg_string8;
#line 26
            sjf_array_char(&sjt_call86.data);
#line 16 "lib/sj-lib-common/string.sj"
            sjt_call86._isnullterminated = false;
#line 16
            sjf_string(&sjt_call86);
#line 26 "sjController.sj"
            sjt_functionParam196 = &sjt_call86;
#line 26
            sjf_json_value_getat(sjt_parent126, sjt_functionParam196, &sjt_call85);
#line 26
            sjt_capture70 = (sjt_call85._refCount != -1 ? &sjt_call85 : 0);
        } else {
#line 26 "sjController.sj"
            sjt_capture70 = 0;
        }

        if (sjt_capture70 != 0) {
            sjs_json_value* sjt_capture71 = 0;

            if ((model._refCount != -1 ? &model : 0) != 0) {
                sjs_string* sjt_functionParam197 = 0;
                sjs_json_value* sjt_parent127 = 0;

#line 7 "lib/sj-lib-json/value.sj"
                sjt_parent127 = (model._refCount != -1 ? &model : 0);
#line 7
                sjt_call88._refCount = 1;
#line 26 "sjController.sj"
                sjt_call88.offset = 0;
#line 26
                sjt_call88.count = 6;
#line 26
                sjt_call88.data._refCount = 1;
#line 26
                sjt_call88.data.v = &sjg_string8;
#line 26
                sjf_array_char(&sjt_call88.data);
#line 16 "lib/sj-lib-common/string.sj"
                sjt_call88._isnullterminated = false;
#line 16
                sjf_string(&sjt_call88);
#line 26 "sjController.sj"
                sjt_functionParam197 = &sjt_call88;
#line 26
                sjf_json_value_getat(sjt_parent127, sjt_functionParam197, &sjt_call87);
#line 26
                sjt_capture71 = (sjt_call87._refCount != -1 ? &sjt_call87 : 0);
            } else {
#line 26 "sjController.sj"
                sjt_capture71 = 0;
            }

#line 26 "sjController.sj"
            sjs_array_value* copyoption42 = (sjt_capture71->a._refCount != -1 ? &sjt_capture71->a : 0);
            if (copyoption42 != 0) {
                people._refCount = 1;
#line 26 "sjController.sj"
                sjf_array_value_copy(&people, copyoption42);
            } else {
                people._refCount = -1;
            }
        } else {
#line 26 "sjController.sj"
            people._refCount = -1;
        }
    } else {
        people._refCount = 1;
#line 27 "lib/sj-lib-common/array.sj"
        people.v = 0;
#line 27
        sjf_array_value(&people);
    }

#line 27 "sjController.sj"
    sjt_forStart10 = 0;
#line 29 "lib/sj-lib-common/array.sj"
    sjt_parent128 = &people;
#line 29
    sjf_array_value_getcount(sjt_parent128, &sjt_forEnd10);
#line 27 "sjController.sj"
    i = sjt_forStart10;
    while (i < sjt_forEnd10) {
        sjs_json_value person = { -1 };
        sjs_string sjt_call89 = { -1 };
        sjs_string sjt_call90 = { -1 };
        sjs_string sjt_call91 = { -1 };
        sjs_string sjt_call92 = { -1 };
        sjs_json_value sjt_call93 = { -1 };
        sjs_string sjt_call94 = { -1 };
        sjs_json_value sjt_call95 = { -1 };
        sjs_string sjt_call96 = { -1 };
        sjs_json_value sjt_call97 = { -1 };
        sjs_string sjt_call98 = { -1 };
        sjs_string sjt_funcold21 = { -1 };
        int32_t sjt_functionParam198;
        sjs_string* sjt_functionParam199 = 0;
        sjs_string* sjt_functionParam200 = 0;
        sjs_string* sjt_functionParam201 = 0;
        sjs_string* sjt_functionParam203 = 0;
        sjs_array_value* sjt_parent129 = 0;
        sjs_string* sjt_parent130 = 0;
        sjs_string* sjt_parent131 = 0;
        sjs_string* sjt_parent132 = 0;
        sjs_json_value* sjt_parent133 = 0;
        sjs_json_value* sjt_parent134 = 0;

#line 41 "lib/sj-lib-common/array.sj"
        sjt_parent129 = &people;
#line 27 "sjController.sj"
        sjt_functionParam198 = i;
#line 27
        sjf_array_value_getat(sjt_parent129, sjt_functionParam198, &person);
#line 18 "lib/sj-lib-common/string.sj"
        sjt_parent130 = &html;
#line 18
        sjt_call91._refCount = 1;
#line 29 "sjController.sj"
        sjt_call91.offset = 0;
#line 29
        sjt_call91.count = 26;
#line 29
        sjt_call91.data._refCount = 1;
#line 29
        sjt_call91.data.v = &sjg_string19;
#line 29
        sjf_array_char(&sjt_call91.data);
#line 16 "lib/sj-lib-common/string.sj"
        sjt_call91._isnullterminated = false;
#line 16
        sjf_string(&sjt_call91);
#line 29 "sjController.sj"
        sjt_parent132 = &sjt_call91;
#line 7 "lib/sj-lib-json/value.sj"
        sjt_parent134 = &person;
#line 7
        sjt_call94._refCount = 1;
#line 29 "sjController.sj"
        sjt_call94.offset = 0;
#line 29
        sjt_call94.count = 4;
#line 29
        sjt_call94.data._refCount = 1;
#line 29
        sjt_call94.data.v = &sjg_string11;
#line 29
        sjf_array_char(&sjt_call94.data);
#line 16 "lib/sj-lib-common/string.sj"
        sjt_call94._isnullterminated = false;
#line 16
        sjf_string(&sjt_call94);
#line 29 "sjController.sj"
        sjt_functionParam201 = &sjt_call94;
#line 29
        sjf_json_value_getat(sjt_parent134, sjt_functionParam201, &sjt_call93);
        if ((sjt_call93._refCount != -1 ? &sjt_call93 : 0) != 0) {
            sjs_string* sjt_functionParam202 = 0;
            sjs_json_value* sjt_parent135 = 0;

#line 7 "lib/sj-lib-json/value.sj"
            sjt_parent135 = &person;
#line 7
            sjt_call96._refCount = 1;
#line 29 "sjController.sj"
            sjt_call96.offset = 0;
#line 29
            sjt_call96.count = 4;
#line 29
            sjt_call96.data._refCount = 1;
#line 29
            sjt_call96.data.v = &sjg_string11;
#line 29
            sjf_array_char(&sjt_call96.data);
#line 16 "lib/sj-lib-common/string.sj"
            sjt_call96._isnullterminated = false;
#line 16
            sjf_string(&sjt_call96);
#line 29 "sjController.sj"
            sjt_functionParam202 = &sjt_call96;
#line 29
            sjf_json_value_getat(sjt_parent135, sjt_functionParam202, &sjt_call95);
#line 29
            sjt_parent133 = (sjt_call95._refCount != -1 ? &sjt_call95 : 0);
        } else {
            sjt_call97._refCount = 1;
#line 3 "lib/sj-lib-json/value.sj"
            sjt_call97.s._refCount = -1;
#line 4
            sjt_call97.a._refCount = -1;
#line 5
            sjt_call97.h._refCount = -1;
#line 5
            sjf_json_value(&sjt_call97);
#line 29 "sjController.sj"
            sjt_parent133 = &sjt_call97;
        }

#line 29
        sjf_json_value_asstring(sjt_parent133, &sjt_call92);
#line 29
        sjt_functionParam200 = &sjt_call92;
#line 29
        sjf_string_add(sjt_parent132, sjt_functionParam200, &sjt_call90);
#line 29
        sjt_parent131 = &sjt_call90;
#line 29
        sjt_call98._refCount = 1;
#line 29
        sjt_call98.offset = 0;
#line 29
        sjt_call98.count = 13;
#line 29
        sjt_call98.data._refCount = 1;
#line 29
        sjt_call98.data.v = &sjg_string20;
#line 29
        sjf_array_char(&sjt_call98.data);
#line 16 "lib/sj-lib-common/string.sj"
        sjt_call98._isnullterminated = false;
#line 16
        sjf_string(&sjt_call98);
#line 29 "sjController.sj"
        sjt_functionParam203 = &sjt_call98;
#line 29
        sjf_string_add(sjt_parent131, sjt_functionParam203, &sjt_call89);
#line 29
        sjt_functionParam199 = &sjt_call89;
#line 29
        sjf_string_add(sjt_parent130, sjt_functionParam199, &sjt_funcold21);
#line 29
        if (html._refCount == 1) { sjf_string_destroy(&html); }
;
#line 18 "lib/sj-lib-common/string.sj"
        sjf_string_copy(&html, &sjt_funcold21);
#line 27 "sjController.sj"
        i++;

        if (person._refCount == 1) { sjf_json_value_destroy(&person); }
;
        if (sjt_call89._refCount == 1) { sjf_string_destroy(&sjt_call89); }
;
        if (sjt_call90._refCount == 1) { sjf_string_destroy(&sjt_call90); }
;
        if (sjt_call91._refCount == 1) { sjf_string_destroy(&sjt_call91); }
;
        if (sjt_call92._refCount == 1) { sjf_string_destroy(&sjt_call92); }
;
        if (sjt_call93._refCount == 1) { sjf_json_value_destroy(&sjt_call93); }
;
        if (sjt_call94._refCount == 1) { sjf_string_destroy(&sjt_call94); }
;
        if (sjt_call95._refCount == 1) { sjf_json_value_destroy(&sjt_call95); }
;
        if (sjt_call96._refCount == 1) { sjf_string_destroy(&sjt_call96); }
;
        if (sjt_call97._refCount == 1) { sjf_json_value_destroy(&sjt_call97); }
;
        if (sjt_call98._refCount == 1) { sjf_string_destroy(&sjt_call98); }
;
        if (sjt_funcold21._refCount == 1) { sjf_string_destroy(&sjt_funcold21); }
;
    }

#line 18 "lib/sj-lib-common/string.sj"
    sjt_parent136 = &html;
#line 18
    sjt_call99._refCount = 1;
#line 31 "sjController.sj"
    sjt_call99.offset = 0;
#line 31
    sjt_call99.count = 6;
#line 31
    sjt_call99.data._refCount = 1;
#line 31
    sjt_call99.data.v = &sjg_string21;
#line 31
    sjf_array_char(&sjt_call99.data);
#line 16 "lib/sj-lib-common/string.sj"
    sjt_call99._isnullterminated = false;
#line 16
    sjf_string(&sjt_call99);
#line 31 "sjController.sj"
    sjt_functionParam204 = &sjt_call99;
#line 31
    sjf_string_add(sjt_parent136, sjt_functionParam204, &sjt_funcold22);
#line 31
    if (html._refCount == 1) { sjf_string_destroy(&html); }
;
#line 18 "lib/sj-lib-common/string.sj"
    sjf_string_copy(&html, &sjt_funcold22);
#line 18
    (*_return) = (sjs_string*)malloc(sizeof(sjs_string));
#line 18
    (*_return)->_refCount = 1;
#line 21 "sjController.sj"
    sjf_string_copy((*_return), &html);

    if (html._refCount == 1) { sjf_string_destroy(&html); }
;
    if (model._refCount == 1) { sjf_json_value_destroy(&model); }
;
    if (people._refCount == 1) { sjf_array_value_destroy(&people); }
;
    if (sjt_call81._refCount == 1) { sjf_json_value_destroy(&sjt_call81); }
;
    if (sjt_call82._refCount == 1) { sjf_string_destroy(&sjt_call82); }
;
    if (sjt_call83._refCount == 1) { sjf_json_value_destroy(&sjt_call83); }
;
    if (sjt_call84._refCount == 1) { sjf_string_destroy(&sjt_call84); }
;
    if (sjt_call85._refCount == 1) { sjf_json_value_destroy(&sjt_call85); }
;
    if (sjt_call86._refCount == 1) { sjf_string_destroy(&sjt_call86); }
;
    if (sjt_call87._refCount == 1) { sjf_json_value_destroy(&sjt_call87); }
;
    if (sjt_call88._refCount == 1) { sjf_string_destroy(&sjt_call88); }
;
    if (sjt_call99._refCount == 1) { sjf_string_destroy(&sjt_call99); }
;
    if (sjt_funcold22._refCount == 1) { sjf_string_destroy(&sjt_funcold22); }
;
    if (test._refCount == 1) { sjf_string_destroy(&test); }
;
}

void sjf_hash_string_value(sjs_hash_string_value* _this) {
#line 233 "lib/sj-lib-common/hash.sj"
    _this->_hash = kh_init(string_value_hash_type);
}

void sjf_hash_string_value__weakptrremovekey(sjs_hash_string_value* _parent, sjs_string* key) {
#line 188 "lib/sj-lib-common/hash.sj"
    #if false
#line 189
    khash_t(string_value_hash_type)* p = (khash_t(string_value_hash_type)*)_parent->_hash;    
#line 190
    khiter_t k = kh_get(string_value_hash_type, p, key);
#line 191
    if (k != kh_end(p)) {
#line 192
        kh_del(string_value_hash_type, p, k);
#line 193
    }
#line 194
    #endif
}

void sjf_hash_string_value__weakptrremovevalue(sjs_hash_string_value* _parent, sjs_json_value* val) {
#line 200 "lib/sj-lib-common/hash.sj"
    #if false
#line 201
    khash_t(string_value_hash_type)* p = (khash_t(string_value_hash_type)*)_parent->_hash;
#line 202
    for (khiter_t k = kh_begin(p); k != kh_end(p); ++k) {
#line 203
        if (kh_exist(p, k)) {
#line 204
            sjs_json_value t = kh_value(p, k);
#line 205
            if (t == val) {
#line 206
                kh_del(string_value_hash_type, p, k);
#line 207
            }
#line 208
        }
#line 209
    }
#line 210
    #endif
}

void sjf_hash_string_value_copy(sjs_hash_string_value* _this, sjs_hash_string_value* _from) {
#line 238 "lib/sj-lib-common/hash.sj"
    _this->_hash = _from->_hash;
#line 239
    khash_t(string_value_hash_type)* p = (khash_t(string_value_hash_type)*)_this->_hash;
#line 240
    p->refcount++;
}

void sjf_hash_string_value_destroy(sjs_hash_string_value* _this) {
#line 244 "lib/sj-lib-common/hash.sj"
    khash_t(string_value_hash_type)* p = (khash_t(string_value_hash_type)*)_this->_hash;
#line 245
    p->refcount--;
#line 246
    if (p->refcount == 0) {
#line 247
        for (khiter_t k = kh_begin(p); k != kh_end(p); ++k) {
#line 248
            if (kh_exist(p, k)) {
#line 250
                #if false
#line 251
                delete_cb cb = { p, (void(*)(void*, void*))sjf_hash_string_value__weakptrremovekey };
#line 252
                weakptr_cb_remove(kh_key(p, k), cb);
#line 253
                #else
#line 254
                ;
#line 255
                #endif
#line 257
                #if false
#line 258
                delete_cb cb = { p, (void(*)(void*, void*))sjf_hash_string_value__weakptrremovevalue };
#line 259
                weakptr_cb_remove(kh_value(p, k), cb);
#line 260
                #else
#line 261
                ;
#line 262
                #endif
#line 263
            }
#line 264
        }
#line 265
        kh_destroy(string_value_hash_type, (khash_t(string_value_hash_type)*)_this->_hash);
#line 266
    }
}

void sjf_hash_string_value_getat(sjs_hash_string_value* _parent, sjs_string* key, sjs_json_value* _return) {
#line 23 "lib/sj-lib-common/hash.sj"
    khash_t(string_value_hash_type)* p = (khash_t(string_value_hash_type)*)_parent->_hash;
#line 25
    #if true
#line 26
    khiter_t k = kh_get(string_value_hash_type, p, *key);
#line 27
    #else
#line 28
    khiter_t k = kh_get(string_value_hash_type, p, key);
#line 29
    #endif
#line 31
    if (k == kh_end(p)) {
#line 32
        #line 22 "lib/sj-lib-common/hash.sj"
_return->_refCount = -1;
return;
#line 33
    }
#line 34
    #line 22 "lib/sj-lib-common/hash.sj"
sjs_json_value* copyoption30 = (kh_val(p, k)._refCount != -1 ? &kh_val(p, k) : 0);
if (copyoption30 != 0) {
    _return->_refCount = 1;
#line 22 "lib/sj-lib-common/hash.sj"
    sjf_json_value_copy(_return, copyoption30);
} else {
    _return->_refCount = -1;
}
return;;
}

void sjf_hash_string_value_getat_heap(sjs_hash_string_value* _parent, sjs_string* key, sjs_json_value** _return) {
#line 23 "lib/sj-lib-common/hash.sj"
    khash_t(string_value_hash_type)* p = (khash_t(string_value_hash_type)*)_parent->_hash;
#line 25
    #if true
#line 26
    khiter_t k = kh_get(string_value_hash_type, p, *key);
#line 27
    #else
#line 28
    khiter_t k = kh_get(string_value_hash_type, p, key);
#line 29
    #endif
#line 31
    if (k == kh_end(p)) {
#line 32
        #line 22 "lib/sj-lib-common/hash.sj"
(*_return) = 0;
if ((*_return) != 0) {
    (*_return)->_refCount++;
}
return;
#line 33
    }
#line 34
    #line 22 "lib/sj-lib-common/hash.sj"
sjs_json_value* copyoption31 = (kh_val(p, k)._refCount != -1 ? &kh_val(p, k) : 0);
if (copyoption31 != 0) {
    (*_return) = 0;
#line 22 "lib/sj-lib-common/hash.sj"
    sjf_json_value_copy((*_return), copyoption31);
} else {
    (*_return) = 0;
}
return;;
}

void sjf_hash_string_value_heap(sjs_hash_string_value* _this) {
#line 233 "lib/sj-lib-common/hash.sj"
    _this->_hash = kh_init(string_value_hash_type);
}

void sjf_hash_string_value_setat(sjs_hash_string_value* _parent, sjs_string* key, sjs_json_value* val) {
#line 40 "lib/sj-lib-common/hash.sj"
    khash_t(string_value_hash_type)* p = (khash_t(string_value_hash_type)*)_parent->_hash;
#line 42
    #if true
#line 43
    khiter_t k = kh_get(string_value_hash_type, p, *key);
#line 44
    #else
#line 45
    khiter_t k = kh_get(string_value_hash_type, p, key);
#line 46
    #endif
#line 48
    if (k != kh_end(p)) {            
#line 49
    ;
#line 50
}
#line 52
int ret;
#line 53
#if true
#line 54
k = kh_put(string_value_hash_type, p, *key, &ret);
#line 55
#else
#line 56
k = kh_put(string_value_hash_type, p, key, &ret);
#line 57
#endif
#line 59
if (!ret) kh_del(string_value_hash_type, p, k);
#line 61
#if false
#line 62
delete_cb cb = { _parent, (void(*)(void*, void*))sjf_hash_string_value__weakptrremovekey };
#line 63
weakptr_cb_add(key, cb);
#line 64
#else
#line 65
sjs_string t;
#line 66
t._refCount = 1;
#line 38 "lib/sj-lib-common/hash.sj"
sjf_string_copy(&t, key);
;
#line 67
#endif
#line 69
#if false
#line 70
delete_cb cb = { _parent, (void(*)(void*, void*))sjf_hash_string_value__weakptrremovevalue };
#line 71
weakptr_cb_add(val, cb);
#line 72
kh_val(p, k) = val;
#line 73
#else
#line 74
kh_val(p, k)._refCount = 1;
#line 38 "lib/sj-lib-common/hash.sj"
sjf_json_value_copy(&kh_val(p, k), val);
;
#line 75
#endif
}

void sjf_hash_type_bool(sjs_hash_type_bool* _this) {
#line 233 "lib/sj-lib-common/hash.sj"
    _this->_hash = kh_init(type_bool_hash_type);
}

void sjf_hash_type_bool__weakptrremovekey(sjs_hash_type_bool* _parent, int32_t key) {
#line 188 "lib/sj-lib-common/hash.sj"
    #if false
#line 189
    khash_t(type_bool_hash_type)* p = (khash_t(type_bool_hash_type)*)_parent->_hash;    
#line 190
    khiter_t k = kh_get(type_bool_hash_type, p, key);
#line 191
    if (k != kh_end(p)) {
#line 192
        kh_del(type_bool_hash_type, p, k);
#line 193
    }
#line 194
    #endif
}

void sjf_hash_type_bool__weakptrremovevalue(sjs_hash_type_bool* _parent, bool val) {
#line 200 "lib/sj-lib-common/hash.sj"
    #if false
#line 201
    khash_t(type_bool_hash_type)* p = (khash_t(type_bool_hash_type)*)_parent->_hash;
#line 202
    for (khiter_t k = kh_begin(p); k != kh_end(p); ++k) {
#line 203
        if (kh_exist(p, k)) {
#line 204
            bool t = kh_value(p, k);
#line 205
            if (t == val) {
#line 206
                kh_del(type_bool_hash_type, p, k);
#line 207
            }
#line 208
        }
#line 209
    }
#line 210
    #endif
}

void sjf_hash_type_bool_copy(sjs_hash_type_bool* _this, sjs_hash_type_bool* _from) {
#line 238 "lib/sj-lib-common/hash.sj"
    _this->_hash = _from->_hash;
#line 239
    khash_t(type_bool_hash_type)* p = (khash_t(type_bool_hash_type)*)_this->_hash;
#line 240
    p->refcount++;
}

void sjf_hash_type_bool_destroy(sjs_hash_type_bool* _this) {
#line 244 "lib/sj-lib-common/hash.sj"
    khash_t(type_bool_hash_type)* p = (khash_t(type_bool_hash_type)*)_this->_hash;
#line 245
    p->refcount--;
#line 246
    if (p->refcount == 0) {
#line 247
        for (khiter_t k = kh_begin(p); k != kh_end(p); ++k) {
#line 248
            if (kh_exist(p, k)) {
#line 250
                #if false
#line 251
                delete_cb cb = { p, (void(*)(void*, void*))sjf_hash_type_bool__weakptrremovekey };
#line 252
                weakptr_cb_remove(kh_key(p, k), cb);
#line 253
                #else
#line 254
                ;
#line 255
                #endif
#line 257
                #if false
#line 258
                delete_cb cb = { p, (void(*)(void*, void*))sjf_hash_type_bool__weakptrremovevalue };
#line 259
                weakptr_cb_remove(kh_value(p, k), cb);
#line 260
                #else
#line 261
                ;
#line 262
                #endif
#line 263
            }
#line 264
        }
#line 265
        kh_destroy(type_bool_hash_type, (khash_t(type_bool_hash_type)*)_this->_hash);
#line 266
    }
}

void sjf_hash_type_bool_heap(sjs_hash_type_bool* _this) {
#line 233 "lib/sj-lib-common/hash.sj"
    _this->_hash = kh_init(type_bool_hash_type);
}

void sjf_i32_max(int32_t a, int32_t b, int32_t* _return) {
    if (a < b) {
#line 6 "lib/sj-lib-common/i32.sj"
        (*_return) = b;
    } else {
#line 6 "lib/sj-lib-common/i32.sj"
        (*_return) = a;
    }
}

void sjf_json_parse(sjs_string* s, sjs_json_value* _return) {
    sjs_tuple2_i32_value result = { -1 };
    sjs_string* sjt_functionParam107 = 0;
    int32_t sjt_functionParam108;
    sjs_json_value sjt_value2 = { -1 };

#line 168 "lib/sj-lib-json/parse.sj"
    sjt_functionParam107 = s;
#line 169
    sjt_functionParam108 = 0;
#line 169
    sjf_json_parse_value(sjt_functionParam107, sjt_functionParam108, &result);
    if ((&result)->item1 == s->count) {
        sjt_value2._refCount = 1;
#line 171 "lib/sj-lib-json/parse.sj"
        sjf_json_value_copy(&sjt_value2, &(&result)->item2);
#line 171
        sjs_json_value* copyoption25 = &sjt_value2;
        if (copyoption25 != 0) {
            _return->_refCount = 1;
#line 171 "lib/sj-lib-json/parse.sj"
            sjf_json_value_copy(_return, copyoption25);
        } else {
            _return->_refCount = -1;
        }
    } else {
#line 173 "lib/sj-lib-json/parse.sj"
        _return->_refCount = -1;
    }

    if (result._refCount == 1) { sjf_tuple2_i32_value_destroy(&result); }
;
    if (sjt_value2._refCount == 1) { sjf_json_value_destroy(&sjt_value2); }
;
}

void sjf_json_parse_heap(sjs_string* s, sjs_json_value** _return) {
    sjs_tuple2_i32_value result = { -1 };
    sjs_string* sjt_functionParam109 = 0;
    int32_t sjt_functionParam110;

#line 168 "lib/sj-lib-json/parse.sj"
    sjt_functionParam109 = s;
#line 169
    sjt_functionParam110 = 0;
#line 169
    sjf_json_parse_value(sjt_functionParam109, sjt_functionParam110, &result);
    if ((&result)->item1 == s->count) {
        sjs_json_value* sjt_value3 = 0;

        sjt_value3 = (sjs_json_value*)malloc(sizeof(sjs_json_value));
        sjt_value3->_refCount = 1;
#line 171 "lib/sj-lib-json/parse.sj"
        sjf_json_value_copy(sjt_value3, (&(&result)->item2));
#line 171
        (*_return) = sjt_value3;
        if ((*_return) != 0) {
            (*_return)->_refCount++;
        }

        sjt_value3->_refCount--;
        if (sjt_value3->_refCount <= 0) {
            weakptr_release(sjt_value3);
            sjf_json_value_destroy(sjt_value3);
            free(sjt_value3);
        }
    } else {
#line 173 "lib/sj-lib-json/parse.sj"
        (*_return) = 0;
        if ((*_return) != 0) {
            (*_return)->_refCount++;
        }
    }

    if (result._refCount == 1) { sjf_tuple2_i32_value_destroy(&result); }
;
}

void sjf_json_parse_number(sjs_string* s, int32_t startindex, sjs_tuple2_i32_string* _return) {
    int32_t index;
    bool isescaped;
    bool ismatched;
    int32_t sjt_functionParam60;
    int32_t sjt_functionParam61;
    sjs_string* sjt_parent32 = 0;
    bool sjt_while6;

#line 41 "lib/sj-lib-json/parse.sj"
    isescaped = false;
#line 40
    index = startindex;
#line 43
    ismatched = true;
    if (index < s->count) {
#line 44 "lib/sj-lib-json/parse.sj"
        sjt_while6 = ismatched;
    } else {
#line 44 "lib/sj-lib-json/parse.sj"
        sjt_while6 = false;
    }

    while (sjt_while6) {
        char ch;
        bool sjt_capture23;
        bool sjt_capture24;
        int32_t sjt_functionParam59;
        sjs_string* sjt_parent31 = 0;

#line 40 "lib/sj-lib-json/parse.sj"
        sjt_parent31 = s;
#line 45
        sjt_functionParam59 = index;
#line 45
        sjf_string_getat(sjt_parent31, sjt_functionParam59, &ch);
        if (ch >= '0') {
#line 46 "lib/sj-lib-json/parse.sj"
            sjt_capture23 = (ch <= '9');
        } else {
#line 46 "lib/sj-lib-json/parse.sj"
            sjt_capture23 = false;
        }

        if (ch >= 'a') {
#line 46 "lib/sj-lib-json/parse.sj"
            sjt_capture24 = (ch <= 'z');
        } else {
#line 46 "lib/sj-lib-json/parse.sj"
            sjt_capture24 = false;
        }

        if (sjt_capture23 || ((ch == '.') || sjt_capture24)) {
#line 47 "lib/sj-lib-json/parse.sj"
            index = index + 1;
        } else {
#line 49 "lib/sj-lib-json/parse.sj"
            ismatched = false;
        }

        if (index < s->count) {
#line 44 "lib/sj-lib-json/parse.sj"
            sjt_while6 = ismatched;
        } else {
#line 44 "lib/sj-lib-json/parse.sj"
            sjt_while6 = false;
        }
    }

#line 43
    _return->_refCount = 1;
#line 53
    _return->item1 = index;
#line 40
    sjt_parent32 = s;
#line 40
    sjt_functionParam60 = startindex;
#line 53
    sjt_functionParam61 = index - startindex;
#line 53
    sjf_string_substr(sjt_parent32, sjt_functionParam60, sjt_functionParam61, &_return->item2);
#line 53
    sjf_tuple2_i32_string(_return);
}

void sjf_json_parse_number_heap(sjs_string* s, int32_t startindex, sjs_tuple2_i32_string** _return) {
    int32_t index;
    bool isescaped;
    bool ismatched;
    int32_t sjt_functionParam63;
    int32_t sjt_functionParam64;
    sjs_string* sjt_parent34 = 0;
    bool sjt_while7;

#line 41 "lib/sj-lib-json/parse.sj"
    isescaped = false;
#line 40
    index = startindex;
#line 43
    ismatched = true;
    if (index < s->count) {
#line 44 "lib/sj-lib-json/parse.sj"
        sjt_while7 = ismatched;
    } else {
#line 44 "lib/sj-lib-json/parse.sj"
        sjt_while7 = false;
    }

    while (sjt_while7) {
        char ch;
        bool sjt_capture25;
        bool sjt_capture26;
        int32_t sjt_functionParam62;
        sjs_string* sjt_parent33 = 0;

#line 40 "lib/sj-lib-json/parse.sj"
        sjt_parent33 = s;
#line 45
        sjt_functionParam62 = index;
#line 45
        sjf_string_getat(sjt_parent33, sjt_functionParam62, &ch);
        if (ch >= '0') {
#line 46 "lib/sj-lib-json/parse.sj"
            sjt_capture25 = (ch <= '9');
        } else {
#line 46 "lib/sj-lib-json/parse.sj"
            sjt_capture25 = false;
        }

        if (ch >= 'a') {
#line 46 "lib/sj-lib-json/parse.sj"
            sjt_capture26 = (ch <= 'z');
        } else {
#line 46 "lib/sj-lib-json/parse.sj"
            sjt_capture26 = false;
        }

        if (sjt_capture25 || ((ch == '.') || sjt_capture26)) {
#line 47 "lib/sj-lib-json/parse.sj"
            index = index + 1;
        } else {
#line 49 "lib/sj-lib-json/parse.sj"
            ismatched = false;
        }

        if (index < s->count) {
#line 44 "lib/sj-lib-json/parse.sj"
            sjt_while7 = ismatched;
        } else {
#line 44 "lib/sj-lib-json/parse.sj"
            sjt_while7 = false;
        }
    }

#line 43
    (*_return) = (sjs_tuple2_i32_string*)malloc(sizeof(sjs_tuple2_i32_string));
#line 43
    (*_return)->_refCount = 1;
#line 53
    (*_return)->item1 = index;
#line 40
    sjt_parent34 = s;
#line 40
    sjt_functionParam63 = startindex;
#line 53
    sjt_functionParam64 = index - startindex;
#line 53
    sjf_string_substr(sjt_parent34, sjt_functionParam63, sjt_functionParam64, &(*_return)->item2);
#line 53
    sjf_tuple2_i32_string_heap((*_return));
}

void sjf_json_parse_string(sjs_string* s, int32_t startindex, sjs_tuple2_i32_string* _return) {
    int32_t index;
    bool isescaped;
    bool ismatched;
    bool sjt_while3;

#line 17 "lib/sj-lib-json/parse.sj"
    isescaped = false;
#line 18
    index = startindex + 1;
#line 19
    ismatched = false;
    if (index < s->count) {
        bool result3;

#line 20 "lib/sj-lib-json/parse.sj"
        result3 = !ismatched;
#line 20
        sjt_while3 = result3;
    } else {
#line 20 "lib/sj-lib-json/parse.sj"
        sjt_while3 = false;
    }

    while (sjt_while3) {
        char ch;
        bool result4;
        bool sjt_capture8;
        int32_t sjt_functionParam16;
        sjs_string* sjt_parent10 = 0;

#line 16 "lib/sj-lib-json/parse.sj"
        sjt_parent10 = s;
#line 21
        sjt_functionParam16 = index;
#line 21
        sjf_string_getat(sjt_parent10, sjt_functionParam16, &ch);
#line 22
        result4 = !isescaped;
        if (result4) {
#line 22 "lib/sj-lib-json/parse.sj"
            sjt_capture8 = (ch == '\\');
        } else {
#line 22 "lib/sj-lib-json/parse.sj"
            sjt_capture8 = false;
        }

        if (sjt_capture8) {
#line 23 "lib/sj-lib-json/parse.sj"
            isescaped = true;
        } else {
            if (ch == '\"') {
#line 26 "lib/sj-lib-json/parse.sj"
                ismatched = true;
            }

#line 28 "lib/sj-lib-json/parse.sj"
            isescaped = false;
        }

#line 30
        index = index + 1;
        if (index < s->count) {
            bool result5;

#line 20 "lib/sj-lib-json/parse.sj"
            result5 = !ismatched;
#line 20
            sjt_while3 = result5;
        } else {
#line 20 "lib/sj-lib-json/parse.sj"
            sjt_while3 = false;
        }
    }

    if (ismatched) {
        int32_t sjt_functionParam19;
        int32_t sjt_functionParam20;
        sjs_string* sjt_parent13 = 0;

        _return->_refCount = 1;
#line 34 "lib/sj-lib-json/parse.sj"
        _return->item1 = index;
#line 16
        sjt_parent13 = s;
#line 16
        sjt_functionParam19 = startindex;
#line 34
        sjt_functionParam20 = index - startindex;
#line 34
        sjf_string_substr(sjt_parent13, sjt_functionParam19, sjt_functionParam20, &_return->item2);
#line 34
        sjf_tuple2_i32_string(_return);
    } else {
        _return->_refCount = 1;
#line 36 "lib/sj-lib-json/parse.sj"
        _return->item1 = s->count + 1;
#line 36
        _return->item2._refCount = 1;
#line 36
        _return->item2.offset = 0;
#line 36
        _return->item2.count = 0;
#line 36
        _return->item2.data._refCount = 1;
#line 36
        _return->item2.data.v = &sjg_string3;
#line 36
        sjf_array_char(&_return->item2.data);
#line 16 "lib/sj-lib-common/string.sj"
        _return->item2._isnullterminated = false;
#line 16
        sjf_string(&_return->item2);
#line 16
        sjf_tuple2_i32_string(_return);
    }
}

void sjf_json_parse_string_heap(sjs_string* s, int32_t startindex, sjs_tuple2_i32_string** _return) {
    int32_t index;
    bool isescaped;
    bool ismatched;
    bool sjt_while4;

#line 17 "lib/sj-lib-json/parse.sj"
    isescaped = false;
#line 18
    index = startindex + 1;
#line 19
    ismatched = false;
    if (index < s->count) {
        bool result6;

#line 20 "lib/sj-lib-json/parse.sj"
        result6 = !ismatched;
#line 20
        sjt_while4 = result6;
    } else {
#line 20 "lib/sj-lib-json/parse.sj"
        sjt_while4 = false;
    }

    while (sjt_while4) {
        char ch;
        bool result7;
        bool sjt_capture11;
        int32_t sjt_functionParam21;
        sjs_string* sjt_parent14 = 0;

#line 16 "lib/sj-lib-json/parse.sj"
        sjt_parent14 = s;
#line 21
        sjt_functionParam21 = index;
#line 21
        sjf_string_getat(sjt_parent14, sjt_functionParam21, &ch);
#line 22
        result7 = !isescaped;
        if (result7) {
#line 22 "lib/sj-lib-json/parse.sj"
            sjt_capture11 = (ch == '\\');
        } else {
#line 22 "lib/sj-lib-json/parse.sj"
            sjt_capture11 = false;
        }

        if (sjt_capture11) {
#line 23 "lib/sj-lib-json/parse.sj"
            isescaped = true;
        } else {
            if (ch == '\"') {
#line 26 "lib/sj-lib-json/parse.sj"
                ismatched = true;
            }

#line 28 "lib/sj-lib-json/parse.sj"
            isescaped = false;
        }

#line 30
        index = index + 1;
        if (index < s->count) {
            bool result8;

#line 20 "lib/sj-lib-json/parse.sj"
            result8 = !ismatched;
#line 20
            sjt_while4 = result8;
        } else {
#line 20 "lib/sj-lib-json/parse.sj"
            sjt_while4 = false;
        }
    }

    if (ismatched) {
        int32_t sjt_functionParam22;
        int32_t sjt_functionParam23;
        sjs_string* sjt_parent15 = 0;

        (*_return) = (sjs_tuple2_i32_string*)malloc(sizeof(sjs_tuple2_i32_string));
        (*_return)->_refCount = 1;
#line 34 "lib/sj-lib-json/parse.sj"
        (*_return)->item1 = index;
#line 16
        sjt_parent15 = s;
#line 16
        sjt_functionParam22 = startindex;
#line 34
        sjt_functionParam23 = index - startindex;
#line 34
        sjf_string_substr(sjt_parent15, sjt_functionParam22, sjt_functionParam23, &(*_return)->item2);
#line 34
        sjf_tuple2_i32_string_heap((*_return));
    } else {
        (*_return) = (sjs_tuple2_i32_string*)malloc(sizeof(sjs_tuple2_i32_string));
        (*_return)->_refCount = 1;
#line 36 "lib/sj-lib-json/parse.sj"
        (*_return)->item1 = s->count + 1;
#line 36
        (*_return)->item2._refCount = 1;
#line 36
        (*_return)->item2.offset = 0;
#line 36
        (*_return)->item2.count = 0;
#line 36
        (*_return)->item2.data._refCount = 1;
#line 36
        (*_return)->item2.data.v = &sjg_string3;
#line 36
        sjf_array_char(&(*_return)->item2.data);
#line 16 "lib/sj-lib-common/string.sj"
        (*_return)->item2._isnullterminated = false;
#line 16
        sjf_string(&(*_return)->item2);
#line 16
        sjf_tuple2_i32_string_heap((*_return));
    }
}

void sjf_json_parse_value(sjs_string* s, int32_t startindex, sjs_tuple2_i32_value* _return) {
    int32_t index;
    sjs_string* sjt_functionParam6 = 0;
    int32_t sjt_functionParam7;
    int32_t sjt_functionParam8;
    sjs_string* sjt_parent6 = 0;
    char underscore1;

#line 56 "lib/sj-lib-json/parse.sj"
    sjt_functionParam6 = s;
#line 56
    sjt_functionParam7 = startindex;
#line 56
    sjf_json_parse_whitespace(sjt_functionParam6, sjt_functionParam7, &index);
#line 56
    sjt_parent6 = s;
#line 59
    sjt_functionParam8 = index;
#line 59
    sjf_string_getat(sjt_parent6, sjt_functionParam8, &underscore1);
    if (underscore1 == '{') {
        sjs_hash_string_value h = { -1 };
        bool isfirst;
        bool shouldcontinue;
        bool sjt_while2;

        h._refCount = 1;
        sjf_hash_string_value(&h);
#line 63 "lib/sj-lib-json/parse.sj"
        index = index + 1;
#line 64
        isfirst = true;
#line 65
        shouldcontinue = true;
        if (index < s->count) {
#line 66 "lib/sj-lib-json/parse.sj"
            sjt_while2 = shouldcontinue;
        } else {
#line 66 "lib/sj-lib-json/parse.sj"
            sjt_while2 = false;
        }

        while (sjt_while2) {
            sjs_string key = { -1 };
            sjs_tuple2_i32_string keyresult = { -1 };
            int32_t sjt_funcold2;
            int32_t sjt_functionParam10;
            sjs_string* sjt_functionParam9 = 0;
            sjs_json_value value = { -1 };
            sjs_tuple2_i32_value valueresult = { -1 };

#line 56 "lib/sj-lib-json/parse.sj"
            sjt_functionParam9 = s;
#line 67
            sjt_functionParam10 = index;
#line 67
            sjf_json_parse_whitespace(sjt_functionParam9, sjt_functionParam10, &sjt_funcold2);
#line 2
            index = sjt_funcold2;
            if (isfirst) {
                bool sjt_capture3;

#line 69 "lib/sj-lib-json/parse.sj"
                isfirst = false;
                if (index < s->count) {
                    char sjt_capture4;
                    int32_t sjt_functionParam11;
                    sjs_string* sjt_parent7 = 0;

#line 56 "lib/sj-lib-json/parse.sj"
                    sjt_parent7 = s;
#line 70
                    sjt_functionParam11 = index;
#line 70
                    sjf_string_getat(sjt_parent7, sjt_functionParam11, &sjt_capture4);
#line 70
                    sjt_capture3 = (sjt_capture4 == '}');
                } else {
#line 70 "lib/sj-lib-json/parse.sj"
                    sjt_capture3 = false;
                }

                if (sjt_capture3) {
#line 71 "lib/sj-lib-json/parse.sj"
                    index = index + 1;
#line 72
                    shouldcontinue = false;
                }
            } else {
                char sjt_capture5;
                int32_t sjt_functionParam12;
                sjs_string* sjt_parent8 = 0;

#line 56 "lib/sj-lib-json/parse.sj"
                sjt_parent8 = s;
#line 75
                sjt_functionParam12 = index;
#line 75
                sjf_string_getat(sjt_parent8, sjt_functionParam12, &sjt_capture5);
                if (sjt_capture5 == ',') {
                    int32_t sjt_funcold3;
                    sjs_string* sjt_functionParam13 = 0;
                    int32_t sjt_functionParam14;

#line 76 "lib/sj-lib-json/parse.sj"
                    index = index + 1;
#line 56
                    sjt_functionParam13 = s;
#line 77
                    sjt_functionParam14 = index;
#line 77
                    sjf_json_parse_whitespace(sjt_functionParam13, sjt_functionParam14, &sjt_funcold3);
#line 2
                    index = sjt_funcold3;
                } else {
#line 79 "lib/sj-lib-json/parse.sj"
                    index = s->count + 1;
                }
            }

            if (shouldcontinue) {
                bool sjt_capture6;

                if (index < s->count) {
                    char sjt_capture7;
                    int32_t sjt_functionParam15;
                    sjs_string* sjt_parent9 = 0;

#line 56 "lib/sj-lib-json/parse.sj"
                    sjt_parent9 = s;
#line 84
                    sjt_functionParam15 = index;
#line 84
                    sjf_string_getat(sjt_parent9, sjt_functionParam15, &sjt_capture7);
#line 84
                    sjt_capture6 = (sjt_capture7 == '\"');
                } else {
#line 84 "lib/sj-lib-json/parse.sj"
                    sjt_capture6 = false;
                }

                if (sjt_capture6) {
                    char sjt_capture12;
                    bool sjt_capture13;
                    int32_t sjt_funcold4;
                    int32_t sjt_funcold5;
                    int32_t sjt_funcold6;
                    sjs_string* sjt_functionParam24 = 0;
                    int32_t sjt_functionParam25;
                    sjs_string* sjt_functionParam28 = 0;
                    int32_t sjt_functionParam29;
                    int32_t sjt_functionParam30;
                    sjs_string* sjt_functionParam31 = 0;
                    int32_t sjt_functionParam32;
                    sjs_string* sjt_functionParam33 = 0;
                    int32_t sjt_functionParam34;
                    sjs_string* sjt_functionParam35 = 0;
                    sjs_json_value* sjt_functionParam36 = 0;
                    sjs_string* sjt_functionParam37 = 0;
                    int32_t sjt_functionParam38;
                    sjs_string* sjt_parent17 = 0;
                    sjs_hash_string_value* sjt_parent18 = 0;

#line 56 "lib/sj-lib-json/parse.sj"
                    sjt_functionParam24 = s;
#line 85
                    sjt_functionParam25 = index;
#line 85
                    sjf_json_parse_string(sjt_functionParam24, sjt_functionParam25, &keyresult);
#line 86
                    index = (&keyresult)->item1 + 1;
                    if ((&(&keyresult)->item2)->count > 0) {
                        int32_t sjt_functionParam26;
                        int32_t sjt_functionParam27;
                        sjs_string* sjt_parent16 = 0;

#line 47 "lib/sj-lib-common/string.sj"
                        sjt_parent16 = &(&keyresult)->item2;
#line 87 "lib/sj-lib-json/parse.sj"
                        sjt_functionParam26 = 1;
#line 87
                        sjt_functionParam27 = (&(&keyresult)->item2)->count - 2;
#line 87
                        sjf_string_substr(sjt_parent16, sjt_functionParam26, sjt_functionParam27, &key);
                    } else {
                        key._refCount = 1;
#line 87 "lib/sj-lib-json/parse.sj"
                        key.offset = 0;
#line 87
                        key.count = 0;
#line 87
                        key.data._refCount = 1;
#line 87
                        key.data.v = &sjg_string3;
#line 87
                        sjf_array_char(&key.data);
#line 16 "lib/sj-lib-common/string.sj"
                        key._isnullterminated = false;
#line 16
                        sjf_string(&key);
                    }

#line 56
                    sjt_functionParam28 = s;
#line 89
                    sjt_functionParam29 = index;
#line 89
                    sjf_json_parse_whitespace(sjt_functionParam28, sjt_functionParam29, &sjt_funcold4);
#line 2
                    index = sjt_funcold4;
#line 56
                    sjt_parent17 = s;
#line 91
                    sjt_functionParam30 = index;
#line 91
                    sjf_string_getat(sjt_parent17, sjt_functionParam30, &sjt_capture12);
                    if (sjt_capture12 == ':') {
#line 92 "lib/sj-lib-json/parse.sj"
                        index = index + 1;
                    } else {
#line 94 "lib/sj-lib-json/parse.sj"
                        index = s->count + 1;
                    }

#line 56
                    sjt_functionParam31 = s;
#line 97
                    sjt_functionParam32 = index;
#line 97
                    sjf_json_parse_whitespace(sjt_functionParam31, sjt_functionParam32, &sjt_funcold5);
#line 2
                    index = sjt_funcold5;
#line 56
                    sjt_functionParam33 = s;
#line 99
                    sjt_functionParam34 = index;
#line 99
                    sjf_json_parse_value(sjt_functionParam33, sjt_functionParam34, &valueresult);
#line 100
                    index = (&valueresult)->item1;
#line 100
                    value._refCount = 1;
#line 101
                    sjf_json_value_copy(&value, &(&valueresult)->item2);
#line 38 "lib/sj-lib-common/hash.sj"
                    sjt_parent18 = &h;
#line 103 "lib/sj-lib-json/parse.sj"
                    sjt_functionParam35 = &key;
#line 103
                    sjt_functionParam36 = &value;
#line 103
                    sjf_hash_string_value_setat(sjt_parent18, sjt_functionParam35, sjt_functionParam36);
#line 56
                    sjt_functionParam37 = s;
#line 105
                    sjt_functionParam38 = index;
#line 105
                    sjf_json_parse_whitespace(sjt_functionParam37, sjt_functionParam38, &sjt_funcold6);
#line 2
                    index = sjt_funcold6;
                    if (index < s->count) {
                        char sjt_capture14;
                        int32_t sjt_functionParam39;
                        sjs_string* sjt_parent19 = 0;

#line 56 "lib/sj-lib-json/parse.sj"
                        sjt_parent19 = s;
#line 107
                        sjt_functionParam39 = index;
#line 107
                        sjf_string_getat(sjt_parent19, sjt_functionParam39, &sjt_capture14);
#line 107
                        sjt_capture13 = (sjt_capture14 == '}');
                    } else {
#line 107 "lib/sj-lib-json/parse.sj"
                        sjt_capture13 = false;
                    }

                    if (sjt_capture13) {
#line 108 "lib/sj-lib-json/parse.sj"
                        index = index + 1;
#line 109
                        shouldcontinue = false;
                    }
                } else {
#line 112 "lib/sj-lib-json/parse.sj"
                    index = s->count + 1;
                }
            }

            if (index < s->count) {
#line 66 "lib/sj-lib-json/parse.sj"
                sjt_while2 = shouldcontinue;
            } else {
#line 66 "lib/sj-lib-json/parse.sj"
                sjt_while2 = false;
            }

            if (key._refCount == 1) { sjf_string_destroy(&key); }
;
            if (keyresult._refCount == 1) { sjf_tuple2_i32_string_destroy(&keyresult); }
;
            if (value._refCount == 1) { sjf_json_value_destroy(&value); }
;
            if (valueresult._refCount == 1) { sjf_tuple2_i32_value_destroy(&valueresult); }
;
        }

#line 65
        _return->_refCount = 1;
#line 116
        _return->item1 = index;
#line 116
        _return->item2._refCount = 1;
#line 3 "lib/sj-lib-json/value.sj"
        _return->item2.s._refCount = -1;
#line 4
        _return->item2.a._refCount = -1;
#line 116 "lib/sj-lib-json/parse.sj"
        sjs_hash_string_value* copyoption17 = &h;
        if (copyoption17 != 0) {
            _return->item2.h._refCount = 1;
#line 116 "lib/sj-lib-json/parse.sj"
            sjf_hash_string_value_copy(&_return->item2.h, copyoption17);
        } else {
            _return->item2.h._refCount = -1;
        }

#line 116
        sjf_json_value(&_return->item2);
#line 116
        sjf_tuple2_i32_value(_return);

        if (h._refCount == 1) { sjf_hash_string_value_destroy(&h); }
;
    } else {
        if (underscore1 == '[') {
            bool isfirst;
            sjs_list_value l = { -1 };
            bool shouldcontinue;
            bool sjt_while5;

            l._refCount = 1;
            l.arr._refCount = 1;
#line 27 "lib/sj-lib-common/array.sj"
            l.arr.v = 0;
#line 27
            sjf_array_value(&l.arr);
#line 27
            sjf_list_value(&l);
#line 121 "lib/sj-lib-json/parse.sj"
            index = index + 1;
#line 122
            isfirst = true;
#line 123
            shouldcontinue = true;
            if (index < s->count) {
#line 124 "lib/sj-lib-json/parse.sj"
                sjt_while5 = shouldcontinue;
            } else {
#line 124 "lib/sj-lib-json/parse.sj"
                sjt_while5 = false;
            }

            while (sjt_while5) {
                bool sjt_capture21;
                int32_t sjt_funcold7;
                int32_t sjt_funcold9;
                sjs_string* sjt_functionParam40 = 0;
                int32_t sjt_functionParam41;
                sjs_string* sjt_functionParam44 = 0;
                int32_t sjt_functionParam45;
                sjs_json_value* sjt_functionParam53 = 0;
                sjs_string* sjt_functionParam54 = 0;
                int32_t sjt_functionParam55;
                sjs_list_value* sjt_parent29 = 0;
                sjs_json_value value = { -1 };
                sjs_tuple2_i32_value valueresult = { -1 };

#line 56 "lib/sj-lib-json/parse.sj"
                sjt_functionParam40 = s;
#line 125
                sjt_functionParam41 = index;
#line 125
                sjf_json_parse_whitespace(sjt_functionParam40, sjt_functionParam41, &sjt_funcold7);
#line 2
                index = sjt_funcold7;
                if (isfirst) {
                    bool sjt_capture15;

#line 127 "lib/sj-lib-json/parse.sj"
                    isfirst = false;
                    if (index < s->count) {
                        char sjt_capture16;
                        int32_t sjt_functionParam42;
                        sjs_string* sjt_parent20 = 0;

#line 56 "lib/sj-lib-json/parse.sj"
                        sjt_parent20 = s;
#line 128
                        sjt_functionParam42 = index;
#line 128
                        sjf_string_getat(sjt_parent20, sjt_functionParam42, &sjt_capture16);
#line 128
                        sjt_capture15 = (sjt_capture16 == ']');
                    } else {
#line 128 "lib/sj-lib-json/parse.sj"
                        sjt_capture15 = false;
                    }

                    if (sjt_capture15) {
#line 129 "lib/sj-lib-json/parse.sj"
                        index = index + 1;
#line 130
                        shouldcontinue = false;
                    }
                } else {
                    char sjt_capture17;
                    int32_t sjt_functionParam43;
                    sjs_string* sjt_parent21 = 0;

#line 56 "lib/sj-lib-json/parse.sj"
                    sjt_parent21 = s;
#line 133
                    sjt_functionParam43 = index;
#line 133
                    sjf_string_getat(sjt_parent21, sjt_functionParam43, &sjt_capture17);
                    if (sjt_capture17 == ',') {
#line 134 "lib/sj-lib-json/parse.sj"
                        index = index + 1;
                    } else {
#line 136 "lib/sj-lib-json/parse.sj"
                        index = s->count + 1;
                    }
                }

#line 56
                sjt_functionParam44 = s;
#line 140
                sjt_functionParam45 = index;
#line 140
                sjf_json_parse_value(sjt_functionParam44, sjt_functionParam45, &valueresult);
#line 141
                index = (&valueresult)->item1;
#line 141
                value._refCount = 1;
#line 142
                sjf_json_value_copy(&value, &(&valueresult)->item2);
#line 44 "lib/sj-lib-common/list.sj"
                sjt_parent29 = &l;
#line 144 "lib/sj-lib-json/parse.sj"
                sjt_functionParam53 = &value;
#line 144
                sjf_list_value_add(sjt_parent29, sjt_functionParam53);
#line 56
                sjt_functionParam54 = s;
#line 146
                sjt_functionParam55 = index;
#line 146
                sjf_json_parse_whitespace(sjt_functionParam54, sjt_functionParam55, &sjt_funcold9);
#line 2
                index = sjt_funcold9;
                if (index < s->count) {
                    char sjt_capture22;
                    int32_t sjt_functionParam56;
                    sjs_string* sjt_parent30 = 0;

#line 56 "lib/sj-lib-json/parse.sj"
                    sjt_parent30 = s;
#line 148
                    sjt_functionParam56 = index;
#line 148
                    sjf_string_getat(sjt_parent30, sjt_functionParam56, &sjt_capture22);
#line 148
                    sjt_capture21 = (sjt_capture22 == ']');
                } else {
#line 148 "lib/sj-lib-json/parse.sj"
                    sjt_capture21 = false;
                }

                if (sjt_capture21) {
#line 149 "lib/sj-lib-json/parse.sj"
                    index = index + 1;
#line 150
                    shouldcontinue = false;
                }

                if (index < s->count) {
#line 124 "lib/sj-lib-json/parse.sj"
                    sjt_while5 = shouldcontinue;
                } else {
#line 124 "lib/sj-lib-json/parse.sj"
                    sjt_while5 = false;
                }

                if (value._refCount == 1) { sjf_json_value_destroy(&value); }
;
                if (valueresult._refCount == 1) { sjf_tuple2_i32_value_destroy(&valueresult); }
;
            }

#line 123
            _return->_refCount = 1;
#line 153
            _return->item1 = index;
#line 153
            _return->item2._refCount = 1;
#line 3 "lib/sj-lib-json/value.sj"
            _return->item2.s._refCount = -1;
#line 153 "lib/sj-lib-json/parse.sj"
            sjs_array_value* copyoption18 = &(&l)->arr;
            if (copyoption18 != 0) {
                _return->item2.a._refCount = 1;
#line 153 "lib/sj-lib-json/parse.sj"
                sjf_array_value_copy(&_return->item2.a, copyoption18);
            } else {
                _return->item2.a._refCount = -1;
            }

#line 5 "lib/sj-lib-json/value.sj"
            _return->item2.h._refCount = -1;
#line 5
            sjf_json_value(&_return->item2);
#line 5
            sjf_tuple2_i32_value(_return);

            if (l._refCount == 1) { sjf_list_value_destroy(&l); }
;
        } else {
            if (underscore1 == '\"') {
                sjs_tuple2_i32_string result = { -1 };
                sjs_string* sjt_functionParam57 = 0;
                int32_t sjt_functionParam58;

#line 56 "lib/sj-lib-json/parse.sj"
                sjt_functionParam57 = s;
#line 157
                sjt_functionParam58 = index;
#line 157
                sjf_json_parse_string(sjt_functionParam57, sjt_functionParam58, &result);
#line 157
                _return->_refCount = 1;
#line 158
                _return->item1 = (&result)->item1;
#line 158
                _return->item2._refCount = 1;
#line 158
                sjs_string* copyoption19 = &(&result)->item2;
                if (copyoption19 != 0) {
                    _return->item2.s._refCount = 1;
#line 158 "lib/sj-lib-json/parse.sj"
                    sjf_string_copy(&_return->item2.s, copyoption19);
                } else {
                    _return->item2.s._refCount = -1;
                }

#line 4 "lib/sj-lib-json/value.sj"
                _return->item2.a._refCount = -1;
#line 5
                _return->item2.h._refCount = -1;
#line 5
                sjf_json_value(&_return->item2);
#line 5
                sjf_tuple2_i32_value(_return);

                if (result._refCount == 1) { sjf_tuple2_i32_string_destroy(&result); }
;
            } else {
                sjs_tuple2_i32_string result = { -1 };
                sjs_string* sjt_functionParam65 = 0;
                int32_t sjt_functionParam66;

#line 56 "lib/sj-lib-json/parse.sj"
                sjt_functionParam65 = s;
#line 162
                sjt_functionParam66 = index;
#line 162
                sjf_json_parse_number(sjt_functionParam65, sjt_functionParam66, &result);
#line 162
                _return->_refCount = 1;
#line 163
                _return->item1 = (&result)->item1;
#line 163
                _return->item2._refCount = 1;
#line 163
                sjs_string* copyoption20 = &(&result)->item2;
                if (copyoption20 != 0) {
                    _return->item2.s._refCount = 1;
#line 163 "lib/sj-lib-json/parse.sj"
                    sjf_string_copy(&_return->item2.s, copyoption20);
                } else {
                    _return->item2.s._refCount = -1;
                }

#line 4 "lib/sj-lib-json/value.sj"
                _return->item2.a._refCount = -1;
#line 5
                _return->item2.h._refCount = -1;
#line 5
                sjf_json_value(&_return->item2);
#line 5
                sjf_tuple2_i32_value(_return);

                if (result._refCount == 1) { sjf_tuple2_i32_string_destroy(&result); }
;
            }
        }
    }
}

void sjf_json_parse_value_heap(sjs_string* s, int32_t startindex, sjs_tuple2_i32_value** _return) {
    int32_t index;
    sjs_string* sjt_functionParam67 = 0;
    int32_t sjt_functionParam68;
    int32_t sjt_functionParam69;
    sjs_string* sjt_parent35 = 0;
    char underscore2;

#line 56 "lib/sj-lib-json/parse.sj"
    sjt_functionParam67 = s;
#line 56
    sjt_functionParam68 = startindex;
#line 56
    sjf_json_parse_whitespace(sjt_functionParam67, sjt_functionParam68, &index);
#line 56
    sjt_parent35 = s;
#line 59
    sjt_functionParam69 = index;
#line 59
    sjf_string_getat(sjt_parent35, sjt_functionParam69, &underscore2);
    if (underscore2 == '{') {
        sjs_hash_string_value h = { -1 };
        bool isfirst;
        bool shouldcontinue;
        sjs_tuple2_i32_value sjt_call3 = { -1 };
        bool sjt_while8;

        h._refCount = 1;
        sjf_hash_string_value(&h);
#line 63 "lib/sj-lib-json/parse.sj"
        index = index + 1;
#line 64
        isfirst = true;
#line 65
        shouldcontinue = true;
        if (index < s->count) {
#line 66 "lib/sj-lib-json/parse.sj"
            sjt_while8 = shouldcontinue;
        } else {
#line 66 "lib/sj-lib-json/parse.sj"
            sjt_while8 = false;
        }

        while (sjt_while8) {
            sjs_string key = { -1 };
            sjs_tuple2_i32_string keyresult = { -1 };
            int32_t sjt_funcold10;
            sjs_string* sjt_functionParam70 = 0;
            int32_t sjt_functionParam71;
            sjs_json_value value = { -1 };
            sjs_tuple2_i32_value valueresult = { -1 };

#line 56 "lib/sj-lib-json/parse.sj"
            sjt_functionParam70 = s;
#line 67
            sjt_functionParam71 = index;
#line 67
            sjf_json_parse_whitespace(sjt_functionParam70, sjt_functionParam71, &sjt_funcold10);
#line 2
            index = sjt_funcold10;
            if (isfirst) {
                bool sjt_capture27;

#line 69 "lib/sj-lib-json/parse.sj"
                isfirst = false;
                if (index < s->count) {
                    char sjt_capture28;
                    int32_t sjt_functionParam72;
                    sjs_string* sjt_parent36 = 0;

#line 56 "lib/sj-lib-json/parse.sj"
                    sjt_parent36 = s;
#line 70
                    sjt_functionParam72 = index;
#line 70
                    sjf_string_getat(sjt_parent36, sjt_functionParam72, &sjt_capture28);
#line 70
                    sjt_capture27 = (sjt_capture28 == '}');
                } else {
#line 70 "lib/sj-lib-json/parse.sj"
                    sjt_capture27 = false;
                }

                if (sjt_capture27) {
#line 71 "lib/sj-lib-json/parse.sj"
                    index = index + 1;
#line 72
                    shouldcontinue = false;
                }
            } else {
                char sjt_capture29;
                int32_t sjt_functionParam73;
                sjs_string* sjt_parent37 = 0;

#line 56 "lib/sj-lib-json/parse.sj"
                sjt_parent37 = s;
#line 75
                sjt_functionParam73 = index;
#line 75
                sjf_string_getat(sjt_parent37, sjt_functionParam73, &sjt_capture29);
                if (sjt_capture29 == ',') {
                    int32_t sjt_funcold11;
                    sjs_string* sjt_functionParam74 = 0;
                    int32_t sjt_functionParam75;

#line 76 "lib/sj-lib-json/parse.sj"
                    index = index + 1;
#line 56
                    sjt_functionParam74 = s;
#line 77
                    sjt_functionParam75 = index;
#line 77
                    sjf_json_parse_whitespace(sjt_functionParam74, sjt_functionParam75, &sjt_funcold11);
#line 2
                    index = sjt_funcold11;
                } else {
#line 79 "lib/sj-lib-json/parse.sj"
                    index = s->count + 1;
                }
            }

            if (shouldcontinue) {
                bool sjt_capture30;

                if (index < s->count) {
                    char sjt_capture31;
                    int32_t sjt_functionParam76;
                    sjs_string* sjt_parent38 = 0;

#line 56 "lib/sj-lib-json/parse.sj"
                    sjt_parent38 = s;
#line 84
                    sjt_functionParam76 = index;
#line 84
                    sjf_string_getat(sjt_parent38, sjt_functionParam76, &sjt_capture31);
#line 84
                    sjt_capture30 = (sjt_capture31 == '\"');
                } else {
#line 84 "lib/sj-lib-json/parse.sj"
                    sjt_capture30 = false;
                }

                if (sjt_capture30) {
                    char sjt_capture32;
                    bool sjt_capture33;
                    int32_t sjt_funcold12;
                    int32_t sjt_funcold13;
                    int32_t sjt_funcold14;
                    sjs_string* sjt_functionParam77 = 0;
                    int32_t sjt_functionParam78;
                    sjs_string* sjt_functionParam81 = 0;
                    int32_t sjt_functionParam82;
                    int32_t sjt_functionParam83;
                    sjs_string* sjt_functionParam84 = 0;
                    int32_t sjt_functionParam85;
                    sjs_string* sjt_functionParam86 = 0;
                    int32_t sjt_functionParam87;
                    sjs_string* sjt_functionParam88 = 0;
                    sjs_json_value* sjt_functionParam89 = 0;
                    sjs_string* sjt_functionParam90 = 0;
                    int32_t sjt_functionParam91;
                    sjs_string* sjt_parent40 = 0;
                    sjs_hash_string_value* sjt_parent41 = 0;

#line 56 "lib/sj-lib-json/parse.sj"
                    sjt_functionParam77 = s;
#line 85
                    sjt_functionParam78 = index;
#line 85
                    sjf_json_parse_string(sjt_functionParam77, sjt_functionParam78, &keyresult);
#line 86
                    index = (&keyresult)->item1 + 1;
                    if ((&(&keyresult)->item2)->count > 0) {
                        int32_t sjt_functionParam79;
                        int32_t sjt_functionParam80;
                        sjs_string* sjt_parent39 = 0;

#line 47 "lib/sj-lib-common/string.sj"
                        sjt_parent39 = &(&keyresult)->item2;
#line 87 "lib/sj-lib-json/parse.sj"
                        sjt_functionParam79 = 1;
#line 87
                        sjt_functionParam80 = (&(&keyresult)->item2)->count - 2;
#line 87
                        sjf_string_substr(sjt_parent39, sjt_functionParam79, sjt_functionParam80, &key);
                    } else {
                        key._refCount = 1;
#line 87 "lib/sj-lib-json/parse.sj"
                        key.offset = 0;
#line 87
                        key.count = 0;
#line 87
                        key.data._refCount = 1;
#line 87
                        key.data.v = &sjg_string3;
#line 87
                        sjf_array_char(&key.data);
#line 16 "lib/sj-lib-common/string.sj"
                        key._isnullterminated = false;
#line 16
                        sjf_string(&key);
                    }

#line 56
                    sjt_functionParam81 = s;
#line 89
                    sjt_functionParam82 = index;
#line 89
                    sjf_json_parse_whitespace(sjt_functionParam81, sjt_functionParam82, &sjt_funcold12);
#line 2
                    index = sjt_funcold12;
#line 56
                    sjt_parent40 = s;
#line 91
                    sjt_functionParam83 = index;
#line 91
                    sjf_string_getat(sjt_parent40, sjt_functionParam83, &sjt_capture32);
                    if (sjt_capture32 == ':') {
#line 92 "lib/sj-lib-json/parse.sj"
                        index = index + 1;
                    } else {
#line 94 "lib/sj-lib-json/parse.sj"
                        index = s->count + 1;
                    }

#line 56
                    sjt_functionParam84 = s;
#line 97
                    sjt_functionParam85 = index;
#line 97
                    sjf_json_parse_whitespace(sjt_functionParam84, sjt_functionParam85, &sjt_funcold13);
#line 2
                    index = sjt_funcold13;
#line 56
                    sjt_functionParam86 = s;
#line 99
                    sjt_functionParam87 = index;
#line 99
                    sjf_json_parse_value(sjt_functionParam86, sjt_functionParam87, &valueresult);
#line 100
                    index = (&valueresult)->item1;
#line 100
                    value._refCount = 1;
#line 101
                    sjf_json_value_copy(&value, &(&valueresult)->item2);
#line 38 "lib/sj-lib-common/hash.sj"
                    sjt_parent41 = &h;
#line 103 "lib/sj-lib-json/parse.sj"
                    sjt_functionParam88 = &key;
#line 103
                    sjt_functionParam89 = &value;
#line 103
                    sjf_hash_string_value_setat(sjt_parent41, sjt_functionParam88, sjt_functionParam89);
#line 56
                    sjt_functionParam90 = s;
#line 105
                    sjt_functionParam91 = index;
#line 105
                    sjf_json_parse_whitespace(sjt_functionParam90, sjt_functionParam91, &sjt_funcold14);
#line 2
                    index = sjt_funcold14;
                    if (index < s->count) {
                        char sjt_capture34;
                        int32_t sjt_functionParam92;
                        sjs_string* sjt_parent42 = 0;

#line 56 "lib/sj-lib-json/parse.sj"
                        sjt_parent42 = s;
#line 107
                        sjt_functionParam92 = index;
#line 107
                        sjf_string_getat(sjt_parent42, sjt_functionParam92, &sjt_capture34);
#line 107
                        sjt_capture33 = (sjt_capture34 == '}');
                    } else {
#line 107 "lib/sj-lib-json/parse.sj"
                        sjt_capture33 = false;
                    }

                    if (sjt_capture33) {
#line 108 "lib/sj-lib-json/parse.sj"
                        index = index + 1;
#line 109
                        shouldcontinue = false;
                    }
                } else {
#line 112 "lib/sj-lib-json/parse.sj"
                    index = s->count + 1;
                }
            }

            if (index < s->count) {
#line 66 "lib/sj-lib-json/parse.sj"
                sjt_while8 = shouldcontinue;
            } else {
#line 66 "lib/sj-lib-json/parse.sj"
                sjt_while8 = false;
            }

            if (key._refCount == 1) { sjf_string_destroy(&key); }
;
            if (keyresult._refCount == 1) { sjf_tuple2_i32_string_destroy(&keyresult); }
;
            if (value._refCount == 1) { sjf_json_value_destroy(&value); }
;
            if (valueresult._refCount == 1) { sjf_tuple2_i32_value_destroy(&valueresult); }
;
        }

#line 65
        sjt_call3._refCount = 1;
#line 116
        sjt_call3.item1 = index;
#line 116
        sjt_call3.item2._refCount = 1;
#line 3 "lib/sj-lib-json/value.sj"
        sjt_call3.item2.s._refCount = -1;
#line 4
        sjt_call3.item2.a._refCount = -1;
#line 116 "lib/sj-lib-json/parse.sj"
        sjs_hash_string_value* copyoption21 = &h;
        if (copyoption21 != 0) {
            sjt_call3.item2.h._refCount = 1;
#line 116 "lib/sj-lib-json/parse.sj"
            sjf_hash_string_value_copy(&sjt_call3.item2.h, copyoption21);
        } else {
            sjt_call3.item2.h._refCount = -1;
        }

#line 116
        sjf_json_value(&sjt_call3.item2);
#line 116
        sjf_tuple2_i32_value(&sjt_call3);
#line 116
        (*_return) = (sjs_tuple2_i32_value*)malloc(sizeof(sjs_tuple2_i32_value));
#line 116
        (*_return)->_refCount = 1;
#line 116
        sjf_tuple2_i32_value_copy((*_return), &sjt_call3);

        if (h._refCount == 1) { sjf_hash_string_value_destroy(&h); }
;
        if (sjt_call3._refCount == 1) { sjf_tuple2_i32_value_destroy(&sjt_call3); }
;
    } else {
        if (underscore2 == '[') {
            bool isfirst;
            sjs_list_value l = { -1 };
            bool shouldcontinue;
            sjs_tuple2_i32_value sjt_call4 = { -1 };
            bool sjt_while9;

            l._refCount = 1;
            l.arr._refCount = 1;
#line 27 "lib/sj-lib-common/array.sj"
            l.arr.v = 0;
#line 27
            sjf_array_value(&l.arr);
#line 27
            sjf_list_value(&l);
#line 121 "lib/sj-lib-json/parse.sj"
            index = index + 1;
#line 122
            isfirst = true;
#line 123
            shouldcontinue = true;
            if (index < s->count) {
#line 124 "lib/sj-lib-json/parse.sj"
                sjt_while9 = shouldcontinue;
            } else {
#line 124 "lib/sj-lib-json/parse.sj"
                sjt_while9 = false;
            }

            while (sjt_while9) {
                bool sjt_capture38;
                int32_t sjt_funcold15;
                int32_t sjt_funcold16;
                sjs_string* sjt_functionParam100 = 0;
                int32_t sjt_functionParam101;
                sjs_string* sjt_functionParam93 = 0;
                int32_t sjt_functionParam94;
                sjs_string* sjt_functionParam97 = 0;
                int32_t sjt_functionParam98;
                sjs_json_value* sjt_functionParam99 = 0;
                sjs_list_value* sjt_parent45 = 0;
                sjs_json_value value = { -1 };
                sjs_tuple2_i32_value valueresult = { -1 };

#line 56 "lib/sj-lib-json/parse.sj"
                sjt_functionParam93 = s;
#line 125
                sjt_functionParam94 = index;
#line 125
                sjf_json_parse_whitespace(sjt_functionParam93, sjt_functionParam94, &sjt_funcold15);
#line 2
                index = sjt_funcold15;
                if (isfirst) {
                    bool sjt_capture35;

#line 127 "lib/sj-lib-json/parse.sj"
                    isfirst = false;
                    if (index < s->count) {
                        char sjt_capture36;
                        int32_t sjt_functionParam95;
                        sjs_string* sjt_parent43 = 0;

#line 56 "lib/sj-lib-json/parse.sj"
                        sjt_parent43 = s;
#line 128
                        sjt_functionParam95 = index;
#line 128
                        sjf_string_getat(sjt_parent43, sjt_functionParam95, &sjt_capture36);
#line 128
                        sjt_capture35 = (sjt_capture36 == ']');
                    } else {
#line 128 "lib/sj-lib-json/parse.sj"
                        sjt_capture35 = false;
                    }

                    if (sjt_capture35) {
#line 129 "lib/sj-lib-json/parse.sj"
                        index = index + 1;
#line 130
                        shouldcontinue = false;
                    }
                } else {
                    char sjt_capture37;
                    int32_t sjt_functionParam96;
                    sjs_string* sjt_parent44 = 0;

#line 56 "lib/sj-lib-json/parse.sj"
                    sjt_parent44 = s;
#line 133
                    sjt_functionParam96 = index;
#line 133
                    sjf_string_getat(sjt_parent44, sjt_functionParam96, &sjt_capture37);
                    if (sjt_capture37 == ',') {
#line 134 "lib/sj-lib-json/parse.sj"
                        index = index + 1;
                    } else {
#line 136 "lib/sj-lib-json/parse.sj"
                        index = s->count + 1;
                    }
                }

#line 56
                sjt_functionParam97 = s;
#line 140
                sjt_functionParam98 = index;
#line 140
                sjf_json_parse_value(sjt_functionParam97, sjt_functionParam98, &valueresult);
#line 141
                index = (&valueresult)->item1;
#line 141
                value._refCount = 1;
#line 142
                sjf_json_value_copy(&value, &(&valueresult)->item2);
#line 44 "lib/sj-lib-common/list.sj"
                sjt_parent45 = &l;
#line 144 "lib/sj-lib-json/parse.sj"
                sjt_functionParam99 = &value;
#line 144
                sjf_list_value_add(sjt_parent45, sjt_functionParam99);
#line 56
                sjt_functionParam100 = s;
#line 146
                sjt_functionParam101 = index;
#line 146
                sjf_json_parse_whitespace(sjt_functionParam100, sjt_functionParam101, &sjt_funcold16);
#line 2
                index = sjt_funcold16;
                if (index < s->count) {
                    char sjt_capture39;
                    int32_t sjt_functionParam102;
                    sjs_string* sjt_parent46 = 0;

#line 56 "lib/sj-lib-json/parse.sj"
                    sjt_parent46 = s;
#line 148
                    sjt_functionParam102 = index;
#line 148
                    sjf_string_getat(sjt_parent46, sjt_functionParam102, &sjt_capture39);
#line 148
                    sjt_capture38 = (sjt_capture39 == ']');
                } else {
#line 148 "lib/sj-lib-json/parse.sj"
                    sjt_capture38 = false;
                }

                if (sjt_capture38) {
#line 149 "lib/sj-lib-json/parse.sj"
                    index = index + 1;
#line 150
                    shouldcontinue = false;
                }

                if (index < s->count) {
#line 124 "lib/sj-lib-json/parse.sj"
                    sjt_while9 = shouldcontinue;
                } else {
#line 124 "lib/sj-lib-json/parse.sj"
                    sjt_while9 = false;
                }

                if (value._refCount == 1) { sjf_json_value_destroy(&value); }
;
                if (valueresult._refCount == 1) { sjf_tuple2_i32_value_destroy(&valueresult); }
;
            }

#line 123
            sjt_call4._refCount = 1;
#line 153
            sjt_call4.item1 = index;
#line 153
            sjt_call4.item2._refCount = 1;
#line 3 "lib/sj-lib-json/value.sj"
            sjt_call4.item2.s._refCount = -1;
#line 153 "lib/sj-lib-json/parse.sj"
            sjs_array_value* copyoption22 = &(&l)->arr;
            if (copyoption22 != 0) {
                sjt_call4.item2.a._refCount = 1;
#line 153 "lib/sj-lib-json/parse.sj"
                sjf_array_value_copy(&sjt_call4.item2.a, copyoption22);
            } else {
                sjt_call4.item2.a._refCount = -1;
            }

#line 5 "lib/sj-lib-json/value.sj"
            sjt_call4.item2.h._refCount = -1;
#line 5
            sjf_json_value(&sjt_call4.item2);
#line 5
            sjf_tuple2_i32_value(&sjt_call4);
#line 5
            (*_return) = (sjs_tuple2_i32_value*)malloc(sizeof(sjs_tuple2_i32_value));
#line 5
            (*_return)->_refCount = 1;
#line 153 "lib/sj-lib-json/parse.sj"
            sjf_tuple2_i32_value_copy((*_return), &sjt_call4);

            if (l._refCount == 1) { sjf_list_value_destroy(&l); }
;
            if (sjt_call4._refCount == 1) { sjf_tuple2_i32_value_destroy(&sjt_call4); }
;
        } else {
            if (underscore2 == '\"') {
                sjs_tuple2_i32_string result = { -1 };
                sjs_tuple2_i32_value sjt_call5 = { -1 };
                sjs_string* sjt_functionParam103 = 0;
                int32_t sjt_functionParam104;

#line 56 "lib/sj-lib-json/parse.sj"
                sjt_functionParam103 = s;
#line 157
                sjt_functionParam104 = index;
#line 157
                sjf_json_parse_string(sjt_functionParam103, sjt_functionParam104, &result);
#line 157
                sjt_call5._refCount = 1;
#line 158
                sjt_call5.item1 = (&result)->item1;
#line 158
                sjt_call5.item2._refCount = 1;
#line 158
                sjs_string* copyoption23 = &(&result)->item2;
                if (copyoption23 != 0) {
                    sjt_call5.item2.s._refCount = 1;
#line 158 "lib/sj-lib-json/parse.sj"
                    sjf_string_copy(&sjt_call5.item2.s, copyoption23);
                } else {
                    sjt_call5.item2.s._refCount = -1;
                }

#line 4 "lib/sj-lib-json/value.sj"
                sjt_call5.item2.a._refCount = -1;
#line 5
                sjt_call5.item2.h._refCount = -1;
#line 5
                sjf_json_value(&sjt_call5.item2);
#line 5
                sjf_tuple2_i32_value(&sjt_call5);
#line 5
                (*_return) = (sjs_tuple2_i32_value*)malloc(sizeof(sjs_tuple2_i32_value));
#line 5
                (*_return)->_refCount = 1;
#line 158 "lib/sj-lib-json/parse.sj"
                sjf_tuple2_i32_value_copy((*_return), &sjt_call5);

                if (result._refCount == 1) { sjf_tuple2_i32_string_destroy(&result); }
;
                if (sjt_call5._refCount == 1) { sjf_tuple2_i32_value_destroy(&sjt_call5); }
;
            } else {
                sjs_tuple2_i32_string result = { -1 };
                sjs_tuple2_i32_value sjt_call6 = { -1 };
                sjs_string* sjt_functionParam105 = 0;
                int32_t sjt_functionParam106;

#line 56 "lib/sj-lib-json/parse.sj"
                sjt_functionParam105 = s;
#line 162
                sjt_functionParam106 = index;
#line 162
                sjf_json_parse_number(sjt_functionParam105, sjt_functionParam106, &result);
#line 162
                sjt_call6._refCount = 1;
#line 163
                sjt_call6.item1 = (&result)->item1;
#line 163
                sjt_call6.item2._refCount = 1;
#line 163
                sjs_string* copyoption24 = &(&result)->item2;
                if (copyoption24 != 0) {
                    sjt_call6.item2.s._refCount = 1;
#line 163 "lib/sj-lib-json/parse.sj"
                    sjf_string_copy(&sjt_call6.item2.s, copyoption24);
                } else {
                    sjt_call6.item2.s._refCount = -1;
                }

#line 4 "lib/sj-lib-json/value.sj"
                sjt_call6.item2.a._refCount = -1;
#line 5
                sjt_call6.item2.h._refCount = -1;
#line 5
                sjf_json_value(&sjt_call6.item2);
#line 5
                sjf_tuple2_i32_value(&sjt_call6);
#line 5
                (*_return) = (sjs_tuple2_i32_value*)malloc(sizeof(sjs_tuple2_i32_value));
#line 5
                (*_return)->_refCount = 1;
#line 163 "lib/sj-lib-json/parse.sj"
                sjf_tuple2_i32_value_copy((*_return), &sjt_call6);

                if (result._refCount == 1) { sjf_tuple2_i32_string_destroy(&result); }
;
                if (sjt_call6._refCount == 1) { sjf_tuple2_i32_value_destroy(&sjt_call6); }
;
            }
        }
    }
}

void sjf_json_parse_whitespace(sjs_string* s, int32_t startindex, int32_t* _return) {
    int32_t index;
    bool ismatched;
    bool sjt_while1;

#line 2 "lib/sj-lib-json/parse.sj"
    index = startindex;
#line 4
    ismatched = true;
    if (index < s->count) {
#line 5 "lib/sj-lib-json/parse.sj"
        sjt_while1 = ismatched;
    } else {
#line 5 "lib/sj-lib-json/parse.sj"
        sjt_while1 = false;
    }

    while (sjt_while1) {
        char ch;
        int32_t sjt_functionParam5;
        sjs_string* sjt_parent5 = 0;

#line 2 "lib/sj-lib-json/parse.sj"
        sjt_parent5 = s;
#line 6
        sjt_functionParam5 = index;
#line 6
        sjf_string_getat(sjt_parent5, sjt_functionParam5, &ch);
        if ((ch == '\r') || ((ch == '\n') || ((ch == '\t') || (ch == (' '))))) {
#line 8 "lib/sj-lib-json/parse.sj"
            index = index + 1;
        } else {
#line 10 "lib/sj-lib-json/parse.sj"
            ismatched = false;
        }

        if (index < s->count) {
#line 5 "lib/sj-lib-json/parse.sj"
            sjt_while1 = ismatched;
        } else {
#line 5 "lib/sj-lib-json/parse.sj"
            sjt_while1 = false;
        }
    }

#line 2
    (*_return) = index;
}

void sjf_json_value(sjs_json_value* _this) {
}

void sjf_json_value_asstring(sjs_json_value* _parent, sjs_string* _return) {
    if (((_parent->s._refCount != -1 ? &_parent->s : 0) != 0)) {
        sjs_string* ifValue3 = 0;
        bool sjt_capture45;
        char sjt_capture46;
        int32_t sjt_functionParam129;
        sjs_string* sjt_parent57 = 0;

#line 16 "lib/sj-lib-json/value.sj"
        ifValue3 = (_parent->s._refCount != -1 ? &_parent->s : 0);
#line 63 "lib/sj-lib-common/string.sj"
        sjt_parent57 = ifValue3;
#line 17 "lib/sj-lib-json/value.sj"
        sjt_functionParam129 = 0;
#line 17
        sjf_string_getat(sjt_parent57, sjt_functionParam129, &sjt_capture46);
        if (sjt_capture46 == '\"') {
            char sjt_capture47;
            int32_t sjt_functionParam130;
            sjs_string* sjt_parent58 = 0;

#line 63 "lib/sj-lib-common/string.sj"
            sjt_parent58 = ifValue3;
#line 17 "lib/sj-lib-json/value.sj"
            sjt_functionParam130 = ifValue3->count - 1;
#line 17
            sjf_string_getat(sjt_parent58, sjt_functionParam130, &sjt_capture47);
#line 17
            sjt_capture45 = (sjt_capture47 == '\"');
        } else {
#line 17 "lib/sj-lib-json/value.sj"
            sjt_capture45 = false;
        }

        if (sjt_capture45) {
            int32_t sjt_functionParam131;
            int32_t sjt_functionParam132;
            sjs_string* sjt_parent59 = 0;

#line 47 "lib/sj-lib-common/string.sj"
            sjt_parent59 = ifValue3;
#line 18 "lib/sj-lib-json/value.sj"
            sjt_functionParam131 = 1;
#line 18
            sjt_functionParam132 = ifValue3->count - 2;
#line 18
            sjf_string_substr(sjt_parent59, sjt_functionParam131, sjt_functionParam132, _return);
        } else {
            _return->_refCount = 1;
#line 20 "lib/sj-lib-json/value.sj"
            sjf_string_copy(_return, ifValue3);
        }
    } else {
        _return->_refCount = 1;
#line 23 "lib/sj-lib-json/value.sj"
        _return->offset = 0;
#line 23
        _return->count = 0;
#line 23
        _return->data._refCount = 1;
#line 23
        _return->data.v = &sjg_string3;
#line 23
        sjf_array_char(&_return->data);
#line 16 "lib/sj-lib-common/string.sj"
        _return->_isnullterminated = false;
#line 16
        sjf_string(_return);
    }
}

void sjf_json_value_asstring_heap(sjs_json_value* _parent, sjs_string** _return) {
    if (((_parent->s._refCount != -1 ? &_parent->s : 0) != 0)) {
        sjs_string* ifValue4 = 0;
        bool sjt_capture48;
        char sjt_capture49;
        int32_t sjt_functionParam133;
        sjs_string* sjt_parent60 = 0;

#line 16 "lib/sj-lib-json/value.sj"
        ifValue4 = (_parent->s._refCount != -1 ? &_parent->s : 0);
#line 63 "lib/sj-lib-common/string.sj"
        sjt_parent60 = ifValue4;
#line 17 "lib/sj-lib-json/value.sj"
        sjt_functionParam133 = 0;
#line 17
        sjf_string_getat(sjt_parent60, sjt_functionParam133, &sjt_capture49);
        if (sjt_capture49 == '\"') {
            char sjt_capture50;
            int32_t sjt_functionParam134;
            sjs_string* sjt_parent61 = 0;

#line 63 "lib/sj-lib-common/string.sj"
            sjt_parent61 = ifValue4;
#line 17 "lib/sj-lib-json/value.sj"
            sjt_functionParam134 = ifValue4->count - 1;
#line 17
            sjf_string_getat(sjt_parent61, sjt_functionParam134, &sjt_capture50);
#line 17
            sjt_capture48 = (sjt_capture50 == '\"');
        } else {
#line 17 "lib/sj-lib-json/value.sj"
            sjt_capture48 = false;
        }

        if (sjt_capture48) {
            int32_t sjt_functionParam135;
            int32_t sjt_functionParam136;
            sjs_string* sjt_parent62 = 0;

#line 47 "lib/sj-lib-common/string.sj"
            sjt_parent62 = ifValue4;
#line 18 "lib/sj-lib-json/value.sj"
            sjt_functionParam135 = 1;
#line 18
            sjt_functionParam136 = ifValue4->count - 2;
#line 18
            sjf_string_substr_heap(sjt_parent62, sjt_functionParam135, sjt_functionParam136, _return);
        } else {
            (*_return) = (sjs_string*)malloc(sizeof(sjs_string));
            (*_return)->_refCount = 1;
#line 20 "lib/sj-lib-json/value.sj"
            sjf_string_copy((*_return), ifValue4);
        }
    } else {
        (*_return) = (sjs_string*)malloc(sizeof(sjs_string));
        (*_return)->_refCount = 1;
#line 23 "lib/sj-lib-json/value.sj"
        (*_return)->offset = 0;
#line 23
        (*_return)->count = 0;
#line 23
        (*_return)->data._refCount = 1;
#line 23
        (*_return)->data.v = &sjg_string3;
#line 23
        sjf_array_char(&(*_return)->data);
#line 16 "lib/sj-lib-common/string.sj"
        (*_return)->_isnullterminated = false;
#line 16
        sjf_string_heap((*_return));
    }
}

void sjf_json_value_copy(sjs_json_value* _this, sjs_json_value* _from) {
#line 2 "lib/sj-lib-json/value.sj"
    sjs_string* copyoption14 = (_from->s._refCount != -1 ? &_from->s : 0);
    if (copyoption14 != 0) {
        _this->s._refCount = 1;
#line 2 "lib/sj-lib-json/value.sj"
        sjf_string_copy(&_this->s, copyoption14);
    } else {
        _this->s._refCount = -1;
    }

#line 2
    sjs_array_value* copyoption15 = (_from->a._refCount != -1 ? &_from->a : 0);
    if (copyoption15 != 0) {
        _this->a._refCount = 1;
#line 2 "lib/sj-lib-json/value.sj"
        sjf_array_value_copy(&_this->a, copyoption15);
    } else {
        _this->a._refCount = -1;
    }

#line 2
    sjs_hash_string_value* copyoption16 = (_from->h._refCount != -1 ? &_from->h : 0);
    if (copyoption16 != 0) {
        _this->h._refCount = 1;
#line 2 "lib/sj-lib-json/value.sj"
        sjf_hash_string_value_copy(&_this->h, copyoption16);
    } else {
        _this->h._refCount = -1;
    }
}

void sjf_json_value_destroy(sjs_json_value* _this) {
    if (_this->s._refCount == 1) { sjf_string_destroy(&_this->s); }
;
    if (_this->a._refCount == 1) { sjf_array_value_destroy(&_this->a); }
;
    if (_this->h._refCount == 1) { sjf_hash_string_value_destroy(&_this->h); }
;
}

void sjf_json_value_getat(sjs_json_value* _parent, sjs_string* key, sjs_json_value* _return) {
    if (((_parent->h._refCount != -1 ? &_parent->h : 0) != 0)) {
        sjs_hash_string_value* ifValue1 = 0;
        sjs_string* sjt_functionParam114 = 0;
        sjs_hash_string_value* sjt_parent48 = 0;

#line 8 "lib/sj-lib-json/value.sj"
        ifValue1 = (_parent->h._refCount != -1 ? &_parent->h : 0);
#line 21 "lib/sj-lib-common/hash.sj"
        sjt_parent48 = ifValue1;
#line 7 "lib/sj-lib-json/value.sj"
        sjt_functionParam114 = key;
#line 7
        sjf_hash_string_value_getat(sjt_parent48, sjt_functionParam114, _return);
    } else {
#line 11 "lib/sj-lib-json/value.sj"
        _return->_refCount = -1;
    }
}

void sjf_json_value_getat_heap(sjs_json_value* _parent, sjs_string* key, sjs_json_value** _return) {
    if (((_parent->h._refCount != -1 ? &_parent->h : 0) != 0)) {
        sjs_hash_string_value* ifValue2 = 0;
        sjs_string* sjt_functionParam115 = 0;
        sjs_hash_string_value* sjt_parent49 = 0;

#line 8 "lib/sj-lib-json/value.sj"
        ifValue2 = (_parent->h._refCount != -1 ? &_parent->h : 0);
#line 21 "lib/sj-lib-common/hash.sj"
        sjt_parent49 = ifValue2;
#line 7 "lib/sj-lib-json/value.sj"
        sjt_functionParam115 = key;
#line 7
        sjf_hash_string_value_getat_heap(sjt_parent49, sjt_functionParam115, _return);
    } else {
#line 11 "lib/sj-lib-json/value.sj"
        (*_return) = 0;
        if ((*_return) != 0) {
            (*_return)->_refCount++;
        }
    }
}

void sjf_json_value_heap(sjs_json_value* _this) {
}

void sjf_lambda6(sjs_lambda6* _this) {
}

void sjf_lambda6_copy(sjs_lambda6* _this, sjs_lambda6* _from) {
#line 11 "hyperscript.sj"
    _this->lambdaparam1 = _from->lambdaparam1;
#line 11
    _this->lambdaparam2 = _from->lambdaparam2;
#line 11
    _this->lambdaparam3 = _from->lambdaparam3;
#line 11
    _this->lambdaparam4 = _from->lambdaparam4;
#line 11
    _this->lambdaparam5 = _from->lambdaparam5;
#line 11
    _this->lambdaparam6 = _from->lambdaparam6;
#line 11
    _this->lambdaparam7 = _from->lambdaparam7;
#line 11
    _this->lambdaparam8 = _from->lambdaparam8;
#line 11
    _this->lambdaparam9 = _from->lambdaparam9;
#line 11
    _this->lambdaparam10 = _from->lambdaparam10;
}

void sjf_lambda6_destroy(sjs_lambda6* _this) {
}

void sjf_lambda6_heap(sjs_lambda6* _this) {
}

void sjf_lambda6_invoke(sjs_lambda6* _parent, sjs_tuple2_stringstring* _1) {
    sjs_string sjt_call43 = { -1 };
    sjs_string sjt_call44 = { -1 };
    sjs_string sjt_call45 = { -1 };
    sjs_string* sjt_interfaceParam3 = 0;
    sjs_string* sjt_interfaceParam4 = 0;
    sjs_string* sjt_interfaceParam5 = 0;
    sjs_string* sjt_interfaceParam6 = 0;
    sjs_string* sjt_interfaceParam7 = 0;
    sji_writer sjt_parent91 = { 0 };
    sji_writer sjt_parent92 = { 0 };
    sji_writer sjt_parent93 = { 0 };
    sji_writer sjt_parent94 = { 0 };
    sji_writer sjt_parent95 = { 0 };

#line 2 "lib/sj-lib-common/writer.sj"
    sjt_parent91 = _parent->lambdaparam1;
#line 2
    sjt_call43._refCount = 1;
#line 12 "hyperscript.sj"
    sjt_call43.offset = 0;
#line 12
    sjt_call43.count = 1;
#line 12
    sjt_call43.data._refCount = 1;
#line 12
    sjt_call43.data.v = &sjg_string13;
#line 12
    sjf_array_char(&sjt_call43.data);
#line 16 "lib/sj-lib-common/string.sj"
    sjt_call43._isnullterminated = false;
#line 16
    sjf_string(&sjt_call43);
#line 12 "hyperscript.sj"
    sjt_interfaceParam3 = &sjt_call43;
#line 12
    sjt_parent91._vtbl->write(sjt_parent91._parent, sjt_interfaceParam3);
#line 2 "lib/sj-lib-common/writer.sj"
    sjt_parent92 = _parent->lambdaparam2;
#line 13 "hyperscript.sj"
    sjt_interfaceParam4 = &_1->item1;
#line 13
    sjt_parent92._vtbl->write(sjt_parent92._parent, sjt_interfaceParam4);
#line 2 "lib/sj-lib-common/writer.sj"
    sjt_parent93 = _parent->lambdaparam3;
#line 2
    sjt_call44._refCount = 1;
#line 14 "hyperscript.sj"
    sjt_call44.offset = 0;
#line 14
    sjt_call44.count = 2;
#line 14
    sjt_call44.data._refCount = 1;
#line 14
    sjt_call44.data.v = &sjg_string14;
#line 14
    sjf_array_char(&sjt_call44.data);
#line 16 "lib/sj-lib-common/string.sj"
    sjt_call44._isnullterminated = false;
#line 16
    sjf_string(&sjt_call44);
#line 14 "hyperscript.sj"
    sjt_interfaceParam5 = &sjt_call44;
#line 14
    sjt_parent93._vtbl->write(sjt_parent93._parent, sjt_interfaceParam5);
#line 2 "lib/sj-lib-common/writer.sj"
    sjt_parent94 = _parent->lambdaparam4;
#line 15 "hyperscript.sj"
    sjt_interfaceParam6 = &_1->item2;
#line 15
    sjt_parent94._vtbl->write(sjt_parent94._parent, sjt_interfaceParam6);
#line 2 "lib/sj-lib-common/writer.sj"
    sjt_parent95 = _parent->lambdaparam5;
#line 2
    sjt_call45._refCount = 1;
#line 16 "hyperscript.sj"
    sjt_call45.offset = 0;
#line 16
    sjt_call45.count = 1;
#line 16
    sjt_call45.data._refCount = 1;
#line 16
    sjt_call45.data.v = &sjg_string15;
#line 16
    sjf_array_char(&sjt_call45.data);
#line 16 "lib/sj-lib-common/string.sj"
    sjt_call45._isnullterminated = false;
#line 16
    sjf_string(&sjt_call45);
#line 16 "hyperscript.sj"
    sjt_interfaceParam7 = &sjt_call45;
#line 16
    sjt_parent95._vtbl->write(sjt_parent95._parent, sjt_interfaceParam7);

    if (sjt_call43._refCount == 1) { sjf_string_destroy(&sjt_call43); }
;
    if (sjt_call44._refCount == 1) { sjf_string_destroy(&sjt_call44); }
;
    if (sjt_call45._refCount == 1) { sjf_string_destroy(&sjt_call45); }
;
}

void sjf_lambda7(sjs_lambda7* _this) {
}

void sjf_lambda7_copy(sjs_lambda7* _this, sjs_lambda7* _from) {
#line 22 "hyperscript.sj"
    _this->lambdaparam11 = _from->lambdaparam11;
#line 22
    _this->lambdaparam12 = _from->lambdaparam12;
}

void sjf_lambda7_destroy(sjs_lambda7* _this) {
}

void sjf_lambda7_heap(sjs_lambda7* _this) {
}

void sjf_lambda7_invoke(sjs_lambda7* _parent, sjs_h* _1) {
    sji_writer sjt_functionParam170 = { 0 };
    sjs_h* sjt_parent98 = 0;

#line 22 "hyperscript.sj"
    sjt_parent98 = _1;
#line 23
    sjt_functionParam170 = _parent->lambdaparam11;
#line 23
    sjf_h_render(sjt_parent98, sjt_functionParam170);
}

void sjf_lambda8(sjs_lambda8* _this) {
}

void sjf_lambda8_copy(sjs_lambda8* _this, sjs_lambda8* _from) {
}

void sjf_lambda8_destroy(sjs_lambda8* _this) {
}

void sjf_lambda8_heap(sjs_lambda8* _this) {
}

void sjf_lambda8_invoke(sjs_lambda8* _parent, sjs_json_value* person, sjs_h* _return) {
    sjs_array_tuple2_string_string sjt_call20 = { -1 };
    sjs_tuple2_stringstring sjt_call21 = { -1 };
    sjs_array_h sjt_call22 = { -1 };
    sjs_h sjt_call23 = { -1 };
    sjs_string sjt_call24 = { -1 };
    sjs_json_value sjt_call25 = { -1 };
    sjs_string sjt_call26 = { -1 };
    sjs_json_value sjt_call27 = { -1 };
    sjs_string sjt_call28 = { -1 };
    sjs_json_value sjt_call29 = { -1 };
    int32_t sjt_functionParam125;
    sjs_tuple2_stringstring* sjt_functionParam126 = 0;
    int32_t sjt_functionParam127;
    sjs_h* sjt_functionParam128 = 0;
    sjs_string* sjt_functionParam137 = 0;
    sjs_array_tuple2_string_string* sjt_parent55 = 0;
    sjs_array_h* sjt_parent56 = 0;
    sjs_json_value* sjt_parent63 = 0;
    sjs_json_value* sjt_parent64 = 0;

    _return->_refCount = 1;
    _return->childtagname._refCount = 1;
#line 10 "sjController.sj"
    _return->childtagname.offset = 0;
#line 10
    _return->childtagname.count = 3;
#line 10
    _return->childtagname.data._refCount = 1;
#line 10
    _return->childtagname.data.v = &sjg_string5;
#line 10
    sjf_array_char(&_return->childtagname.data);
#line 16 "lib/sj-lib-common/string.sj"
    _return->childtagname._isnullterminated = false;
#line 16
    sjf_string(&_return->childtagname);
#line 16
    sjt_call20._refCount = 1;
#line 10 "sjController.sj"
    sjt_call20.v = createarray(sizeof(sjs_tuple2_stringstring), 1);
#line 10
    sjf_array_tuple2_string_string(&sjt_call20);
#line 10
    sjs_array_tuple2_string_string* copyoption32 = &sjt_call20;
    if (copyoption32 != 0) {
        _return->attrs._refCount = 1;
#line 10 "sjController.sj"
        sjf_array_tuple2_string_string_copy(&_return->attrs, copyoption32);
    } else {
        _return->attrs._refCount = -1;
    }

#line 10
    sjs_array_tuple2_string_string* array2;
#line 10
    array2 = (_return->attrs._refCount != -1 ? &_return->attrs : 0);
#line 10
    sjt_parent55 = array2;
#line 10
    sjt_functionParam125 = 0;
#line 10
    sjt_call21._refCount = 1;
#line 10
    sjt_call21.item1._refCount = 1;
#line 10
    sjt_call21.item1.offset = 0;
#line 10
    sjt_call21.item1.count = 5;
#line 10
    sjt_call21.item1.data._refCount = 1;
#line 10
    sjt_call21.item1.data.v = &sjg_string6;
#line 10
    sjf_array_char(&sjt_call21.item1.data);
#line 16 "lib/sj-lib-common/string.sj"
    sjt_call21.item1._isnullterminated = false;
#line 16
    sjf_string(&sjt_call21.item1);
#line 16
    sjt_call21.item2._refCount = 1;
#line 10 "sjController.sj"
    sjt_call21.item2.offset = 0;
#line 10
    sjt_call21.item2.count = 6;
#line 10
    sjt_call21.item2.data._refCount = 1;
#line 10
    sjt_call21.item2.data.v = &sjg_string9;
#line 10
    sjf_array_char(&sjt_call21.item2.data);
#line 16 "lib/sj-lib-common/string.sj"
    sjt_call21.item2._isnullterminated = false;
#line 16
    sjf_string(&sjt_call21.item2);
#line 16
    sjf_tuple2_stringstring(&sjt_call21);
#line 10 "sjController.sj"
    sjt_functionParam126 = &sjt_call21;
#line 10
    sjf_array_tuple2_string_string_initat(sjt_parent55, sjt_functionParam125, sjt_functionParam126);
#line 10
    sjt_call22._refCount = 1;
#line 10
    sjt_call22.v = createarray(sizeof(sjs_h), 1);
#line 10
    sjf_array_h(&sjt_call22);
#line 10
    sjs_array_h* copyoption33 = &sjt_call22;
    if (copyoption33 != 0) {
        _return->children._refCount = 1;
#line 10 "sjController.sj"
        sjf_array_h_copy(&_return->children, copyoption33);
    } else {
        _return->children._refCount = -1;
    }

#line 10
    sjs_array_h* array3;
#line 10
    array3 = (_return->children._refCount != -1 ? &_return->children : 0);
#line 10
    sjt_parent56 = array3;
#line 10
    sjt_functionParam127 = 0;
#line 10
    sjt_call23._refCount = 1;
#line 10
    sjt_call23.childtagname._refCount = 1;
#line 11
    sjt_call23.childtagname.offset = 0;
#line 11
    sjt_call23.childtagname.count = 4;
#line 11
    sjt_call23.childtagname.data._refCount = 1;
#line 11
    sjt_call23.childtagname.data.v = &sjg_string10;
#line 11
    sjf_array_char(&sjt_call23.childtagname.data);
#line 16 "lib/sj-lib-common/string.sj"
    sjt_call23.childtagname._isnullterminated = false;
#line 16
    sjf_string(&sjt_call23.childtagname);
#line 3 "hyperscript.sj"
    sjt_call23.attrs._refCount = -1;
#line 4
    sjt_call23.children._refCount = -1;
#line 9 "sjController.sj"
    sjt_parent64 = person;
#line 9
    sjt_call26._refCount = 1;
#line 11
    sjt_call26.offset = 0;
#line 11
    sjt_call26.count = 4;
#line 11
    sjt_call26.data._refCount = 1;
#line 11
    sjt_call26.data.v = &sjg_string11;
#line 11
    sjf_array_char(&sjt_call26.data);
#line 16 "lib/sj-lib-common/string.sj"
    sjt_call26._isnullterminated = false;
#line 16
    sjf_string(&sjt_call26);
#line 11 "sjController.sj"
    sjt_functionParam137 = &sjt_call26;
#line 11
    sjf_json_value_getat(sjt_parent64, sjt_functionParam137, &sjt_call25);
    if ((sjt_call25._refCount != -1 ? &sjt_call25 : 0) != 0) {
        sjs_string* sjt_functionParam138 = 0;
        sjs_json_value* sjt_parent65 = 0;

#line 9 "sjController.sj"
        sjt_parent65 = person;
#line 9
        sjt_call28._refCount = 1;
#line 11
        sjt_call28.offset = 0;
#line 11
        sjt_call28.count = 4;
#line 11
        sjt_call28.data._refCount = 1;
#line 11
        sjt_call28.data.v = &sjg_string11;
#line 11
        sjf_array_char(&sjt_call28.data);
#line 16 "lib/sj-lib-common/string.sj"
        sjt_call28._isnullterminated = false;
#line 16
        sjf_string(&sjt_call28);
#line 11 "sjController.sj"
        sjt_functionParam138 = &sjt_call28;
#line 11
        sjf_json_value_getat(sjt_parent65, sjt_functionParam138, &sjt_call27);
#line 11
        sjt_parent63 = (sjt_call27._refCount != -1 ? &sjt_call27 : 0);
    } else {
        sjt_call29._refCount = 1;
#line 3 "lib/sj-lib-json/value.sj"
        sjt_call29.s._refCount = -1;
#line 4
        sjt_call29.a._refCount = -1;
#line 5
        sjt_call29.h._refCount = -1;
#line 5
        sjf_json_value(&sjt_call29);
#line 11 "sjController.sj"
        sjt_parent63 = &sjt_call29;
    }

#line 11
    sjf_json_value_asstring(sjt_parent63, &sjt_call24);
#line 11
    sjs_string* copyoption34 = &sjt_call24;
    if (copyoption34 != 0) {
        sjt_call23.text._refCount = 1;
#line 11 "sjController.sj"
        sjf_string_copy(&sjt_call23.text, copyoption34);
    } else {
        sjt_call23.text._refCount = -1;
    }

#line 11
    sjf_h(&sjt_call23);
#line 11
    sjt_functionParam128 = &sjt_call23;
#line 11
    sjf_array_h_initat(sjt_parent56, sjt_functionParam127, sjt_functionParam128);
#line 5 "hyperscript.sj"
    _return->text._refCount = -1;
#line 5
    sjf_h(_return);

    if (sjt_call20._refCount == 1) { sjf_array_tuple2_string_string_destroy(&sjt_call20); }
;
    if (sjt_call21._refCount == 1) { sjf_tuple2_stringstring_destroy(&sjt_call21); }
;
    if (sjt_call22._refCount == 1) { sjf_array_h_destroy(&sjt_call22); }
;
    if (sjt_call23._refCount == 1) { sjf_h_destroy(&sjt_call23); }
;
    if (sjt_call24._refCount == 1) { sjf_string_destroy(&sjt_call24); }
;
    if (sjt_call25._refCount == 1) { sjf_json_value_destroy(&sjt_call25); }
;
    if (sjt_call26._refCount == 1) { sjf_string_destroy(&sjt_call26); }
;
    if (sjt_call27._refCount == 1) { sjf_json_value_destroy(&sjt_call27); }
;
    if (sjt_call28._refCount == 1) { sjf_string_destroy(&sjt_call28); }
;
    if (sjt_call29._refCount == 1) { sjf_json_value_destroy(&sjt_call29); }
;
}

void sjf_lambda8_invoke_heap(sjs_lambda8* _parent, sjs_json_value* person, sjs_h** _return) {
    sjs_array_tuple2_string_string sjt_call30 = { -1 };
    sjs_tuple2_stringstring sjt_call31 = { -1 };
    sjs_array_h sjt_call32 = { -1 };
    sjs_h sjt_call33 = { -1 };
    sjs_string sjt_call34 = { -1 };
    sjs_json_value sjt_call35 = { -1 };
    sjs_string sjt_call36 = { -1 };
    sjs_json_value sjt_call37 = { -1 };
    sjs_string sjt_call38 = { -1 };
    sjs_json_value sjt_call39 = { -1 };
    int32_t sjt_functionParam139;
    sjs_tuple2_stringstring* sjt_functionParam140 = 0;
    int32_t sjt_functionParam141;
    sjs_h* sjt_functionParam142 = 0;
    sjs_string* sjt_functionParam143 = 0;
    sjs_array_tuple2_string_string* sjt_parent66 = 0;
    sjs_array_h* sjt_parent67 = 0;
    sjs_json_value* sjt_parent68 = 0;
    sjs_json_value* sjt_parent69 = 0;

    (*_return) = (sjs_h*)malloc(sizeof(sjs_h));
    (*_return)->_refCount = 1;
    (*_return)->childtagname._refCount = 1;
#line 10 "sjController.sj"
    (*_return)->childtagname.offset = 0;
#line 10
    (*_return)->childtagname.count = 3;
#line 10
    (*_return)->childtagname.data._refCount = 1;
#line 10
    (*_return)->childtagname.data.v = &sjg_string5;
#line 10
    sjf_array_char(&(*_return)->childtagname.data);
#line 16 "lib/sj-lib-common/string.sj"
    (*_return)->childtagname._isnullterminated = false;
#line 16
    sjf_string(&(*_return)->childtagname);
#line 16
    sjt_call30._refCount = 1;
#line 10 "sjController.sj"
    sjt_call30.v = createarray(sizeof(sjs_tuple2_stringstring), 1);
#line 10
    sjf_array_tuple2_string_string(&sjt_call30);
#line 10
    sjs_array_tuple2_string_string* copyoption35 = &sjt_call30;
    if (copyoption35 != 0) {
        (*_return)->attrs._refCount = 1;
#line 10 "sjController.sj"
        sjf_array_tuple2_string_string_copy(&(*_return)->attrs, copyoption35);
    } else {
        (*_return)->attrs._refCount = -1;
    }

#line 10
    sjs_array_tuple2_string_string* array4;
#line 10
    array4 = ((*_return)->attrs._refCount != -1 ? &(*_return)->attrs : 0);
#line 10
    sjt_parent66 = array4;
#line 10
    sjt_functionParam139 = 0;
#line 10
    sjt_call31._refCount = 1;
#line 10
    sjt_call31.item1._refCount = 1;
#line 10
    sjt_call31.item1.offset = 0;
#line 10
    sjt_call31.item1.count = 5;
#line 10
    sjt_call31.item1.data._refCount = 1;
#line 10
    sjt_call31.item1.data.v = &sjg_string6;
#line 10
    sjf_array_char(&sjt_call31.item1.data);
#line 16 "lib/sj-lib-common/string.sj"
    sjt_call31.item1._isnullterminated = false;
#line 16
    sjf_string(&sjt_call31.item1);
#line 16
    sjt_call31.item2._refCount = 1;
#line 10 "sjController.sj"
    sjt_call31.item2.offset = 0;
#line 10
    sjt_call31.item2.count = 6;
#line 10
    sjt_call31.item2.data._refCount = 1;
#line 10
    sjt_call31.item2.data.v = &sjg_string9;
#line 10
    sjf_array_char(&sjt_call31.item2.data);
#line 16 "lib/sj-lib-common/string.sj"
    sjt_call31.item2._isnullterminated = false;
#line 16
    sjf_string(&sjt_call31.item2);
#line 16
    sjf_tuple2_stringstring(&sjt_call31);
#line 10 "sjController.sj"
    sjt_functionParam140 = &sjt_call31;
#line 10
    sjf_array_tuple2_string_string_initat(sjt_parent66, sjt_functionParam139, sjt_functionParam140);
#line 10
    sjt_call32._refCount = 1;
#line 10
    sjt_call32.v = createarray(sizeof(sjs_h), 1);
#line 10
    sjf_array_h(&sjt_call32);
#line 10
    sjs_array_h* copyoption36 = &sjt_call32;
    if (copyoption36 != 0) {
        (*_return)->children._refCount = 1;
#line 10 "sjController.sj"
        sjf_array_h_copy(&(*_return)->children, copyoption36);
    } else {
        (*_return)->children._refCount = -1;
    }

#line 10
    sjs_array_h* array5;
#line 10
    array5 = ((*_return)->children._refCount != -1 ? &(*_return)->children : 0);
#line 10
    sjt_parent67 = array5;
#line 10
    sjt_functionParam141 = 0;
#line 10
    sjt_call33._refCount = 1;
#line 10
    sjt_call33.childtagname._refCount = 1;
#line 11
    sjt_call33.childtagname.offset = 0;
#line 11
    sjt_call33.childtagname.count = 4;
#line 11
    sjt_call33.childtagname.data._refCount = 1;
#line 11
    sjt_call33.childtagname.data.v = &sjg_string10;
#line 11
    sjf_array_char(&sjt_call33.childtagname.data);
#line 16 "lib/sj-lib-common/string.sj"
    sjt_call33.childtagname._isnullterminated = false;
#line 16
    sjf_string(&sjt_call33.childtagname);
#line 3 "hyperscript.sj"
    sjt_call33.attrs._refCount = -1;
#line 4
    sjt_call33.children._refCount = -1;
#line 9 "sjController.sj"
    sjt_parent69 = person;
#line 9
    sjt_call36._refCount = 1;
#line 11
    sjt_call36.offset = 0;
#line 11
    sjt_call36.count = 4;
#line 11
    sjt_call36.data._refCount = 1;
#line 11
    sjt_call36.data.v = &sjg_string11;
#line 11
    sjf_array_char(&sjt_call36.data);
#line 16 "lib/sj-lib-common/string.sj"
    sjt_call36._isnullterminated = false;
#line 16
    sjf_string(&sjt_call36);
#line 11 "sjController.sj"
    sjt_functionParam143 = &sjt_call36;
#line 11
    sjf_json_value_getat(sjt_parent69, sjt_functionParam143, &sjt_call35);
    if ((sjt_call35._refCount != -1 ? &sjt_call35 : 0) != 0) {
        sjs_string* sjt_functionParam144 = 0;
        sjs_json_value* sjt_parent70 = 0;

#line 9 "sjController.sj"
        sjt_parent70 = person;
#line 9
        sjt_call38._refCount = 1;
#line 11
        sjt_call38.offset = 0;
#line 11
        sjt_call38.count = 4;
#line 11
        sjt_call38.data._refCount = 1;
#line 11
        sjt_call38.data.v = &sjg_string11;
#line 11
        sjf_array_char(&sjt_call38.data);
#line 16 "lib/sj-lib-common/string.sj"
        sjt_call38._isnullterminated = false;
#line 16
        sjf_string(&sjt_call38);
#line 11 "sjController.sj"
        sjt_functionParam144 = &sjt_call38;
#line 11
        sjf_json_value_getat(sjt_parent70, sjt_functionParam144, &sjt_call37);
#line 11
        sjt_parent68 = (sjt_call37._refCount != -1 ? &sjt_call37 : 0);
    } else {
        sjt_call39._refCount = 1;
#line 3 "lib/sj-lib-json/value.sj"
        sjt_call39.s._refCount = -1;
#line 4
        sjt_call39.a._refCount = -1;
#line 5
        sjt_call39.h._refCount = -1;
#line 5
        sjf_json_value(&sjt_call39);
#line 11 "sjController.sj"
        sjt_parent68 = &sjt_call39;
    }

#line 11
    sjf_json_value_asstring(sjt_parent68, &sjt_call34);
#line 11
    sjs_string* copyoption37 = &sjt_call34;
    if (copyoption37 != 0) {
        sjt_call33.text._refCount = 1;
#line 11 "sjController.sj"
        sjf_string_copy(&sjt_call33.text, copyoption37);
    } else {
        sjt_call33.text._refCount = -1;
    }

#line 11
    sjf_h(&sjt_call33);
#line 11
    sjt_functionParam142 = &sjt_call33;
#line 11
    sjf_array_h_initat(sjt_parent67, sjt_functionParam141, sjt_functionParam142);
#line 5 "hyperscript.sj"
    (*_return)->text._refCount = -1;
#line 5
    sjf_h_heap((*_return));

    if (sjt_call30._refCount == 1) { sjf_array_tuple2_string_string_destroy(&sjt_call30); }
;
    if (sjt_call31._refCount == 1) { sjf_tuple2_stringstring_destroy(&sjt_call31); }
;
    if (sjt_call32._refCount == 1) { sjf_array_h_destroy(&sjt_call32); }
;
    if (sjt_call33._refCount == 1) { sjf_h_destroy(&sjt_call33); }
;
    if (sjt_call34._refCount == 1) { sjf_string_destroy(&sjt_call34); }
;
    if (sjt_call35._refCount == 1) { sjf_json_value_destroy(&sjt_call35); }
;
    if (sjt_call36._refCount == 1) { sjf_string_destroy(&sjt_call36); }
;
    if (sjt_call37._refCount == 1) { sjf_json_value_destroy(&sjt_call37); }
;
    if (sjt_call38._refCount == 1) { sjf_string_destroy(&sjt_call38); }
;
    if (sjt_call39._refCount == 1) { sjf_json_value_destroy(&sjt_call39); }
;
}

void sjf_list_value(sjs_list_value* _this) {
}

void sjf_list_value_add(sjs_list_value* _parent, sjs_json_value* item) {
    int32_t sjt_capture18;
    int32_t sjt_capture19;
    sjs_array_value sjt_funcold8 = { -1 };
    int32_t sjt_functionParam51;
    sjs_json_value* sjt_functionParam52 = 0;
    sjs_array_value* sjt_parent22 = 0;
    sjs_array_value* sjt_parent23 = 0;
    sjs_array_value* sjt_parent27 = 0;
    sjs_array_value* sjt_parent28 = 0;

#line 29 "lib/sj-lib-common/array.sj"
    sjt_parent22 = &_parent->arr;
#line 29
    sjf_array_value_getcount(sjt_parent22, &sjt_capture18);
#line 35
    sjt_parent23 = &_parent->arr;
#line 35
    sjf_array_value_gettotalcount(sjt_parent23, &sjt_capture19);
    if (sjt_capture18 == sjt_capture19) {
        int32_t sjt_capture20;
        int32_t sjt_functionParam46;
        int32_t sjt_functionParam47;
        int32_t sjt_functionParam48;
        int32_t sjt_functionParam49;
        int32_t sjt_functionParam50;
        sjs_array_value* sjt_parent24 = 0;
        sjs_array_value* sjt_parent25 = 0;
        sjs_array_value* sjt_parent26 = 0;

#line 168 "lib/sj-lib-common/array.sj"
        sjt_parent24 = &_parent->arr;
#line 46 "lib/sj-lib-common/list.sj"
        sjt_functionParam46 = 0;
#line 29 "lib/sj-lib-common/array.sj"
        sjt_parent25 = &_parent->arr;
#line 29
        sjf_array_value_getcount(sjt_parent25, &sjt_functionParam47);
#line 46 "lib/sj-lib-common/list.sj"
        sjt_functionParam49 = 10;
#line 35 "lib/sj-lib-common/array.sj"
        sjt_parent26 = &_parent->arr;
#line 35
        sjf_array_value_gettotalcount(sjt_parent26, &sjt_capture20);
#line 46 "lib/sj-lib-common/list.sj"
        sjt_functionParam50 = sjt_capture20 * 2;
#line 46
        sjf_i32_max(sjt_functionParam49, sjt_functionParam50, &sjt_functionParam48);
#line 46
        sjf_array_value_clone(sjt_parent24, sjt_functionParam46, sjt_functionParam47, sjt_functionParam48, &sjt_funcold8);
#line 46
        if (_parent->arr._refCount == 1) { sjf_array_value_destroy(&_parent->arr); }
;
#line 168 "lib/sj-lib-common/array.sj"
        sjf_array_value_copy(&_parent->arr, &sjt_funcold8);
    }

#line 52
    sjt_parent27 = &_parent->arr;
#line 29
    sjt_parent28 = &_parent->arr;
#line 29
    sjf_array_value_getcount(sjt_parent28, &sjt_functionParam51);
#line 44 "lib/sj-lib-common/list.sj"
    sjt_functionParam52 = item;
#line 44
    sjf_array_value_initat(sjt_parent27, sjt_functionParam51, sjt_functionParam52);

    if (sjt_funcold8._refCount == 1) { sjf_array_value_destroy(&sjt_funcold8); }
;
}

void sjf_list_value_copy(sjs_list_value* _this, sjs_list_value* _from) {
    _this->arr._refCount = 1;
#line 1 "lib/sj-lib-common/list.sj"
    sjf_array_value_copy(&_this->arr, &_from->arr);
}

void sjf_list_value_destroy(sjs_list_value* _this) {
    if (_this->arr._refCount == 1) { sjf_array_value_destroy(&_this->arr); }
;
}

void sjf_list_value_heap(sjs_list_value* _this) {
}

void sjf_log(sjs_log* _this) {
}

void sjf_log_copy(sjs_log* _this, sjs_log* _from) {
#line 13 "lib/sj-lib-common/log.sj"
    _this->minlevel = _from->minlevel;
#line 13
    sjs_hash_type_bool* copyoption2 = (_from->traceincludes._refCount != -1 ? &_from->traceincludes : 0);
    if (copyoption2 != 0) {
        _this->traceincludes._refCount = 1;
#line 13 "lib/sj-lib-common/log.sj"
        sjf_hash_type_bool_copy(&_this->traceincludes, copyoption2);
    } else {
        _this->traceincludes._refCount = -1;
    }

#line 13
    sjs_hash_type_bool* copyoption3 = (_from->debugincludes._refCount != -1 ? &_from->debugincludes : 0);
    if (copyoption3 != 0) {
        _this->debugincludes._refCount = 1;
#line 13 "lib/sj-lib-common/log.sj"
        sjf_hash_type_bool_copy(&_this->debugincludes, copyoption3);
    } else {
        _this->debugincludes._refCount = -1;
    }

#line 13
    sjs_hash_type_bool* copyoption4 = (_from->infoincludes._refCount != -1 ? &_from->infoincludes : 0);
    if (copyoption4 != 0) {
        _this->infoincludes._refCount = 1;
#line 13 "lib/sj-lib-common/log.sj"
        sjf_hash_type_bool_copy(&_this->infoincludes, copyoption4);
    } else {
        _this->infoincludes._refCount = -1;
    }

#line 13
    sjs_hash_type_bool* copyoption5 = (_from->warnincludes._refCount != -1 ? &_from->warnincludes : 0);
    if (copyoption5 != 0) {
        _this->warnincludes._refCount = 1;
#line 13 "lib/sj-lib-common/log.sj"
        sjf_hash_type_bool_copy(&_this->warnincludes, copyoption5);
    } else {
        _this->warnincludes._refCount = -1;
    }

#line 13
    sjs_hash_type_bool* copyoption6 = (_from->errorincludes._refCount != -1 ? &_from->errorincludes : 0);
    if (copyoption6 != 0) {
        _this->errorincludes._refCount = 1;
#line 13 "lib/sj-lib-common/log.sj"
        sjf_hash_type_bool_copy(&_this->errorincludes, copyoption6);
    } else {
        _this->errorincludes._refCount = -1;
    }

#line 13
    sjs_hash_type_bool* copyoption7 = (_from->fatalincludes._refCount != -1 ? &_from->fatalincludes : 0);
    if (copyoption7 != 0) {
        _this->fatalincludes._refCount = 1;
#line 13 "lib/sj-lib-common/log.sj"
        sjf_hash_type_bool_copy(&_this->fatalincludes, copyoption7);
    } else {
        _this->fatalincludes._refCount = -1;
    }
}

void sjf_log_destroy(sjs_log* _this) {
    if (_this->traceincludes._refCount == 1) { sjf_hash_type_bool_destroy(&_this->traceincludes); }
;
    if (_this->debugincludes._refCount == 1) { sjf_hash_type_bool_destroy(&_this->debugincludes); }
;
    if (_this->infoincludes._refCount == 1) { sjf_hash_type_bool_destroy(&_this->infoincludes); }
;
    if (_this->warnincludes._refCount == 1) { sjf_hash_type_bool_destroy(&_this->warnincludes); }
;
    if (_this->errorincludes._refCount == 1) { sjf_hash_type_bool_destroy(&_this->errorincludes); }
;
    if (_this->fatalincludes._refCount == 1) { sjf_hash_type_bool_destroy(&_this->fatalincludes); }
;
}

void sjf_log_heap(sjs_log* _this) {
}

void sjf_string(sjs_string* _this) {
}

void sjf_string_add(sjs_string* _parent, sjs_string* item, sjs_string* _return) {
    sjs_array_char newdata = { -1 };

    if (item->count == 0) {
        _return->_refCount = 1;
#line 20 "lib/sj-lib-common/string.sj"
        sjf_string_copy(_return, _parent);
    } else {
        bool sjt_capture51;
        int32_t sjt_capture52;
        sjs_array_char* sjt_parent71 = 0;

#line 35 "lib/sj-lib-common/array.sj"
        sjt_parent71 = &_parent->data;
#line 35
        sjf_array_char_gettotalcount(sjt_parent71, &sjt_capture52);
        if (((_parent->offset + _parent->count) + item->count) < sjt_capture52) {
            int32_t sjt_capture53;
            sjs_array_char* sjt_parent72 = 0;

#line 29 "lib/sj-lib-common/array.sj"
            sjt_parent72 = &_parent->data;
#line 29
            sjf_array_char_getcount(sjt_parent72, &sjt_capture53);
#line 24 "lib/sj-lib-common/string.sj"
            sjt_capture51 = ((_parent->offset + _parent->count) == sjt_capture53);
        } else {
#line 24 "lib/sj-lib-common/string.sj"
            sjt_capture51 = false;
        }

        if (sjt_capture51) {
            int32_t i;
            int32_t newcount;
            int32_t sjt_forEnd3;
            int32_t sjt_forStart3;

#line 25 "lib/sj-lib-common/string.sj"
            newcount = _parent->count;
#line 27
            sjt_forStart3 = 0;
#line 27
            sjt_forEnd3 = item->count;
#line 27
            i = sjt_forStart3;
            while (i < sjt_forEnd3) {
                int32_t sjt_functionParam145;
                char sjt_functionParam146;
                int32_t sjt_functionParam147;
                sjs_array_char* sjt_parent73 = 0;
                sjs_string* sjt_parent74 = 0;

#line 52 "lib/sj-lib-common/array.sj"
                sjt_parent73 = &_parent->data;
#line 28 "lib/sj-lib-common/string.sj"
                sjt_functionParam145 = newcount;
#line 18
                sjt_parent74 = item;
#line 27
                sjt_functionParam147 = i;
#line 27
                sjf_string_getat(sjt_parent74, sjt_functionParam147, &sjt_functionParam146);
#line 27
                sjf_array_char_initat(sjt_parent73, sjt_functionParam145, sjt_functionParam146);
#line 29
                newcount = newcount + 1;
#line 27
                i++;
            }

#line 27
            _return->_refCount = 1;
#line 32
            _return->offset = _parent->offset;
#line 32
            _return->count = newcount;
#line 32
            _return->data._refCount = 1;
#line 32
            sjf_array_char_copy(&_return->data, &_parent->data);
#line 16
            _return->_isnullterminated = false;
#line 16
            sjf_string(_return);
        } else {
            int32_t i;
            int32_t newcount;
            int32_t sjt_forEnd4;
            int32_t sjt_forStart4;
            int32_t sjt_functionParam148;
            int32_t sjt_functionParam149;
            int32_t sjt_functionParam150;
            sjs_array_char* sjt_parent75 = 0;
            sjs_array_char* sjt_parent76 = 0;

#line 168 "lib/sj-lib-common/array.sj"
            sjt_parent75 = &_parent->data;
#line 34 "lib/sj-lib-common/string.sj"
            sjt_functionParam148 = _parent->offset;
#line 34
            sjt_functionParam149 = _parent->count;
#line 34
            sjt_functionParam150 = ((((_parent->count + item->count) - 1) / 256) + 1) * 256;
#line 34
            sjf_array_char_clone(sjt_parent75, sjt_functionParam148, sjt_functionParam149, sjt_functionParam150, &newdata);
#line 29 "lib/sj-lib-common/array.sj"
            sjt_parent76 = &newdata;
#line 29
            sjf_array_char_getcount(sjt_parent76, &newcount);
#line 37 "lib/sj-lib-common/string.sj"
            sjt_forStart4 = 0;
#line 37
            sjt_forEnd4 = item->count;
#line 37
            i = sjt_forStart4;
            while (i < sjt_forEnd4) {
                int32_t sjt_functionParam151;
                char sjt_functionParam152;
                int32_t sjt_functionParam153;
                sjs_array_char* sjt_parent77 = 0;
                sjs_string* sjt_parent78 = 0;

#line 52 "lib/sj-lib-common/array.sj"
                sjt_parent77 = &newdata;
#line 38 "lib/sj-lib-common/string.sj"
                sjt_functionParam151 = newcount;
#line 18
                sjt_parent78 = item;
#line 37
                sjt_functionParam153 = i;
#line 37
                sjf_string_getat(sjt_parent78, sjt_functionParam153, &sjt_functionParam152);
#line 37
                sjf_array_char_initat(sjt_parent77, sjt_functionParam151, sjt_functionParam152);
#line 39
                newcount = newcount + 1;
#line 37
                i++;
            }

#line 37
            _return->_refCount = 1;
#line 42
            _return->offset = 0;
#line 42
            _return->count = newcount;
#line 42
            _return->data._refCount = 1;
#line 42
            sjf_array_char_copy(&_return->data, &newdata);
#line 16
            _return->_isnullterminated = false;
#line 16
            sjf_string(_return);
        }
    }

    if (newdata._refCount == 1) { sjf_array_char_destroy(&newdata); }
;
}

void sjf_string_add_heap(sjs_string* _parent, sjs_string* item, sjs_string** _return) {
    sjs_array_char newdata = { -1 };

    if (item->count == 0) {
        (*_return) = (sjs_string*)malloc(sizeof(sjs_string));
        (*_return)->_refCount = 1;
#line 20 "lib/sj-lib-common/string.sj"
        sjf_string_copy((*_return), _parent);
    } else {
        bool sjt_capture54;
        int32_t sjt_capture55;
        sjs_array_char* sjt_parent79 = 0;

#line 35 "lib/sj-lib-common/array.sj"
        sjt_parent79 = &_parent->data;
#line 35
        sjf_array_char_gettotalcount(sjt_parent79, &sjt_capture55);
        if (((_parent->offset + _parent->count) + item->count) < sjt_capture55) {
            int32_t sjt_capture56;
            sjs_array_char* sjt_parent80 = 0;

#line 29 "lib/sj-lib-common/array.sj"
            sjt_parent80 = &_parent->data;
#line 29
            sjf_array_char_getcount(sjt_parent80, &sjt_capture56);
#line 24 "lib/sj-lib-common/string.sj"
            sjt_capture54 = ((_parent->offset + _parent->count) == sjt_capture56);
        } else {
#line 24 "lib/sj-lib-common/string.sj"
            sjt_capture54 = false;
        }

        if (sjt_capture54) {
            int32_t i;
            int32_t newcount;
            int32_t sjt_forEnd5;
            int32_t sjt_forStart5;

#line 25 "lib/sj-lib-common/string.sj"
            newcount = _parent->count;
#line 27
            sjt_forStart5 = 0;
#line 27
            sjt_forEnd5 = item->count;
#line 27
            i = sjt_forStart5;
            while (i < sjt_forEnd5) {
                int32_t sjt_functionParam154;
                char sjt_functionParam155;
                int32_t sjt_functionParam156;
                sjs_array_char* sjt_parent81 = 0;
                sjs_string* sjt_parent82 = 0;

#line 52 "lib/sj-lib-common/array.sj"
                sjt_parent81 = &_parent->data;
#line 28 "lib/sj-lib-common/string.sj"
                sjt_functionParam154 = newcount;
#line 18
                sjt_parent82 = item;
#line 27
                sjt_functionParam156 = i;
#line 27
                sjf_string_getat(sjt_parent82, sjt_functionParam156, &sjt_functionParam155);
#line 27
                sjf_array_char_initat(sjt_parent81, sjt_functionParam154, sjt_functionParam155);
#line 29
                newcount = newcount + 1;
#line 27
                i++;
            }

#line 27
            (*_return) = (sjs_string*)malloc(sizeof(sjs_string));
#line 27
            (*_return)->_refCount = 1;
#line 32
            (*_return)->offset = _parent->offset;
#line 32
            (*_return)->count = newcount;
#line 32
            (*_return)->data._refCount = 1;
#line 32
            sjf_array_char_copy(&(*_return)->data, &_parent->data);
#line 16
            (*_return)->_isnullterminated = false;
#line 16
            sjf_string_heap((*_return));
        } else {
            int32_t i;
            int32_t newcount;
            int32_t sjt_forEnd6;
            int32_t sjt_forStart6;
            int32_t sjt_functionParam157;
            int32_t sjt_functionParam158;
            int32_t sjt_functionParam159;
            sjs_array_char* sjt_parent83 = 0;
            sjs_array_char* sjt_parent84 = 0;

#line 168 "lib/sj-lib-common/array.sj"
            sjt_parent83 = &_parent->data;
#line 34 "lib/sj-lib-common/string.sj"
            sjt_functionParam157 = _parent->offset;
#line 34
            sjt_functionParam158 = _parent->count;
#line 34
            sjt_functionParam159 = ((((_parent->count + item->count) - 1) / 256) + 1) * 256;
#line 34
            sjf_array_char_clone(sjt_parent83, sjt_functionParam157, sjt_functionParam158, sjt_functionParam159, &newdata);
#line 29 "lib/sj-lib-common/array.sj"
            sjt_parent84 = &newdata;
#line 29
            sjf_array_char_getcount(sjt_parent84, &newcount);
#line 37 "lib/sj-lib-common/string.sj"
            sjt_forStart6 = 0;
#line 37
            sjt_forEnd6 = item->count;
#line 37
            i = sjt_forStart6;
            while (i < sjt_forEnd6) {
                int32_t sjt_functionParam160;
                char sjt_functionParam161;
                int32_t sjt_functionParam162;
                sjs_array_char* sjt_parent85 = 0;
                sjs_string* sjt_parent86 = 0;

#line 52 "lib/sj-lib-common/array.sj"
                sjt_parent85 = &newdata;
#line 38 "lib/sj-lib-common/string.sj"
                sjt_functionParam160 = newcount;
#line 18
                sjt_parent86 = item;
#line 37
                sjt_functionParam162 = i;
#line 37
                sjf_string_getat(sjt_parent86, sjt_functionParam162, &sjt_functionParam161);
#line 37
                sjf_array_char_initat(sjt_parent85, sjt_functionParam160, sjt_functionParam161);
#line 39
                newcount = newcount + 1;
#line 37
                i++;
            }

#line 37
            (*_return) = (sjs_string*)malloc(sizeof(sjs_string));
#line 37
            (*_return)->_refCount = 1;
#line 42
            (*_return)->offset = 0;
#line 42
            (*_return)->count = newcount;
#line 42
            (*_return)->data._refCount = 1;
#line 42
            sjf_array_char_copy(&(*_return)->data, &newdata);
#line 16
            (*_return)->_isnullterminated = false;
#line 16
            sjf_string_heap((*_return));
        }
    }

    if (newdata._refCount == 1) { sjf_array_char_destroy(&newdata); }
;
}

void sjf_string_copy(sjs_string* _this, sjs_string* _from) {
#line 12 "lib/sj-lib-common/string.sj"
    _this->offset = _from->offset;
#line 12
    _this->count = _from->count;
#line 12
    _this->data._refCount = 1;
#line 12
    sjf_array_char_copy(&_this->data, &_from->data);
#line 12
    _this->_isnullterminated = _from->_isnullterminated;
}

void sjf_string_destroy(sjs_string* _this) {
    if (_this->data._refCount == 1) { sjf_array_char_destroy(&_this->data); }
;
}

void sjf_string_getat(sjs_string* _parent, int32_t index, char* _return) {
    int32_t sjt_functionParam4;
    sjs_array_char* sjt_parent4 = 0;

#line 41 "lib/sj-lib-common/array.sj"
    sjt_parent4 = &_parent->data;
#line 64 "lib/sj-lib-common/string.sj"
    sjt_functionParam4 = _parent->offset + index;
#line 64
    sjf_array_char_getat(sjt_parent4, sjt_functionParam4, _return);
}

void sjf_string_hash(sjs_string* _parent, uint32_t* _return) {
#line 148 "lib/sj-lib-common/string.sj"
    #line 147 "lib/sj-lib-common/string.sj"
(*_return) = kh_str_hash_func(((sjs_array*)_parent->data.v)->data + _parent->offset, _parent->count);
return;;
}

void sjf_string_heap(sjs_string* _this) {
}

void sjf_string_isequal(sjs_string* _parent, sjs_string* test, bool* _return) {
#line 73 "lib/sj-lib-common/string.sj"
    sjs_array* arr1 = (sjs_array*)_parent->data.v;
#line 74
    sjs_array* arr2 = (sjs_array*)test->data.v;
#line 75
    if (_parent->count != test->count) {
#line 76
        #line 72 "lib/sj-lib-common/string.sj"
(*_return) = false;
return;;      
#line 77
    }
#line 78
    bool result = memcmp(arr1->data + _parent->offset, arr2->data + test->offset, _parent->count) == 0;
#line 79
    #line 72 "lib/sj-lib-common/string.sj"
(*_return) = result;
return;;      
}

void sjf_string_nullterminate(sjs_string* _parent) {
    bool result2;
    sjs_array_char sjt_funcold1 = { -1 };

#line 133 "lib/sj-lib-common/string.sj"
    result2 = !_parent->_isnullterminated;
    if (result2) {
        int32_t sjt_capture1;
        int32_t sjt_capture2;
        sjs_array_char* sjt_parent1 = 0;
        sjs_array_char* sjt_parent2 = 0;

#line 35 "lib/sj-lib-common/array.sj"
        sjt_parent1 = &_parent->data;
#line 35
        sjf_array_char_gettotalcount(sjt_parent1, &sjt_capture1);
#line 29
        sjt_parent2 = &_parent->data;
#line 29
        sjf_array_char_getcount(sjt_parent2, &sjt_capture2);
        if ((((_parent->offset + _parent->count) + 1) > sjt_capture1) || ((_parent->offset + _parent->count) != sjt_capture2)) {
            int32_t sjt_functionParam1;
            int32_t sjt_functionParam2;
            int32_t sjt_functionParam3;
            sjs_array_char* sjt_parent3 = 0;

#line 168 "lib/sj-lib-common/array.sj"
            sjt_parent3 = &_parent->data;
#line 135 "lib/sj-lib-common/string.sj"
            sjt_functionParam1 = _parent->offset;
#line 135
            sjt_functionParam2 = _parent->count;
#line 135
            sjt_functionParam3 = _parent->count + 1;
#line 135
            sjf_array_char_clone(sjt_parent3, sjt_functionParam1, sjt_functionParam2, sjt_functionParam3, &sjt_funcold1);
#line 135
            if (_parent->data._refCount == 1) { sjf_array_char_destroy(&_parent->data); }
;
#line 168 "lib/sj-lib-common/array.sj"
            sjf_array_char_copy(&_parent->data, &sjt_funcold1);
#line 136 "lib/sj-lib-common/string.sj"
            _parent->offset = 0;
        }

#line 139 "lib/sj-lib-common/string.sj"
        ((sjs_array*)_parent->data.v)->data[_parent->offset + _parent->count] = 0;
#line 141
        _parent->_isnullterminated = true;
    }

    if (sjt_funcold1._refCount == 1) { sjf_array_char_destroy(&sjt_funcold1); }
;
}

void sjf_string_substr(sjs_string* _parent, int32_t o, int32_t c, sjs_string* _return) {
    sjs_string sjt_call1 = { -1 };
    int32_t sjt_capture9;
    sjs_array_char* sjt_parent11 = 0;

#line 29 "lib/sj-lib-common/array.sj"
    sjt_parent11 = &_parent->data;
#line 29
    sjf_array_char_getcount(sjt_parent11, &sjt_capture9);
    if (((_parent->offset + o) + c) > sjt_capture9) {
        sjs_string* sjt_functionParam17 = 0;

        sjt_call1._refCount = 1;
#line 49 "lib/sj-lib-common/string.sj"
        sjt_call1.offset = 0;
#line 49
        sjt_call1.count = 13;
#line 49
        sjt_call1.data._refCount = 1;
#line 49
        sjt_call1.data.v = &sjg_string4;
#line 49
        sjf_array_char(&sjt_call1.data);
#line 16
        sjt_call1._isnullterminated = false;
#line 16
        sjf_string(&sjt_call1);
#line 49
        sjt_functionParam17 = &sjt_call1;
#line 49
        sjf_halt(sjt_functionParam17);
    }

#line 29
    _return->_refCount = 1;
#line 53 "lib/sj-lib-common/string.sj"
    _return->offset = _parent->offset + o;
#line 47
    _return->count = c;
#line 47
    _return->data._refCount = 1;
#line 52
    sjf_array_char_copy(&_return->data, &_parent->data);
#line 16
    _return->_isnullterminated = false;
#line 16
    sjf_string(_return);

    if (sjt_call1._refCount == 1) { sjf_string_destroy(&sjt_call1); }
;
}

void sjf_string_substr_heap(sjs_string* _parent, int32_t o, int32_t c, sjs_string** _return) {
    sjs_string sjt_call2 = { -1 };
    int32_t sjt_capture10;
    sjs_array_char* sjt_parent12 = 0;

#line 29 "lib/sj-lib-common/array.sj"
    sjt_parent12 = &_parent->data;
#line 29
    sjf_array_char_getcount(sjt_parent12, &sjt_capture10);
    if (((_parent->offset + o) + c) > sjt_capture10) {
        sjs_string* sjt_functionParam18 = 0;

        sjt_call2._refCount = 1;
#line 49 "lib/sj-lib-common/string.sj"
        sjt_call2.offset = 0;
#line 49
        sjt_call2.count = 13;
#line 49
        sjt_call2.data._refCount = 1;
#line 49
        sjt_call2.data.v = &sjg_string4;
#line 49
        sjf_array_char(&sjt_call2.data);
#line 16
        sjt_call2._isnullterminated = false;
#line 16
        sjf_string(&sjt_call2);
#line 49
        sjt_functionParam18 = &sjt_call2;
#line 49
        sjf_halt(sjt_functionParam18);
    }

#line 29
    (*_return) = (sjs_string*)malloc(sizeof(sjs_string));
#line 29
    (*_return)->_refCount = 1;
#line 53 "lib/sj-lib-common/string.sj"
    (*_return)->offset = _parent->offset + o;
#line 47
    (*_return)->count = c;
#line 47
    (*_return)->data._refCount = 1;
#line 52
    sjf_array_char_copy(&(*_return)->data, &_parent->data);
#line 16
    (*_return)->_isnullterminated = false;
#line 16
    sjf_string_heap((*_return));

    if (sjt_call2._refCount == 1) { sjf_string_destroy(&sjt_call2); }
;
}

void sjf_stringwriter(sjs_stringwriter* _this) {
}

void sjf_stringwriter_as_sji_writer(sjs_stringwriter* _this, sji_writer* _return) {
    _return->_parent = (sjs_object*)_this;
    _return->_vtbl = &sjs_stringwriter_writer_vtbl;
}

void sjf_stringwriter_asinterface(sjs_stringwriter* _this, int typeId, sjs_interface* _return) {
    switch (typeId) {
        case sji_writer_typeId:  {
            sjf_stringwriter_as_sji_writer(_this, (sji_writer*)_return);
            break;
        }

        default: {
            _return->_parent = 0;
            break;
        }
    }
}

void sjf_stringwriter_copy(sjs_stringwriter* _this, sjs_stringwriter* _from) {
    _this->text._refCount = 1;
#line 222 "lib/sj-lib-common/string.sj"
    sjf_string_copy(&_this->text, &_from->text);
}

void sjf_stringwriter_destroy(sjs_stringwriter* _this) {
    if (_this->text._refCount == 1) { sjf_string_destroy(&_this->text); }
;
}

void sjf_stringwriter_getclasstype(sjs_object* _this, int* _return) {
    *_return = 70;
}

void sjf_stringwriter_heap(sjs_stringwriter* _this) {
}

void sjf_stringwriter_reset(sjs_stringwriter* _parent) {
    sjs_string sjt_funcold18 = { -1 };

    sjt_funcold18._refCount = 1;
#line 226 "lib/sj-lib-common/string.sj"
    sjt_funcold18.offset = 0;
#line 226
    sjt_funcold18.count = 0;
#line 226
    sjt_funcold18.data._refCount = 1;
#line 226
    sjt_funcold18.data.v = &sjg_string3;
#line 226
    sjf_array_char(&sjt_funcold18.data);
#line 16
    sjt_funcold18._isnullterminated = false;
#line 16
    sjf_string(&sjt_funcold18);
#line 16
    if (_parent->text._refCount == 1) { sjf_string_destroy(&_parent->text); }
;
#line 12
    sjf_string_copy(&_parent->text, &sjt_funcold18);

    if (sjt_funcold18._refCount == 1) { sjf_string_destroy(&sjt_funcold18); }
;
}

void sjf_stringwriter_write(sjs_stringwriter* _parent, sjs_string* s) {
    sjs_string sjt_funcold17 = { -1 };
    sjs_string* sjt_functionParam163 = 0;
    sjs_string* sjt_parent87 = 0;

#line 18 "lib/sj-lib-common/string.sj"
    sjt_parent87 = &_parent->text;
#line 230
    sjt_functionParam163 = s;
#line 230
    sjf_string_add(sjt_parent87, sjt_functionParam163, &sjt_funcold17);
#line 230
    if (_parent->text._refCount == 1) { sjf_string_destroy(&_parent->text); }
;
#line 18
    sjf_string_copy(&_parent->text, &sjt_funcold17);

    if (sjt_funcold17._refCount == 1) { sjf_string_destroy(&sjt_funcold17); }
;
}

void sjf_tuple2_i32_string(sjs_tuple2_i32_string* _this) {
}

void sjf_tuple2_i32_string_copy(sjs_tuple2_i32_string* _this, sjs_tuple2_i32_string* _from) {
#line 5 "lib/sj-lib-common/tuple.sj"
    _this->item1 = _from->item1;
#line 5
    _this->item2._refCount = 1;
#line 5
    sjf_string_copy(&_this->item2, &_from->item2);
}

void sjf_tuple2_i32_string_destroy(sjs_tuple2_i32_string* _this) {
    if (_this->item2._refCount == 1) { sjf_string_destroy(&_this->item2); }
;
}

void sjf_tuple2_i32_string_heap(sjs_tuple2_i32_string* _this) {
}

void sjf_tuple2_i32_value(sjs_tuple2_i32_value* _this) {
}

void sjf_tuple2_i32_value_copy(sjs_tuple2_i32_value* _this, sjs_tuple2_i32_value* _from) {
#line 5 "lib/sj-lib-common/tuple.sj"
    _this->item1 = _from->item1;
#line 5
    _this->item2._refCount = 1;
#line 5
    sjf_json_value_copy(&_this->item2, &_from->item2);
}

void sjf_tuple2_i32_value_destroy(sjs_tuple2_i32_value* _this) {
    if (_this->item2._refCount == 1) { sjf_json_value_destroy(&_this->item2); }
;
}

void sjf_tuple2_i32_value_heap(sjs_tuple2_i32_value* _this) {
}

void sjf_tuple2_stringstring(sjs_tuple2_stringstring* _this) {
}

void sjf_tuple2_stringstring_copy(sjs_tuple2_stringstring* _this, sjs_tuple2_stringstring* _from) {
    _this->item1._refCount = 1;
#line 5 "lib/sj-lib-common/tuple.sj"
    sjf_string_copy(&_this->item1, &_from->item1);
#line 5
    _this->item2._refCount = 1;
#line 5
    sjf_string_copy(&_this->item2, &_from->item2);
}

void sjf_tuple2_stringstring_destroy(sjs_tuple2_stringstring* _this) {
    if (_this->item1._refCount == 1) { sjf_string_destroy(&_this->item1); }
;
    if (_this->item2._refCount == 1) { sjf_string_destroy(&_this->item2); }
;
}

void sjf_tuple2_stringstring_heap(sjs_tuple2_stringstring* _this) {
}

void sjf_type_hash(int32_t val, uint32_t* _return) {
    int32_t sjt_cast1;

#line 5 "lib/sj-lib-common/type.sj"
    sjt_cast1 = val;
#line 6
    (*_return) = (uint32_t)sjt_cast1;
}

void sjf_type_isequal(int32_t l, int32_t r, bool* _return) {
#line 10 "lib/sj-lib-common/type.sj"
    (*_return) = l == r;
}

int main(int argc, char** argv) {
    sjs_stringwriter_writer_vtbl.destroy = (void(*)(void*))sjf_stringwriter_destroy;
    sjs_stringwriter_writer_vtbl.asinterface = (void(*)(sjs_object*,int,sjs_interface*))sjf_stringwriter_asinterface;
    sjs_stringwriter_writer_vtbl.getclasstype = (void(*)(sjs_object*,int*))sjf_stringwriter_getclasstype;
    sjs_stringwriter_writer_vtbl.write = (void(*)(sjs_object*,sjs_string*))sjf_stringwriter_write;
    sjs_stringwriter_writer_vtbl.reset = (void(*)(sjs_object*))sjf_stringwriter_reset;
#line 1 "lib/sj-lib-common/log.sj"
    g_loglevel_trace = 0;
#line 1
    g_loglevel_debug = 1;
#line 1
    g_loglevel_info = 2;
#line 1
    g_loglevel_warn = 3;
#line 1
    g_loglevel_error = 4;
#line 1
    g_loglevel_fatal = 5;
#line 1 "lib/sj-lib-common/f32.sj"
    g_f32_pi = 3.14159265358979323846f;
#line 1 "lib/sj-lib-common/i32.sj"
    g_u32_maxvalue = (uint32_t)4294967295u;
#line 3
    result1 = -1;
#line 3
    g_i32_maxvalue = result1 - 2147483647;
#line 4
    g_i32_minvalue = 2147483647;
#line 10 "lib/sj-lib-common/log.sj"
    g_log_includeall._refCount = -1;
#line 10
    sjt_value1._refCount = 1;
#line 10
    sjf_hash_type_bool(&sjt_value1);
#line 11
    sjs_hash_type_bool* copyoption1 = &sjt_value1;
    if (copyoption1 != 0) {
        g_log_excludeall._refCount = 1;
#line 11 "lib/sj-lib-common/log.sj"
        sjf_hash_type_bool_copy(&g_log_excludeall, copyoption1);
    } else {
        g_log_excludeall._refCount = -1;
    }

#line 11
    g_log._refCount = 1;
#line 13
    g_log.minlevel = g_loglevel_warn;
#line 13
    sjs_hash_type_bool* copyoption8 = (g_log_includeall._refCount != -1 ? &g_log_includeall : 0);
    if (copyoption8 != 0) {
        g_log.traceincludes._refCount = 1;
#line 13 "lib/sj-lib-common/log.sj"
        sjf_hash_type_bool_copy(&g_log.traceincludes, copyoption8);
    } else {
        g_log.traceincludes._refCount = -1;
    }

#line 13
    sjs_hash_type_bool* copyoption9 = (g_log_includeall._refCount != -1 ? &g_log_includeall : 0);
    if (copyoption9 != 0) {
        g_log.debugincludes._refCount = 1;
#line 13 "lib/sj-lib-common/log.sj"
        sjf_hash_type_bool_copy(&g_log.debugincludes, copyoption9);
    } else {
        g_log.debugincludes._refCount = -1;
    }

#line 13
    sjs_hash_type_bool* copyoption10 = (g_log_includeall._refCount != -1 ? &g_log_includeall : 0);
    if (copyoption10 != 0) {
        g_log.infoincludes._refCount = 1;
#line 13 "lib/sj-lib-common/log.sj"
        sjf_hash_type_bool_copy(&g_log.infoincludes, copyoption10);
    } else {
        g_log.infoincludes._refCount = -1;
    }

#line 13
    sjs_hash_type_bool* copyoption11 = (g_log_includeall._refCount != -1 ? &g_log_includeall : 0);
    if (copyoption11 != 0) {
        g_log.warnincludes._refCount = 1;
#line 13 "lib/sj-lib-common/log.sj"
        sjf_hash_type_bool_copy(&g_log.warnincludes, copyoption11);
    } else {
        g_log.warnincludes._refCount = -1;
    }

#line 13
    sjs_hash_type_bool* copyoption12 = (g_log_includeall._refCount != -1 ? &g_log_includeall : 0);
    if (copyoption12 != 0) {
        g_log.errorincludes._refCount = 1;
#line 13 "lib/sj-lib-common/log.sj"
        sjf_hash_type_bool_copy(&g_log.errorincludes, copyoption12);
    } else {
        g_log.errorincludes._refCount = -1;
    }

#line 13
    sjs_hash_type_bool* copyoption13 = (g_log_includeall._refCount != -1 ? &g_log_includeall : 0);
    if (copyoption13 != 0) {
        g_log.fatalincludes._refCount = 1;
#line 13 "lib/sj-lib-common/log.sj"
        sjf_hash_type_bool_copy(&g_log.fatalincludes, copyoption13);
    } else {
        g_log.fatalincludes._refCount = -1;
    }

#line 13
    sjf_log(&g_log);
#line 2 "lib/sj-lib-common/weakptr.sj"
    ptr_init();
#line 3
    weakptr_init();
#line 7 "lib/sj-lib-common/clock.sj"
    g_clocks_per_sec = 0;
#line 9
    g_clocks_per_sec = CLOCKS_PER_SEC;
#line 9
    g_allthespaces._refCount = 1;
#line 79 "lib/sj-lib-json/value.sj"
    g_allthespaces.offset = 0;
#line 79
    g_allthespaces.count = 592;
#line 79
    g_allthespaces.data._refCount = 1;
#line 79
    g_allthespaces.data.v = &sjg_string1;
#line 79
    sjf_array_char(&g_allthespaces.data);
#line 16 "lib/sj-lib-common/string.sj"
    g_allthespaces._isnullterminated = false;
#line 16
    sjf_string(&g_allthespaces);
    main_destroy();
    return 0;
}

void main_destroy() {

    if (g_allthespaces._refCount == 1) { sjf_string_destroy(&g_allthespaces); }
;
    if (g_log._refCount == 1) { sjf_log_destroy(&g_log); }
;
    if (g_log_excludeall._refCount == 1) { sjf_hash_type_bool_destroy(&g_log_excludeall); }
;
    if (g_log_includeall._refCount == 1) { sjf_hash_type_bool_destroy(&g_log_includeall); }
;
    if (sjt_value1._refCount == 1) { sjf_hash_type_bool_destroy(&sjt_value1); }
;
}
