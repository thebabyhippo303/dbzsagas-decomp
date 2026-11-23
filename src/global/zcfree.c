/* zcfree @ 0x8025C040 (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: zcfree @ 0x8025C040 (0x24). ProDG -O2. */
extern void memFree(void *ptr);

void zcfree(void *opaque, void *ptr) {
    (void)opaque;
    memFree(ptr);
}
