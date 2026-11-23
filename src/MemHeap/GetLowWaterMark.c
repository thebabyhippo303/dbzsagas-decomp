/* MemHeap__GetLowWaterMark @ 0x80182F80 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


void MemHeap__GetLowWaterMark(void *arg0, s32 *arg1, s32 *arg2) {
    s32 temp_r9;

    temp_r9 = M2C_FIELD(arg0, s32 *, 0x24);
    if (temp_r9 != 0x7FFFFFFF) {
        if (arg1 != NULL) {
            *arg1 = temp_r9;
        }
        if (arg2 != NULL) {
            *arg2 = M2C_FIELD(arg0, s32 *, 0x14) - M2C_FIELD(arg0, s32 *, 0x24);
        }
    } else {
        if (arg1 != NULL) {
            *arg1 = 0;
        }
        if (arg2 != NULL) {
            *arg2 = 0;
        }
    }
}
