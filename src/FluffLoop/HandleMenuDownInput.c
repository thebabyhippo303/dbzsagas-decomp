/* FluffLoop__HandleMenuDownInput @ 0x80056810 (size: 0x28, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: FluffLoop__HandleMenuDownInput @ 0x80056810 (0x28). ProDG -O2. */
extern void MenuPanel__HandleDownInput(void *menu);

void FluffLoop__HandleMenuDownInput(char *self) {
	MenuPanel__HandleDownInput(self + 0xAE90);
}
