/* AnimScript__Op31Pop @ 0x802364C0 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


s32 AnimScript__Op31Pop(s32 arg0, s32 arg1, s32 *arg2) {
    s32 off = arg1 * 4;
    void **table = (void **)((char *)arg0 + 240);
    void *temp_r11 = *(void **)((char *)table + off);
    if ((temp_r11 != NULL) && ((s32) M2C_FIELD(M2C_FIELD(temp_r11, void **, 0x1C), s32 *, 0x38) != 0)) {
        *arg2 += 4;
    }
    M2C_FIELD(temp_r11, u8 *, 8) = (u8) (M2C_FIELD(temp_r11, u8 *, 8) - 1);
    return 0;
}
