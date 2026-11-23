/* Bone__UpdateWorldTransformTree @ 0x8023C480 (size: 0x224, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Matrix__Copy4x4Floats(void *, void *);
M2C_UNK .L_8023C480();                              /* extern */
M2C_UNK fn_8023BEB8(void *);                        /* extern */
M2C_UNK fn_8023C6A4();                              /* extern */
extern f32 lbl_80346F74 __attribute__((section(".data")));
extern f32 lbl_80346F78 __attribute__((section(".data")));
extern M2C_UNK lbl_803AD910 __attribute__((section(".data")));

void Bone__UpdateWorldTransformTree(void *arg0) {
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    f32 sp20;
    f32 sp1C;
    f32 sp18;
    f32 sp14;
    f32 sp10;
    f32 spC;
    f32 sp8;
    f32 temp_f10;
    f32 temp_f11;
    f32 temp_f27;
    f32 temp_f27_2;
    f32 temp_f27_3;
    f32 temp_f27_4;
    f32 temp_f28;
    f32 temp_f28_2;
    f32 temp_f28_3;
    f32 temp_f28_4;
    f32 temp_f29;
    f32 temp_f29_2;
    f32 temp_f29_3;
    f32 temp_f29_4;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f5;
    f32 temp_f6;
    f32 temp_f7;
    f32 temp_f8;
    f32 temp_f9;
    void *temp_r11;
    void *temp_r9;

    if ((s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0xD8), u8 *, 0xCE) != 0) {
        fn_8023C6A4();
    }
    if (M2C_FIELD(arg0, s32 *, 0xDC) & 0x800000) {
        temp_r9 = M2C_FIELD(arg0, void **, 0xC0);
        temp_r11 = arg0 + 0x40;
        temp_f28 = M2C_FIELD(temp_r11, f32 *, 4);
        temp_f3 = M2C_FIELD(temp_r9, f32 *, 0x10);
        temp_f4 = M2C_FIELD(temp_r9, f32 *, 0x14);
        temp_f7 = M2C_FIELD(temp_r9, f32 *, 0x18);
        temp_f5 = M2C_FIELD(temp_r9, f32 *, 0);
        temp_f6 = M2C_FIELD(temp_r9, f32 *, 4);
        temp_f8 = M2C_FIELD(temp_r9, f32 *, 8);
        temp_f29 = M2C_FIELD(arg0, f32 *, 0x40);
        temp_f11 = M2C_FIELD(temp_r9, f32 *, 0x20);
        temp_f9 = M2C_FIELD(temp_r9, f32 *, 0x24);
        temp_f10 = M2C_FIELD(temp_r9, f32 *, 0x28);
        temp_f27 = M2C_FIELD(temp_r11, f32 *, 8);
        sp8 = (temp_f27 * temp_f11) + ((temp_f29 * temp_f5) + (temp_f28 * temp_f3));
        spC = (temp_f27 * temp_f9) + ((temp_f29 * temp_f6) + (temp_f28 * temp_f4));
        sp10 = (temp_f27 * temp_f10) + ((temp_f29 * temp_f8) + (temp_f28 * temp_f7));
        sp14 = lbl_80346F74;
        temp_f28_2 = M2C_FIELD(temp_r11, f32 *, 0x14);
        temp_f29_2 = M2C_FIELD(temp_r11, f32 *, 0x10);
        temp_f27_2 = M2C_FIELD(temp_r11, f32 *, 0x18);
        sp24 = lbl_80346F74;
        sp20 = (temp_f27_2 * temp_f10) + ((temp_f29_2 * temp_f8) + (temp_f28_2 * temp_f7));
        sp18 = (temp_f27_2 * temp_f11) + ((temp_f29_2 * temp_f5) + (temp_f28_2 * temp_f3));
        sp1C = (temp_f27_2 * temp_f9) + ((temp_f29_2 * temp_f6) + (temp_f28_2 * temp_f4));
        temp_f28_3 = M2C_FIELD(temp_r11, f32 *, 0x24);
        temp_f29_3 = M2C_FIELD(temp_r11, f32 *, 0x20);
        temp_f27_3 = M2C_FIELD(temp_r11, f32 *, 0x28);
        sp28 = (temp_f27_3 * temp_f11) + ((temp_f29_3 * temp_f5) + (temp_f28_3 * temp_f3));
        sp2C = (temp_f27_3 * temp_f9) + ((temp_f29_3 * temp_f6) + (temp_f28_3 * temp_f4));
        sp30 = (temp_f27_3 * temp_f10) + ((temp_f29_3 * temp_f8) + (temp_f28_3 * temp_f7));
        sp34 = lbl_80346F74;
        temp_f28_4 = M2C_FIELD(temp_r11, f32 *, 0x34);
        temp_f29_4 = M2C_FIELD(temp_r11, f32 *, 0x30);
        temp_f27_4 = M2C_FIELD(temp_r11, f32 *, 0x38);
        sp44 = lbl_80346F78;
        sp38 = (temp_f27_4 * temp_f11) + ((temp_f29_4 * temp_f5) + (temp_f28_4 * temp_f3)) + M2C_FIELD(temp_r9, f32 *, 0x30);
        sp3C = (temp_f27_4 * temp_f9) + ((temp_f29_4 * temp_f6) + (temp_f28_4 * temp_f4)) + M2C_FIELD(temp_r9, f32 *, 0x34);
        sp40 = (temp_f27_4 * temp_f10) + ((temp_f29_4 * temp_f8) + (temp_f28_4 * temp_f7)) + M2C_FIELD(temp_r9, f32 *, 0x38);
        Matrix__Copy4x4Floats(arg0, &sp8);
        if ((s32) (u8) M2C_FIELD(arg0, u8 *, 0xDC) != 0x20) {
            fn_8023BEB8(arg0);
        }
        M2C_FIELD(arg0, s32 *, 0xDC) = (s32) (M2C_FIELD(arg0, s32 *, 0xDC) & 0xFF7FFFFF);
        M2C_FIELD(&lbl_803AD910, s32 *, 0x80) = (s32) (M2C_FIELD(&lbl_803AD910, s32 *, 0x80) + 1);
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xC8) != 0) {
        .L_8023C480();
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xCC) != 0) {
        .L_8023C480();
    }
}

