/* Avatar__RemoveHandItemImpl @ 0x8009BA20 (size: 0x10, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__RemoveHandItemImpl @ 0x8009BA20 (0x10). ProDG -O2. */
void Avatar__RemoveHandItemImpl(void *avatar) {
    *(volatile int *)((char *)avatar + 4) = 0;
    *(volatile int *)((char *)avatar + 0x112C) = 0;
}
