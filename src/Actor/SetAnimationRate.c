/* Actor__SetAnimationRate @ 0x802AC718 (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Actor__SetAnimationRate @ 0x802AC718 (0x3C). ProDG -O2. */
typedef struct {
    char pad[0xC8];
    void *actor;
} ActorRateScript;

typedef struct {
    char pad[0x84];
    void *animation;
} ActorAnimation;

extern float Script__PopFloat(void *script, void *context);
extern void Animation__SetRate(void *animation, float rate);

void Actor__SetAnimationRate(ActorRateScript *script, void *context) {
    ActorAnimation *actor = (ActorAnimation *)script->actor;
    float rate = Script__PopFloat(script, context);
    Animation__SetRate((char *)actor->animation + 0x108, rate);
}
