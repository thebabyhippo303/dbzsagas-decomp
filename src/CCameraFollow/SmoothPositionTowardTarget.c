/* CCameraFollow__SmoothPositionTowardTarget @ 0x800CAAC8 (size: 0x308, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

f32 sqrtf(f32);
extern f32 lbl_80321AA8 __attribute__((section(".data")));
extern f32 lbl_80321AAC __attribute__((section(".data")));

/* WIP 5.7%. Full vec structure decoded (6 triples + 2 singles, swizzled bit-copy,
 * fabs-early for f30-kept, bit-trick u32 region, normalize/flag/threshold/add-sub).
 * WALL: systematic reg permutation (ours r29/r31/r30/r11 vs target r31/r30/r29/r10
 * for arg1/r30v/pC/pA; farg0 f30 vs f29) - kept-set numbering, use-graph based.
 * Shift-amount: ours (b0<<9)>>24 fuses to rlwinm-17, target rlwinm-9 (bits differ);
 * try (b0>>15)&0xFF or other idiom. Second compare !(len1<lbl) folds (same wall
 * class as StepPhysics cror); branch polarities differ. */
typedef struct { f32 v0, v1, v2; } V3;
void CCameraFollow__SmoothPositionTowardTarget(void *arg0, void *arg1, f32 farg0) {
    V3 A;
    V3 B;
    V3 C;
    V3 D;
    V3 E;
    V3 F;
    f32 len2v;
    f32 c0v;
    char *r30v;
    f32 *pC;
    f32 *pA;
    f32 *pB;
    f32 *pD;
    f32 len1;
    f32 len2;
    f32 fab1;
    f32 thb;
    f32 th;
    f32 sc;
    u32 b0;
    u32 b9;
    u32 b1;
    u32 b2;
    s32 r0v;
    s32 r10v;

    r30v = (char *)arg0 + 108;
    C.v0 = M2C_FIELD(arg1, f32 *, 0) - M2C_FIELD(arg0, f32 *, 0x6C);
    C.v1 = M2C_FIELD(arg1, f32 *, 4) - M2C_FIELD(r30v, f32 *, 4);
    C.v2 = M2C_FIELD(arg1, f32 *, 8) - M2C_FIELD(r30v, f32 *, 8);
    pC = &C.v0;
    ((u32 *)&A)[0] = ((u32 *)&C)[0];
    pA = &A.v0;
    ((u32 *)pA)[1] = ((u32 *)pC)[1];
    ((u32 *)pA)[2] = ((u32 *)pC)[2];
    D.v1 = pA[1] * pA[1];
    D.v2 = pA[2] * pA[2];
    D.v0 = A.v0 * A.v0;
    pD = &D.v0;
    len1 = sqrtf(D.v0 + pD[1] + pD[2]);
    fab1 = __builtin_fabsf(len1);
    C.v0 = M2C_FIELD(arg1, f32 *, 0) - M2C_FIELD(arg0, f32 *, 0x6C);
    C.v1 = M2C_FIELD(arg1, f32 *, 4) - M2C_FIELD(r30v, f32 *, 4);
    C.v2 = M2C_FIELD(arg1, f32 *, 8) - M2C_FIELD(r30v, f32 *, 8);
    ((u32 *)&B)[0] = ((u32 *)&C)[0];
    pB = &B.v0;
    ((u32 *)pB)[1] = ((u32 *)pC)[2];
    ((u32 *)pB)[2] = ((u32 *)pC)[1];
    E.v0 = B.v0 * B.v0;
    E.v1 = B.v1 * B.v1;
    E.v2 = B.v2 * B.v2;
    len2 = sqrtf(E.v0 + E.v1 + E.v2);
    len2v = len2;
    c0v = lbl_80321AA8;
    b0 = M2C_FIELD(&len2v, u32 *, 0);
    b9 = (b0 << 9) >> 24;
    if (b9 == 0) {
        r0v = 1;
    } else {
        b1 = M2C_FIELD(&c0v, u32 *, 0);
        b9 += 127;
        b2 = (b1 << 9) >> 24;
        r0v = (b2 >= b9);
    }
    if (r0v == 0) {
        sc = c0v / len2;
        F.v0 = B.v0 * sc;
        F.v2 = B.v2 * sc;
        F.v1 = B.v1 * sc;
        ((u32 *)&E)[0] = ((u32 *)&F)[0];
        ((u32 *)&E)[1] = ((u32 *)&F)[1];
        ((u32 *)&E)[2] = ((u32 *)&F)[2];
        ((u32 *)&B)[0] = ((u32 *)&F)[0];
        ((u32 *)&B)[1] = ((u32 *)&F)[1];
        ((u32 *)&B)[2] = ((u32 *)&F)[2];
        r10v = 1;
    } else {
        r10v = 0;
    }
    if (r10v == 0) {
        return;
    }
    if (M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x40), void **, 0x84), s32 *, 0x104) & 0x200) {
        return;
    }
    thb = M2C_FIELD(arg0, f32 *, 0x120) * farg0;
    th = thb * fab1;
    if (!(fab1 <= th)) {
        return;
    }
    if (!(len1 < lbl_80321AAC)) {
        F.v0 = B.v0 * th;
        F.v1 = B.v1 * th;
        F.v2 = B.v2 * th;
        C.v2 = M2C_FIELD(r30v, f32 *, 8) + F.v2;
        C.v1 = M2C_FIELD(r30v, f32 *, 4) + F.v1;
        C.v0 = M2C_FIELD(arg0, f32 *, 0x6C) + F.v0;
    } else {
        F.v0 = B.v0 * th;
        F.v1 = B.v1 * th;
        F.v2 = B.v2 * th;
        C.v2 = M2C_FIELD(r30v, f32 *, 8) - F.v2;
        C.v1 = M2C_FIELD(r30v, f32 *, 4) - F.v1;
        C.v0 = M2C_FIELD(arg0, f32 *, 0x6C) - F.v0;
    }
    M2C_FIELD(arg1, f32 *, 0) = C.v0;
    M2C_FIELD(arg1, f32 *, 4) = C.v1;
    M2C_FIELD(arg1, f32 *, 8) = C.v2;
}
