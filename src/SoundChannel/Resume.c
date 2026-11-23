/* SoundChannel__Resume @ 0x80196CA0 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


M2C_UNK fn_802D4EC4(void *, M2C_UNK);               /* extern */

s32 SoundChannel__Resume(void *arg0) {
    void *temp_r10;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x10) != 0) {
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
        temp_r10 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), void **, 8);
        if ((temp_r10 != NULL) && ((u32) M2C_FIELD(temp_r10, u32 *, 0x1B2) >= (u32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), u32 *, 0xC))) {
            fn_802D4EC4(temp_r10, 1);
        }
    }
    return 1;
}
