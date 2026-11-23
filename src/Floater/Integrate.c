/* Floater__Integrate @ 0x802B4E0C (size: 0x108, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Simple__IntegrateMotion(void *, f32);
void Floater__IntegrateMotion(void *, f32);

typedef struct { f32 x, y, z; } V3;

void Floater__Integrate(void *arg0, f32 dt) {
    V3 sp8;
    V3 sp18;
    V3 *m;
    V3 *v;
    f32 vx;
    f32 vy;
    f32 vz;
    f32 tx;
    f32 ty;
    f32 tz;
    if (*(s32 *)((char *)arg0 + 0x258) == 0)
        return;
    Simple__IntegrateMotion(arg0, dt);
    Floater__IntegrateMotion(arg0, dt);
    if (*(s32 *)((char *)arg0 + 0x278) != 0)
        return;
    m = (V3 *)((char *)arg0 + 0x44);
    v = (V3 *)((char *)arg0 + 0x290);
    vy = v->y;
    tx = vy * m[1].x;
    ty = vy * m[1].y;
    tz = vy * m[1].z;
    vx = v->x;
    vz = v->z;
    sp18.z = vx * m[0].z + tz + vz * m[2].z;
    sp18.x = vx * m[0].x + tx + vz * m[2].x;
    sp18.y = vx * m[0].y + ty + vz * m[2].y;
    sp8.x = sp18.x + *(f32 *)((char *)arg0 + 0x38);
    sp8.y = sp18.y + *(f32 *)((char *)arg0 + 0x3C);
    sp8.z = sp18.z + *(f32 *)((char *)arg0 + 0x40);
    *(V3 *)((char *)arg0 + 0x284) = sp8;
}
