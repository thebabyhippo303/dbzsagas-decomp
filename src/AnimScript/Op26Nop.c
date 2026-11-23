/* AnimScript__Op26Nop @ 0x80236294 (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


s32 AnimScript__Op26Nop(s32 arg0, s32 arg1, s32 *arg2) {
    void *temp_r9;
    void **base;
    s32 idx4;

    idx4 = arg1 * 4;
    base = (void **)(arg0 + 0xF0);
    temp_r9 = *(void **)((char *)base + idx4);
    if ((temp_r9 != NULL) && ((s32) M2C_FIELD(M2C_FIELD(temp_r9, void **, 0x1C), s32 *, 0x38) != 0)) {
        *arg2 += 4;
    }
    return 0;
}
