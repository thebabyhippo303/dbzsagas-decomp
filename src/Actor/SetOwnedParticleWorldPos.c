/* Actor__SetOwnedParticleWorldPos @ 0x802ADE0C (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef unsigned int u32;
typedef float f32;

extern void *Script__PopInt(void *, void *);
extern f32 Script__PopFloat(void *, void *);
extern void Particle__SetOwnedWorldPosition(u32, void *);

void Actor__SetOwnedParticleWorldPos(void *arg0, void *arg1) {
    f32 x;
    f32 y;
    f32 z;
    f32 pos[3];
    f32 *p;
    u32 id;

    id = (u32)Script__PopInt(arg0, arg1);
    x = Script__PopFloat(arg0, arg1);
    y = Script__PopFloat(arg0, arg1);
    z = Script__PopFloat(arg0, arg1);
    p = pos;
    p[0] = x;
    p[1] = y;
    p[2] = z;
    Particle__SetOwnedWorldPosition(id, p);
}
