/* PathFollower__Decelerate @ 0x802C0040 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0

typedef f32 (*DecelFn)(void *);

void PathFollower__Decelerate(void *self) {
    /* 0x80350000 + 0x27A4 == lbl_803527A4; one local reused for both keeps r9. */
    void *p = (void *)0x80350000;
    short adjustment;
    DecelFn fn;

    *(f32 *)((char *)self + 0x2C) = *(f32 *)((char *)p + 0x27A4);
    p = *(void **)((char *)self + 0xB4);
    adjustment = *(short *)((char *)p + 0x98);
    fn = *(DecelFn *)((char *)p + 0x9C);
    *(f32 *)((char *)self + 0x30) = fn((char *)self + adjustment);
}
