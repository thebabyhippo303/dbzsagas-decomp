/* PickupManager__GetListEntryCountByType @ 0x800E5084 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
/* PickupManager__GetListByType @ 0x800E5084 */
typedef struct {
    void **lists[3];
} PickupLists;

void *PickupManager__GetListByType(PickupLists *self, int type) {
    switch (type) {
    case 9:
        return self->lists[0][1];
    case 10:
        return self->lists[1][1];
    case 8:
        return self->lists[2][1];
    default:
        return 0;
    }
}
