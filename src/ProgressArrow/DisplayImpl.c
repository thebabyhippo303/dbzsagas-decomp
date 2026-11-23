/* ProgressArrow__DisplayImpl @ 0x8011F560 (size: 0xA0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct ActorVTable {
    char pad[96];
    short adjust;
    short pad2;
    void (*fn)(void *self, int arg);
} ActorVTable;
typedef struct Actor {
    char pad[52];
    ActorVTable *vtable;
} Actor;
typedef struct ActorList {
    Actor **items;
    int count;
} ActorList;

extern ActorList lbl_803941AC __attribute__((section(".data")));
extern float lbl_803A35C4 __attribute__((section(".data")));
extern float lbl_803DD9A0;
extern int lbl_803DD9A4;
extern void ProgressArrow__ResetDisplayState(void *actor);

void ProgressArrow__DisplayImpl(float dt) {
    int i;
    lbl_803DD9A4 = 1;
    lbl_803DD9A0 = lbl_803A35C4 + dt;
    for (i = 0; i < lbl_803941AC.count;) {
        Actor *a = *(Actor **)((int)lbl_803941AC.items + (i << 2));
        i++;
        a->vtable->fn((char *)a + a->vtable->adjust, 0);
        ProgressArrow__ResetDisplayState(a);
    }
}
