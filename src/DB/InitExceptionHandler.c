/* DB__InitExceptionHandler @ 0x8017091C (size: 0x28, .text, MWCC GC/1.x (Dolphin SDK)) - MATCHED */
extern unsigned int lbl_803DD2A0 __attribute__((section(".sbss")));
extern unsigned int lbl_803DD2A4 __attribute__((section(".sbss")));
extern void DB__ExceptionTrampoline(void);

void DB__InitExceptionHandler(void) {
    volatile unsigned int *vectors = (volatile unsigned int *)0x80000000;
    lbl_803DD2A0 = (unsigned int)&vectors[16];
    vectors[18] = (unsigned int)DB__ExceptionTrampoline + 0x80000000;
    lbl_803DD2A4 = 1;
}
