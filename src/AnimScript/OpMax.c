/* AnimScript__OpMax @ 0x80239AC8 (size: 0x140, .text, ProDG 3.9.3 -O2) - MATCHED */
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
    u8 *tags;
    s32 *table;
} Thread;
typedef struct { char pad[240]; Thread *threads[1]; } AnimState;
typedef struct { u32 hi; u32 lo; } W64;
typedef union { W64 w; f64 d; } W64U;

extern f64 lbl_80346EC0 __attribute__((section(".rodata")));

s32 AnimScript__OpMax(AnimState *script, s32 idx, s32 *pc) {
    Thread *t = script->threads[idx];
    u8 b;
    u8 *tags;
    s32 *vals;
    u8 tag;
    W64U u;

    if (t != NULL && t->aux->f56 != 0) {
        *pc += 4;
    }
    b = t->b8;
    tags = t->tags;
    vals = t->vals;
    tag = tags[(s8) b];
    t->b8 = b - 1;
    if (tag == *(tags + (s8) b - 1)) {
        if (tag == 1) {
            if (M2C_FIELD(vals, s32 *, (s8) b * 4) > M2C_FIELD(vals, s32 *, (s8) (b - 1) * 4)) {
                M2C_FIELD(vals, s32 *, (s8) (b - 1) * 4) = M2C_FIELD(vals, s32 *, (s8) b * 4);
            }
            t->tags[(s8) t->b8] = tag;
            return 0;
        }
        if (tag == 1) {
            u.w.hi = 0x43300000u;
            u.w.lo = M2C_FIELD(vals, s32 *, (s8) b * 4) ^ 0x80000000;
            M2C_FIELD(vals, f32 *, (s8) b * 4) = (f32) (u.d - lbl_80346EC0);
            goto maxf;
        }
    } else {
        u.w.hi = 0x43300000u;
        u.w.lo = M2C_FIELD(vals, s32 *, (s8) (b - 1) * 4) ^ 0x80000000;
        M2C_FIELD(vals, f32 *, (s8) (b - 1) * 4) = (f32) (u.d - lbl_80346EC0);
    }
maxf:
    if (M2C_FIELD(vals, f32 *, (s8) b * 4) <= M2C_FIELD(vals, f32 *, (s8) (b - 1) * 4)) {
        M2C_FIELD(vals, f32 *, (s8) (b - 1) * 4) = M2C_FIELD(vals, f32 *, (s8) b * 4);
    }
    t->tags[(s8) t->b8] = 2;
    return 0;
}
