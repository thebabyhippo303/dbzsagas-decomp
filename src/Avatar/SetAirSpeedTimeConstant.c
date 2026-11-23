/* Avatar__SetAirSpeedTimeConstant @ 0x8003B5DC (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__SetAirSpeedTimeConstant @ 0x8003B5DC (0x4C). ProDG -O2. */
typedef struct {
    char pad[0x7FC];
    void *controller;
} Avatar;

extern Avatar *Script__PopInt(void *script, void *context);
extern float Script__PopFloat(void *script, void *context);
extern void Avatar__SetAirSpeedTimeConstantImpl(void *controller, float value);

void Avatar__SetAirSpeedTimeConstant(void *script, void *context) {
    Avatar *avatar = Script__PopInt(script, context);
    float value = Script__PopFloat(script, context);
    Avatar__SetAirSpeedTimeConstantImpl((char *)avatar->controller + 0x68, value);
}
