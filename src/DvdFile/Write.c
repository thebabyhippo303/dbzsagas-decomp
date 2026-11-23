/* DvdFile__Write @ 0x80180B88 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


extern s32 lbl_803DCB90;

s32 DvdFile__Write(s32 arg0, s32 arg1, void *arg2) {
    s32 temp_r9;

    temp_r9 = M2C_FIELD(arg2, s32 *, 0x14);
    if (temp_r9 != 0) {
        lbl_803DCB90 = 0xC;
        M2C_FIELD(arg2, s32 *, 0x1C) = 0xC;
        return 0;
    } else {
        M2C_FIELD(arg2, s32 *, 0xC) = arg0;
        M2C_FIELD(arg2, s32 *, 0x10) = arg1;
        M2C_FIELD(arg2, s32 *, 0x18) = temp_r9;
        lbl_803DCB90 = 9;
        M2C_FIELD(arg2, s32 *, 0x1C) = 9;
        return 0;
    }
}
