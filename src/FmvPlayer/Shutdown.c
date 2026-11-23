/* FmvPlayer__Shutdown @ 0x801D92A4 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void fn_80242968(int);
M2C_UNK fn_802E0BB4(s32, M2C_UNK *, s32 *);         /* extern */
M2C_UNK fn_802E0C90(s32);                           /* extern */
M2C_UNK fn_802E2464();                              /* extern */
extern s32 lbl_803742E0 __attribute__((section(".data")));

void FmvPlayer__Shutdown(void *arg0, s32 arg1) {
    s32 spC;
    M2C_UNK sp8;

    fn_802E2464();
    if (arg1 != 0) {
        fn_802E0BB4(lbl_803742E0, &sp8, &spC);
        fn_802E0C90(spC);
        fn_80242968(0);
    }
}
