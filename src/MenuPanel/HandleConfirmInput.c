/* MenuPanel__HandleConfirmInput @ 0x80268180 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


void MenuPanel__HandleConfirmInput(void *arg0) {
    void *temp_r10;
    void *temp_r11;
    void *temp_r29;
    void *temp_r30;
    void *temp_r9;

    temp_r10 = M2C_FIELD(arg0, void **, 0xADF8);
    if (temp_r10 != NULL) {
        temp_r9 = M2C_FIELD(temp_r10, void **, 0x10);
        temp_r11 = M2C_FIELD(arg0, void **, 0x19C);
        temp_r29 = temp_r11 + 0x4D8;
        temp_r30 = arg0 + M2C_FIELD(temp_r11, s16 *, 0x4D8);
        M2C_FIELD(temp_r29, M2C_UNK (**)(void *, s32), 4)(temp_r30, M2C_FIELD(temp_r9, s32 (**)(void *), 0xA4)(temp_r10 + M2C_FIELD(temp_r9, s16 *, 0xA0)));
    }
}
