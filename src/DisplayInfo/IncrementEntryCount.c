/* DisplayInfo__IncrementEntryCount @ 0x8000B880 (size: 0xB4, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: DisplayInfo__IncrementEntryCount @ 0x8000B880 (0xB4). ProDG -O2. */
typedef struct {
    char pad[8];
    int count;
    char rest[16];
} DisplayEntry;

extern DisplayEntry lbl_8035F020[];
extern DisplayEntry lbl_8035F0AC[];
extern DisplayEntry lbl_8035F250[];
extern DisplayEntry lbl_8035F3BC[];
extern DisplayEntry lbl_8035F3F4[];

void DisplayInfo__IncrementEntryCount(void *self, int kind, int index) {
    DisplayEntry *entry;

    switch (kind) {
    case 0:
        entry = &lbl_8035F020[index];
        break;
    case 1:
        entry = &lbl_8035F0AC[index];
        break;
    case 2:
        entry = &lbl_8035F250[index];
        break;
    case 3:
        entry = &lbl_8035F3BC[index];
        break;
    case 4:
        entry = &lbl_8035F3F4[index];
        break;
    default:
        entry = 0;
        break;
    }
    if (entry != 0) {
        entry->count += 1;
    }
}
