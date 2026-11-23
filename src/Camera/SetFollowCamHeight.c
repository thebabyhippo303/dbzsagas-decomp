/* Camera__SetFollowCamHeight @ 0x8002C680 (size: 0xB8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;

typedef struct {
    void *object;
    char *name;
} FollowEntry;

typedef struct {
    s32 count;
    FollowEntry *entries;
} FollowTable;

int String__CompareIgnoreCase(const char *, const char *);
typedef float f32;
f32 Script__PopFloat(void *, void *);
void FollowCamera__SetHeight(void *, f32);
void Camera__ResetFollowHeightIfNeeded(void *, s32);
extern char lbl_80311630[] __attribute__((section(".data")));
extern FollowTable *lbl_803DC5B4 __attribute__((section(".sdata")));

static inline void *FindByName(FollowTable *table, const char *name) {
    s32 i;
    void *found;
    if (name == 0) {
        return 0;
    }
    found = 0;
    for (i = 0; i < table->count; i++) {
        if (String__CompareIgnoreCase(name, table->entries[i].name) == 0) {
            found = table->entries[i].object;
            break;
        }
    }
    return found;
}

void Camera__SetFollowCamHeight(void *script, void *context) {
    f32 value = Script__PopFloat(script, context);
    FollowTable *table = lbl_803DC5B4;
    void *obj = FindByName(table, lbl_80311630);
    FollowCamera__SetHeight(obj, value);
    Camera__ResetFollowHeightIfNeeded(obj, 1);
}
