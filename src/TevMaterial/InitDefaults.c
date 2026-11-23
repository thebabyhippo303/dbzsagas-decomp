/* TevMaterial__InitDefaults @ 0x8024BF50 (size: 0xE0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


void TevMaterial__InitDefaults(void *arg0) {
    s32 var_ctr;
    void *var_r11;

    var_ctr = 0x10;
    M2C_FIELD(arg0, s8 *, 0x40A) = 0;
    var_r11 = arg0 + 0x40C;
    M2C_FIELD(arg0, s8 *, 0x408) = 1;
    M2C_FIELD(arg0, s8 *, 0x409) = 0;
    do {
        M2C_FIELD(var_r11, s32 *, 0) = 0xFF;
        M2C_FIELD(var_r11, s32 *, 4) = 0xFF;
        M2C_FIELD(var_r11, s32 *, 8) = 0xFF;
        M2C_FIELD(var_r11, s32 *, 0xC) = 0;
        M2C_FIELD(var_r11, s32 *, 0x10) = 1;
        M2C_FIELD(var_r11, s32 *, 0x14) = 4;
        M2C_FIELD(var_r11, s8 *, 0x18) = 0;
        M2C_FIELD(var_r11, s32 *, 0x1C) = 0x7D;
        M2C_FIELD(var_r11, s32 *, 0x20) = 0xF;
        M2C_FIELD(var_r11, s32 *, 0x24) = 0xF;
        M2C_FIELD(var_r11, s32 *, 0x28) = 0xF;
        M2C_FIELD(var_r11, s32 *, 0x2C) = 0xA;
        M2C_FIELD(var_r11, s32 *, 0x30) = 0;
        M2C_FIELD(var_r11, s32 *, 0x34) = 0;
        M2C_FIELD(var_r11, s32 *, 0x38) = 0;
        M2C_FIELD(var_r11, s8 *, 0x3C) = 1;
        M2C_FIELD(var_r11, s32 *, 0x40) = 0;
        M2C_FIELD(var_r11, s32 *, 0x44) = 7;
        M2C_FIELD(var_r11, s32 *, 0x48) = 7;
        M2C_FIELD(var_r11, s32 *, 0x4C) = 7;
        M2C_FIELD(var_r11, s32 *, 0x50) = 5;
        M2C_FIELD(var_r11, s32 *, 0x54) = 0;
        M2C_FIELD(var_r11, s32 *, 0x58) = 0;
        M2C_FIELD(var_r11, s32 *, 0x5C) = 0;
        M2C_FIELD(var_r11, s8 *, 0x60) = 1;
        M2C_FIELD(var_r11, s32 *, 0x64) = 0;
        M2C_FIELD(var_r11, s32 *, 0x68) = 0;
        M2C_FIELD(var_r11, s32 *, 0x6C) = 0;
        var_r11 += 0x70;
        var_ctr -= 1;
    } while (var_ctr != 0);
    M2C_FIELD(arg0, s32 *, 0xB0C) = 0;
    M2C_FIELD(arg0, s32 *, 0xB10) = 0;
    M2C_FIELD(arg0, s32 *, 0xB14) = 0;
}