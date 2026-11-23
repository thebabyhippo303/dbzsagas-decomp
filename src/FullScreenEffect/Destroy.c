/* FullScreenEffect__Destroy @ 0x800E1A28 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: FullScreenEffect__Destroy @ 0x800E1A28 (0x40). ProDG -O2. */
extern void fn_800E2630(void *effect);
extern void fn_801843CC(void *effect);

void FullScreenEffect__Destroy(void *effect, unsigned int flags) {
    fn_800E2630(effect);
    if (flags & 1) {
        fn_801843CC(effect);
    }
}
