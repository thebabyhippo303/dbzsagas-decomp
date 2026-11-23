/* BoneChain__GetBoneRestScale @ 0x801DFB90 (size: 0x11C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 BoneChain__CheckParent(void *, s32, s32, void *);
float sqrtf(float);
extern f32 lbl_80343F78 __attribute__((section(".data")));
extern f32 lbl_80343F7C __attribute__((section(".data")));

s32 BoneChain__GetBoneRestScale(void *arg0, void *arg1, s32 arg2) {
    f32 min_val;
    void *temp_r4;
    void *temp_r9;
    void *var_r29;
    s32 var_r31;
    s32 sp8[4];

    min_val = lbl_80343F78;
    if (M2C_FIELD(arg1, u8 *, 1) & 0x20) {
        var_r29 = NULL;
    } else if (!(M2C_FIELD(arg1, u16 *, 2) & 4)) {
        var_r29 = M2C_FIELD(arg1, void **, 0x78);
    } else {
        temp_r4 = M2C_FIELD(arg1, void **, 0x78);
        if (!(min_val >= M2C_FIELD(temp_r4, f32 *, 8))) {
            var_r29 = M2C_FIELD(temp_r4, void **, 0);
        } else if (!(min_val >= M2C_FIELD(temp_r4, f32 *, 0xC))) {
            var_r29 = M2C_FIELD(temp_r4, void **, 4);
        } else {
            var_r29 = M2C_FIELD(temp_r4, void **, 8);
        }
    }
    var_r31 = 1;
    M2C_FIELD(arg0, f32 *, 0x14) = lbl_80343F78;
    if (var_r31 < (s32) M2C_FIELD(arg0, s32 *, 8)) {
        do {
            if (BoneChain__CheckParent(arg0, var_r31, (s32) var_r29, sp8) == 0) {
                return 0;
            }
            var_r31 += 1;
        } while (var_r31 < (s32) M2C_FIELD(arg0, s32 *, 8));
    }
    M2C_FIELD(arg0, f32 *, 0x14) = sqrtf(M2C_FIELD(arg0, f32 *, 0x14));
    M2C_FIELD(arg0, s32 *, 0x10) = arg2;
    M2C_FIELD(arg0, f32 *, 0x18) = lbl_80343F7C;
    temp_r9 = M2C_FIELD(arg0, void **, 0x34);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x3C)((char *) arg0 + M2C_FIELD(temp_r9, s16 *, 0x38));
    return 1;
}
