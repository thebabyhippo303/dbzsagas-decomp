/* BinkSetSoundSystem @ 0x802EC5D4 (size: 0xA0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
extern s32 (*lbl_8037C230)(s32) __attribute__((section(".data")));
extern s32 lbl_8037C234 __attribute__((section(".data")));
extern s32 lbl_8037C238 __attribute__((section(".data")));
s32 BinkSetSoundSystem(s32 (*arg0)(s32), s32 arg1) {
    s32 ret;
    if (arg0 == NULL) {
        return 0;
    }
    if (lbl_8037C230 == NULL) {
        lbl_8037C230 = arg0;
    }
    if (lbl_8037C230 != arg0) {
        if (lbl_8037C238 != 0) {
            return 0;
        }
        lbl_8037C230 = arg0;
    }
    ret = lbl_8037C230(arg1);
    if (ret != 0) {
        lbl_8037C234 = ret;
    }
    return lbl_8037C234 != 0;
}
