/* AI__WaitForSpecialMove @ 0x80045B5C (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: AI__WaitForSpecialMove @ 0x80045B5C (0x54). ProDG -O2. */
extern int Script__PopInt(void *script, void *context);

void AI__WaitForSpecialMove(void *script, void *context) {
    void *avatar = (void *)Script__PopInt(script, context);
    int value = Script__PopInt(script, context);
    if (*(int *)((char *)avatar + 2020) == 0) {
        void *inner = *(void **)((char *)avatar + 2956);
        *(int *)((char *)inner + 1376) = value;
    }
}
