/* FluffLoop__ApplyCachedAudioVolumes @ 0x80056740 (size: 0xA8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef short s16;
typedef float f32;

typedef struct {
    char pad0[0x3A0];
    s16 isActiveAdjust;
    char pad1[2];
    s32 (*isActive)(void *);
    char pad2[0x560 - 0x3A8];
    s16 refreshAdjust;
    char pad3[2];
    void (*refresh)(void *);
} FluffVtbl;

typedef struct {
    char pad0[0x19C];
    FluffVtbl *vtbl;
    char pad1[0x1A658 - 0x1A0];
    f32 sfx;
    f32 music;
    f32 dialog;
} FluffLoop;

void Audio__SetMasterSfxVolume(void *, f32);
void Audio__SetMasterMusicVolume(f32, void *);
void Audio__SetMasterDialogVolume(f32, void *);
extern void *lbl_803DCC20 __attribute__((section(".sdata")));

void FluffLoop__ApplyCachedAudioVolumes(FluffLoop *self) {
    if (self->vtbl->isActive((char *)self + self->vtbl->isActiveAdjust) != 0) {
        self->vtbl->refresh((char *)self + self->vtbl->refreshAdjust);
        if (self->vtbl->isActive((char *)self + self->vtbl->isActiveAdjust) != 0) {
            Audio__SetMasterSfxVolume(lbl_803DCC20, self->sfx);
            Audio__SetMasterMusicVolume(self->music, lbl_803DCC20);
            Audio__SetMasterDialogVolume(self->dialog, lbl_803DCC20);
        }
    }
}
