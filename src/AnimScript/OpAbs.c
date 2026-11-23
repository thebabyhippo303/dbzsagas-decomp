/* AnimScript__OpAbs @ 0x80239C08 (size: 0xB4, .text, ProDG 3.9.3 -O2) - MATCHED */
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

extern f32 lbl_80346EC8 __attribute__((section(".rodata")));

s32 AnimScript__OpAbs(AnimState *script, s32 idx, s32 *pc) {
    Thread *t = script->threads[idx];
    u8 b;
    s32 *vals;
    u8 tag;
    s32 i4;

    if (t != NULL && t->aux->f56 != 0) {
        *pc += 4;
    }
    b = t->b8;
    vals = t->vals;
    tag = t->tags[(s8)b];
    i4 = (s8)b * 4;
    if (tag == 1) {
        s32 v = *(s32 *)((char *)vals + i4);
        if (v < 0) {
            v = -v;
            *(s32 *)((char *)vals + i4) = v;
        }
        t->tags[(s8)t->b8] = tag;
    } else {
        f32 fv = *(f32 *)((char *)vals + i4);
        if (!(fv >= lbl_80346EC8)) {
            *(f32 *)((char *)vals + i4) = -fv;
        }
        t->tags[(s8)t->b8] = 2;
    }
    return 0;
}
