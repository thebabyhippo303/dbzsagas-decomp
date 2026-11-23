/* CCameraFighter__IsAtTargetDistance @ 0x800BB550 (size: 0xBC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32; typedef float f32;
float sqrtf(float);
extern f32 lbl_803215FC __attribute__((section(".data")));
typedef struct Cam { f32 a[3]; f32 b[3]; char pad[0x40 - 24]; f32 dist; } Cam;
s32 CCameraFighter__IsAtTargetDistance(Cam *self) {
    f32 d[3];
    f32 sq[3];
    f32 *p = d;
    f32 *q;
    f32 x;
    f32 *b = self->b;
    x = b[0] - self->a[0];
    d[0] = x;
    d[1] = b[1] - self->a[1];
    d[2] = b[2] - self->a[2];
    q = sq;
    x = x * x;
    {
        f32 y = p[1]; f32 z = p[2];
        sq[0] = x; sq[2] = z * z; sq[1] = y * y;
    }
    return __builtin_fabsf(sqrtf(x + q[1] + q[2]) - self->dist) >= lbl_803215FC;
}
