/* SurfaceMap__GetPointVelocity @ 0x801FBC40 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct {
u32 f0;
u32 f4;
u32 f8;
} Vec3w;
extern f32 lbl_80344EE0 __attribute__((section(".data")));
Vec3w *SurfaceMap__GetPointVelocity(Vec3w *dst) {
f32 c = lbl_80344EE0;
f32 s[3];
f32 *fp;
Vec3w *d = dst;
s[0] = c;
fp = s;
fp[1] = c;
fp[2] = c;
d->f0 = *(u32 *)&s[0];
d->f4 = ((u32 *)fp)[1];
d->f8 = ((u32 *)fp)[2];
return dst;
}
