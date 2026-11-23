/* Avatar__RefreshCollisionBoundsWorldPositions @ 0x8008EA5C (size: 0x1AC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


extern void *lbl_803DC3C0;

void Avatar__RefreshCollisionBoundsWorldPositions(void *arg0) {
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
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f11;
    f32 temp_f11_2;
    f32 temp_f12;
    f32 temp_f13;
    f32 temp_f13_2;
    f32 temp_f13_3;
    f32 temp_f7;
    f32 temp_f8;
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r4;
    void *temp_r5;
    void *temp_r6;
    void *temp_r8;
    void *temp_r9;
    void *temp_r9_2;

    if ((s32) M2C_FIELD(M2C_FIELD(lbl_803DC3C0, void **, 0x238), s32 *, 4) != 0) {
        temp_r11 = M2C_FIELD(arg0, void **, 0x7E0);
        temp_r9 = M2C_FIELD(temp_r11, void **, 4);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x54)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x50));
        temp_r9_2 = arg0 + 0x44;
        temp_r11_2 = arg0 + 0x728;
        temp_f10 = M2C_FIELD(temp_r11_2, f32 *, 4);
        temp_r8 = arg0 + 0x38;
        temp_r6 = arg0 + 0x734;
        temp_f13 = M2C_FIELD(arg0, f32 *, 0x728);
        temp_r5 = arg0 + 0x74C;
        temp_f0 = M2C_FIELD(temp_r11_2, f32 *, 8);
        temp_r4 = arg0 + 0x740;
        temp_f11 = (temp_f0 * M2C_FIELD(temp_r9_2, f32 *, 0x18)) + ((temp_f13 * M2C_FIELD(arg0, f32 *, 0x44)) + (temp_f10 * M2C_FIELD(temp_r9_2, f32 *, 0xC)));
        temp_f10_2 = (temp_f0 * M2C_FIELD(temp_r9_2, f32 *, 0x1C)) + ((temp_f13 * M2C_FIELD(temp_r9_2, f32 *, 4)) + (temp_f10 * M2C_FIELD(temp_r9_2, f32 *, 0x10)));
        sp18 = temp_f11;
        temp_f0_2 = (temp_f0 * M2C_FIELD(temp_r9_2, f32 *, 0x20)) + ((temp_f13 * M2C_FIELD(temp_r9_2, f32 *, 8)) + (temp_f10 * M2C_FIELD(temp_r9_2, f32 *, 0x14)));
        sp1C = temp_f10_2;
        sp20 = temp_f0_2;
        sp8 = temp_f11 + M2C_FIELD(arg0, f32 *, 0x38);
        spC = temp_f10_2 + M2C_FIELD(temp_r8, f32 *, 4);
        sp10 = temp_f0_2 + M2C_FIELD(temp_r8, f32 *, 8);
        M2C_FIELD(arg0, f32 *, 0x734) = sp8;
        M2C_FIELD(temp_r6, s32 *, 8) = (s32) M2C_FIELD(&sp8, s32 *, 8);
        M2C_FIELD(temp_r6, s32 *, 4) = (s32) M2C_FIELD(&sp8, s32 *, 4);
        temp_f7 = M2C_FIELD(temp_r5, f32 *, 4);
        temp_f8 = M2C_FIELD(arg0, f32 *, 0x74C);
        temp_f13_2 = M2C_FIELD(temp_r5, f32 *, 8);
        temp_f11_2 = (temp_f13_2 * M2C_FIELD(temp_r9_2, f32 *, 0x18)) + ((temp_f8 * M2C_FIELD(arg0, f32 *, 0x44)) + (temp_f7 * M2C_FIELD(temp_r9_2, f32 *, 0xC)));
        temp_f12 = (temp_f13_2 * M2C_FIELD(temp_r9_2, f32 *, 0x20)) + ((temp_f8 * M2C_FIELD(temp_r9_2, f32 *, 8)) + (temp_f7 * M2C_FIELD(temp_r9_2, f32 *, 0x14)));
        sp28 = temp_f11_2;
        temp_f13_3 = (temp_f13_2 * M2C_FIELD(temp_r9_2, f32 *, 0x1C)) + ((temp_f8 * M2C_FIELD(temp_r9_2, f32 *, 4)) + (temp_f7 * M2C_FIELD(temp_r9_2, f32 *, 0x10)));
        sp30 = temp_f12;
        sp2C = temp_f13_3;
        sp8 = temp_f11_2 + M2C_FIELD(arg0, f32 *, 0x38);
        sp10 = temp_f12 + M2C_FIELD(temp_r8, f32 *, 8);
        spC = temp_f13_3 + M2C_FIELD(temp_r8, f32 *, 4);
        M2C_FIELD(arg0, f32 *, 0x740) = sp8;
        M2C_FIELD(temp_r4, s32 *, 8) = (s32) M2C_FIELD(&sp8, s32 *, 8);
        M2C_FIELD(temp_r4, s32 *, 4) = (s32) M2C_FIELD(&sp8, s32 *, 4);
    }
}
