/* CActorSoundEmitter__IsPlaying @ 0x801DEDB0 (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;

s32 fn_80198CE4(s32);

s32 CActorSoundEmitter__IsPlaying(void *self) {
    return fn_80198CE4(*(s32 *)((char *)self + 4));
}
