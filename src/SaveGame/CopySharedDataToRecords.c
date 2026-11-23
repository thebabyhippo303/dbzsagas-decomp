/* SaveGame__CopySharedDataToRecords @ 0x8014EB4C (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: SaveGame__CopySharedDataToRecords @ 0x8014EB4C (0x80). ProDG -O2. */
typedef struct {
    int words[8];
} SharedData;

typedef struct {
    char pad[0x74];
    SharedData shared;
    char pad2[0xA0 - 0x74 - sizeof(SharedData)];
} SaveRecord;

typedef struct {
    char pad[0x30];
    SaveRecord *records;
} SaveGame;

void SaveGame__CopySharedDataToRecords(SaveGame *self, SharedData *src) {
    SaveRecord *records = self->records;
    int i;
    for (i = 0; i <= 2; i++)
        records[i].shared = *src;
}
