/* CCameraFighter__SetTargetDistance @ 0x800BAE9C (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
extern void *lbl_803DC3C0;
extern float lbl_803215E0 __attribute__((section(".rodata")));
extern float lbl_803215E4 __attribute__((section(".rodata")));
int Game__GetConfiguredPlayerCount(void *);
typedef struct C { char pad[0x40]; float d; float t; } C;
int CCameraFighter__SetTargetDistance(C *self, float dist) {
    self->d = dist;
    self->t = (Game__GetConfiguredPlayerCount(lbl_803DC3C0) == 2) ? lbl_803215E0 : lbl_803215E4;
    return 1; }