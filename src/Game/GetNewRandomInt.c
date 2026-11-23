/* Game__GetNewRandomInt @ 0x8002F664 (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-match Game__GetNewRandomInt @ 0x8002F664 (0x90). ProDG -O2. */
extern int Script__PopInt(void *script, void *context);
extern void Script__PushInt(void *script, void *context, int value);
extern int Game__GetNewRandomIntImpl(int *previous, int min, int max);

void Game__GetNewRandomInt(void *script, void *context) {
    int previous;
    int min;
    int max;
    int value;

    Script__PopInt(script, context);
    previous = Script__PopInt(script, context);
    min = Script__PopInt(script, context);
    max = Script__PopInt(script, context);
    value = Game__GetNewRandomIntImpl(&previous, min, max);
    Script__PushInt(script, context, previous);
    Script__PushInt(script, context, value);
}
