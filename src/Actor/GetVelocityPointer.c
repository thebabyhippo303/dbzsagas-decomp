/* Actor__GetVelocityPointer @ 0x802AC4D8 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Actor__GetVelocityPointer @ 0x802AC4D8 (0x44). ProDG -O2. */
extern char *Script__PopActor(void *script, void *context, int index);
extern void Script__PushInt(void *script, void *context, int value);

void Actor__GetVelocityPointer(void *script, void *context) {
    char *actor = Script__PopActor(script, context, 0);
    Script__PushInt(script, context, (int)(actor + 0x68));
}
