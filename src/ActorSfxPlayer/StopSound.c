/* ActorSfxPlayer__StopSound @ 0x80198C84 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void * ActorSfxPlayer__FindPlayingVoice(s32, s32);
void VoiceHandle__Destroy(s32 *, s32);
s32 * Voice__GetHandle(s32);
M2C_UNK Voice__StopChannel(void *);                 /* extern */

s32 ActorSfxPlayer__StopSound(s32 arg0, s32 arg1) {
    s32 *temp_r31;
    s32 var_r3;
    void *temp_r3;

    temp_r3 = ActorSfxPlayer__FindPlayingVoice(arg0, arg1);
    var_r3 = 0;
    if (temp_r3 != NULL) {
        temp_r31 = Voice__GetHandle((s32) temp_r3);
        Voice__StopChannel(temp_r3);
        if (temp_r31 != NULL) {
            VoiceHandle__Destroy(temp_r31, 3);
        }
        var_r3 = 1;
    }
    return var_r3;
}
