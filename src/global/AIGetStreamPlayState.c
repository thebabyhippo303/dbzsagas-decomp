/* AIGetStreamPlayState @ 0x8017C5E0 (size: 0x10, .text, MWCC GC/1.x (Dolphin SDK)) - MATCHED */
unsigned int AIGetStreamPlayState(void) {
    return *(volatile unsigned int *)0xCC006C00 & 1;
}
