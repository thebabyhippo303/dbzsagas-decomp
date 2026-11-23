/* Database__UnloadRecord @ 0x80203DC0 (size: 0xC4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct DbRec {
    struct DbRec *next;
    void *id;
    char pad[2];
    unsigned short flags;
    struct DbRec *child;
} DbRec;

extern char lbl_80345C08[] __attribute__((section(".data")));
extern void *lbl_803ADB6C __attribute__((section(".data")));
extern char lbl_803ADB80[] __attribute__((section(".data")));

extern void fn_802043BC(void *record, void *bucket, char *name);
extern void memFree(void *ptr);
extern void Database__AdvanceRecordCursorIfRemoved(void *record);
extern void fn_80184530(void *list, void *record);
extern void fn_801845EC(void *pool, void *record);

void Database__UnloadRecord(int type, int id) {
    DbRec *bucket;
    DbRec *record;

    bucket = (DbRec *)lbl_803ADB6C;
    while (bucket != 0 && type != (int)bucket->id) {
        bucket = bucket->next;
    }
    if (bucket == 0) {
        return;
    }
    record = bucket->child;
    while (record != 0 && (int)record->id != id) {
        record = record->next;
    }
    if (record == 0) {
        return;
    }
    fn_802043BC(record, bucket, lbl_80345C08);
    if ((record->flags & 1) != 0) {
        memFree(record->id);
    }
    Database__AdvanceRecordCursorIfRemoved(record);
    fn_80184530(&bucket->child, record);
    fn_801845EC(lbl_803ADB80, record);
}
