/* AnimScript__OpJumpIfNotEqual @ 0x802369D4 (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

/* Byte-matched: AnimScript__OpJumpIfNotEqual @ 0x802369D4 (0x8C). ProDG -O2. */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0

typedef struct { char pad[32]; s32 w32; char pad2[20]; s32 f56; } Aux;
typedef struct {
    char pad[8];
    u8 b8;
    u8 b9;
    char pad2a[10];
    s32 w20;
    char pad2b[4];
    Aux *aux;
    char pad3[16];
    s32 *vals;
    char pad2c[4];
    s32 *table;
} Thread;
typedef struct { char pad[240]; Thread *threads[1]; } AnimState;

s32 AnimScript__OpJumpIfNotEqual(AnimState *script, s32 idx, s32 *pc) {
    Thread *t = script->threads[idx];
    Thread *t2;
    u8 b;
    s32 v;
    s32 nv;

    if (t != NULL && t->aux->f56 != 0) {
        *pc += 4;
    }
    b = t->b8;
    t->b8 = b - 1;
    v = t->vals[(s8)b];
    t2 = script->threads[idx];
    if (t2->w20 == 0) {
        goto done;
    }
    if (t2 != NULL) {
        nv = t2->aux->w32 + v;
    } else {
        nv = v;
    }
    *pc = nv;
done:
    return 0;
}
