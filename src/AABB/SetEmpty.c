/* AABB__SetEmpty @ 0x80200608 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

/* Byte-matched: AABB__SetEmpty @ 0x80200608 (0x50). ProDG -O2. */
typedef struct Vec3 { float x, y, z; } Vec3;
typedef struct AABB { Vec3 mn, mx; } AABB;
extern float lbl_80345B90 __attribute__((section(".data")));

void AABB__SetEmpty(AABB *box) {
    float big = lbl_80345B90;
    Vec3 hi;
    box->mn.x = big;
    box->mn.y = big;
    box->mn.z = big;
    hi.x = -big;
    hi.y = -big;
    hi.z = -big;
    box->mx = hi;
}
