/* CActor__GetVelocity @ 0x8002E768 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: CActor__GetVelocity @ 0x8002E768 (0x68). ProDG -O2. */
typedef struct {
    char pad_000[0x68];
    float velocity[3];
} Actor;

extern Actor *Script__PopInt(void *script, void *context);
extern void Script__PushFloat(void *script, void *context, float value);

void CActor__GetVelocity(void *script, void *context) {
    Actor *actor = Script__PopInt(script, context);
    float *velocity = actor->velocity;

    Script__PushFloat(script, context, velocity[2]);
    Script__PushFloat(script, context, velocity[1]);
    Script__PushFloat(script, context, velocity[0]);
}
