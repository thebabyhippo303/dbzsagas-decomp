/* InventoryMenu__GetSelectedItemIndex @ 0x801043C0 (size: 0xBC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8;
typedef int s32;

s32 InventoryMenu__IsOwnedItemSelectable(void *menu, s32 index);
s32 InventoryMenu__IsShopItemSelectable(void *menu, s32 index);

s32 InventoryMenu__GetSelectedItemIndex(void *menu) {
    s32 found;
    s32 id;
    s32 mode;
    s8 limit;

    found = 0;
    id = 1;
    mode = *(s32 *)((char *)menu + 0xCF8);
    if (mode == 2) {
        for (; id <= 120; id++) {
            if (InventoryMenu__IsOwnedItemSelectable(menu, id) != 0) {
                limit = *(s8 *)((char *)menu + 0xC58);
                if (found == limit) {
                    return id;
                }
                found += 1;
            }
        }
    } else if (mode == 1) {
        for (; id <= 120; id++) {
            if (InventoryMenu__IsShopItemSelectable(menu, id) != 0) {
                limit = *(s8 *)((char *)menu + 0xBAC);
                if (found == limit) {
                    return id;
                }
                found += 1;
            }
        }
    }
    return 0;
}
