/* Mover__CheckOnGround @ 0x802B0670 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Mover__CheckOnGround @ 0x802B0670 (0x44). ProDG -O2. */
extern void *Script__PopActor(void *script, void *context, int index);
extern void Script__PushInt(void *script, void *context, int value);

void Mover__CheckOnGround(void *script, void *context) {
    void *actor = Script__PopActor(script, context, 0);
    Script__PushInt(script, context, *(int *)((char *)actor + 1308));
}
