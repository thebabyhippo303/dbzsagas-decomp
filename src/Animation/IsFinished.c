/* Animation__IsFinished @ 0x8023EB04 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })
s32 Animation__GetLength(s32);
s32 Animation__IsFinished(void *arg0) {
    void *a = arg0;
    u32 len;
    if (((a != NULL) && (M2C_FIELD(a, s32 *, 0xC) == 0)) || (((M2C_FIELD(a, s32 *, 8) & 0x802) == 0) && ((len = Animation__GetLength(M2C_FIELD(a, s32 *, 0xC))), (u16)M2C_FIELD(a, u16 *, 0) >= len))) {
        return 1;
    }
    return 0;
}
