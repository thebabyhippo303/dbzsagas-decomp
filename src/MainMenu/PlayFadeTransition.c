/* MainMenu__PlayFadeTransition @ 0x8002319C (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void fn_80188B64(char *, int);
extern s8 lbl_80310684 __attribute__((section(".data")));

void MainMenu__PlayFadeTransition(void *arg0) {
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r9;
    void *temp_r9_2;

    fn_80188B64(&lbl_80310684, 0);
    temp_r11 = M2C_FIELD(arg0, void **, 0x20EC);
    temp_r9 = M2C_FIELD(temp_r11, void **, 0x19C);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x364)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x360));
    temp_r11_2 = M2C_FIELD(arg0, void **, 0x20EC);
    temp_r9_2 = M2C_FIELD(temp_r11_2, void **, 0x19C);
    M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *), 0x36C)(temp_r11_2 + M2C_FIELD(temp_r9_2, s16 *, 0x368));
}
