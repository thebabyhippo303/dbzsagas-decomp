/* SoundGroup3D__ReleaseVoice @ 0x8019E944 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef void (*VoiceFn)(void *, s32);

void SoundGroup3D__ReleaseVoice(void *self, void *voice) {
    void *vt;
    if (voice == NULL) {
        return;
    }
    vt = M2C_FIELD(voice, void **, 84);
    ((VoiceFn)M2C_FIELD(vt, void **, 12))((char *)voice + M2C_FIELD(vt, s16 *, 8), 2);
    M2C_FIELD(voice, void **, 0) = M2C_FIELD(self, void **, 104);
    M2C_FIELD(self, void **, 104) = voice;
}
