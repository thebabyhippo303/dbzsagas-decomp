/* AvatarInventory__UnequipHandItem @ 0x8009B608 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
extern void AvatarInventory__ReturnHandItemToInventory(void *);
extern void Avatar__RemoveHandItemImpl(void *, s32);
s32 AvatarInventory__UnequipHandItem(void *arg0) {
    char *base = (char *)arg0;
    s32 index = *(s32 *)(base + 0x112C);
    if (index == 0) return 1;
    if ((*(s32 **)(base + 0x1128))[index * 6] & 2) {
        AvatarInventory__ReturnHandItemToInventory(arg0);
        return 1;
    }
    Avatar__RemoveHandItemImpl(arg0, 0);
    return 0;
}
