/* Actor__RegisterActorToSendDeathEvent @ 0x802AE308 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct {
    char pad[0x110];
    int death_event_flags;
} Actor;

extern int Script__PopInt(void *script, void *context);
extern Actor *Script__PopActor(void *script, void *context, int flags);

void Actor__RegisterActorToSendDeathEvent(void *script, void *context) {
    int death_event = Script__PopInt(script, context);
    Actor *actor = Script__PopActor(script, context, 0);
    actor->death_event_flags |= death_event;
}
