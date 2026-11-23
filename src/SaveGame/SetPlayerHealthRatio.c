/* SaveGame__SetPlayerHealthRatio @ 0x8014EB2C (size: 0x20, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct {
    char pad[0x30];
    void *records;
} SaveGame;

void SaveGame__SetPlayerHealthRatio(SaveGame *save, float ratio) {
    char *record = (char *)save->records + 0x1B0;
    int i;

    for (i = 0; i < 3; i++) {
        *(float *)record = ratio;
        record -= 0xA0;
    }
}
