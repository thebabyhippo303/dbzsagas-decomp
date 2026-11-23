/* CActorSoundEmitter__StopVoice @ 0x801DEF3C (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;

void SfxPlayer__StopVoice(s32, void *);

void CActorSoundEmitter__StopVoice(char *self) {
    SfxPlayer__StopVoice(*(s32 *)(self + 4), self + 8);
    *(s32 *)(self + 8) = 0;
}
