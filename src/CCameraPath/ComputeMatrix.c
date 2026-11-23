/* CCameraPath__ComputeMatrix @ 0x800CB970 (size: 0x1F0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


M2C_UNK Debug__FormatMessage(M2C_UNK *);            /* extern */
extern M2C_UNK lbl_80321B3C __attribute__((section(".data")));
extern f32 lbl_803A35BC __attribute__((section(".data")));

void CCameraPath__ComputeMatrix(void *arg0) {
    f32 sp38;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 sp18;
    f32 sp8;
    M2C_UNK (*temp_r9_2)(f32 *, void *, M2C_UNK, f32);
    f32 temp_f12;
    f32 temp_f31;
    void *temp_r10;
    void *temp_r10_2;
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r11_3;
    void *temp_r4;
    void *temp_r8;
    void *temp_r9;
    void *temp_r9_3;

    temp_r10 = M2C_FIELD(arg0, void **, 0x48);
    if (temp_r10 == NULL) {
        Debug__FormatMessage(&lbl_80321B3C);
        return;
    }
    temp_f31 = M2C_FIELD(arg0, f32 *, 0x40);
    temp_f12 = (temp_f31 * lbl_803A35BC) + M2C_FIELD(arg0, f32 *, 0x44);
    M2C_FIELD(arg0, f32 *, 0x44) = temp_f12;
    M2C_ERROR(/* unknown instruction: cror cr0un, cr0eq, cr0lt */);
    if (0 == 0) {
        M2C_FIELD(arg0, f32 *, 0x44) = (f32) (temp_f12 - (f32) (f64) (M2C_FIELD(temp_r10, s32 *, 8) - 1));
    }
    temp_r4 = M2C_FIELD(arg0, void **, 0x48);
    temp_r9 = M2C_FIELD(temp_r4, void **, 0);
    temp_r9_2 = M2C_FIELD(temp_r9, M2C_UNK (**)(f32 *, void *, M2C_UNK, f32), 0x14);
    temp_r9_2(&sp8, temp_r4 + M2C_FIELD(temp_r9, s16 *, 0x10), temp_r9_2, M2C_FIELD(arg0, f32 *, 0x44));
    temp_r11 = M2C_FIELD(arg0, void **, 0x50);
    if (temp_r11 != NULL) {
        temp_r11_2 = temp_r11 + 0x38;
        sp18 = M2C_FIELD(temp_r11, f32 *, 0x38);
        M2C_FIELD(&sp18, s32 *, 4) = (s32) M2C_FIELD(temp_r11_2, s32 *, 4);
        M2C_FIELD(&sp18, s32 *, 8) = (s32) M2C_FIELD(temp_r11_2, s32 *, 8);
    } else {
        temp_r8 = M2C_FIELD(arg0, void **, 0x54);
        if (temp_r8 != NULL) {
            sp18 = M2C_FIELD(temp_r8, f32 *, 0);
            M2C_FIELD(&sp18, s32 *, 4) = (s32) M2C_FIELD(temp_r8, s32 *, 4);
            M2C_FIELD(&sp18, s32 *, 8) = (s32) M2C_FIELD(temp_r8, s32 *, 8);
        } else {
            temp_r11_3 = M2C_FIELD(arg0, void **, 0x48);
            temp_r9_3 = M2C_FIELD(temp_r11_3, void **, 0);
            M2C_FIELD(temp_r9_3, M2C_UNK (**)(f32 *, void *, f32), 0x2C)(&sp38, temp_r11_3 + M2C_FIELD(temp_r9_3, s16 *, 0x28), (temp_f31 * M2C_FIELD(arg0, f32 *, 0x4C)) + M2C_FIELD(arg0, f32 *, 0x44));
            sp28 = sp8 + sp38;
            sp2C = M2C_FIELD(&sp8, f32 *, 4) + sp3C;
            sp30 = M2C_FIELD(&sp8, f32 *, 8) + sp40;
            sp18 = sp28;
            M2C_FIELD(&sp18, s32 *, 4) = (s32) M2C_FIELD(&sp28, s32 *, 4);
            M2C_FIELD(&sp18, s32 *, 8) = (s32) M2C_FIELD(&sp28, s32 *, 8);
        }
    }
    temp_r10_2 = arg0 + 0xC;
    M2C_FIELD(arg0, f32 *, 0) = sp8;
    M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(&sp8, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(&sp8, s32 *, 4);
    M2C_FIELD(arg0, f32 *, 0xC) = sp18;
    M2C_FIELD(temp_r10_2, s32 *, 8) = (s32) M2C_FIELD(&sp18, s32 *, 8);
    M2C_FIELD(temp_r10_2, s32 *, 4) = (s32) M2C_FIELD(&sp18, s32 *, 4);
}

