/* Light__SetPointLightPos @ 0x8002DC64 (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Light__SetPointLightPos @ 0x8002DC64 (0x84). ProDG -O2. */
typedef struct {
    float x;
    float y;
    float z;
} LightPos;

typedef struct {
    char pad[0x10];
    LightPos pos;
} PointLight;

extern PointLight *Script__PopInt(void *self, void *context);
extern float Script__PopFloat(void *self, void *context);

void Light__SetPointLightPos(void *self, void *context) {
    PointLight *light;
    float vec[3];
    float *p = vec;

    light = Script__PopInt(self, context);
    p[0] = Script__PopFloat(self, context);
    p[1] = Script__PopFloat(self, context);
    p[2] = Script__PopFloat(self, context);
    light->pos = *(LightPos *)vec;
}
