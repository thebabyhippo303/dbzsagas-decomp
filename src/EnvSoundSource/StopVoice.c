/* EnvSoundSource__StopVoice @ 0x8019A1F0 (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void SfxPlayer__StopVoice(s32, void *);
void VoiceHandle__Destroy(s32 *, s32);
s32 VoiceHandle__GetVoice(void *);
s32 Voice__GetOwnerPlayer(void *);
void EnvSoundSource__StopVoice(void *arg0) {
    s32 *temp_r3;
    s32 *temp_r3_3;
    s32 temp_r3_2;

    temp_r3 = M2C_FIELD(arg0, s32 **, 0x20);
    if (temp_r3 != NULL) {
        temp_r3_2 = VoiceHandle__GetVoice(temp_r3);
        if (temp_r3_2 != 0) {
            SfxPlayer__StopVoice(Voice__GetOwnerPlayer((void *) temp_r3_2), arg0 + 0x20);
            return;
        }
        temp_r3_3 = M2C_FIELD(arg0, s32 **, 0x20);
        if (temp_r3_3 != NULL) {
            VoiceHandle__Destroy(temp_r3_3, 3);
        }
        M2C_FIELD(arg0, s32 **, 0x20) = (s32 *) temp_r3_2;
    }
}
