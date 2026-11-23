/* Pickup__MarkForDestruction @ 0x800F23AC (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Pickup__MarkForDestruction @ 0x800F23AC (0x4C). ProDG -O2. */
typedef struct {
    char pad[0x5E8];
    void *target;
    char pad2[0x614 - 0x5EC];
    int pending;
} PickupPending;

extern char lbl_803B1DDC[];
extern void fn_80251650(void *list, int event, void *pickup, void *again, void *target);

void Pickup__MarkForDestruction(PickupPending *pickup) {
    void *target;

    target = pickup->target;
    pickup->pending = 1;
    if (target != 0)
        fn_80251650(lbl_803B1DDC, 0x20006, pickup, pickup, target);
}
