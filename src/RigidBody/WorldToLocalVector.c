/* RigidBody__WorldToLocalVector @ 0x801A4C84 (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef float f32;
typedef struct { f32 x, y, z; } Vec3;

Vec3 *RigidBody__WorldToLocalVector(Vec3 *out, char *body, Vec3 *v) {
    f32 *m = (f32 *)(body + 0x44);
    f32 x = v->x;
    f32 y = v->y;
    f32 z = v->z;
    f32 rx = (x * m[0] + y * m[1]) + z * m[2];
    f32 ry = (x * m[3] + y * m[4]) + z * m[5];
    f32 rz = (x * m[6] + y * m[7]) + z * m[8];
    out->x = rx;
    out->y = ry;
    out->z = rz;
    return out;
}
