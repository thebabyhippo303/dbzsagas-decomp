/* Pickup__Enable @ 0x8002BEF8 (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Pickup__Enable @ 0x8002BEF8 (0x2C). ProDG -O2. */
void *fn_8023A310(void *a, void *b);
void fn_800F29A0(void *p);

void Pickup__Enable(void *a, void *b) {
    void *p = fn_8023A310(a, b);
    if (p)
        fn_800F29A0(p);
}
