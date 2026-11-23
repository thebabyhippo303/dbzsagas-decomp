/* Avatar__CreateAttacherImpl @ 0x8009CDB8 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__CreateAttacherImpl @ 0x8009CDB8 (0x74). ProDG -O2. */
typedef signed char s8;
typedef int s32;
typedef float f32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))

void Avatar__BuildEffectAssetPath(void *, const char *);
s32 fn_802165F4(s8 *, s32, s32, f32, f32);
extern f32 lbl_8031FE44 __attribute__((section(".data")));

s32 Avatar__CreateAttacherImpl(void *arg0, s8 *arg1, s32 arg2, s32 arg3) {
    s32 var_r3;

    Avatar__BuildEffectAssetPath(arg0, arg1);
    var_r3 = fn_802165F4(M2C_FIELD(arg0, s8 **, 8), arg2, arg3, lbl_8031FE44, lbl_8031FE44);
    if (var_r3 == 0) {
        var_r3 = fn_802165F4(arg1, arg2, arg3, lbl_8031FE44, lbl_8031FE44);
    }
    return var_r3;
}
