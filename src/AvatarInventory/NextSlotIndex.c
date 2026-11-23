/* AvatarInventory__NextSlotIndex @ 0x8009B65C (size: 0x14, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef unsigned int u32;
u32 AvatarInventory__NextSlotIndex(void *self, s32 idx) {
    u32 n = idx + 1;

    if (n > 120) {
        n = 0;
    }
    return n;
}
