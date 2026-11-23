/* SaveGame__SetLevelId @ 0x8014EB08 (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: SaveGame__SetLevelId @ 0x8014EB08 (0x24). ProDG -O2. */
typedef struct {
    char pad[0x30];
    char *records;
} SaveGame;

void SaveGame__SetLevelId(SaveGame *save, int level) {
    char *record = save->records + 0x140;
    int i;
    for (i = 3; i != 0; --i) {
        *(int *)record = level;
        record -= 0xA0;
    }
    *(int *)((char *)save + 4) = level;
}
