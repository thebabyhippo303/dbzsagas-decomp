/* Database__RegisterRecord @ 0x80203B64 (size: 0xF8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct DbType {
    struct DbType *next;
    int id;
    short kind;
    unsigned short flags;
    struct DbRec *child;
} DbType;

typedef struct DbRec {
    struct DbRec *next;
    int id;
    short size;
    short flags;
    char name[32];
    void *extra;
    void *user;
} DbRec;

extern void *Database__GetOrCreateType(int type, short kind);
extern void *fn_801845A4(void *pool);
extern void fn_8020394C(void);
extern void fn_801845EC(void *list, void *node);
extern char *strcpy(char *dst, const char *src);
extern void *fn_80234028(void *table);
extern void fn_802043BC(void *record, void *bucket, char *label);

extern char lbl_803ADB80[] __attribute__((section(".data")));
extern int lbl_803AD8D8 __attribute__((section(".data")));
extern char lbl_80345BFC[] __attribute__((section(".data")));
extern char lbl_80345C00[] __attribute__((section(".data")));

int Database__RegisterRecord(int type, short kind, int id, int size, int flags, char *name, void *user) {
    DbType *bucket;
    DbRec *rec;
    DbRec *cur;

    bucket = Database__GetOrCreateType(type, kind);
    if (bucket == 0) {
        return 0;
    }
    cur = bucket->child;
    if (cur != 0) {
        do {
            if (cur->id == id) {
                return 1;
            }
            cur = cur->next;
        } while (cur != 0);
    }
    rec = fn_801845A4(lbl_803ADB80);
    if (rec == 0) {
        fn_8020394C();
        return 0;
    }
    fn_801845EC(&bucket->child, rec);
    rec->id = id;
    rec->size = (short)size;
    rec->flags = (short)flags;
    if (name != 0) {
        strcpy(rec->name, name);
    } else {
        rec->name[0] = lbl_80345BFC[0];
    }
    rec->extra = fn_80234028(&lbl_803AD8D8);
    rec->user = user;
    fn_802043BC(rec, bucket, lbl_80345C00);
    return 1;
}
