/* MenuSlider__Decrement @ 0x80015944 (size: 0x144, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void fn_80260304(void *, float, float);
void fn_8026B0C8(void *, int);
void fn_8026B420(void *);
extern f32 lbl_8030DAA4 __attribute__((section(".data")));
extern f32 lbl_8030DAA8 __attribute__((section(".data")));
extern f32 lbl_8030DAAC __attribute__((section(".data")));

void MenuSlider__Decrement(void *arg0) {
    s32 temp_r9;
    s32 var_r29;
    s32 var_r30;
    s32 var_r30_2;
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r28;
    void *temp_r9_2;
    void *temp_r9_3;

    temp_r9 = M2C_FIELD(arg0, s32 *, 0x838) - 1;
    M2C_FIELD(arg0, s32 *, 0x838) = temp_r9;
    if (temp_r9 < 0) {
        M2C_FIELD(arg0, s32 *, 0x838) = 0;
    }
    var_r29 = 0;
    temp_r28 = arg0 + 0x1A0;
    if (var_r29 < (s32) M2C_FIELD(arg0, s32 *, 0x838)) {
        var_r30 = 0;
        do {
            temp_r11 = *(void **)((char *)M2C_FIELD(arg0, void **, 0x1A0) + var_r30);
            var_r29 += 1;
            temp_r9_2 = M2C_FIELD(temp_r11, void **, 0x19C);
            var_r30 += 4;
            M2C_FIELD(temp_r9_2, void (**)(void *, s32, s32, s32, s32, s32), 0x6C)(temp_r11 + M2C_FIELD(temp_r9_2, s16 *, 0x68), M2C_FIELD(arg0, s32 *, 0x848), M2C_FIELD(arg0, s32 *, 0x850), 0, 1, 1);
        } while (var_r29 < (s32) M2C_FIELD(arg0, s32 *, 0x838));
    }
    if (var_r29 < (s32) M2C_FIELD(temp_r28, s32 *, 4)) {
        var_r30_2 = var_r29 * 4;
        do {
            temp_r11_2 = *(void **)((char *)M2C_FIELD(arg0, void **, 0x1A0) + var_r30_2);
            var_r29 += 1;
            temp_r9_3 = M2C_FIELD(temp_r11_2, void **, 0x19C);
            var_r30_2 += 4;
            M2C_FIELD(temp_r9_3, void (**)(void *, s32, s32, s32, s32, s32), 0x6C)(temp_r11_2 + M2C_FIELD(temp_r9_3, s16 *, 0x68), M2C_FIELD(arg0, s32 *, 0x848), M2C_FIELD(arg0, s32 *, 0x84C), 0, 1, 1);
        } while (var_r29 < (s32) M2C_FIELD(temp_r28, s32 *, 4));
    }
    fn_8026B420(M2C_FIELD(arg0, void **, 0x65C));
    fn_80260304(M2C_FIELD(arg0, void **, 0x65C) + 0x304, lbl_8030DAA4, lbl_8030DAA8);
    fn_80260304(M2C_FIELD(arg0, void **, 0x65C) + 0x304, lbl_8030DAAC, lbl_8030DAA4);
    fn_8026B0C8(M2C_FIELD(arg0, void **, 0x65C), 0);
}
