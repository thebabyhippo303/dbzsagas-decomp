/* XZQuery__GetWorldBounds @ 0x8025E46C (size: 0x30, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })
s32 XZQuery__GetWorldBounds(void *arg0, void *arg1) {
 f32 x,z;
 void *p;
 M2C_FIELD(arg1,s32*,0)=0;
 p=arg1+4;
 x=M2C_FIELD(arg0,f32*,0xE4); z=M2C_FIELD(arg0,f32*,0xEC);
 M2C_FIELD(arg1,volatile f32*,4)=x;
 M2C_FIELD(p,volatile f32*,0xC)=z;
 M2C_FIELD(p,volatile f32*,8)=x;
 M2C_FIELD(p,volatile f32*,4)=z;
 return 1;
}