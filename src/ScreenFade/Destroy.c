/* ScreenFade__Destroy @ 0x80119314 (size: 0x28, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: ScreenFade__Destroy @ 0x80119314 (0x28). ProDG -O2. */
extern void fn_801843CC(void *fade);

void ScreenFade__Destroy(void *fade, int flags) {
    if (flags & 1)
        fn_801843CC(fade);
}
