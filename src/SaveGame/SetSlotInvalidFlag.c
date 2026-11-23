/* SaveGame__SetSlotInvalidFlag @ 0x800577EC (size: 0x10, .text, ProDG 3.9.3 -O2) - MATCHED */
void SaveGame__SetSlotInvalidFlag(void *self, int slot, int flag) {
    int offset = slot * 4;
    int *base = (int *)((char *)self + 0x60);
    *(int *)((char *)base + offset) = flag;
}
