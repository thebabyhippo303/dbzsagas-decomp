/* MissionUI__UpdateSlideOut @ 0x8011BA80 (size: 0xE4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef short s16;
typedef float f32;

typedef struct VT {
    char pad[0xB0];
    s16 adjust;
    s16 pad2;
    void (*fn)(void *, void *, f32 *);
} VT;

typedef struct MissionUI {
    char pad[0x19C];
    VT *vt;
} MissionUI;

void Sound__Play2D(void *, s32);
unsigned int Timer__GetMilliseconds(void);
extern f32 lbl_8032716C __attribute__((section(".data")));
extern f32 lbl_80327178 __attribute__((section(".data")));
extern char lbl_80327160[];

/* Keep the int-to-float constant pool at the same low 16 bits as the DOL. */
static const char pool_pad[0x7170] = {1};

void MissionUI__UpdateSlideOut(MissionUI *self) {
    void *sp8;
    f32 spC;
    s32 a;
    s32 b;

    self->vt->fn((char *)self + self->vt->adjust, &sp8, &spC);
    if (!(spC < lbl_8032716C)) {
        a = *(s32 *)((char *)self + 0xAEAC);
        if (a == 0) {
            b = *(s32 *)((char *)self + 0xAEA4);
            if (b != 0) {
                *(s32 *)((char *)self + 0xAEA4) = a;
                return;
            } else {
                if (*(s32 *)((char *)self + 0xAEA8) != 0) {
                    Sound__Play2D(lbl_80327160, 0);
                    {
                        f32 ms = (f32)Timer__GetMilliseconds();
                        *(f32 *)((char *)self + 0xAE94) = ms * lbl_80327178;
                        *(s32 *)((char *)self + 0xAEA8) = b;
                        *(s32 *)((char *)self + 0xAEAC) = 1;
                        *(f32 *)((char *)self + 0xAE98) = spC;
                    }
            }
            }
        }
    }
}
