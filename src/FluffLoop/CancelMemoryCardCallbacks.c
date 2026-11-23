/* FluffLoop__CancelMemoryCardCallbacks @ 0x8005172C (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: FluffLoop__CancelMemoryCardCallbacks @ 0x8005172C (0x40). ProDG -O2. */
extern void fn_80184EAC(int callback);

void FluffLoop__CancelMemoryCardCallbacks(char *self) {
    int *slot = (int *)(self + 0x49140);
    int callback = *slot;

    if (callback != 0)
        fn_80184EAC(callback);
    *slot = 0;
}
