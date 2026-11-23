/* Actor__GetCategoryCode @ 0x801186EC (size: 0x140, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

int String__CompareIgnoreCase(const char *, const char *);
extern s8 lbl_803268F8 __attribute__((section(".data")));
extern s8 lbl_80326908 __attribute__((section(".data")));
extern s8 lbl_8032691C __attribute__((section(".data")));
extern M2C_UNK lbl_803945A4 __attribute__((section(".data")));
extern M2C_UNK lbl_803945E4 __attribute__((section(".data")));
extern M2C_UNK lbl_80394624 __attribute__((section(".data")));
extern M2C_UNK lbl_803946B4 __attribute__((section(".data")));
extern void *lbl_803DC3C0;

s32 Actor__GetCategoryCode(void *arg0) {
    s32 temp_r3;
    s32 temp_r8;
    s32 var_r30;
    s8 *temp_r31;
    s32 *temp_r9;
    s32 *temp_r11;
    s32 *temp_r10;
    s32 *temp_r12;

    temp_r8 = M2C_FIELD(arg0, s32 *, 0);
    var_r30 = 0;
    temp_r9 = (s32 *) &lbl_803945E4;
    if ((s32) (temp_r8 & temp_r9[1]) == (s32) lbl_803945E4) {
        var_r30 = 1;
    } else {
        temp_r11 = (s32 *) &lbl_803946B4;
        if ((s32) (temp_r8 & temp_r11[1]) == (s32) lbl_803946B4) {
            temp_r3 = M2C_FIELD(arg0, s32 *, 0x5EC);
            if ((temp_r3 == 1) || (temp_r3 == 0xE) || (temp_r3 == 0xD)) {
                var_r30 = 2;
            } else {
                var_r30 = 3;
            }
        } else {
            temp_r10 = (s32 *) &lbl_803945A4;
            if ((s32) (temp_r8 & temp_r10[1]) == (s32) lbl_803945A4) {
                temp_r31 = arg0 + 0x1C0;
                if ((String__CompareIgnoreCase(temp_r31, &lbl_803268F8) == 0) || (String__CompareIgnoreCase(temp_r31, &lbl_80326908) == 0) || ((String__CompareIgnoreCase(temp_r31, &lbl_8032691C) == 0) && ((s32) M2C_FIELD(M2C_FIELD(lbl_803DC3C0, void **, 0x238), s32 *, 4) == 0xE))) {
                    var_r30 = 4;
                }
            } else {
                temp_r12 = (s32 *) &lbl_80394624;
                if ((s32) (temp_r8 & temp_r12[1]) == (s32) lbl_80394624) {
                    var_r30 = 5;
                }
            }
        }
    }
    return var_r30;
}
