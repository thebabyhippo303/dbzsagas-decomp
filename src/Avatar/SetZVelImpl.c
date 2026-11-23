/* Avatar__SetZVelImpl @ 0x800B1268 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32;
#define BASE(expr) (*(void *volatile *)(expr))
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
float Script__PopFloat(void *, void *);
float cosf(float);
float sinf(float);

void Script__SetZVelImpl(void *self) {
    f32 magnitude;
    f32 t;
    magnitude = Script__PopFloat(M2C_FIELD(BASE(self), void **, 0x84), (void *)0);
    t = cosf(M2C_FIELD(BASE(self), f32 *, 0x75C));
    M2C_FIELD(BASE(self), f32 *, 0x70) = magnitude * t;
    t = sinf(M2C_FIELD(BASE(self), f32 *, 0x75C));
    magnitude = magnitude * t;
    M2C_FIELD(BASE(self), f32 *, 0x68) = magnitude;
}
