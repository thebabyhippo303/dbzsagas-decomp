/* SoundGroup__NextVoiceForPlayer @ 0x8019DA94 (size: 0x78, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 Voice__GetOwnerPlayer(void *);

void *SoundGroup__NextVoiceForPlayer(void *group, s32 player, void *voice) {
    if (voice == NULL) {
        voice = M2C_FIELD(group, void **, 0x48);
    } else {
        voice = M2C_FIELD(voice, void **, 0x50);
    }
    while (voice != NULL) {
        if (player == 0 || player == Voice__GetOwnerPlayer(voice)) {
            break;
        }
        voice = M2C_FIELD(voice, void **, 0x50);
    }
    return voice;
}
