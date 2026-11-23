/* MissionUI__InitializeFailureMessageText @ 0x8011CD38 (size: 0x150, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 Mem__New(s32);
f32 fn_8026B86C(void);
void * fn_80270450(void *);
extern f32 lbl_803271F4 __attribute__((section(".data")));
extern f32 lbl_803271F8 __attribute__((section(".data")));
extern f32 lbl_803271FC __attribute__((section(".data")));
extern f32 lbl_80327200 __attribute__((section(".data")));
extern f32 lbl_80327204 __attribute__((section(".data")));

void MissionUI__InitializeFailureMessageText(void *arg0, s32 arg1) {
    char *p_ae98;
    void *temp_r10;
    void *temp_r10_2;
    void *temp_r10_3;
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r11_3;
    void *temp_r11_4;
    void *temp_r11_5;
    void *temp_r29;
    void *temp_r29_2;
    void *temp_r30;
    void *temp_r30_2;
    void *temp_r3;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;

    p_ae98 = (char *)arg0 + 0xae98;
    temp_r3 = fn_80270450(Mem__New(0x1F4));
    M2C_FIELD(p_ae98, void **, 0x0) = temp_r3;
    temp_r9 = M2C_FIELD(temp_r3, void **, 0x19C);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *, s32), 0x36C)(temp_r3 + M2C_FIELD(temp_r9, s16 *, 0x368), arg1);
    temp_r11 = M2C_FIELD(p_ae98, void **, 0x0);
    temp_r9_2 = M2C_FIELD(temp_r11, void **, 0x19C);
    M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, f32, f32), 0xEC)(temp_r11 + M2C_FIELD(temp_r9_2, s16 *, 0xE8), lbl_803271F4, lbl_803271F4);
    temp_r30 = M2C_FIELD(p_ae98, void **, 0x0);
    temp_r29 = M2C_FIELD(temp_r30, void **, 0x19C);
    temp_r29_2 = temp_r29 + 0xA8;
    temp_r30_2 = temp_r30 + M2C_FIELD(temp_r29, s16 *, 0xA8);
    M2C_FIELD(temp_r29_2, M2C_UNK (**)(void *, f32, f32), 4)(temp_r30_2, fn_8026B86C() * lbl_803271F4, lbl_803271F8);
    temp_r10 = M2C_FIELD(p_ae98, void **, 0x0);
    temp_r11_2 = M2C_FIELD(temp_r10, void **, 0x19C);
    M2C_FIELD(temp_r11_2, M2C_UNK (**)(void *, f32), 0x42C)(temp_r10 + M2C_FIELD(temp_r11_2, s16 *, 0x428), lbl_803271FC);
    temp_r10_2 = M2C_FIELD(p_ae98, void **, 0x0);
    temp_r11_3 = M2C_FIELD(temp_r10_2, void **, 0x19C);
    M2C_FIELD(temp_r11_3, M2C_UNK (**)(void *, f32), 0x3EC)(temp_r10_2 + M2C_FIELD(temp_r11_3, s16 *, 0x3E8), lbl_80327200);
    temp_r10_3 = M2C_FIELD(p_ae98, void **, 0x0);
    temp_r11_4 = M2C_FIELD(temp_r10_3, void **, 0x19C);
    M2C_FIELD(temp_r11_4, M2C_UNK (**)(void *, f32, f32, f32, f32), 0x10C)(temp_r10_3 + M2C_FIELD(temp_r11_4, s16 *, 0x108), lbl_80327204, lbl_80327204, lbl_80327204, lbl_80327204);
    temp_r11_5 = M2C_FIELD(p_ae98, void **, 0x0);
    temp_r9_3 = M2C_FIELD(temp_r11_5, void **, 0x19C);
    M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *, M2C_UNK), 0x1B4)(temp_r11_5 + M2C_FIELD(temp_r9_3, s16 *, 0x1B0), 0x6000);
}
