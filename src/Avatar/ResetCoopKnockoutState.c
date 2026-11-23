/* Avatar__ResetCoopKnockoutState @ 0x800B90F0 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


void Avatar__ResetCoopKnockoutState(void *arg0) {
    void *temp_r11;
    void *temp_r9;

    temp_r11 = M2C_FIELD(arg0, void **, 0);
    M2C_FIELD(arg0, s32 *, 0x88) = 0;
    temp_r9 = M2C_FIELD(temp_r11, void **, 0x34);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK), 0x64)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x60), 0);
}
