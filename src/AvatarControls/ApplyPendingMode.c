/* AvatarControls__ApplyPendingMode @ 0x800A2634 (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void *AvatarControls__ApplyPendingMode(void *arg0) {
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r9;
    void *temp_r9_2;

    temp_r11 = M2C_FIELD(arg0, void **, 8);
    if ((void *) M2C_FIELD(arg0, void **, 0xC) != temp_r11) {
        temp_r9 = M2C_FIELD(temp_r11, void **, 4);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x3C)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x38));
        temp_r11_2 = M2C_FIELD(arg0, void **, 0xC);
        temp_r9_2 = M2C_FIELD(temp_r11_2, void **, 4);
        M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *), 0x34)(temp_r11_2 + M2C_FIELD(temp_r9_2, s16 *, 0x30));
        M2C_FIELD(arg0, void **, 8) = (void *) M2C_FIELD(arg0, void **, 0xC);
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x28) = (s32) M2C_FIELD(arg0, s32 *, 0x2A4);
    return M2C_FIELD(arg0, void **, 8);
}

