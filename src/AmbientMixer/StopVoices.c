/* AmbientMixer__StopVoices @ 0x8019972C (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void SfxPlayer__StopVoice(s32, void *);
M2C_UNK AmbientTrack__Reset(s32);
void AmbientMixer__StopVoices(void *arg0) {
    s32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_r3 != 0) {
        SfxPlayer__StopVoice(temp_r3, arg0 + 4);
        SfxPlayer__StopVoice(M2C_FIELD(arg0, s32 *, 0), arg0 + 8);
    }
    AmbientTrack__Reset((s32) (arg0 + 0x38));
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
}
