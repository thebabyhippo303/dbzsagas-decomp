/* VoiceHandle__Free @ 0x8019F018 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 VoiceHandle__GetVoice(void *);
void VoiceHandle__Destroy(void *, s32);
M2C_UNK fn_8019CB48(s32);
extern M2C_UNK **lbl_803DCC40;

void VoiceHandle__Free(M2C_UNK *arg0) {
    M2C_UNK **temp_r30;

    if (arg0 != NULL) {
        if (VoiceHandle__GetVoice(arg0) != 0) {
            fn_8019CB48(VoiceHandle__GetVoice(arg0));
        }
        temp_r30 = lbl_803DCC40;
        VoiceHandle__Destroy(arg0, 2);
        *arg0 = *temp_r30;
        *temp_r30 = arg0;
    }
}
