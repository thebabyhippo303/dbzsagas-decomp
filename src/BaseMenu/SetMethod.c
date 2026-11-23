/* BaseMenu__SetMethod @ 0x80263024 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })
typedef int s32; typedef short s16;
typedef struct T { char p[264]; s16 off; char q[2]; void *fn; } T;
typedef struct AV { s32 v0; s32 v1; } AV;
typedef struct Menu { char p[16]; T *t; char q[132]; s32 m98; char r[20]; AV av; } Menu;
void BaseMenu__SetMethod(Menu *m, s32 method, AV *a) {
    T *t;
    AV av;
    s32 mm;
    mm = method;
    t = m->t;
    av = *a;
    ((void (*)(void *))t->fn)((char *)m + t->off);
    m->m98 = mm;
    m->av = av;
}
