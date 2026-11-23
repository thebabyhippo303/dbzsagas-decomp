/* Game__DebugDistortions @ 0x8003C82C (size: 0x28, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched debug getters. ProDG -O2.
   Game__DebugDistortions       @ 0x8003C82C (0x28)
   Game__DebugCombos            @ 0x8003C854 (0x28)
   Debug__GetMeleeBreakMode     @ 0x80041D1C (0x28)
*/
typedef struct {
    char pad[0x1c48];
    int distortions;
    char pad1[0x1c54 - 0x1c4c];
    int combos;
    char pad2[0x1c68 - 0x1c58];
    int melee_break;
} DebugCfg;

extern DebugCfg *lbl_803DC3C0;
void fn_8023A224(void *a, void *b, int c);

void Game__DebugDistortions(void *a, void *b) {
    fn_8023A224(a, b, lbl_803DC3C0->distortions);
}

void Game__DebugCombos(void *a, void *b) {
    fn_8023A224(a, b, lbl_803DC3C0->combos);
}

void Debug__GetMeleeBreakMode(void *a, void *b) {
    fn_8023A224(a, b, lbl_803DC3C0->melee_break);
}
