/* SfxEnvPlayer__InitSourceLists @ 0x8019B620 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
void *memset(void *, int, int);

void SfxEnvPlayer__InitSourceLists(void *unused, void *l) {
    void *second;
    memset(l, 0, 8);
    second = (char *)l + 8;
    memset(second, 0, 8);
    *(void **)((char *)l + 0x14) = second;
    *(int *)((char *)l + 0x18) = 0;
    *(void **)((char *)l + 0x10) = l;
}
