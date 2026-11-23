/* EnumTable__ResolveName @ 0x80254CC4 (size: 0xE8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32; typedef double f64; typedef int M2C_UNK; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
s32 EnumTable__FindByName(void *, char *, s32);
char *strncpy(char *, char *, u32);
typedef char *(*FetchFn)(void *, s32);
s32 EnumTable__ResolveName(void *arg0, char *arg1, s32 arg2, s32 arg3) {
    void *t = arg0;
    char *name = arg1;
    s32 idx = arg2;
    s32 n = arg3;
    s32 r;
    char *s;
    void *p;
    if ((r = EnumTable__FindByName(t, name, n - 1)) >= 0) {
        return r;
    }
    if (idx < 0) {
        goto FETCH0;
    }
    if (idx >= *(s32 *)t) {
        goto REVAL;
    }
    p = *(void **)((char *)t + 4);
    s = ((FetchFn)*(void **)((char *)p + 12))((char *)t + *(s16 *)((char *)p + 8), idx);
    if (s != 0) {
        goto REVAL;
    }
    idx = -1;
REVAL:
    if (idx < 0) {
        goto FETCH0;
    }
    if (idx >= *(s32 *)t) {
FETCH0:
        p = *(void **)((char *)t + 4);
        s = ((FetchFn)*(void **)((char *)p + 12))((char *)t + *(s16 *)((char *)p + 8), 0);
        idx = 0;
    }
    if (s == 0) {
        *name = s;
        goto END;
    }
    strncpy(name, s, (u32)(n - 1));
    *(char *)(n + (s32)name - 1) = 0;
END:
    return idx;
}
