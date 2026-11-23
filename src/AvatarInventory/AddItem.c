/* AvatarInventory__AddItem @ 0x8009B730 (size: 0x1F4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 AvatarInventory__EquipHandItem(void *, s32, s32);
void Avatar__AdjustComboTimer(void *, float);
void Avatar__AdjustHealth(void *, float);
void Avatar__AdjustKiImpl(void *, f32);
int String__CompareIgnoreCase(const char *, const char *);
M2C_UNK AvatarInventory__SelectActiveItem(void *, s32, s32, M2C_UNK); /* extern */
M2C_UNK fn_80188D94(s32, void *, M2C_UNK);          /* extern */
extern s8 lbl_8031D820 __attribute__((section(".data")));
extern f32 lbl_8031FC34 __attribute__((section(".data")));
extern f32 lbl_8031FC38 __attribute__((section(".data")));
extern void *lbl_803DC3C0;

s32 AvatarInventory__AddItem(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r0_2;
    s32 temp_r10;
    s32 temp_r11;
    s32 temp_r9;
    s8 *temp_r3;
    u32 temp_r0;
    u32 temp_r6;
    void *temp_r11_2;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r8;

    if (M2C_FIELD((void *)M2C_FIELD(arg0, s32 *, 0x1128), s32 *, arg1 * 0x18) & 0x2000) {
        volatile u32 *count_base = (volatile u32 *)((char *)arg0 + 0x24);
        volatile u32 *limit_base = (volatile u32 *)((char *)arg0 + 0x2C);
        temp_r10 = arg1 * 0x24;
        if (*(volatile u32 *)((volatile u8 *)count_base + temp_r10) >= *(volatile u32 *)((volatile u8 *)limit_base + temp_r10)) {
            return 0;
        }
    }
    temp_r9 = arg1 * 0x18;
    temp_r3 = M2C_FIELD((void *)M2C_FIELD(arg0, s32 *, 0x1128), s8 **, temp_r9 + 8);
    if ((temp_r3 != NULL) && (String__CompareIgnoreCase(temp_r3, &lbl_8031D820) != 0)) {
        fn_80188D94(M2C_FIELD((void *)M2C_FIELD(arg0, s32 *, 0x1128), s32 *, temp_r9 + 8), M2C_FIELD(arg0, void **, 0x1154), 0);
    }
    temp_r11 = arg1 * 0x24;
    temp_r8 = (char *)arg0 + 0x24;
    temp_r6 = M2C_FIELD(temp_r8, u32 *, temp_r11) + arg3;
    M2C_FIELD(temp_r8, u32 *, temp_r11) = temp_r6;
    if (M2C_FIELD((void *)M2C_FIELD(arg0, s32 *, 0x1128), s32 *, temp_r9) & 0x2000) {
        temp_r0 = M2C_FIELD(arg0, u32 *, 0x2C + temp_r11);
        if (temp_r6 >= temp_r0) {
            M2C_FIELD(temp_r8, u32 *, temp_r11) = temp_r0;
        }
    }
    temp_r11_2 = (char *)arg0 + 0x28;
    M2C_FIELD(temp_r11_2, u32 *, temp_r11) = M2C_FIELD(temp_r11_2, u32 *, temp_r11) | arg2;
    if (M2C_FIELD((void *)M2C_FIELD(arg0, s32 *, 0x1128), s32 *, temp_r9) & 0x20) {
        M2C_FIELD(arg0, s32 *, 4) = arg1;
        M2C_FIELD(arg0, f32 *, 0x1C) = (f32) lbl_8031FC34;
    }
    if (M2C_FIELD((void *)M2C_FIELD(arg0, s32 *, 0x1128), s32 *, temp_r9) & 0x4000) {
        M2C_FIELD(arg0, s32 *, 0xC) = arg1;
    }
    temp_r0_2 = M2C_FIELD((void *)M2C_FIELD(arg0, s32 *, 0x1128), s32 *, temp_r9);
    if (temp_r0_2 & 0x400) {
        if (temp_r0_2 & 0x200) {
            AvatarInventory__SelectActiveItem(arg0, arg1, arg2, 0);
        }
        if (M2C_FIELD((void *)M2C_FIELD(arg0, s32 *, 0x1128), s32 *, temp_r9) & 1) {
            AvatarInventory__EquipHandItem(arg0, arg1, arg2);
        }
    }
    if (arg1 != 0x58) {
        if ((u32) arg1 <= 0x58U) {
            if (arg1 != 0x57) {

            } else {
                Avatar__AdjustComboTimer(M2C_FIELD(arg0, void **, 0x1154), lbl_8031FC38);
            }
        } else if (arg1 != 0x59) {

        } else {
            temp_r3_2 = M2C_FIELD(arg0, void **, 0x1154);
            Avatar__AdjustKiImpl(temp_r3_2, M2C_FIELD(temp_r3_2, f32 *, 0x298) * M2C_FIELD(lbl_803DC3C0, f32 *, 0x2078));
        }
    } else {
        temp_r3_3 = M2C_FIELD(arg0, void **, 0x1154);
        Avatar__AdjustHealth(temp_r3_3, M2C_FIELD(temp_r3_3, f32 *, 0x28C) * M2C_FIELD(lbl_803DC3C0, f32 *, 0x206C));
    }
    return 1;
}
