/* Database__FindInCurrentFile @ 0x80205AEC (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Database__FindGlobalObjectByType @ 0x80205AEC (0x4C). ProDG -O2. */
extern void *lbl_803ADC80 __attribute__((section(".data")));
extern void *Database__FindObjectByType(void *c, void *a, void *b, int z0, int z1, int z2, void *d, int z3);

void *Database__FindGlobalObjectByType(void *a, void *b, void *d) {
    return Database__FindObjectByType(lbl_803ADC80, a, b, 0, 0, 0, d, 0);
}
