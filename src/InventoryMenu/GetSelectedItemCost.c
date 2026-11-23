/* InventoryMenu__GetSelectedItemCost @ 0x801044C8 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct {
    int cost;
    char rest[32];
} InventoryItemSlot;

typedef struct {
    char pad[48];
    InventoryItemSlot items[1];
} InventoryTable;

typedef struct {
    char pad[5532];
    InventoryTable *inventory;
} InventoryPlayer;

extern void *lbl_803DC3C0;
extern InventoryPlayer *Game__GetPlayerImpl(void *game, int player);
extern int InventoryMenu__GetSelectedItemIndex(void *menu);

int InventoryMenu__GetSelectedItemCost(void *menu) {
    InventoryTable *inventory = Game__GetPlayerImpl(lbl_803DC3C0, 0)->inventory;
    return inventory->items[InventoryMenu__GetSelectedItemIndex(menu)].cost;
}
