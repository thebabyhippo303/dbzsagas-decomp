/* Game__IsPendulumMode @ 0x8004507C (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Game__IsPendulumMode @ 0x8004507C (0x48). ProDG -O2. */
extern char *lbl_803DC368;
extern int Game__IsPendulumModeImpl(void *persistent_data);
extern void Script__PushInt(void *script, void *context, int value);

void Game__IsPendulumMode(void *script, void *context) {
	Script__PushInt(script, context,
		Game__IsPendulumModeImpl(lbl_803DC368 + 0x17C));
}
