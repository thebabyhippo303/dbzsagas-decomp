/* ShotList__Update @ 0x800D0968 (size: 0x150, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: ShotList__Update @ 0x800D0968 (0x150). ProDG -O2. */
typedef struct ShotListEntry {
    char *name;
    int camera_id;
    float timer;
    float time;
    int started;
} ShotListEntry;

typedef struct ShotListQueue {
    ShotListEntry **buffer;
    int count;
    char pad[8];
    int enabled;
} ShotListQueue;

extern ShotListQueue lbl_80392D54 __attribute__((section(".data")));
extern int lbl_80392D58 __attribute__((section(".data")));
extern float lbl_80321E10 __attribute__((section(".data")));
extern char lbl_803A35A0[] __attribute__((section(".data")));
extern void *lbl_803DC5B4;

extern void CameraBag__Pop(void *bag);
extern void *CameraBag__Push(void *bag, char *name);
extern void ShotListEntry__SetCameraAndTimer(void *camera, int camera_id, float timer);
extern void fn_80184430(char *text);
extern void fn_801843CC(void *entry);
extern void *memmove(void *dst, void *src, unsigned int n);
extern void *memset(void *dst, int value, unsigned int n);

void ShotList__Update(void) {
    ShotListEntry *entry;
    int n;

    if (lbl_80392D58 > 0) {
        entry = lbl_80392D54.buffer[0];
        if (entry->started != 0 && !(entry->time > lbl_80321E10)) {
            CameraBag__Pop(lbl_803DC5B4);
            if (entry != 0) {
                if (entry->name != 0) {
                    fn_80184430(entry->name);
                }
                fn_801843CC(entry);
            }
            if (lbl_80392D54.count > 0) {
                n = lbl_80392D54.count - 1;
                if (n > 0) {
                    memmove(lbl_80392D54.buffer, lbl_80392D54.buffer + 1, n * 4);
                }
                lbl_80392D54.count = lbl_80392D54.count - 1;
                if (lbl_80392D54.enabled != 0) {
                    memset(lbl_80392D54.buffer + lbl_80392D54.count, 0, 4);
                }
            }
        }
    }
    if (lbl_80392D58 > 0) {
        entry = lbl_80392D54.buffer[0];
        if (entry->started == 0) {
            entry->started = 1;
            ShotListEntry__SetCameraAndTimer(CameraBag__Push(lbl_803DC5B4, entry->name), entry->camera_id, entry->timer);
        }
        entry->timer = entry->timer - *(float *)(lbl_803A35A0 + 0x1C);
        entry->time = entry->time - *(float *)(lbl_803A35A0 + 0x1C);
    }
}
