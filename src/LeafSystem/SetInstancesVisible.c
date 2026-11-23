/* LeafSystem__SetInstancesVisible @ 0x8028825C (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


void LeafSystem__SetInstancesVisible(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    void *p;
    s32 i;
    u16 v;

    p = arg1;
    for (i = 0; i < arg2; i++) {
        if (arg3 != 0) {
            v = M2C_FIELD(p, u16 *, 2) & ~1;
        } else {
            v = M2C_FIELD(p, u16 *, 2) | 1;
        }
        M2C_FIELD(p, u16 *, 2) = v;
        p = (char *)p + 448;
    }
}
