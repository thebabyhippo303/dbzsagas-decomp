/* CameraBag__GetCurrentName @ 0x800BBC28 (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched. ProDG -O2. */
typedef struct {
    void *camera;
    char *name;
} CameraNameEntry;

typedef struct {
    int count;
    CameraNameEntry *entries;
} CameraNameList;

extern void *CameraBag__GetCurrent(void *bag);

char *CameraBag__GetCurrentName(CameraNameList *bag) {
    int i;
    void *camera;
    for (i = 0; i < bag->count; i++) {
        camera = bag->entries[i].camera;
        if (camera == CameraBag__GetCurrent(bag))
            return bag->entries[i].name;
    }
    return 0;
}
