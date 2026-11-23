/* CCameraStatic__Update @ 0x800CD264 (size: 0xE0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
} Vec3;
void Camera__Update(void *);
void Camera__ComputeTrackedActorCenter(void *, void *);
void CCameraStatic__Update(void *self) {
    Vec3 tmpA;
    Vec3 tmpB;
    Camera__Update(self);
    if (M2C_FIELD(self, s32 *, 144) != 0) {
        Camera__ComputeTrackedActorCenter(&tmpB, self);
        tmpA = tmpB;
    } else {
        tmpA = *(Vec3 *)((char *)self + 132);
    }
    tmpB = *(Vec3 *)((char *)self + 120);
    *(Vec3 *)((char *)self + 12) = tmpA;
    *(Vec3 *)self = tmpB;
}
