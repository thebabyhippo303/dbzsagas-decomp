/* AnimScript__OpSwap @ 0x802376E8 (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

typedef struct { char pad[32]; s32 w32; char pad2[20]; s32 f56; } Aux;
typedef struct {
    char pad[8];
    u8 b8;
    char pad2[19];
    Aux *aux;
    char pad3[16];
    f32 *vals;
    u8 *bvals;
} Thread;
typedef struct { char pad[240]; Thread *threads[1]; } AnimState;

s32 AnimScript__OpSwap(AnimState *script, s32 idx, s32 *pc) {
    Thread *t = script->threads[idx];
    Aux *aux;
    s32 prev;
    u8 cnt;
    f32 *fvals;
    s32 fidx;
    f32 fa;
    f32 fb;
    s32 bidx;
    s8 p2;
    u8 *bv;
    u8 ba;
    u8 bb;

    if (t != NULL) {
        aux = t->aux;
        if (aux->f56 != 0) {
            *pc += 4;
        }
    }
    cnt = t->b8;
    fvals = t->vals;
    prev = cnt - 1;
    t->b8 = prev;
    fidx = ((s32 *)fvals)[(s8)cnt];
    fa = fvals[(s8)prev];
    bidx = prev - fidx;
    fb = fvals[bidx];
    fvals[(s8)prev] = fb;
    fvals[bidx] = fa;
    p2 = t->b8;
    bv = t->bvals;
    bidx = p2 - fidx;
    ba = bv[p2];
    bb = bv[bidx];
    bv[p2] = bb;
    bv[bidx] = ba;
    return 0;
}
