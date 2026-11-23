/* Pickup__CheckCollectionEvent @ 0x800F2110 (size: 0xE8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct Vec3i {
    int x;
    int y;
    int z;
} Vec3i;

typedef struct CollectEvent {
    void *owner;
    Vec3i a;
    Vec3i b;
    int result;
} CollectEvent;

extern void fn_80251650(void *name, int code, CollectEvent *ev, void *self, void *actor);
extern int lbl_803945D4[] __attribute__((section(".data")));
extern char lbl_803B1DDC[] __attribute__((section(".data")));

int Pickup__CheckCollectionEvent(void *self, void *actor, Vec3i *pos, Vec3i *other) {
    CollectEvent ev;
    CollectEvent *ep;
    void *a;
    void *s;
    void *alt;
    int result;

    a = actor;
    result = 0;
    s = self;
    ep = &ev;
    ev.owner = s;
    ev.a = *pos;
    ev.b = *other;
    ev.result = result;
    fn_80251650(lbl_803B1DDC, 0x30090, ep, s, a);
    if (ev.result == 0 && ((*(int *)a & lbl_803945D4[1]) == lbl_803945D4[0])) {
        alt = *(void **)((char *)a + 0x594);
        if (alt != 0) {
            fn_80251650(lbl_803B1DDC, 0x30090, ep, s, alt);
        }
    }
    return ev.result;
}
