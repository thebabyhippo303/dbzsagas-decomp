/* Bink__EnsureScratchBuffer @ 0x802EFF48 (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


M2C_UNK radfree(s32);
M2C_UNK radmalloc(s32);
extern u32 lbl_8038A2B8 __attribute__((section(".data")));
extern s32 lbl_8038A2BC __attribute__((section(".data")));
extern s32 lbl_8038A2C0 __attribute__((section(".data")));

void Bink__EnsureScratchBuffer(s32 arg0) {
    s32 temp_r30;
    u32 temp_r31;

    temp_r30 = (arg0 + 0x1F) & 0xFFFFFFE0;
    temp_r31 = temp_r30 * 2;
    if (temp_r31 > (u32) lbl_8038A2B8) {
        if ((s32) lbl_8038A2BC != 0) {
            radfree(lbl_8038A2BC);
            lbl_8038A2BC = 0;
        }
        lbl_8038A2BC = radmalloc((s32) temp_r31);
        lbl_8038A2B8 = temp_r31;
    }
    lbl_8038A2C0 = lbl_8038A2BC + temp_r30;
}
