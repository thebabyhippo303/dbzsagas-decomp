/* LoadingScreen__FinalizeResourceRequests @ 0x8012980C (size: 0xB8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


M2C_UNK fn_801DA37C(void *, M2C_UNK);                       /* extern */
M2C_UNK fn_801DA628(void *, M2C_UNK);                       /* extern */
M2C_UNK fn_801DA63C();                              /* extern */
M2C_UNK fn_801DA76C(void *, s32 *);                  /* extern */
s32 fn_801DA7F4(void *, s32 *);                      /* extern */
M2C_UNK fn_801DA9D4(void *, M2C_UNK);                /* extern */
extern s32 lbl_803DC6DC __attribute__((section(".sdata")));
extern s32 *lbl_803DD944 __attribute__((section(".sbss")));

void LoadingScreen__FinalizeResourceRequests(void) {
    s32 spC;
    s32 sp8;

    if ((s32 *) lbl_803DD944 != NULL) {
        if ((s32) lbl_803DC6DC != 0) {
            sp8 = 1;
            fn_801DA628(lbl_803DD944, 1);
            fn_801DA63C();
            fn_801DA76C(lbl_803DD944, &sp8);
        } else {
            spC = lbl_803DC6DC;
            fn_801DA76C(lbl_803DD944, &spC);
loop_4:
            if (spC == 0) {
                if (fn_801DA7F4(lbl_803DD944, &spC) != 0) {
                    goto loop_4;
                }
            }
        }
        fn_801DA9D4(lbl_803DD944, 1);
        if ((s32 *) lbl_803DD944 != NULL) {
            fn_801DA37C(lbl_803DD944, 3);
        }
        lbl_803DD944 = NULL;
    }
}
