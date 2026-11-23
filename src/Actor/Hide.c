/* Actor__Hide @ 0x802AC9EC (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Actor__Hide @ 0x802AC9EC (0x6C). ProDG -O2. */
typedef int s32;
typedef void (*ActorHideFn)(void *self, s32 flag);

extern void *Script__PopInt(void *script, void *context);
extern void *Script__PopActor(void *script, void *context, s32 index);

void Actor__Hide(void *arg0, void *arg1) {
    s32 flag;
    char *actor;
    char *vtable;

    flag = 1;
    if (Script__PopInt(arg0, arg1) == 0) {
        flag = 0;
    }
    actor = Script__PopActor(arg0, arg1, 0);
    vtable = *(char **)(actor + 0x34);
    ((ActorHideFn)(*(void **)(vtable + 0x64)))(actor + *(short *)(vtable + 0x60), flag);
}
