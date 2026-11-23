/* PickupManager__RemoveUnavailableFromAllLists @ 0x800E5138 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-match PickupManager__RemoveUnavailableFromAllLists @ 0x800E5138 (0x40). */
extern void PickupManager__RemoveUnavailablePickups(void *list);

void PickupManager__RemoveUnavailableFromAllLists(void *self) {
    PickupManager__RemoveUnavailablePickups(*(void **)self);
    PickupManager__RemoveUnavailablePickups(*(void **)((char *)self + 4));
    PickupManager__RemoveUnavailablePickups(*(void **)((char *)self + 8));
}
