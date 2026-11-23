/* Game__SetInvincible @ 0x80045230 (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
void *Script__PopInt(void *script, void *context);
extern void *lbl_803DC3C0 __attribute__((section(".sdata")));

void Game__SetInvincible(void *script, void *context) {
    int value = Script__PopInt(script, context) != 0 ? 1 : 0;
    *(int *)((char *)lbl_803DC3C0 + 0x1C6C) = value;
}
