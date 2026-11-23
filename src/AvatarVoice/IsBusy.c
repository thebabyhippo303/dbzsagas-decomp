/* AvatarVoice__IsBusy @ 0x80250FD8 (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

extern int AvatarVoice__PollSound(int);
extern void *lbl_803DCC20;

int AvatarVoice__IsBusy(int arg0, int arg1, int arg2) {
    int r10;
    int r11;
    if (arg1 == 0) {
        return AvatarVoice__PollSound(arg0) ^ 1;
    }
    if (arg1 == 1) {
        if (arg2 == 0) {
            return 1;
        }
        r10 = 0;
        r11 = 1;
        if (*(int *)((char *)lbl_803DCC20 + 0x14C) == 0) {
            r11 = 0;
        }
        if ((r11 == 0) || (*(int *)((char *)arg0 + 0xC) != 0)) {
            r10 = 1;
        }
        return r10;
    }
    return arg1 == 2;
}
