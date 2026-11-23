/* Game__IsFullScreenEffectBusy @ 0x800333B8 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Game__IsFullScreenEffectBusy @ 0x800333B8 (0x44). ProDG -O2. */
extern int FullScreenEffect__IsBusy(void *state);
extern void *lbl_803DC5E4;
extern void Script__PushInt(void *script, void *context, int value);

void Game__IsFullScreenEffectBusy(void *script, void *context) {
	int busy;

	busy = FullScreenEffect__IsBusy(lbl_803DC5E4);
	Script__PushInt(script, context, busy);
}
