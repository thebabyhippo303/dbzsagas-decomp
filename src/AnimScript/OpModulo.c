/* AnimScript__OpModulo @ 0x80237ECC (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })
typedef struct { char pad[32]; s32 w32; char pad2[20]; s32 f56; } Aux;
typedef struct {
    char pad[8];
    u8 b8;
    u8 b9;
    char pad2[18];
    Aux *aux;
    char pad3[16];
    s32 *vals;
    u8 *table;
} Thread;
typedef struct { char pad[240]; Thread *threads[1]; } AnimState;
s32 AnimScript__OpModulo(AnimState *state, s32 idx, s32 *pc) {
    Thread *t = state->threads[idx];
    u8 b;
    s32 o1;
    s32 o2;
    if (t != NULL && t->aux->f56 != 0) {
        *pc += 4;
    }
    b = t->b8;
    t->b8 = b - 1;
    o1 = (s8)(b - 1) * 4;
    o2 = (s8)b * 4;
    *(s32 *)((char *)t->vals + o1) %= *(s32 *)((char *)t->vals + o2);
    t->table[(s8)t->b8] = 1;
    return 0;
}
