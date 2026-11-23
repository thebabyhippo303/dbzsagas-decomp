/* DvdFile__Read @ 0x80180ADC (size: 0xAC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


M2C_UNK DvdFile__IssueRead(s32);
M2C_UNK DvdFile__WaitForCompletion(s32, s32, s32, s32, s32);
extern s32 lbl_803DCB90;

s32 DvdFile__Read(s32 arg0, s32 arg1, void *arg2) {
    s32 state = M2C_FIELD(arg2, s32 *, 0x14);
    s32 ret;

    if (state == 0) {
        s32 f4 = M2C_FIELD(arg2, s32 *, 4);
        lbl_803DCB90 = state;
        M2C_FIELD(arg2, s32 *, 0x14) = 1;
        M2C_FIELD(arg2, s32 *, 0x18) = 2;
        M2C_FIELD(arg2, s32 *, 0x1C) = state;
        M2C_FIELD(arg2, s32 *, 0xC) = arg0;
        M2C_FIELD(arg2, s32 *, 0x10) = arg1;
        M2C_FIELD(arg2, s32 *, 0x64) = arg1;
        M2C_FIELD(arg2, s32 *, 0x6C) = arg0;
        M2C_FIELD(arg2, s32 *, 0x68) = f4;
        DvdFile__IssueRead((s32) arg2);
        ret = 1;
        if (!(2 & M2C_FIELD(arg2, u32 *, 0))) {
            ret = DvdFile__WaitForCompletion((s32) arg2, -1, 0, 0, 0);
        }
    } else {
        lbl_803DCB90 = 12;
        M2C_FIELD(arg2, s32 *, 0x1C) = 12;
        ret = 0;
    }
    return ret;
}
