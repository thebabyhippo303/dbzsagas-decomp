/* AxStream__SetEffectSend @ 0x8019FE8C (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


void SoundDriver__ApplyReverbSend(int, int, int, int);
extern int lbl_803DCC2C __attribute__((section(".sdata")));
extern f32 lbl_803407D0 __attribute__((section(".data")));

void AxStream__SetEffectSend(void *self, f32 a, f32 b) {
    SoundDriver__ApplyReverbSend(lbl_803DCC2C, M2C_FIELD(self, s32 *, 0x1C0), a > lbl_803407D0, b > lbl_803407D0);
}
