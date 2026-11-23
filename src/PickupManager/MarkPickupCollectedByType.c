/* PickupManager__MarkPickupCollectedByType @ 0x800E50D4 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: PickupManager__MarkPickupCollectedByType @ 0x800E50D4 (0x64). ProDG -O2. */
typedef int s32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))

extern void PickupManager__MarkPickupCollected(s32 pickup, s32 value);

void PickupManager__MarkPickupCollectedByType(void *arg0, s32 arg1, s32 arg2) {
    s32 target;

    switch (arg1) {
    case 9:
        target = M2C_FIELD(arg0, s32 *, 0);
        PickupManager__MarkPickupCollected(target, arg2);
        return;
    case 10:
        target = M2C_FIELD(arg0, s32 *, 4);
        PickupManager__MarkPickupCollected(target, arg2);
        return;
    case 8:
        PickupManager__MarkPickupCollected(M2C_FIELD(arg0, s32 *, 8), arg2);
        return;
    }
}
