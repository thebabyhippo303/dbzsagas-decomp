/* Missile__UpdateTransformAndCallback @ 0x800D558C (size: 0x98, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;

extern void Missile__UpdateTransform(void *);
extern s32 *lbl_803DCCB8 __attribute__((section(".sdata")));

typedef void (*MissileUpdateFn)(void *, void *);

void Missile__Update(void *arg0) {
    char *self;
    s32 id;
    s32 found;
    s32 *node;
    void *obj;
    MissileUpdateFn fn;

    self = (char *)arg0;
    Missile__UpdateTransform(arg0);
    id = *(s32 *)(self + 876);
    *(s32 *)(self + 1072) = 0;
    if (id != 0) {
        node = lbl_803DCCB8;
        goto inc;
    body:
        if (id == *node) {
            found = 1;
            goto done;
        }
    inc:
        node = *(s32 **)((char *)node + 20);
        if (node != 0) {
            goto body;
        }
        found = 0;
    done:
        if (found == 0) {
            *(s32 *)(self + 876) = found;
        }
    }
    obj = *(void **)(self + 868);
    fn = *(MissileUpdateFn *)((char *)obj + 76);
    if (fn != 0) {
        fn(arg0, self + 864);
    }
}
