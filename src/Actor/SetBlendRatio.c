/* Actor__SetBlendRatio @ 0x802AC7B8 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Actor__SetBlendRatio @ 0x802AC7B8 (0x58). ProDG -O2. */
extern int Script__PopInt(void *script, void *context);
extern float Script__PopFloat(void *script, void *context);
extern void Animation__SetBlendRatio(void *slot, float ratio);

void Actor__SetBlendRatio(void *script, void *context) {
    int index = Script__PopInt(script, context);
    float ratio = Script__PopFloat(script, context);
    int scaled = index * 20;
    void *actor = *(void **)((char *)script + 200);
    void *anim = *(void **)((char *)actor + 132);
    Animation__SetBlendRatio((char *)anim + (scaled + 264), ratio);
}
