/* DvdFile__Seek @ 0x801809E8 (size: 0xE4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


s32 DvdFile__WaitForCompletion(void *, s32, s32, s32, s32);
extern s32 lbl_803DCB90;

s32 DvdFile__Seek(char *arg0, s32 arg1) {
    s32 zero = M2C_FIELD(arg0, s32 *, 0x14);
    s32 pos;

    if (zero != 0) {
        lbl_803DCB90 = 0xC;
        M2C_FIELD(arg0, s32 *, 0x1C) = 0xC;
        return 0;
    }
    pos = M2C_FIELD(arg0, s32 *, 4);
    lbl_803DCB90 = zero;
    M2C_FIELD(arg0, s32 *, 0x18) = 1;
    M2C_FIELD(arg0, s32 *, 0x14) = zero;
    M2C_FIELD(arg0, s32 *, 0x1C) = zero;
    if (arg1 == pos) {
        if (!(M2C_FIELD(arg0, s32 *, 0) & 2)) {
            M2C_FIELD(arg0, s32 *, 0x18) = zero;
        }
        return 1;
    }
    if (arg1 > M2C_FIELD(arg0, s32 *, 8)) {
        M2C_FIELD(arg0, s32 *, 0x18) = zero;
        lbl_803DCB90 = 2;
        M2C_FIELD(arg0, s32 *, 0x1C) = 2;
        return 0;
    }
    if (arg1 & 3) {
        lbl_803DCB90 = 2;
        M2C_FIELD(arg0, s32 *, 0x18) = zero;
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    if (M2C_FIELD(arg0, s32 *, 0) & 2) {
        return 1;
    }
    return DvdFile__WaitForCompletion(arg0, -1, 0, 0, 0);
}
