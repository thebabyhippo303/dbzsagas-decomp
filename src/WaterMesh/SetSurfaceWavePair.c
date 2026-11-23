/* WaterMesh__SetSurfaceWavePair @ 0x8027B38C (size: 0xD4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef double f64; typedef int M2C_UNK; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

/* WIP 88.7% (cand fb81f819): WaterMesh @ 0x8027B38C. Model: mesh->r31, arg2->r30, farg2->f31, farg3->f30 saves; t1=mesh+0xE0/t2=mesh+0xF4; w1/w2b zeroed if a==Z||b==Z; t=w-4; stores (f8,wi,f4); if((u32)t<=1) Generate(t+12,128,a). Walls (scheduler): target (fmr-f31, mr-r30, fmr-f30) vs ours (mr, fmr, fmr) — int-save always first regardless of source/decl/register order; target (stfs, cmplwi, stw, stfs) vs ours (stfs, stw, cmplwi, stfs). Second call must use saved b (f31), not farg2. Next: find structural lever forcing float-save before int-save + cmplwi/stw swap. */
typedef int s32; typedef unsigned int u32; typedef float f32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
void NoiseTable__Generate(void *, s32, f32);
extern f32 lbl_8034F198 __attribute__((section(".data")));
void WaterMesh__SetSurfaceWavePair(void *arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
    void *mesh = arg0;
    s32 w2 = arg2;
    f32 b = farg2;
    void *t1 = (char *)mesh + 0xE0;
    f32 d = farg3;
    s32 w1 = arg1;
    s32 t;
    void *t2;
    s32 w2b;
    s32 u;
    if (farg0 == lbl_8034F198 || farg1 == lbl_8034F198) { w1 = 0; }
    t = w1 - 4;
    M2C_FIELD(t1, f32 *, 8) = farg1;
    M2C_FIELD(t1, s32 *, 0) = w1;
    M2C_FIELD(t1, f32 *, 4) = farg0;
    if ((u32)t <= 1U) { NoiseTable__Generate((char *)t1 + 12, 128, farg0); }
    t2 = (char *)mesh + 0xF4;
    w2b = w2;
    if (b == lbl_8034F198 || d == lbl_8034F198) { w2b = 0; }
    u = w2b - 4;
    M2C_FIELD(t2, f32 *, 8) = d;
    M2C_FIELD(t2, s32 *, 0) = w2b;
    M2C_FIELD(t2, f32 *, 4) = b;
    if ((u32)u <= 1U) { NoiseTable__Generate((char *)t2 + 12, 128, b); }
}
