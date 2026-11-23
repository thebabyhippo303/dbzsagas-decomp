/* Simple__SetRotVel @ 0x802AE82C (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
extern float Script__PopFloat(void *script, void *context);
extern void *Script__PopActor(void *script, void *context, int flags);
extern void Simple__SetRotVelImpl(void *actor, float *vel);

void Simple__SetRotVel(void *script, void *context) {
    float vel[3];
    float *slot;
    float z;
    float y;
    float x;
    void *actor;

    z = Script__PopFloat(script, context);
    slot = vel;
    slot[2] = z;
    y = Script__PopFloat(script, context);
    slot[1] = y;
    x = Script__PopFloat(script, context);
    vel[0] = x;
    actor = Script__PopActor(script, context, 0);
    Simple__SetRotVelImpl(actor, slot);
}
