/* SwooshStreak__GetAssetById @ 0x8021DEB4 (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
extern void *lbl_803AD05C[] __attribute__((section(".data")));

void *Database__GetArrayElement(void *array, unsigned int index);

void *SwooshStreak__GetAssetById(int id, unsigned int index) {
    int offset = id * 4;
    char *base = (char *)lbl_803AD05C;

    base += 0x390;
    return Database__GetArrayElement(*(void **)(base + offset), index);
}
