/* AvatarVoice__EndStream @ 0x80250F9C (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 StreamQueue__Volume(void *, f32);
extern void *lbl_803DCC20 __attribute__((section(".sdata")));

void AvatarVoice__EndStream(void *arg0) {
    void *q;

    if (arg0 != NULL) {
        q = lbl_803DCC20;
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
        StreamQueue__Volume((char *) q + 0xCC, M2C_FIELD(arg0, f32 *, 0x14));
    }
}
