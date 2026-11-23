/* Frustum__TestSphereCurrent @ 0x80202A84 (size: 0xB0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef struct {
    char pad[0x1C0];
    s32 w1C0;
    char pad1C4[4];
    void *p1C8;
    s8 b1CC;
    char pad1CD[3];
    s32 w1D0;
} G;
extern G *lbl_803DD5CC;
s32 AABB__OverlapsSphereBounds(void *, void *);
s32 Frustum__ClassifySphere(void *, void *, s32, s32);
s32 Frustum__TestSphereCurrent(void *arg0, s32 arg1) {
    s32 ov;
    s32 cl;
    s32 result;
    if (arg1 != 0) {
        lbl_803DD5CC->b1CC = 1;
        lbl_803DD5CC->w1D0 = 0;
        lbl_803DD5CC->p1C8 = (void *)((char *)lbl_803DD5CC + 0x1A8);
    } else {
        lbl_803DD5CC->b1CC = arg1;
        lbl_803DD5CC->p1C8 = (void *)((char *)lbl_803DD5CC + 0x190);
        lbl_803DD5CC->w1D0 = lbl_803DD5CC->w1C0;
    }
    ov = AABB__OverlapsSphereBounds(lbl_803DD5CC->p1C8, arg0);
    result = 0;
    if (ov != 0) {
        cl = Frustum__ClassifySphere(lbl_803DD5CC, arg0, 0, 0);
        result = 1;
        if (cl == 0) {
            result = 0;
        }
    }
    return result;
}
