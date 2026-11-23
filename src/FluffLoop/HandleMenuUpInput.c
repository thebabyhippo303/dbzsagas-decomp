/* FluffLoop__HandleMenuUpInput @ 0x800567E8 (size: 0x28, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: FluffLoop__HandleMenuUpInput @ 0x800567E8 (0x28). ProDG -O2. */
extern void MenuPanel__HandleUpInput(void *menu);

void FluffLoop__HandleMenuUpInput(char *self) {
    MenuPanel__HandleUpInput(self + 0xAE90);
}
