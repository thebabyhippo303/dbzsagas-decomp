/* Missile__UpdateTransform @ 0x800DCF78 (size: 0x254, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void RigidBody__StorePreviousTransform(void *);
extern f32 lbl_80322B40 __attribute__((section(".data")));
extern f32 lbl_80322B44 __attribute__((section(".data")));

void Missile__UpdateTransform(void *arg0) {
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 sp20;
    f32 sp1C;
    f32 sp18;
    f32 sp10;
    f32 spC;
    f32 sp8;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f10_3;
    f32 temp_f11;
    f32 temp_f11_2;
    f32 temp_f11_3;
    f32 temp_f12;
    f32 temp_f13;
    f32 temp_f7;
    f32 temp_f7_2;
    f32 temp_f9;
    f32 temp_f9_2;
    f32 temp_f9_3;
    void *temp_r10;
    void *temp_r10_2;
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r8;
    void *temp_r9;
    void *temp_r9_2;

    RigidBody__StorePreviousTransform(arg0);
    temp_r11 = *M2C_FIELD(arg0, void ***, 0x354);
    if (temp_r11 != NULL) {
        temp_f10 = M2C_FIELD(temp_r11, f32 *, 0x40);
        if (temp_f10 != lbl_80322B40) {
            sp8 = lbl_80322B40;
            temp_r11_2 = arg0 + 0x44;
            M2C_FIELD(&sp8, f32 *, 4) = temp_f10;
            temp_r9 = arg0 + 0x200;
            M2C_FIELD(&sp8, f32 *, 8) = (f32) lbl_80322B40;
            temp_r10 = arg0 + 0x314;
            sp30 = lbl_80322B40;
            temp_f13 = M2C_FIELD(arg0, f32 *, 0x1A4);
            temp_f10_2 = temp_f10 * temp_f13;
            temp_f0 = lbl_80322B40 * temp_f13;
            sp2C = temp_f10_2;
            sp28 = temp_f0;
            temp_f9 = (temp_f0 * M2C_FIELD(arg0, f32 *, 0x44)) + (temp_f10_2 * M2C_FIELD(temp_r11_2, f32 *, 4));
            temp_f11 = (temp_f0 * M2C_FIELD(temp_r11_2, f32 *, 0x18)) + (temp_f10_2 * M2C_FIELD(temp_r11_2, f32 *, 0x1C));
            temp_f0_2 = (temp_f0 * M2C_FIELD(temp_r11_2, f32 *, 0xC)) + (temp_f10_2 * M2C_FIELD(temp_r11_2, f32 *, 0x10));
            sp18 = temp_f9;
            sp20 = temp_f11;
            sp1C = temp_f0_2;
            temp_f7 = (temp_f11 * M2C_FIELD(temp_r9, f32 *, 0x20)) + ((temp_f9 * M2C_FIELD(temp_r9, f32 *, 0x18)) + (temp_f0_2 * M2C_FIELD(temp_r9, f32 *, 0x1C)));
            temp_f12 = (temp_f11 * M2C_FIELD(temp_r9, f32 *, 8)) + ((temp_f9 * M2C_FIELD(arg0, f32 *, 0x200)) + (temp_f0_2 * M2C_FIELD(temp_r9, f32 *, 4)));
            sp50 = temp_f7;
            sp48 = temp_f12;
            temp_f11_2 = (temp_f11 * M2C_FIELD(temp_r9, f32 *, 0x14)) + ((temp_f9 * M2C_FIELD(temp_r9, f32 *, 0xC)) + (temp_f0_2 * M2C_FIELD(temp_r9, f32 *, 0x10)));
            sp4C = temp_f11_2;
            sp58 = M2C_FIELD(arg0, f32 *, 0x314) + temp_f12;
            sp5C = M2C_FIELD(temp_r10, f32 *, 4) + temp_f11_2;
            sp60 = M2C_FIELD(temp_r10, f32 *, 8) + temp_f7;
            M2C_FIELD(arg0, f32 *, 0x314) = sp58;
            M2C_FIELD(temp_r10, f32 *, 8) = sp60;
            M2C_FIELD(temp_r10, f32 *, 4) = sp5C;
            sp38 = sp58;
            sp3C = sp5C;
            sp40 = sp60;
        }
    }
    temp_r10_2 = arg0 + 0x74;
    temp_r9_2 = arg0 + 0x200;
    temp_r8 = arg0 + 0x320;
    temp_f11_3 = M2C_FIELD(arg0, f32 *, 0x74) * lbl_80322B44;
    sp8 = temp_f11_3;
    sp10 = M2C_FIELD(temp_r10_2, f32 *, 8) * lbl_80322B44;
    spC = M2C_FIELD(temp_r10_2, f32 *, 4) * lbl_80322B44;
    temp_f0_3 = M2C_FIELD(&sp8, f32 *, 4);
    temp_f9_2 = M2C_FIELD(&sp8, f32 *, 8);
    temp_f7_2 = (temp_f9_2 * M2C_FIELD(temp_r9_2, f32 *, 0x20)) + ((temp_f11_3 * M2C_FIELD(temp_r9_2, f32 *, 0x18)) + (temp_f0_3 * M2C_FIELD(temp_r9_2, f32 *, 0x1C)));
    temp_f10_3 = (temp_f9_2 * M2C_FIELD(temp_r9_2, f32 *, 8)) + ((temp_f11_3 * M2C_FIELD(arg0, f32 *, 0x200)) + (temp_f0_3 * M2C_FIELD(temp_r9_2, f32 *, 4)));
    sp30 = temp_f7_2;
    temp_f9_3 = (temp_f9_2 * M2C_FIELD(temp_r9_2, f32 *, 0x14)) + ((temp_f11_3 * M2C_FIELD(temp_r9_2, f32 *, 0xC)) + (temp_f0_3 * M2C_FIELD(temp_r9_2, f32 *, 0x10)));
    sp28 = temp_f10_3;
    sp2C = temp_f9_3;
    sp38 = M2C_FIELD(arg0, f32 *, 0x320) + temp_f10_3;
    sp3C = M2C_FIELD(temp_r8, f32 *, 4) + temp_f9_3;
    sp40 = M2C_FIELD(temp_r8, f32 *, 8) + temp_f7_2;
    M2C_FIELD(arg0, f32 *, 0x320) = sp38;
    M2C_FIELD(temp_r8, f32 *, 8) = sp40;
    M2C_FIELD(temp_r8, f32 *, 4) = sp3C;
    sp18 = sp38;
    sp1C = sp3C;
    sp20 = sp40;
}

