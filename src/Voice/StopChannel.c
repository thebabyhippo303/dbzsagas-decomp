/* Voice__StopChannel @ 0x8019CC68 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0

s32 SoundChannel__Stop(void *, s32);
void SoundChannel__Release(void *, void *);

void Voice__StopChannel(void *arg0) {
    void *ch;

    if (*(void **)((char *)arg0 + 8) != NULL) {
        SoundChannel__Stop(*(void **)((char *)arg0 + 8), 1);
        ch = *(void **)((char *)arg0 + 8);
        SoundChannel__Release(*(void **)((char *)ch + 0x14), ch);
        *(void **)((char *)arg0 + 8) = NULL;
    }
    *(s32 *)((char *)arg0 + 0x20) = 3;
}
