/* Scene__GetBackgroundGradient @ 0x8022CEE4 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct { u32 a,b,c,d; } Vec4Words;
void Scene__GetBackgroundGradient(void *p, Vec4Words *a, Vec4Words *b, u32 *c) {
 Vec4Words *x=(Vec4Words*)((char*)p+0x32c);
 Vec4Words *y=(Vec4Words*)((char*)p+0x33c);
 *a=*x;
 *b=*y;
 *c=*(u32*)((char*)p+0x34c);
}