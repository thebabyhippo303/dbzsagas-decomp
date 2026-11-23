/* CCameraStick__IsAtTargetDistance @ 0x800CDAE8 (size: 0xC4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef float f32;
float sqrtf(float);
extern f32 lbl_80321C74 __attribute__((section(".data")));
typedef struct Cam { f32 a[3]; f32 b[3]; char pad[0x40 - 24]; f32 d0; f32 d1; } Cam;
s32 CCameraStick__IsAtTargetDistance(Cam *self) {
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
    return __builtin_fabsf(sqrtf(x + q[1] + q[2]) - (self->d0 - self->d1)) >= lbl_80321C74;
}
