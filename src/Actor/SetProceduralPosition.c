/* Actor__SetProceduralPosition @ 0x802AC810 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Actor__SetProceduralPosition @ 0x802AC810 (0x58). ProDG -O2. */
typedef struct {
    char pad_000[0x84];
    char *procedural_entries;
} ActorInner;

typedef struct {
    char pad_000[0xC8];
    ActorInner *inner;
} Actor;

extern int Script__PopInt(void *script, void *context);
extern float Script__PopFloat(void *script, void *context);
extern void fn_8023E7F0(void *entry, float value);

void Actor__SetProceduralPosition(Actor *self, void *context) {
    int index = Script__PopInt(self, context);
    float value = Script__PopFloat(self, context);
    char *entry = self->inner->procedural_entries + 0x108 + index * 20;
    fn_8023E7F0(entry, value);
}
