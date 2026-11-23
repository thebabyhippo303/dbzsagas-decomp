/* Actor__OwnedParticleRotate @ 0x802ADD98 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Actor__OwnedParticleRotate @ 0x802ADD98 */
extern void *Script__PopInt(void *script, void *context);
extern float Script__PopFloat(void *script, void *context);
extern void fn_80221044(void *owner, float *values);

void Actor__OwnedParticleRotate(void *script, void *context) {
    float values[3];
    float *p;
    void *owner;

    p = values;
    owner = Script__PopInt(script, context);
    p[0] = Script__PopFloat(script, context);
    p[1] = Script__PopFloat(script, context);
    p[2] = Script__PopFloat(script, context);
    fn_80221044(owner, p);
}
