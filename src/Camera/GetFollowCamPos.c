/* Camera__GetFollowCamPos @ 0x8002C984 (size: 0xE4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct CameraEntry {
    void *obj;
    char *name;
} CameraEntry;

typedef struct CameraTable {
    int count;
    CameraEntry *entries;
} CameraTable;
typedef struct Vec3 { float x, y, z; } Vec3;

extern char lbl_80311630[];
extern CameraTable *lbl_803DC5B4;

int String__CompareIgnoreCase(const char *a, const char *b);
void Script__PushFloat(void *script, int context, float value);

void Camera__GetFollowCamPos(void *arg0, int arg1) {
    char *name;
    CameraTable *table;
    char *obj;
    char *src;
    int i;
    Vec3 v;
    float *p;

    name = lbl_80311630;
    table = lbl_803DC5B4;
    if (name == 0) {
        src = 0;
    } else {
        obj = 0;
        for (i = 0; i < table->count; i++) {
            if (String__CompareIgnoreCase(name, table->entries[i].name) == 0) {
                obj = table->entries[i].obj;
                break;
            }
        }
        src = obj;
    }
    v = *(Vec3 *)(src + 96);
    p = &v.x;
    Script__PushFloat(arg0, arg1, v.x);
    Script__PushFloat(arg0, arg1, p[1]);
    Script__PushFloat(arg0, arg1, p[2]);
}
