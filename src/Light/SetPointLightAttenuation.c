/* Light__SetPointLightAttenuation @ 0x8002DDA8 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Light__SetPointLightAttenuation @ 0x8002DDA8 (0x44). ProDG -O2. */
typedef struct {
    char pad[0x58];
    float attenuation;
} PointLight;

extern PointLight *Script__PopInt(void *script, void *context);
extern float Script__PopFloat(void *script, void *context);

void Light__SetPointLightAttenuation(void *script, void *context) {
    PointLight *light = Script__PopInt(script, context);
    light->attenuation = Script__PopFloat(script, context);
}
