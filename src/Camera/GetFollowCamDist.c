/* Camera__GetFollowCamDist @ 0x8002C488 (size: 0xA8, .text, ProDG 3.9.3 -O2) - MATCHED */
#define NULL 0
typedef struct CameraEntry {
    void *obj;
    char *name;
} CameraEntry;

typedef struct CameraTable {
    int count;
    CameraEntry *entries;
} CameraTable;

extern char lbl_80311630[];
extern CameraTable *lbl_803DC5B4;

int String__CompareIgnoreCase(const char *a, const char *b);
float FollowCamera__GetDistance(void *camera);
int Script__PushFloat(void *script, void *context, float value);

int Camera__GetFollowCamDist(void *arg0, void *arg1) {
    char *name;
    CameraTable *table;
    void *obj;
    int i;

    name = lbl_80311630;
    table = lbl_803DC5B4;
    if (name == NULL) {
        return 0;
    }
    obj = NULL;
    for (i = 0; i < table->count; i++) {
        if (String__CompareIgnoreCase(name, table->entries[i].name) == 0) {
            obj = table->entries[i].obj;
            break;
        }
    }
    return Script__PushFloat(arg0, arg1, FollowCamera__GetDistance(obj));
}
