/* Light__SetIntensity @ 0x8002DFFC (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Light__SetIntensity @ 0x8002DFFC (0x44). ProDG -O2. */
typedef struct {
    char pad[0x60];
    float intensity;
} LightIntensity;

extern LightIntensity *Script__PopInt(void *script, void *context);
extern float Script__PopFloat(void *script, void *context);

void Light__SetIntensity(void *script, void *context) {
    LightIntensity *light = Script__PopInt(script, context);
    light->intensity = Script__PopFloat(script, context);
}
