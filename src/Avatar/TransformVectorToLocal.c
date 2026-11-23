/* Avatar__TransformVectorToLocal @ 0x80091FF0 (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef float f32;
typedef struct { f32 x, y, z; } Vec3;

Vec3 *Avatar__TransformVectorToLocal(Vec3 *out, char *o, Vec3 *in) {
    f32 *m = (f32 *)(o + 0x44);
    f32 x = in->x;
    f32 y = in->y;
    f32 z = in->z;
    f32 rx = (x * m[0] + y * m[3]) + z * m[6];
    f32 ry = (x * m[1] + y * m[4]) + z * m[7];
    f32 rz = (x * m[2] + y * m[5]) + z * m[8];
    out->x = rx;
    out->y = ry;
    out->z = rz;
    return out;
}
