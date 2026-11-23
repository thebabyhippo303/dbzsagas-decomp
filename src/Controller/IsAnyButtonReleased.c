/* Controller__IsAnyButtonReleased @ 0x801D4CCC (size: 0x2D8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 Controller__IsAnyButtonReleased(void *arg0) {
    s32 t01; s32 t02; s32 t03; s32 t04; s32 t05; s32 t06;
    s32 t07; s32 t08; s32 t09; s32 t10; s32 t11; s32 t12;
    s32 t13; s32 t14; s32 t15; s32 t16; s32 t17; s32 t18;
    s32 ret = 0;
    t01 = (M2C_FIELD(arg0, s32 *, 0x30) == 0) && (((M2C_FIELD(arg0, s32 *, 0x34)) ^ 1) == 0);
    if (t01 != 0) goto set1;
    t02 = (M2C_FIELD(arg0, s32 *, 0x28) == 0) && (((M2C_FIELD(arg0, s32 *, 0x2C)) ^ 1) == 0);
    if (t02 != 0) goto set1;
    t03 = (M2C_FIELD(arg0, s32 *, 0x30) == 0) && (((M2C_FIELD(arg0, s32 *, 0x34)) ^ 1) == 0);
    if (t03 != 0) goto set1;
    t04 = (M2C_FIELD(arg0, s32 *, 0x38) == 0) && (((M2C_FIELD(arg0, s32 *, 0x3C)) ^ 1) == 0);
    if (t04 != 0) goto set1;
    t05 = (M2C_FIELD(arg0, s32 *, 0x40) == 0) && (((M2C_FIELD(arg0, s32 *, 0x44)) ^ 1) == 0);
    if (t05 != 0) goto set1;
    t06 = (M2C_FIELD(arg0, s32 *, 0x68) == 0) && (((M2C_FIELD(arg0, s32 *, 0x6C)) ^ 1) == 0);
    if (t06 != 0) goto set1;
    t07 = (M2C_FIELD(arg0, s32 *, 0x70) == 0) && (((M2C_FIELD(arg0, s32 *, 0x74)) ^ 1) == 0);
    if (t07 != 0) goto set1;
    t08 = (M2C_FIELD(arg0, s32 *, 0x50) == 0) && (((M2C_FIELD(arg0, s32 *, 0x54)) ^ 1) == 0);
    if (t08 != 0) goto set1;
    t09 = (M2C_FIELD(arg0, s32 *, 0x60) == 0) && (((M2C_FIELD(arg0, s32 *, 0x64)) ^ 1) == 0);
    if (t09 != 0) goto set1;
    t10 = (M2C_FIELD(arg0, s32 *, 0x48) == 0) && (((M2C_FIELD(arg0, s32 *, 0x4C)) ^ 1) == 0);
    if (t10 != 0) goto set1;
    t11 = (M2C_FIELD(arg0, s32 *, 0x58) == 0) && (((M2C_FIELD(arg0, s32 *, 0x5C)) ^ 1) == 0);
    if (t11 != 0) goto set1;
    t12 = (M2C_FIELD(arg0, s32 *, 0x08) == 0) && (((M2C_FIELD(arg0, s32 *, 0x0C)) ^ 1) == 0);
    if (t12 != 0) goto set1;
    t13 = (M2C_FIELD(arg0, s32 *, 0x10) == 0) && (((M2C_FIELD(arg0, s32 *, 0x14)) ^ 1) == 0);
    if (t13 != 0) goto set1;
    t14 = (M2C_FIELD(arg0, s32 *, 0x18) == 0) && (((M2C_FIELD(arg0, s32 *, 0x1C)) ^ 1) == 0);
    if (t14 != 0) goto set1;
    t15 = (M2C_FIELD(arg0, s32 *, 0x20) == 0) && (((M2C_FIELD(arg0, s32 *, 0x24)) ^ 1) == 0);
    if (t15 != 0) goto set1;
    t16 = (M2C_FIELD(arg0, s32 *, 0x78) == 0) && (((M2C_FIELD(arg0, s32 *, 0x7C)) ^ 1) == 0);
    if (t16 != 0) goto set1;
    t17 = (M2C_FIELD(arg0, s32 *, 0x80) == 0) && (((M2C_FIELD(arg0, s32 *, 0x84)) ^ 1) == 0);
    if (t17 != 0) goto set1;
    t18 = (M2C_FIELD(arg0, s32 *, 0x90) == 0) && (((M2C_FIELD(arg0, s32 *, 0x94)) ^ 1) == 0);
    if (t18 != 0) goto set1;
    goto done;
set1:
    ret = 1;
done:
    return ret;
}
