/* MemoryCard__IsSlotCardMissing @ 0x801D74E0 (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
int fn_802DB3F4(int);

int MemoryCard__IsSlotCardMissing(void *self, int slot) {
    return fn_802DB3F4(slot) == 0;
}
