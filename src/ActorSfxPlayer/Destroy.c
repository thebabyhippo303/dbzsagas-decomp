/* ActorSfxPlayer__Destroy @ 0x80198B5C (size: 0x98, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Sfx3DPlayer__Destroy(void *, s32);
void VoiceHandle__Destroy(s32 *, s32);
s32 SoundGroup__FirstVoiceForPlayer(s32, void *); /* extern */
s32 SoundGroup__NextVoiceForPlayer(s32, void *, s32); /* extern */
s32 *Voice__GetHandle(s32);                         /* extern */
M2C_UNK Voice__StopChannel(s32);                    /* extern */
extern M2C_UNK lbl_80340198 __attribute__((section(".data")));

void ActorSfxPlayer__Destroy(void *arg0, s32 arg1) {
    s32 *temp_r31;
    s32 var_r30;

    M2C_FIELD(arg0, M2C_UNK **, 0x3C) = &lbl_80340198;
    var_r30 = SoundGroup__FirstVoiceForPlayer(M2C_FIELD(arg0, s32 *, 0x24), arg0);
    if (var_r30 != 0) {
        do {
            temp_r31 = Voice__GetHandle(var_r30);
            Voice__StopChannel(var_r30);
            if (temp_r31 != NULL) {
                VoiceHandle__Destroy(temp_r31, 3);
            }
            var_r30 = SoundGroup__NextVoiceForPlayer(M2C_FIELD(arg0, s32 *, 0x24), arg0, var_r30);
        } while (var_r30 != 0);
    }
    Sfx3DPlayer__Destroy(arg0, arg1);
}
