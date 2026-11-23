/* ActorSfxPlayer__SetSoundPitch @ 0x80198D5C (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef float f32;

void Voice__SetPitch(void *, f32);
void *ActorSfxPlayer__FindPlayingVoice(s32, s32);

s32 ActorSfxPlayer__SetSoundPitch(s32 self, s32 sound, f32 pitch) {
    void *voice = ActorSfxPlayer__FindPlayingVoice(self, sound);
    if (voice == 0) {
        return 0;
    }
    Voice__SetPitch(voice, pitch);
    return 1;
}
