/* Simple__InitHud @ 0x80040A50 (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Simple__InitHud @ 0x80040A50 (0x2C). ProDG -O2. */
void *fn_8023A310(void *a, void *b);
extern void *lbl_803DC654;
void fn_8010D2E0(void *g, void *avatar);

void Simple__InitHud(void *a, void *b) {
    void *avatar = fn_8023A310(a, b);
    fn_8010D2E0(lbl_803DC654, avatar);
}
