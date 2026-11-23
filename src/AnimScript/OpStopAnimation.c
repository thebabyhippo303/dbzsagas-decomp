/* AnimScript__OpStopAnimation @ 0x80235664 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


void Instance__StopAnimationChannel(void *arg0, s32 arg1);

s32 AnimScript__OpStopAnimation(void *arg0, s32 arg1, s32 *arg2) {
    char *base = (char *)arg0 + 240;
    s32 off = arg1 << 2;
    void *temp_r9;

    temp_r9 = *(void **)(base + off);
    if (temp_r9 != NULL && M2C_FIELD(M2C_FIELD(temp_r9, void **, 28), s32 *, 56) != 0) {
        *arg2 = *arg2 + 4;
    }
    Instance__StopAnimationChannel(arg0, 0);
    return 0;
}
