/* AvatarConfig__RegisterIntSetting @ 0x8009C640 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef int M2C_UNK;

M2C_UNK fn_8018A65C(s32, s32, s32, s32 *, s32, s32, s32, s32);
extern s32 lbl_803DCC10;

void AvatarConfig__RegisterIntSetting(s32 *arg0, s32 *arg1, s32 arg2, s32 arg3,
                                      s32 arg4, s32 arg5, s32 arg6) {
    *arg1 = arg3;
    if (*arg0 != 0) {
        s32 registry = lbl_803DCC10;
        s32 flags = -1;
        if (arg6 != 0) {
            flags = 0x10010;
        }
        fn_8018A65C(registry, *arg0, arg2, arg1, 0, 0, flags, 0);
    }
}
