/* AnimScript__OpPick @ 0x8023777C (size: 0x98, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0

typedef struct { char pad[32]; s32 w32; char pad2[20]; s32 f56; } Aux;
typedef struct {
    char pad[8];
    u8 b8;
    u8 b9;
    char pad2[18];
    Aux *aux;
    char pad3[16];
    s32 *vals;
    u8 *tags;
    s32 *table;
} Thread;
typedef struct { char pad[240]; Thread *threads[1]; } AnimState;

s32 AnimScript__OpPick(AnimState *script, s32 idx, s32 *pc) {
    Thread *t = script->threads[idx];
    u8 b;
    s32 v;
    u8 tb;
    f32 *d;
    u8 *e;

    if (t != 0 && t->aux->f56 != 0) {
        *pc += 4;
    }
    b = t->b8;
    t->b8 = b - 1;
    v = t->vals[(s8)b];
    d = (f32 *)((((s8)(b - 1)) * 4) + (u32)t->vals);
    d[1] = ((f32 *)t->vals)[(s8)(b - 1) - v];
    b = t->b8;
    tb = t->tags[(s8)b - v];
    e = (u8 *)(((s8)b) + (u32)t->tags);
    e[1] = tb;
    b = t->b8;
    t->b8 = b + 1;
    return 0;
}
