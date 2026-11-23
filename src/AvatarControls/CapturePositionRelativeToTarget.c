/* AvatarControls__CapturePositionRelativeToTarget @ 0x800A1720 (size: 0x218, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


s32 fn_801ABFC4(f32 *, f32 *);                      /* extern */
extern f32 lbl_803200B4 __attribute__((section(".data")));
extern f32 lbl_803200B8 __attribute__((section(".data")));

void AvatarControls__CapturePositionRelativeToTarget(void *arg0) {
    void *sp88;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp8;
    f32 temp_f0;
    f32 temp_f11;
    f32 temp_f7;
    void *temp_r10;
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r8;
    void *temp_r8_2;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;

    temp_r10 = M2C_FIELD(arg0, void **, 0);
    sp88 = NULL;
    temp_r11 = M2C_FIELD(temp_r10, void **, 0x7CC);
    temp_r9 = M2C_FIELD(temp_r11, void **, 4);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *, void **, void *, void *), 0x14)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x10), &sp88, temp_r9, temp_r10);
    temp_r9_2 = M2C_FIELD(sp88, void **, 0x20);
    temp_r8 = M2C_FIELD(sp88, void **, 0x24);
    sp8 = M2C_FIELD(temp_r9_2, f32 *, 0);
    M2C_FIELD(&sp8, f32 *, 4) = (f32) M2C_FIELD(temp_r9_2, f32 *, 4);
    M2C_FIELD(&sp8, f32 *, 0xC) = (f32) lbl_803200B4;
    M2C_FIELD(&sp8, f32 *, 8) = (f32) M2C_FIELD(temp_r9_2, f32 *, 8);
    M2C_FIELD(&sp8, f32 *, 0x10) = (f32) M2C_FIELD(temp_r9_2, f32 *, 0xC);
    M2C_FIELD(&sp8, f32 *, 0x14) = (f32) M2C_FIELD(temp_r9_2, f32 *, 0x10);
    M2C_FIELD(&sp8, f32 *, 0x1C) = (f32) lbl_803200B4;
    M2C_FIELD(&sp8, f32 *, 0x18) = (f32) M2C_FIELD(temp_r9_2, f32 *, 0x14);
    M2C_FIELD(&sp8, f32 *, 0x20) = (f32) M2C_FIELD(temp_r9_2, f32 *, 0x18);
    M2C_FIELD(&sp8, f32 *, 0x24) = (f32) M2C_FIELD(temp_r9_2, f32 *, 0x1C);
    M2C_FIELD(&sp8, f32 *, 0x2C) = (f32) lbl_803200B4;
    M2C_FIELD(&sp8, f32 *, 0x28) = (f32) M2C_FIELD(temp_r9_2, f32 *, 0x20);
    M2C_FIELD(&sp8, f32 *, 0x30) = (f32) M2C_FIELD(temp_r8, f32 *, 0);
    M2C_FIELD(&sp8, f32 *, 0x34) = (f32) M2C_FIELD(temp_r8, f32 *, 4);
    M2C_FIELD(&sp8, f32 *, 0x3C) = (f32) lbl_803200B8;
    M2C_FIELD(&sp8, f32 *, 0x38) = (f32) M2C_FIELD(temp_r8, f32 *, 8);
    if (fn_801ABFC4(&sp8, &sp48) != 0) {
        sp8 = sp48;
        M2C_FIELD(&sp8, f32 *, 4) = sp4C;
        M2C_FIELD(&sp8, f32 *, 8) = sp50;
        M2C_FIELD(&sp8, f32 *, 0xC) = sp54;
        M2C_FIELD(&sp8, f32 *, 0x10) = sp58;
        M2C_FIELD(&sp8, f32 *, 0x14) = sp5C;
        M2C_FIELD(&sp8, f32 *, 0x18) = sp60;
        M2C_FIELD(&sp8, f32 *, 0x1C) = sp64;
        M2C_FIELD(&sp8, f32 *, 0x20) = sp68;
        M2C_FIELD(&sp8, f32 *, 0x24) = sp6C;
        M2C_FIELD(&sp8, f32 *, 0x28) = sp70;
        M2C_FIELD(&sp8, f32 *, 0x2C) = sp74;
        M2C_FIELD(&sp8, f32 *, 0x30) = sp78;
        M2C_FIELD(&sp8, f32 *, 0x34) = sp7C;
        M2C_FIELD(&sp8, f32 *, 0x38) = sp80;
        M2C_FIELD(&sp8, f32 *, 0x3C) = sp84;
    }
    temp_r9_3 = M2C_FIELD(arg0, void **, 0);
    temp_r8_2 = arg0 + 0x84;
    temp_r11_2 = temp_r9_3 + 0x38;
    temp_f11 = M2C_FIELD(temp_r11_2, f32 *, 4);
    temp_f7 = M2C_FIELD(temp_r9_3, f32 *, 0x38);
    temp_f0 = M2C_FIELD(temp_r11_2, f32 *, 8);
    sp48 = (temp_f0 * M2C_FIELD(&sp8, f32 *, 0x20)) + ((temp_f7 * sp8) + (temp_f11 * M2C_FIELD(&sp8, f32 *, 0x10))) + M2C_FIELD(&sp8, f32 *, 0x30);
    sp50 = (temp_f0 * M2C_FIELD(&sp8, f32 *, 0x28)) + ((temp_f7 * M2C_FIELD(&sp8, f32 *, 8)) + (temp_f11 * M2C_FIELD(&sp8, f32 *, 0x18))) + M2C_FIELD(&sp8, f32 *, 0x38);
    sp4C = (temp_f0 * M2C_FIELD(&sp8, f32 *, 0x24)) + ((temp_f7 * M2C_FIELD(&sp8, f32 *, 4)) + (temp_f11 * M2C_FIELD(&sp8, f32 *, 0x14))) + M2C_FIELD(&sp8, f32 *, 0x34);
    M2C_FIELD(arg0, f32 *, 0x84) = sp48;
    M2C_FIELD(temp_r8_2, s32 *, 8) = (s32) M2C_FIELD(&sp48, s32 *, 8);
    M2C_FIELD(temp_r8_2, s32 *, 4) = (s32) M2C_FIELD(&sp48, s32 *, 4);
}

