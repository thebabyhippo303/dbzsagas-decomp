/* AramMark__Destroy @ 0x80198574 (size: 0x30, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;

typedef struct AramMark {
    char pad[0xC];
    void *vt;
} AramMark;

void SoundBank__Destroy(AramMark *);
extern s32 lbl_8033FD88 __attribute__((section(".data")));

void AramMark__Destroy(AramMark *self) {
    self->vt = &lbl_8033FD88;
    SoundBank__Destroy(self);
}
