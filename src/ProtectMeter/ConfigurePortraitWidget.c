/* ProtectMeter__ConfigurePortraitWidget @ 0x8011FE48 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void ProtectMeter__LoadPortrait(char *);
extern f32 lbl_80327348 __attribute__((section(".data")));

void ProtectMeter__ConfigurePortraitWidget(s8 *arg0) {
    void *temp_r10;
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r9;

    ProtectMeter__LoadPortrait(arg0);
    temp_r11 = M2C_FIELD(arg0, void **, 0xC);
    temp_r9 = M2C_FIELD(temp_r11, void **, 0x19C);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK), 0x1B4)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x1B0), 4);
    temp_r10 = M2C_FIELD(arg0, void **, 0xC);
    temp_r11_2 = M2C_FIELD(temp_r10, void **, 0x19C);
    M2C_FIELD(temp_r11_2, M2C_UNK (**)(void *, f32, f32), 0xCC)(temp_r10 + M2C_FIELD(temp_r11_2, s16 *, 0xC8), lbl_80327348, lbl_80327348);
}

