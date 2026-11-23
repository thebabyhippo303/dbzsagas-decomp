/* Avatar__TurnTowardCamera @ 0x8002FC14 (size: 0x1BC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct CameraEntry {
    void *obj;
    char *name;
} CameraEntry;

typedef struct CameraTable {
    int count;
    CameraEntry *entries;
} CameraTable;
typedef struct Vec3 { float x, y, z; } Vec3;

extern char lbl_80311630[] __attribute__((section(".data")));
extern float lbl_803116F8 __attribute__((section(".data")));
extern float lbl_803116FC __attribute__((section(".data")));
extern float lbl_80311700 __attribute__((section(".data")));
extern float lbl_80311704 __attribute__((section(".data")));
extern float lbl_803DE500;
extern float lbl_803DE504;
extern CameraTable *lbl_803DC5B4;
extern void *lbl_803DC3C0;

int String__CompareIgnoreCase(const char *a, const char *b);
float Script__PopFloat(void *script, int context);
void *Game__GetPlayerImpl(void *, int);
float atan2f(float y, float x);

void Avatar__TurnTowardCamera(void *arg0, int arg1) {
    char *name;
    CameraTable *table;
    char *obj;
    char *src;
    char *pl;
    int i;
    Vec3 v;
    Vec3 *p;
    float f31;
    float dz;
    float dx;
    float a;
    float cur;

    f31 = Script__PopFloat(arg0, arg1);
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
    p = &v;
    pl = Game__GetPlayerImpl(lbl_803DC3C0, 0);
    dz = p->z - *(float *)(pl + 0x40);
    a = v.x - *(float *)(pl + 0x38);
    if (dz == lbl_803116F8) {
        if (a == lbl_803116F8) {
            a = lbl_803116F8;
        } else if (!(a <= lbl_803116F8)) {
            a = lbl_803DE500 * lbl_803116FC;
        } else {
            a = -lbl_803DE500 * lbl_803116FC;
        }
    } else {
        a = atan2f(a, dz);
    }
    if (a > lbl_80311700 || !(a >= lbl_80311704)) {
        a = lbl_803116F8;
    }
    cur = *(float *)(pl + 0x75C);
    if (!(a >= -lbl_803DE500)) {
        do {
            a += lbl_803DE504;
        } while (a < -lbl_803DE500);
    }
    {
        float pi = lbl_803DE500;
        if (!(a <= pi)) {
            do {
                a -= lbl_803DE504;
            } while (a > pi);
        }
    }
    *(float *)(pl + 0x75C) = (a - cur) * f31 + cur;
}
