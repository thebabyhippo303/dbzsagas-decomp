/* MissionUI__StartSlideIn @ 0x8011B120 (size: 0x298, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void SimLoop__ActivateControls(int, int);
void UI__SetColorRGBA(void *, float, float, float, float);
void fn_80188B64(char *, int);
M2C_UNK MissionUI__BuildProgressEntries(void *);    /* extern */
u32 fn_801850A8();                                  /* extern */
M2C_UNK fn_80266F24(void *, M2C_UNK, f32);          /* extern */
extern s8 lbl_80327108;
extern f32 lbl_80327114 __attribute__((section(".data")));
extern f32 lbl_80327118 __attribute__((section(".data")));
extern f32 lbl_80327128 __attribute__((section(".data")));
extern s32 lbl_803DC3C0;

void MissionUI__StartSlideIn(void *arg0) {
    void *temp_r11;
    void *temp_r9;
    void *temp_r9_2;

    if ((s32) M2C_FIELD(arg0, s32 *, 0xAEB0) == 0) {
        temp_r9 = M2C_FIELD(arg0, void **, 0x19C);
        if (M2C_FIELD(temp_r9, s32 (**)(void *, void *), 0x3A4)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x3A0), temp_r9) == 0) {
            fn_80188B64(&lbl_80327108, 0);
            temp_r9_2 = M2C_FIELD(arg0, void **, 0x19C);
            M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, f32, f32, f32, f32), 0x134)(arg0 + M2C_FIELD(temp_r9_2, s16 *, 0x130), lbl_80327114, lbl_80327114, lbl_80327114, lbl_80327118);
            UI__SetColorRGBA(arg0 + 0x1A4, lbl_80327114, lbl_80327114, lbl_80327114, lbl_80327114);
            UI__SetColorRGBA(arg0 + 0x344, lbl_80327114, lbl_80327114, lbl_80327114, lbl_80327114);
            MissionUI__BuildProgressEntries(arg0);
            temp_r11 = M2C_FIELD(arg0, void **, 0xAED0);
            temp_r9_2 = M2C_FIELD(temp_r11, void **, 0x19C);
            M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, f32, f32, f32, f32), 0x134)(temp_r11 + M2C_FIELD(temp_r9_2, s16 *, 0x130), lbl_80327114, lbl_80327114, lbl_80327114, lbl_80327114);
            temp_r11 = M2C_FIELD(arg0, void **, 0xAECC);
            temp_r9_2 = M2C_FIELD(temp_r11, void **, 0x19C);
            M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, f32, f32, f32, f32), 0x134)(temp_r11 + M2C_FIELD(temp_r9_2, s16 *, 0x130), lbl_80327114, lbl_80327114, lbl_80327114, lbl_80327114);
            temp_r11 = M2C_FIELD(arg0, void **, 0xAEC8);
            temp_r9_2 = M2C_FIELD(temp_r11, void **, 0x19C);
            M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, f32, f32, f32, f32), 0x134)(temp_r11 + M2C_FIELD(temp_r9_2, s16 *, 0x130), lbl_80327114, lbl_80327114, lbl_80327114, lbl_80327114);
            temp_r11 = M2C_FIELD(arg0, void **, 0xAEC4);
            temp_r9_2 = M2C_FIELD(temp_r11, void **, 0x19C);
            M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, f32, f32, f32, f32), 0x134)(temp_r11 + M2C_FIELD(temp_r9_2, s16 *, 0x130), lbl_80327114, lbl_80327114, lbl_80327114, lbl_80327114);
            temp_r11 = M2C_FIELD(arg0, void **, 0xAEC0);
            temp_r9_2 = M2C_FIELD(temp_r11, void **, 0x19C);
            M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, f32, f32, f32, f32), 0x134)(temp_r11 + M2C_FIELD(temp_r9_2, s16 *, 0x130), lbl_80327114, lbl_80327114, lbl_80327114, lbl_80327114);
            temp_r11 = M2C_FIELD(arg0, void **, 0xAEBC);
            temp_r9_2 = M2C_FIELD(temp_r11, void **, 0x19C);
            M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, f32, f32, f32, f32), 0x134)(temp_r11 + M2C_FIELD(temp_r9_2, s16 *, 0x130), lbl_80327114, lbl_80327114, lbl_80327114, lbl_80327114);
            temp_r11 = M2C_FIELD(arg0, void **, 0xAEB8);
            temp_r9_2 = M2C_FIELD(temp_r11, void **, 0x19C);
            M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, f32, f32, f32, f32), 0x134)(temp_r11 + M2C_FIELD(temp_r9_2, s16 *, 0x130), lbl_80327114, lbl_80327114, lbl_80327114, lbl_80327114);
            temp_r11 = M2C_FIELD(arg0, void **, 0xAEB4);
            temp_r9 = M2C_FIELD(temp_r11, void **, 0x19C);
            M2C_FIELD(temp_r9, M2C_UNK (**)(void *, f32, f32, f32, f32), 0x134)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x130), lbl_80327114, lbl_80327114, lbl_80327114, lbl_80327114);
            M2C_FIELD(arg0, f32 *, 0xAE94) = (f32) ((f32) (f64) fn_801850A8() * lbl_80327128);
            SimLoop__ActivateControls(lbl_803DC3C0, 0);
            fn_80266F24(arg0, 0, lbl_80327118);
            temp_r9 = M2C_FIELD(arg0, void **, 0x19C);
            M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x1D4)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x1D0));
        }
    }
}
