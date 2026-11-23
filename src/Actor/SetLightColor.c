/* Actor__SetLightColor @ 0x802AC98C (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Actor__SetLightColor @ 0x802AC98C (0x60). ProDG -O2. */
typedef struct {
    char pad[0xC8];
    void *light;
} Actor;

extern float Script__PopFloat(void *script, void *context);
extern void CActor__SetLightColor(void *light, const void *color);

void Actor__SetLightColor(Actor *self, void *context) {
    float color[3];

    color[2] = Script__PopFloat(self, context);
    color[1] = Script__PopFloat(self, context);
    color[0] = Script__PopFloat(self, context);
    CActor__SetLightColor(self->light, color);
}
