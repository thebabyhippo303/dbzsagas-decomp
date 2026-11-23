/* FluffLoop__ClearCallbacksForTarget @ 0x80052190 (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: FluffLoop__ClearCallbacksForTarget @ 0x80052190 (0x34). ProDG -O2. */
extern char *lbl_803DC414;

void FluffLoop__ClearCallbacksForTarget(void *target) {
    char *node = lbl_803DC414;
    if (node == 0)
        return;
    do {
        void **stored = (void **)(node + 0x49140);
        if (*stored == target)
            *stored = 0;
        node = *(char **)(node + 0x49138);
    } while (node != 0);
}
