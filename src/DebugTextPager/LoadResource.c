/* DebugTextPager__LoadResource @ 0x80273684 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })
typedef void (*DTPInitFn)(void *self);
void *dblLoad(const char *, void *, int);
s32 DebugTextPager__LoadResource(void *arg0, void *arg1) {
    char *vtable;
    short adjustment;
    DTPInitFn init;
    void *res;
    vtable = M2C_FIELD(arg0, char **, 8);
    adjustment = M2C_FIELD(vtable, s16 *, 0x20);
    init = M2C_FIELD(vtable, DTPInitFn *, 0x24);
    init((char *)arg0 + adjustment);
    res = dblLoad(arg1, NULL, 0);
    M2C_FIELD(arg0, void **, 4) = res;
    if (res == NULL) {
        return 0;
    }
    return 1;
}
