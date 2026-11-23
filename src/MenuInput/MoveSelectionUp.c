/* MenuInput__MoveSelectionUp @ 0x8011C854 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: MenuInput__MoveSelectionUp @ 0x8011C854 (0x44). ProDG -O2. */
typedef struct {
    char pad[0xAEA8];
    void *list;
} MenuSelection;

extern char lbl_803251CC[];
extern void fn_80188B64(char *name, int flags);
extern void fn_80018464(void *list);

void MenuInput__MoveSelectionUp(MenuSelection *menu) {
    fn_80188B64(lbl_803251CC, 0);
    fn_80018464(menu->list);
}
