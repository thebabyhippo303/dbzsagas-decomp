/* Sfx2DPlayer__SetVoicePan @ 0x80198688 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Voice2D__SetPan(void *, f32);
M2C_UNK Sfx2DPlayer__GetVoice(s32, s32);
s32 Sfx2DPlayer__SetVoicePan(s32 arg0, s32 arg1, f32 farg0) {
    s32 voice = Sfx2DPlayer__GetVoice(arg0, arg1);

    if (voice == 0) {
        return 0;
    }
    Voice2D__SetPan((void *) voice, farg0);
    return 1;
}
