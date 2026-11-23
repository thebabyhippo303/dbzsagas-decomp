/* Light__SetIntensityNoise @ 0x8002E040 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Light__SetIntensityNoise @ 0x8002E040 (0x44). ProDG -O2. */
typedef struct {
    char pad[0x64];
    float intensityNoise;
} LightNoise;

extern LightNoise *Script__PopInt(void *script, void *context);
extern float Script__PopFloat(void *script, void *context);

void Light__SetIntensityNoise(void *script, void *context) {
    LightNoise *light = Script__PopInt(script, context);
    light->intensityNoise = Script__PopFloat(script, context);
}
