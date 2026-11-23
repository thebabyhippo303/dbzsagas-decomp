/* MenuFrame__SetCustomAnimation @ 0x80266D20 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef void (*Fn)(void *, void *);
typedef struct { char pad[8]; short off; char pad2[2]; Fn fn; } Sub;
void SphereAnimSet__ClearAll(void *);
void MenuFrame__SetCustomAnimation(void *this_, int flag, void *ptr) {
    if (flag != 0) {
        Sub *s = *(Sub **)ptr;
        s->fn((char *)ptr + s->off, (char *)this_ + 420);
    } else {
        SphereAnimSet__ClearAll(*(void **)((char *)this_ + 776));
    }
}
