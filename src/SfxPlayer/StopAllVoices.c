/* SfxPlayer__StopAllVoices @ 0x801991B8 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 SoundGroup__FirstVoiceForPlayer(s32, void *);
s32 SoundGroup__NextVoiceForPlayer(s32, void *, s32);
M2C_UNK Voice__StopChannel(s32);
void SfxPlayer__StopAllVoices(void *arg0) {
    s32 var_r31;

    var_r31 = SoundGroup__FirstVoiceForPlayer(M2C_FIELD(arg0, s32 *, 0x24), arg0);
    if (var_r31 != 0) {
        do {
            Voice__StopChannel(var_r31);
            var_r31 = SoundGroup__NextVoiceForPlayer(M2C_FIELD(arg0, s32 *, 0x24), arg0, var_r31);
        } while (var_r31 != 0);
    }
}
