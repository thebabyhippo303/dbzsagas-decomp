/* InventoryMenu__GetSelectedItemWordAt0x44 @ 0x8010447C (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct {
    char pad[20];
    int value;
    char rest[12];
} InventoryItemSlot;

typedef struct {
    char pad[48];
    InventoryItemSlot items[1];
} InventoryTable;

typedef struct {
    char pad[5532];
    InventoryTable *inventory;
} InventoryPlayer;

extern InventoryPlayer *Game__GetPlayerImpl(void *game, int player);
extern int InventoryMenu__GetSelectedItemIndex(void *menu);
extern void *lbl_803DC3C0;

int InventoryMenu__GetSelectedItemWordAt0x44(void *menu) {
    InventoryTable *inventory = Game__GetPlayerImpl(lbl_803DC3C0, 0)->inventory;
    return inventory->items[InventoryMenu__GetSelectedItemIndex(menu)].value;
}
