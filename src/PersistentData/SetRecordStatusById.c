/* PersistentData__SetRecordStatusById @ 0x801275B8 (size: 0xCC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct {
    int id;
    char pad4[4];
    int state;
    char pad0C[0x24 - 0xC];
} Record;

typedef struct {
    char pad0[0x20];
    int name;
    char pad24[0x24 - 0x24];
} Info;

typedef struct {
    Record *records;
    int count;
} RecordList;

extern void PersistentData__SetGlobalImpl(char *, int, int);
extern char *lbl_803DC368;
extern char lbl_8033B900[] __attribute__((section(".data")));

void PersistentData__SetRecordState(RecordList *list, int id, int flag) {
    int i;
    int *name;
    char *base;
    Record *record;

    i = 0;
    if (i < list->count) {
        base = lbl_8033B900;
        name = (int *)(base + 0x20);
        do {
            record = &list->records[i];
            if (id == record->id) {
                if (flag != 0) {
                    PersistentData__SetGlobalImpl(lbl_803DC368 + 300, *name, record->state = 2);
                } else {
                    PersistentData__SetGlobalImpl(lbl_803DC368 + 300, *name, record->state = 1);
                }
            }
            name += 9;
            i++;
        } while (i < list->count);
    }
}
