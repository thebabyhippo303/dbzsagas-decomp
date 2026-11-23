/* Game__TriggerMenuFade @ 0x800232F8 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Game__TriggerMenuFade @ 0x800232F8 (0x70). ProDG -O2. */
typedef void (*MenuFadeFn)(void *self);

extern void fn_80188B64(const char *name, int flag);
extern char lbl_80310684[] __attribute__((section(".data")));

void Game__TriggerMenuFade(void *arg0) {
    char *temp_r11;
    char *temp_r9;

    fn_80188B64(lbl_80310684, 0);
    temp_r11 = *(char **)((char *)arg0 + 0x20F0);
    temp_r9 = *(char **)(temp_r11 + 0x19C);
    ((MenuFadeFn)(*(void **)(temp_r9 + 0x364)))(temp_r11 + *(short *)(temp_r9 + 0x360));
    temp_r11 = *(char **)((char *)arg0 + 0x20F0);
    temp_r9 = *(char **)(temp_r11 + 0x19C);
    ((MenuFadeFn)(*(void **)(temp_r9 + 0x36C)))(temp_r11 + *(short *)(temp_r9 + 0x368));
}
