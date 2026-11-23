/* FileServer__AdvanceReadBuffer @ 0x8015DAD0 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

extern volatile s32 lbl_8036FB50 __attribute__((section(".data")));
extern volatile u32 lbl_8039E5E8 __attribute__((section(".data")));
extern volatile s32 lbl_8039E5EC __attribute__((section(".data")));
extern volatile u32 lbl_8039E5F0 __attribute__((section(".data")));

void FileServer__AdvanceReadBuffer(void) {
    u32 amount;

    if (lbl_8039E5F0 <= 0x1FC00U) {
        amount = lbl_8039E5F0;
    } else {
        amount = 0x1FC00U;
    }

    lbl_8039E5F0 -= amount;
    lbl_8036FB50 = 2;
    lbl_8039E5E8 = amount >> 10;
    lbl_8039E5EC = amount & 1023;
}