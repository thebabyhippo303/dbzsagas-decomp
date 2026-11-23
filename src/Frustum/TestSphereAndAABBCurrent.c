/* Frustum__TestSphereAndAABBCurrent @ 0x80202BEC (size: 0xE8, .text, ProDG 3.9.3 -O2) - MATCHED */
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int M2C_UNK;
#define NULL 0
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;

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
s32 AABB__Intersect(void *, void *, s32);
s32 Frustum__ClassifySphere(void *, void *, s32, s32);
s32 Frustum__ClassifyAABB(void *, void *, s32);

s32 Frustum__TestSphereAndAABBCurrent(void *sphere, void *aabb, s8 *out, s32 mode, s32 flag) {
    s32 cl;
    s32 result;
    if (flag != 0) {
        lbl_803DD5CC->b1CC = 1;
        lbl_803DD5CC->w1D0 = 0;
        lbl_803DD5CC->p1C8 = (void *)((char *)lbl_803DD5CC + 0x1A8);
    } else {
        lbl_803DD5CC->b1CC = flag;
        lbl_803DD5CC->p1C8 = (void *)((char *)lbl_803DD5CC + 0x190);
        lbl_803DD5CC->w1D0 = lbl_803DD5CC->w1C0;
    }
    if (AABB__Intersect(lbl_803DD5CC->p1C8, aabb, 0) == 0) {
        return 0;
    }
    if (out != 0) {
        *out = 0;
    }
    cl = Frustum__ClassifySphere(lbl_803DD5CC, sphere, 0, mode);
    if (cl == 0) {
        return 0;
    }
    result = 1;
    if (cl != 1) {
        result = Frustum__ClassifyAABB(lbl_803DD5CC, aabb, 0);
    }
    return result;
}
