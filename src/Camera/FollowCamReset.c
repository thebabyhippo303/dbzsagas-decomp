/* Camera__FollowCamReset @ 0x8002CC3C (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
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
void Camera__RefreshFollowPositionFromActor(void *);
extern char lbl_80311630[] __attribute__((section(".data")));
extern FollowTable *lbl_803DC594 __attribute__((section(".sdata")));

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

void Camera__FollowCamReset(void) {
    FollowTable *table = lbl_803DC594;
    Camera__RefreshFollowPositionFromActor(FindByName(table, lbl_80311630));
}
