/* AnimScript__OpRandomChance @ 0x80236EA0 (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))

typedef struct { char pad[32]; s32 w32; char pad2[20]; s32 f56; } Aux;
typedef struct {
    char pad[8];
    u8 b8;
    u8 b9;
    char pad2[18];
    Aux *aux;
    char pad3[16];
    f32 *vals;
    char pad4[4];
    s32 *table;
} Thread;
typedef struct { char pad[240]; Thread *threads[1]; } AnimState;

f32 Rand__FloatUnit(void *);
extern s32 lbl_803DD634;

s32 AnimScript__OpRandomChance(AnimState *script, s32 idx, s32 *pc) {
    Thread *t = script->threads[idx];
    u8 b;
    f32 thresh;

    if (t != NULL && t->aux->f56 != 0) {
        *pc += 4;
    }
    b = t->b8;
    t->b8 = b - 1;
    thresh = t->vals[(s8)b];
    M2C_FIELD(t, s32 *, 0x14) = (Rand__FloatUnit(&lbl_803DD634) < thresh);
    return 0;
}
