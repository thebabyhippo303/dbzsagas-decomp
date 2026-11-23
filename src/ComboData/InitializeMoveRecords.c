/* ComboData__InitializeMoveRecords @ 0x80046228 (size: 0x110, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

extern s8 lbl_803914A4[] __attribute__((section(".data")));

void ComboData__InitializeMoveRecords(s32 arg0, s32 arg1) {
    s8 *p;
    if ((arg1 == 0xFFFF) && (arg0 != 0)) {
        p = lbl_803914A4;
        p[1] = 1;
        p[3] = 0;
        p[2] = 0;
        lbl_803914A4[0] = -1;
        p += 4;
        p[3] = 26;
        p[1] = 2;
        p[2] = 0;
        p[0] = -1;
        p += 4;
        p[3] = 27;
        p[2] = 32;
        p[1] = -2;
        p[0] = -1;
        p += 4;
        p[3] = 27;
        p[2] = 32;
        p[1] = 3;
        p[0] = -1;
        p += 4;
        p[3] = 28;
        p[1] = -1;
        p[0] = 4, p[2] = 0;
        p += 4;
        p[3] = 29;
        p[1] = 5;
        p[0] = 6, p[2] = 0;
        p += 4;
        p[3] = 30;
        p[2] = 0;
        p[1] = -2;
        p[0] = -2;
        p += 4;
        p[1] = -2;
        p[3] = 21;
        p[2] = 0;
        p[0] = -2;
    }
}
