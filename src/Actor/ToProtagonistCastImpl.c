/* Actor__ToProtagonistCastImpl @ 0x801F348C (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Actor__ToProtagonistCastImpl @ 0x801F348C (0x50). ProDG -O2. */
extern void *lbl_803DCCB8;
extern int fn_801F352C(void *self);
extern void fn_801F647C(void *ctx, void *self);

void Actor__ToProtagonistCastImpl(void *self) {
    if (*(int *)((char *)self + 400) != 0) {
        int state = fn_801F352C(self);
        if (state == 0) {
            fn_801F647C(lbl_803DCCB8, self);
            *(int *)((char *)self + 400) = state;
        }
    }
}
