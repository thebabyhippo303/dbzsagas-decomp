/* InventoryMenu__IncreaseSelectedItemQuantity @ 0x801045F8 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: InventoryMenu__IncreaseSelectedItemQuantity @ 0x801045F8 (0x50). ProDG -O2. */
extern int InventoryMenu__GetSelectedItemIndex(void *menu);
extern void *Game__GetPlayerImpl(void *game, int player);
extern void *lbl_803DC3C0;
extern void fn_8009B730(void *inventory, int item, int quantity, int direction);

void InventoryMenu__IncreaseSelectedItemQuantity(void *menu) {
    int index = InventoryMenu__GetSelectedItemIndex(menu);
    if (index != 0) {
        void *player = Game__GetPlayerImpl(lbl_803DC3C0, 0);
        void *inventory = *(void **)((char *)player + 5532);
        fn_8009B730(inventory, index, 0, 1);
    }
}
