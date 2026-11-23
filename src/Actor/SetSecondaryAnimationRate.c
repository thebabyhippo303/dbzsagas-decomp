/* Actor__SetSecondaryAnimationRate @ 0x802AC754 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Actor__SetSecondaryAnimationRate @ 0x802AC754 (0x64). ProDG -O2. */
typedef struct {
    char pad[0xC8];
    void *inner;
} ActorRateScript;

typedef struct {
    char pad[0x84];
    void *animation;
} ActorAnimation;

extern float Script__PopFloat(void *script, void *context);
extern int Script__PopInt(void *script, void *context);
extern void Animation__SetRate(void *animation, float rate);

void Actor__SetSecondaryAnimationRate(ActorRateScript *script, void *context) {
    ActorAnimation *actor = (ActorAnimation *)script->inner;
    float rate = Script__PopFloat(script, context);
    int index = Script__PopInt(script, context);

    Animation__SetRate((char *)actor->animation + 0x108 + index * 0x14, rate);
}
