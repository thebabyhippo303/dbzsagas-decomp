/* PiccoloTimer__UpdateProgress @ 0x8011DC80 (size: 0x124, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

extern f32 lbl_80327274 __attribute__((section(".data")));
extern f32 lbl_80327278 __attribute__((section(".data")));
extern f32 lbl_8032727C __attribute__((section(".data")));

void PiccoloTimer__UpdateProgress(void *arg0, f32 farg0) {
    f32 temp_f31;
    void *temp_r10;
    void *temp_r10_2;
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r11_3;
    void *temp_r11_4;
    void *temp_r11_5;
    void *temp_r11_6;
    void *temp_r11_7;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;
    void *temp_r9_5;
    void (*fn)(void *, f32, f32);
    s16 adj;

    temp_r10 = M2C_FIELD(arg0, void **, 0xC);
    temp_r11 = M2C_FIELD(temp_r10, void **, 0x19C);
    temp_f31 = (farg0 * lbl_80327274) + M2C_FIELD(arg0, f32 *, 0x14);
    adj = M2C_FIELD(temp_r11, s16 *, 0xA8);
    fn = M2C_FIELD(temp_r11, void (**)(void *, f32, f32), 0xAC);
    fn((char *) temp_r10 + adj, temp_f31, lbl_80327278);
    temp_r10_2 = M2C_FIELD(arg0, void **, 0x10);
    temp_r11_2 = M2C_FIELD(temp_r10_2, void **, 0x19C);
    M2C_FIELD(temp_r11_2, M2C_UNK (**)(void *, f32), 0x94)((char *) temp_r10_2 + M2C_FIELD(temp_r11_2, s16 *, 0x90), (temp_f31 - M2C_FIELD(arg0, f32 *, 0x14)) - lbl_8032727C);
    temp_r11_3 = M2C_FIELD(arg0, void **, 0);
    temp_r9 = M2C_FIELD(temp_r11_3, void **, 0x19C);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x3C)((char *) temp_r11_3 + M2C_FIELD(temp_r9, s16 *, 0x38));
    temp_r11_4 = M2C_FIELD(arg0, void **, 4);
    temp_r9_2 = M2C_FIELD(temp_r11_4, void **, 0x19C);
    M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *), 0x3C)((char *) temp_r11_4 + M2C_FIELD(temp_r9_2, s16 *, 0x38));
    temp_r11_5 = M2C_FIELD(arg0, void **, 8);
    temp_r9_3 = M2C_FIELD(temp_r11_5, void **, 0x19C);
    M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *), 0x3C)((char *) temp_r11_5 + M2C_FIELD(temp_r9_3, s16 *, 0x38));
    temp_r11_6 = M2C_FIELD(arg0, void **, 0xC);
    temp_r9_4 = M2C_FIELD(temp_r11_6, void **, 0x19C);
    M2C_FIELD(temp_r9_4, M2C_UNK (**)(void *), 0x3C)((char *) temp_r11_6 + M2C_FIELD(temp_r9_4, s16 *, 0x38));
    temp_r11_7 = M2C_FIELD(arg0, void **, 0x10);
    temp_r9_5 = M2C_FIELD(temp_r11_7, void **, 0x19C);
    M2C_FIELD(temp_r9_5, M2C_UNK (**)(void *), 0x3C)((char *) temp_r11_7 + M2C_FIELD(temp_r9_5, s16 *, 0x38));
}
