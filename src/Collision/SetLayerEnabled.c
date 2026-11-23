/* Collision__SetLayerEnabled @ 0x801B2678 (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


s32 Collision__SetLayerEnabled(void *arg0, u32 arg1, s32 arg2) {
    u32 mask;
    void (*fn)(u32, s32, s32);
    if (arg1 > 0x1FU) {
        return 0;
    }
    mask = 1 << arg1;
    if (arg2 != 0) {
        M2C_FIELD(arg0, u32 *, 0x128C) |= mask;
    } else {
        M2C_FIELD(arg0, u32 *, 0x128C) &= ~mask;
    }
    fn = M2C_FIELD(arg0, void (**)(u32, s32, s32), 0x1290);
    if (fn != NULL) {
        fn(arg1, arg2, M2C_FIELD(arg0, s32 *, 0x1294));
    }
    return 1;
}
