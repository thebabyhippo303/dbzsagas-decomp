/* MenuInput__MoveSelectionDown @ 0x8011C898 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: MenuInput__MoveSelectionDown @ 0x8011C898 (0x44). ProDG -O2. */
typedef struct {
    char pad[0xAEA8];
    void *list;
} MenuSelection;

extern char lbl_803251DC[];
extern void fn_80188B64(char *name, int flags);
extern void fn_8001849C(void *list);

void MenuInput__MoveSelectionDown(MenuSelection *menu) {
    fn_80188B64(lbl_803251DC, 0);
    fn_8001849C(menu->list);
}
