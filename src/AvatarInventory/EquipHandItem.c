/* AvatarInventory__EquipHandItem @ 0x8009B578 (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;

extern s32 AvatarInventory__UnequipHandItem(void *, s32);
extern void AvatarInventory__SwitchHandItem(void *, void *, void *);

static inline s32 EquipHandItem_Flag(void *p, s32 off) {
    char *flags;

    flags = (char *)p + 40;
    return *(s32 *)(flags + off);
}

s32 AvatarInventory__EquipHandItem(void *arg0, s32 arg1, s32 arg2) {
    char *items;
    s32 off;
    s32 ok;

    items = (char *)arg0 + 36;
    off = arg1 * 36;
    ok = 0;
    if ((*(s32 *)(items + off) != 0) && ((arg2 == 0) || (EquipHandItem_Flag(arg0, off) & arg2))) {
        ok = 1;
    }
    if (ok != 0) {
        AvatarInventory__UnequipHandItem(arg0, 0);
        AvatarInventory__SwitchHandItem(arg0, (void *)arg1, (void *)arg2);
        return 1;
    }
    return 0;
}
