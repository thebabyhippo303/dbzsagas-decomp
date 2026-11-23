/* Avatar__EndCoopKnockout @ 0x800B8F78 (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Avatar__SetCoopKnockoutFlag(void *, int);
void Avatar__EndCoopKnockout(void *arg0) {
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r11_3;

    temp_r11 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x84);
    M2C_FIELD(temp_r11, s32 *, 0x104) = (s32) (M2C_FIELD(temp_r11, s32 *, 0x104) & 0xFFFFEFFF);
    temp_r11_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x84);
    M2C_FIELD(temp_r11_2, s32 *, 0x104) = (s32) (M2C_FIELD(temp_r11_2, s32 *, 0x104) & 0xFFFFBFFF);
    temp_r11_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x84);
    M2C_FIELD(temp_r11_3, s32 *, 0x104) = (s32) (M2C_FIELD(temp_r11_3, s32 *, 0x104) & 0xFFFF7FFF);
    M2C_FIELD(arg0, s32 *, 0x88) = 0;
    Avatar__SetCoopKnockoutFlag(M2C_FIELD(arg0, void **, 0), 0);
}
