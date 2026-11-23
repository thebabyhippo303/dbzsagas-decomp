/* Game__DeactivateOverlay @ 0x80043928 (size: 0x28, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched overlay toggles. ProDG -O2.
   Game__ActivateOverlay   @ 0x80043900 (0x28)
   Game__DeactivateOverlay @ 0x80043928 (0x28)
*/
extern char *lbl_803DC3B4;
void fn_8000BA60(void *p);
void fn_8000C3B4(void *p);

void Game__ActivateOverlay(void) {
    fn_8000BA60(lbl_803DC3B4 + 0x8C);
}

void Game__DeactivateOverlay(void) {
    fn_8000C3B4(lbl_803DC3B4 + 0x8C);
}
