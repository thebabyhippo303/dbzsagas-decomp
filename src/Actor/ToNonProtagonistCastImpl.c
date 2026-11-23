/* Actor__ToNonProtagonistCastImpl @ 0x801F34DC (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Actor__ToNonProtagonistCastImpl @ 0x801F34DC (0x48). ProDG -O2. */
extern void *lbl_803DCCB8;
extern void fn_801F6950(void *ctx, void *self);

void Actor__ToNonProtagonistCastImpl(void *self) {
    if (*(int *)((char *)self + 400) != 1) {
        fn_801F6950(lbl_803DCCB8, self);
        *(int *)((char *)self + 400) = 1;
    }
}
