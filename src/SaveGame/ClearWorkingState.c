/* SaveGame__ClearWorkingState @ 0x8014E9D4 (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct Vt { char pad[168]; short adjust; short unused; void (*fn)(void *, void *); } Vt;
typedef struct Mgr { char pad[12]; Vt *vt; } Mgr;
typedef struct SG { char pad[24]; void *a24; void *a28; void *a32; int a36; } SG;
extern Mgr *lbl_803DCC70 __attribute__((section(".sdata")));

void SaveGame__ClearWorkingState(SG *self) {
    if (self->a24 != 0) {
        lbl_803DCC70->vt->fn((char *)lbl_803DCC70 + lbl_803DCC70->vt->adjust, self->a24);
        self->a24 = 0;
    }
    if (self->a32 != 0) {
        self->a32 = 0;
    }
    if (self->a28 != 0) {
        self->a28 = 0;
    }
    self->a36 = 0;
}
