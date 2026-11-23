/* App__SetFileStreamCapacity @ 0x8017FEBC (size: 0xC, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: App__SetFileStreamCapacity @ 0x8017FEBC (0xC). ProDG -O2. */
void App__SetFileStreamCapacity(int capacity) {
    volatile int *base = (volatile int *)0x80370000;
    base[10780 / 4] = capacity;
}
