/* SaveGame__GetRecordIndexForLevel @ 0x8014EAE4 (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: SaveGame__GetRecordIndexForLevel @ 0x8014EAE4 (0x24). */
int SaveGame__GetRecordIndexForLevel(void *save, int level) {
    int result = 0;
    (void)save;
    if (level == 99)
        result = 2;
    else if (level == 98)
        result = 1;
    return result;
}
