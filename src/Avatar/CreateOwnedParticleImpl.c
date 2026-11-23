/* Avatar__CreateOwnedParticleImpl @ 0x8009CBB8 (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Avatar__BuildEffectAssetPath(void *, const char *);
s32 fn_8021D108(s8 *, s32, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, f32, f32); /* extern */
extern f32 lbl_8031FE38 __attribute__((section(".data")));

s32 Avatar__CreateOwnedParticleImpl(void *arg0, s8 *arg1, s32 arg2, s32 arg3) {
    s32 var_r3;

    Avatar__BuildEffectAssetPath(arg0, arg1);
    var_r3 = fn_8021D108(M2C_FIELD(arg0, s8 **, 8), arg2, arg3, 0, 0, 0, 0, lbl_8031FE38, lbl_8031FE38);
    if (var_r3 == 0) {
        var_r3 = fn_8021D108(arg1, arg2, arg3, 0, 0, 0, 0, lbl_8031FE38, lbl_8031FE38);
    }
    return var_r3;
}

