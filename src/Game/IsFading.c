/* Game__IsFading @ 0x8002F5A8 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Game__IsFading @ 0x8002F5A8 (0x44). ProDG -O2. */
extern int Fade__IsRecordActive(int id);
extern void Script__PushInt(void *script, void *context, int value);

void Game__IsFading(void *script, void *context) {
    Script__PushInt(script, context, Fade__IsRecordActive(0));
}
