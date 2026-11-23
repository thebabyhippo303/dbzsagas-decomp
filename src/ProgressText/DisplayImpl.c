/* ProgressText__DisplayImpl @ 0x8011F930 (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: ProgressText__DisplayImpl @ 0x8011F930 (0x90). ProDG -O2. */
typedef struct {
    char pad0[0x38];
    short adjustC;
    char padC[2];
    void (*fnC)(void *self);
    char pad1[0x1C8 - 0x40];
    short adjustB;
    char padB[2];
    void (*fnB)(void *self);
    char pad2[0x368 - 0x1D0];
    short adjustA;
    char padA[2];
    void (*fnA)(void *self, void *arg);
} ProgressVtable;

typedef struct {
    char pad[0x164];
    void *widget;
    char pad2[0x19C - 0x168];
    ProgressVtable *vtable;
} ProgressHud;

extern ProgressHud *lbl_progressHud;
extern void fn_8026B2B0(void *widget);
extern void fn_8026B0C8(void *widget, int arg);

void ProgressText__DisplayImpl(void *text) {
    lbl_progressHud->vtable->fnA((char *)lbl_progressHud + lbl_progressHud->vtable->adjustA, text);
    lbl_progressHud->vtable->fnB((char *)lbl_progressHud + lbl_progressHud->vtable->adjustB);
    fn_8026B2B0(lbl_progressHud->widget);
    fn_8026B0C8(lbl_progressHud->widget, 0);
    lbl_progressHud->vtable->fnC((char *)lbl_progressHud + lbl_progressHud->vtable->adjustC);
}
