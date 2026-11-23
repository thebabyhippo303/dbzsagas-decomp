/* Game__SetBossAI @ 0x800451FC (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched reset helpers. ProDG -O2.
   Game__RestoreForReset    @ 0x8002F408 (0x34)
   Game__RestoreOnTaksDeath @ 0x8002F43C (0x34)
   Game__SetBossAI          @ 0x800451FC (0x34)
*/
typedef struct {
    char pad[0x5388];
    void *level;
} SaveG;

extern void *lbl_803DC3C0;
extern SaveG *lbl_803DC368;
void fn_80021FC8(void *p, int c);
void fn_8014EFB4(void *p);
void fn_8014F014(void *p);

void Game__RestoreForReset(void) {
    fn_80021FC8(lbl_803DC3C0, 0);
    fn_8014EFB4(lbl_803DC368->level);
}

void Game__RestoreOnTaksDeath(void) {
    fn_80021FC8(lbl_803DC3C0, 0);
    fn_8014F014(lbl_803DC368->level);
}

extern int lbl_803DC464;
void *fn_8023A310(void *a, void *b);

void Game__SetBossAI(void *a, void *b) {
    lbl_803DC464 = fn_8023A310(a, b) != 0;
}
