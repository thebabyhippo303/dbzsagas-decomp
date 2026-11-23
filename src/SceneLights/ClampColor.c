/* SceneLights__ClampColor @ 0x8021AC70 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
extern f32 lbl_80346614 __attribute__((section(".data")));
void SceneLights__ClampColor(f32 *v) {
 f32 limit=lbl_80346614;
 if (!(v[0]<=limit)) v[0]=limit;
 if (!(v[1]<=limit)) v[1]=limit;
 if (!(v[2]<=limit)) v[2]=limit;
}