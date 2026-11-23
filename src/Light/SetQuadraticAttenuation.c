/* Light__SetQuadraticAttenuation @ 0x8002E084 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Light__SetQuadraticAttenuation @ 0x8002E084 (0x44). ProDG -O2. */
typedef struct {
    char pad[0x58];
    float quadraticAttenuation;
} LightQuadratic;

extern LightQuadratic *Script__PopInt(void *script, void *context);
extern float Script__PopFloat(void *script, void *context);

void Light__SetQuadraticAttenuation(void *script, void *context) {
    LightQuadratic *light = Script__PopInt(script, context);
    light->quadraticAttenuation = Script__PopFloat(script, context);
}
