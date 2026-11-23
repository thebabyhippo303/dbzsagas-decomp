/* ActorSfxPlayer__FindPlayingVoice @ 0x80198DA4 (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 SoundGroup__FirstVoiceForPlayer(s32, void *);
s32 SoundGroup__NextVoiceForPlayer(s32, void *, s32);
int String__CompareIgnoreCase(const char *, const char *);
s32 Voice__GetSoundName(void *);
s32 Voice__IsStopped(void *);
void *ActorSfxPlayer__FindPlayingVoice(void *arg0, s8 *arg1) {
    s32 var_r31;

    var_r31 = SoundGroup__FirstVoiceForPlayer(M2C_FIELD(arg0, s32 *, 0x24), arg0);
    if (var_r31 != 0) {
loop_1:
        if ((Voice__IsStopped((void *) var_r31) == 0) && (String__CompareIgnoreCase(Voice__GetSoundName((void *) var_r31), arg1) == 0)) {
            return (void *) var_r31;
        }
        var_r31 = SoundGroup__NextVoiceForPlayer(M2C_FIELD(arg0, s32 *, 0x24), arg0, var_r31);
        if (var_r31 == 0) {
            goto block_5;
        }
        goto loop_1;
    }
block_5:
    return NULL;
}
