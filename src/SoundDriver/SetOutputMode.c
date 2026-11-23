/* SoundDriver__SetOutputMode @ 0x80195C80 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


M2C_UNK fn_801933F8(s32, s32);
M2C_UNK fn_80196B1C(s32);
M2C_UNK OSSetSoundMode(s32);
M2C_UNK fn_802D5F20(s32);
s32 SoundDriver__SetOutputMode(void *self, s32 mode) {
    if (fn_801933F8(self, mode) == 0) {
        return 0;
    }
    fn_80196B1C(M2C_FIELD(self, s32 *, 8));
    if (mode == 0) {
        OSSetSoundMode(0);
        fn_802D5F20(0);
    } else {
        OSSetSoundMode(1);
        fn_802D5F20(1);
    }
    return 1;
}
