/* World__LoadEnv @ 0x802B3124 (size: 0xA0, .text, ProDG 3.9.3 -O2) - MATCHED */
extern char lbl_80351F48[];
extern char lbl_80351F5C[];
extern int sprintf(char *buffer, const char *format, ...);
extern void *dblLoad(const char *path, void *context, int flags);
extern void *Database__GetTypedObject(int type, const char *name, void *database, int flags);

typedef struct {
    void *start;
    void *end;
} WorldEnv;

int World__LoadEnv(WorldEnv *self, const char *name) {
    char path[200];
    void *database;
    void *object;

    sprintf(path, lbl_80351F48, name, name);
    database = dblLoad(path, 0, 0);
    if (database != 0) {
        object = Database__GetTypedObject(1026, lbl_80351F5C, database, 0);
        object = (char *)object + 16;
        self->start = object;
        self->end = object;
    }
    return database != 0;
}
