/* Database__NextLoaded @ 0x80203F80 (size: 0x28, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Database__NextLoaded @ 0x80203F80 (0x28). ProDG -O2. */
extern void *lbl_803ADB90 __attribute__((section(".data")));
void *Database__AdvanceLoadedIterator(void *);

void *Database__NextLoaded(void) {
    return Database__AdvanceLoadedIterator(lbl_803ADB90);
}
