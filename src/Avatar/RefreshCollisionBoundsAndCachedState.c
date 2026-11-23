/* Avatar__RefreshCollisionBoundsAndCachedState @ 0x8008E938 (size: 0x124, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

typedef struct { s32 x, y, z; } V3i;
M2C_UNK Avatar__UpdateStickCameraAnimationTimer();  /* extern */
M2C_UNK Avatar__InitializeCollisionBoundsFromConfig(void *);
extern void *lbl_803DC3A0;

void Avatar__RefreshCollisionBoundsAndCachedState(char *arg0) {
    f32 *src;
    f32 *dst;
    void *obj;
    void *vt;

    if ((s32) M2C_FIELD(M2C_FIELD(lbl_803DC3A0, void **, 0x238), s32 *, 4) != 0) {
        Avatar__UpdateStickCameraAnimationTimer();
        M2C_FIELD(arg0, s32 *, 0x1598) = 0;
        Avatar__InitializeCollisionBoundsFromConfig(arg0);
        M2C_FIELD(arg0, f32 *, 0x76C) = M2C_FIELD(arg0, f32 *, 0x75C);
        *(V3i *) (arg0 + 0x770) = *(V3i *) (arg0 + 0x38);
        src = (f32 *) (arg0 + 0x44);
        dst = (f32 *) (arg0 + 0x77C);
        dst[0] = src[0];
        dst[1] = src[1];
        dst[2] = src[2];
        dst[3] = src[3];
        dst[4] = src[4];
        dst[5] = src[5];
        dst[6] = src[6];
        dst[7] = src[7];
        dst[8] = src[8];
        *(V3i *) (arg0 + 0x7A0) = *(V3i *) (arg0 + 0x68);
        *(V3i *) (arg0 + 0x7AC) = *(V3i *) (arg0 + 0x74);
        obj = M2C_FIELD(arg0, void **, 0x7E0);
        vt = M2C_FIELD(obj, void **, 4);
        M2C_FIELD(vt, M2C_UNK (**)(void *), 0x4C)((char *) obj + M2C_FIELD(vt, s16 *, 0x48));
    }
}
