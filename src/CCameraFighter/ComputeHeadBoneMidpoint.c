/* CCameraFighter__ComputeHeadBoneMidpoint @ 0x800BB380 (size: 0x1D0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 Actor__FindBoneIdByName(void *, const char *, s8 *);
void * CActor__GetBoneWorldPosition(void *, void *, s32);
extern s8 lbl_8031E9D0 __attribute__((section(".data")));
extern f32 lbl_803215F0 __attribute__((section(".data")));
extern f32 lbl_803215F4 __attribute__((section(".data")));
extern f32 lbl_803215F8 __attribute__((section(".data")));

typedef struct { f32 x, y, z; } Vec3;

Vec3 *CCameraFighter__ComputeHeadBoneMidpoint(Vec3 *out, s32 dummy, void *arg2, void *arg3) {
    struct {
        Vec3 w0;
        char pad0[4];
        s8 bone1;
        char pad1[7];
        Vec3 w1;
        char pad2[4];
        Vec3 w2;
        char pad3[4];
        s8 bone2;
        char pad4[7];
        Vec3 w3;
        char pad5[4];
        Vec3 w4;
    } locals;
    Vec3 *pw0;
    void *actor1;
    void *actor2;
    Vec3 *res;
    f32 scale;

    pw0 = &locals.w0;
    pw0->x = lbl_803215F0;
    pw0->y = lbl_803215F4;
    pw0->z = lbl_803215F0;
    res = out;
    actor2 = arg3;
    actor1 = arg2;
    if (actor1 != NULL) {
        if (Actor__FindBoneIdByName(actor1, &lbl_8031E9D0, &locals.bone1) != 0) {
            CActor__GetBoneWorldPosition(&locals.w2, actor1, (u8)locals.bone1);
            locals.w1.x = locals.w2.x - M2C_FIELD(actor1, f32 *, 0x38);
            locals.w1.y = locals.w2.y - M2C_FIELD(actor1, f32 *, 0x3C);
            locals.w1.z = locals.w2.z - M2C_FIELD(actor1, f32 *, 0x40);
            locals.w0 = locals.w1;
        }
    }
    locals.w1 = locals.w0;
    if (actor2 != NULL) {
        if (Actor__FindBoneIdByName(actor2, &lbl_8031E9D0, &locals.bone2) != 0) {
            CActor__GetBoneWorldPosition(&locals.w4, actor2, (u8)locals.bone2);
            locals.w3.x = locals.w4.x - M2C_FIELD(actor2, f32 *, 0x38);
            locals.w3.y = locals.w4.y - M2C_FIELD(actor2, f32 *, 0x3C);
            locals.w3.z = locals.w4.z - M2C_FIELD(actor2, f32 *, 0x40);
            locals.w1 = locals.w3;
        }
    }
    scale = lbl_803215F4 / lbl_803215F8;
    locals.w3.x = locals.w0.x + locals.w1.x;
    locals.w3.y = locals.w0.y + locals.w1.y;
    locals.w3.z = locals.w0.z + locals.w1.z;
    res->x = locals.w3.x * scale;
    res->y = locals.w3.y * scale;
    res->z = locals.w3.z * scale;
    return res;
}
