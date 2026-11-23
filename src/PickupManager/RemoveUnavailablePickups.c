/* PickupManager__RemoveUnavailablePickups @ 0x800E4D78 (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef struct PickupManager {
    void **items;
    s32 count;
    char pad[0x18 - 8];
    s32 arg;
} PickupManager;

s32 PersistentData__IsPickupAvailable(char *data, s32 arg, s32 index);
void Actor__MarkForDeath(void *actor, float delay);
extern char *lbl_803DC348;
extern float lbl_80323294 __attribute__((section(".data")));

void PickupManager__RemoveUnavailablePickups(PickupManager *pm) {
    s32 i;
    s32 avail;
    void *actor;
    s32 off;

    for (i = 0; i < pm->count; i++) {
        off = i * 4;
        actor = *(void **)((char *)pm->items + off);
        avail = PersistentData__IsPickupAvailable(lbl_803DC348 + 396, pm->arg, i);
        if (avail == 0) {
            Actor__MarkForDeath(actor, lbl_80323294);
            *(void **)((char *)pm->items + off) = (void *)avail;
        }
    }
}
