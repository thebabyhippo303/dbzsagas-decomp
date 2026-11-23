/* SoundEffectParams__ComputeOcclusion @ 0x8019F740 (size: 0x110, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

extern f32 lbl_8033FC60 __attribute__((section(".data")));
extern f32 lbl_8033FC64 __attribute__((section(".data")));
s32 SoundEffectParams__ComputeOcclusion(void *arg0, s32 arg1, s32 arg2, f32 *out1, f32 *out2) {
char buf[16];
u8 flag;
void *v;
s32 r29;
f32 thr;
s32 idx;
f32 one;
one = lbl_8033FC60;
*out1 = one;
*out2 = one;
v = M2C_FIELD(arg0, void **, 0x800);
if (M2C_FIELD(v, s32 (**)(void *, s32, s32), 0x14)(arg0 + M2C_FIELD(v, s16 *, 0x10), arg1, arg2) == 0) {
return 1;
}
r29 = 1;
thr = lbl_8033FC64;
while (r29 != 0) {
if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x800), s32 (**)(void *, void *, u8 *), 0x1C)(arg0 + M2C_FIELD(M2C_FIELD(arg0, void **, 0x800), s16 *, 0x18), buf, &flag) == 0) {
break;
}
idx = flag * 8;
*out1 *= *(f32 *)((char *)arg0 + idx);
*out2 *= *(f32 *)((char *)arg0 + idx + 4);
r29 = (__builtin_fabsf(*out1) >= thr);
}
v = M2C_FIELD(arg0, void **, 0x800);
M2C_FIELD(v, void (**)(void *), 0x24)(arg0 + M2C_FIELD(v, s16 *, 0x20));
return r29;
}