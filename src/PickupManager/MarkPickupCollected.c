/* PickupManager__MarkPickupCollected @ 0x800E4D04 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct {
    int *ids;
    int count;
    char pad[16];
    int field18;
} PickupManager;

extern char *lbl_803DC368;
extern void PersistentData__MarkPickupCollected(void *data, int id);

void PickupManager__MarkPickupCollected(PickupManager *self, int id) {
    int i;

    for (i = 0; i < self->count; i++) {
        if (self->ids[i] == id) {
            self->ids[i] = 0;
            PersistentData__MarkPickupCollected(lbl_803DC368 + 396, self->field18);
            return;
        }
    }
}
