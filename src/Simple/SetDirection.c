/* Simple__SetDirection @ 0x802C86D0 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef unsigned int u32; typedef int s32; typedef float f32;
extern f32 lbl_803532B4 __attribute__((section(".data")));
typedef struct { f32 x,y,z; } Vec3;
typedef struct { u32 x,y,z; } Word3;
void Simple__SetDirection(void *self, Vec3 *direction, s32 arg2) {
    s32 changed = 0;
    *(Word3 *)((char *)self + 0x310) = *(Word3 *)direction;
    *(s32 *)((char *)self + 0x248) = arg2;
    if (direction->x != lbl_803532B4 || direction->y != lbl_803532B4 || direction->z != lbl_803532B4) changed = 1;
    *(s32 *)((char *)self + 0x244) = changed;
}