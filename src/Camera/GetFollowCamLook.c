/* Camera__GetFollowCamLook @ 0x8002CA68 (size: 0xE4, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Camera__GetFollowCamLook @ 0x8002CA68 (0xE4). ProDG -O2. */
typedef float f32;

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

extern int String__CompareIgnoreCase(const char *a, const char *b);
extern void Script__PushFloat(void *vm, void *arg, float value);
extern char lbl_80311630[] __attribute__((section(".data")));
extern void *lbl_803DC5B4;

void Camera__GetFollowCamLook(void *vm, void *arg) {
    void *table;
    char *key;
    void *cam;
    void *base;
    int index;
    Vec3 look;
    Vec3 *lookp;

    table = lbl_803DC5B4;
    key = lbl_80311630;
    if (key == 0) {
        base = 0;
        goto copy;
    }
    cam = 0;
    for (index = 0; index < *(int *)table; index++) {
        if (String__CompareIgnoreCase(key, *(char **)(*(char **)((char *)table + 4) + index * 8 + 4)) == 0) {
            cam = *(void **)(*(char **)((char *)table + 4) + index * 8);
            break;
        }
    }
    base = cam;
copy:
    lookp = &look;
    *lookp = *(Vec3 *)((char *)base + 0x6C);
    Script__PushFloat(vm, arg, lookp->x);
    Script__PushFloat(vm, arg, lookp->y);
    Script__PushFloat(vm, arg, lookp->z);
}
