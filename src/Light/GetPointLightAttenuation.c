/* Light__GetPointLightAttenuation @ 0x8002DF04 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Light__GetPointLightAttenuation @ 0x8002DF04 (0x40). ProDG -O2. */
typedef struct {
    char pad[0x58];
    float attenuation;
} PointLight;

extern PointLight *fn_8023A310(void *script, void *context);
extern void Script__PushFloat(void *script, void *context, float value);

void Light__GetPointLightAttenuation(void *script, void *context) {
    PointLight *light = fn_8023A310(script, context);
    Script__PushFloat(script, context, light->attenuation);
}
