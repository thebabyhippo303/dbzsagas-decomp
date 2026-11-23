/* AmbientMixer__BeginFadeOut @ 0x80199A0C (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef unsigned int u32;
typedef short s16;
typedef float f32;

typedef struct VT {
    char pad[0x10];
    s16 adjust;
    s16 pad2;
    void (*fn)(void *, f32);
} VT;

typedef struct Sub {
    char pad[8];
    VT *vt;
} Sub;

f32 AmbientTrack__GetFadeOutTime(void *);
extern f32 lbl_8033FAB0 __attribute__((section(".data")));

/* Keep the int-to-float constant pool at the same low 16 bits as the DOL. */
static const char pool_pad[0xFAA8] = {1};

void AmbientMixer__BeginFadeOut(char *self, u32 ms) {
    Sub *sub = (Sub *)(self + 0x24);

    sub->vt->fn((char *)sub + sub->vt->adjust, (f32)ms * lbl_8033FAB0);
    *(f32 *)(self + 0x20) = AmbientTrack__GetFadeOutTime(self + 0x38);
    *(s32 *)(self + 0xC) = 3;
}
