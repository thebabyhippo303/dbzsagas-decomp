/* Skeleton__GetBoneModelOffsetPosition @ 0x8023DF00 (size: 0xD8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0
typedef struct { f32 x, y, z; } Vec3;
void *Skeleton__GetBoneById(void *, s32);
void *Bone__EnsureWorldTransform(void *);
void Skeleton__GetBoneModelOffsetPosition(void *arg0, s32 arg1, void *arg2) {
    void *bone;
    f32 *m;
    void *d;
    Vec3 *v;
    f32 x;
    f32 y;
    f32 z;
    f32 X;
    f32 Y;
    f32 Z;
    f32 res[3];
    s32 *ip;
    s32 ix;
    s32 iz;
    s32 iy;
    volatile s32 *out = (volatile s32 *)arg2;
    bone = Skeleton__GetBoneById(arg0, arg1);
    if (bone != NULL) {
        m = (f32 *)Bone__EnsureWorldTransform(bone);
        ip = (s32 *)res;
        d = *(void **)((char *)bone + 0xD8);
        v = (Vec3 *)((char *)d + 0xA0);
        x = v->x;
        y = v->y;
        z = v->z;
        X = (z * m[8] + (x * m[0] + y * m[4])) + m[12];
        Y = (z * m[9] + (x * m[1] + y * m[5])) + m[13];
        Z = (z * m[10] + (x * m[2] + y * m[6])) + m[14];
        res[0] = X;
        res[1] = Y;
        res[2] = Z;
        ix = ip[0];
        iz = ip[2];
        iy = ip[1];
        out[2] = iz;
        out[0] = ix;
        out[1] = iy;
    }
}
