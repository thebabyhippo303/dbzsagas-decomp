/* Plant__ClearReferenceEntry @ 0x800F63B4 (size: 0x18, .text, ProDG 3.9.3 -O2) - MATCHED */
void *Plant__ClearReferenceEntry(void *entry) {
    *(volatile int *)((char *)entry + 8) = 0;
    *(volatile int *)((char *)entry + 0) = 0;
    *(volatile int *)((char *)entry + 4) = 0;
    return entry;
}
