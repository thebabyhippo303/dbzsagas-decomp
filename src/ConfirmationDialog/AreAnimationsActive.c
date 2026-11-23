/* ConfirmationDialog__AreAnimationsActive @ 0x80018E0C (size: 0x138, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;

extern int fn_80260A5C(void *obj);

s32 ConfirmationDialog__AreAnimationsActive(void *self) {
    s32 acc = 0;

    acc = (acc != 0) | (fn_80260A5C(*(void **)((char *)self + 3104) + 148) != 0);
    acc = (acc != 0) | (fn_80260A5C(*(void **)((char *)self + 3552) + 148) != 0);
    acc = (acc != 0) | (fn_80260A5C(*(void **)((char *)self + 4000) + 148) != 0);
    acc = (acc != 0) | (fn_80260A5C(*(void **)((char *)self + 4448) + 148) != 0);
    acc = (acc != 0) | (fn_80260A5C(*(void **)((char *)self + 2688) + 580) != 0);
    acc = (acc != 0) | (fn_80260A5C(*(void **)((char *)self + 2272) + 580) != 0);
    return acc;
}
