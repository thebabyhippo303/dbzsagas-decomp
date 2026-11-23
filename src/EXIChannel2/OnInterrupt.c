/* EXIChannel2__OnInterrupt @ 0x8017D174 (size: 0x40, .text, MWCC GC/1.x (Dolphin SDK)) - MATCHED */
typedef short s16;
typedef unsigned int u32;
extern void *lbl_803DD494 __attribute__((section(".sbss")));

void EXIChannel2__OnInterrupt(s16 arg0) {
    volatile u32 *base = (volatile u32 *)0xCC000000;
    base[0xC00] = 0x1000;
    if (lbl_803DD494 != 0) {
        ((void (*)(s16))lbl_803DD494)(arg0);
    }
}
