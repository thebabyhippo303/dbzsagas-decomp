/* SfxPlayer__GetVoice @ 0x80199304 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 VoiceHandle__GetVoice(void *);
s32 Voice__GetOwnerPlayer(void *);
s32 SfxPlayer__GetVoice(s32 arg0, void *arg1) {
    s32 v;

    if (arg1 == NULL) {
        return 0;
    }
    v = VoiceHandle__GetVoice(arg1);
    if (v == 0) {
        return 0;
    }
    if (Voice__GetOwnerPlayer((void *) v) != arg0) {
        return 0;
    }
    return v;
}
