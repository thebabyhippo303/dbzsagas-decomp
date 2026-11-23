/* Actor__SetParticleEmitterScale @ 0x802AE090 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32; typedef unsigned int u32; typedef float f32;
int Emitter__SetScale(u32 handle, f32 scale, s32 mode);
f32 Script__PopFloat(void *, void *);
u32 Script__PopInt(void *, void *);
void Actor__SetParticleEmitterScale(void *arg0, void *arg1) {
    s32 mode = Script__PopInt(arg0, arg1);
    f32 scale = Script__PopFloat(arg0, arg1);
    Emitter__SetScale(Script__PopInt(arg0, arg1), scale, mode);
}
