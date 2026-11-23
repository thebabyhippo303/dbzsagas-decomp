/* Voice3D__SetMaxDistanceOffset @ 0x8019C054 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Voice3D__ApplySpatialization(void *);
extern f32 lbl_8033FB98 __attribute__((section(".data")));
extern f32 lbl_8033FB9C __attribute__((section(".data")));

void Voice3D__SetMaxDistanceOffset(u8 *arg0, f32 farg0) {
    f32 lo = lbl_8033FB98;
    f32 hi = lbl_8033FB9C;
    f32 v = lo;

    if (!(farg0 < lo)) {
        if (!(farg0 <= hi)) {
            v = hi;
        } else {
            v = farg0;
        }
    }
    M2C_FIELD(arg0, f32 *, 0x94) = v;
    Voice3D__ApplySpatialization(arg0);
}
