/* Avatar__AdjustKiImpl @ 0x80099160 (size: 0xBC, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__AdjustKiImpl @ 0x80099160 (0xBC). ProDG -O2. */
typedef struct {
    char pad[0x3A0];
    short adjust;
    char pad2[2];
    int (*fn)(void *self);
} KiVtable;

typedef struct {
    char pad[0x19C];
    KiVtable *vt;
} KiOwner;

typedef struct {
    char pad[0x238];
    int *flag;
} KiState;

typedef struct {
    char pad[0x294];
    float ki;
    float maxKi;
} AvatarKi;

extern float lbl_8031FAA4 __attribute__((section(".rodata")));
extern float lbl_8031FAA8 __attribute__((section(".rodata")));
extern void *lbl_803DC368;
extern KiOwner *lbl_803DC3A0;
extern KiState *lbl_803DC3C0;

extern int Game__IsPendulumModeImpl(void *game);
extern void DisplayInfo__ShowEntry(void *owner, int a, int b, int c, float value);

void Avatar__AdjustKiImpl(AvatarKi *self, float delta) {
    float ki;
    KiOwner *owner;
    KiVtable *vt;

    ki = self->ki + delta;
    self->ki = ki;
    if (ki > lbl_8031FAA4) {
        goto high;
    }
    self->ki = lbl_8031FAA4;
    owner = lbl_803DC3A0;
    vt = owner->vt;
    if (vt->fn((void *)((char *)owner + vt->adjust)) == 0 && lbl_803DC3C0->flag[1] == 1 &&
        Game__IsPendulumModeImpl((char *)lbl_803DC368 + 380) == 0) {
        DisplayInfo__ShowEntry(lbl_803DC3A0, 2, 2, 0, lbl_8031FAA8);
    }
    return;
high:
    if (ki <= self->maxKi) {
        return;
    }
    self->ki = self->maxKi;
}
