/* SfxPlayer__StopVoice @ 0x80199160 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0

s32 SfxPlayer__GetVoice(s32, void *);
void Voice__StopChannel(void *);
void VoiceHandle__Destroy(void *, s32);

void SfxPlayer__StopVoice(s32 arg0, void **arg1) {
    s32 v;

    v = SfxPlayer__GetVoice(arg0, *arg1);
    if (v != 0) {
        Voice__StopChannel((void *)v);
    }
    if (*arg1 != NULL) {
        VoiceHandle__Destroy(*arg1, 3);
    }
    *arg1 = NULL;
}
