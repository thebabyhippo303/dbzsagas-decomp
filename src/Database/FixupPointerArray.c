/* Database__FixupPointerArray @ 0x802065D0 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Database__FixupPointerArray @ 0x802065D0 (0x50). ProDG -O2. */
void Database__FixupPointerArray(char *base) {
    unsigned short flags = *(unsigned short *)(base + 2);
    unsigned short count;
    unsigned short i;
    unsigned int *slot;

    if ((flags & 1) == 0)
        return;
    count = *(unsigned short *)base;
    flags = (unsigned short)(flags | 4);
    i = 0;
    *(unsigned short *)(base + 2) = flags;
    if (i >= count)
        return;
    do {
        slot = (unsigned int *)(base + (i << 2));
        slot[1] = (unsigned int)base + slot[1];
        i = (unsigned short)(i + 1);
    } while (i < *(unsigned short *)base);
}
