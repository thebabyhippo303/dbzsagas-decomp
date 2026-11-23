/* CActorSoundEmitter__PlayVoiceWithSuffix @ 0x8009D074 (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


M2C_UNK CActorSoundEmitter__PlayVoice(s32, s32);    /* extern */
s32 Sfx3DGroup__BuildSuffixedName();                /* extern */

void CActorSoundEmitter__PlayVoiceWithSuffix(s32 arg0) {
    CActorSoundEmitter__PlayVoice(arg0, Sfx3DGroup__BuildSuffixedName());
}
