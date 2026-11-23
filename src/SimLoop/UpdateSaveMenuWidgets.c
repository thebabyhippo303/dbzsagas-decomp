/* SimLoop__UpdateSaveMenuWidgets @ 0x8001D520 (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void fn_8004D0B8(void);
M2C_UNK fn_8025FF20(s32);
extern s32 lbl_803A35DC __attribute__((section(".data")));

void SimLoop__UpdateSaveMenuWidgets(void *arg0) {
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r9;
    void *temp_r9_2;

    if ((s32) lbl_803A35DC == 0) {
        fn_8025FF20(0);
    } else {
        fn_8025FF20(-1);
    }
    temp_r11 = M2C_FIELD(arg0, void **, 0x20EC);
    temp_r9 = M2C_FIELD(temp_r11, void **, 0x19C);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x3C)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x38));
    temp_r11_2 = M2C_FIELD(arg0, void **, 0x20F0);
    temp_r9_2 = M2C_FIELD(temp_r11_2, void **, 0x19C);
    M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *), 0x3C)(temp_r11_2 + M2C_FIELD(temp_r9_2, s16 *, 0x38));
    fn_8004D0B8();
}
