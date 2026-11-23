/* Bink__FreeScratchBuffer @ 0x802EFFC8 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


M2C_UNK radfree(s32);
extern u32 lbl_8038A2B8 __attribute__((section(".data")));
extern s32 lbl_8038A2BC __attribute__((section(".data")));

void Bink__FreeScratchBuffer(void) {
    if ((s32) lbl_8038A2BC != 0) {
        radfree(lbl_8038A2BC);
        lbl_8038A2BC = 0;
        lbl_8038A2B8 = 0;
    }
}
