/* SoundChannel__Pause @ 0x80196C48 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


M2C_UNK fn_802D4EC4(void *, M2C_UNK);               /* extern */

s32 SoundChannel__Pause(void *arg0) {
    void *temp_r11;
    void *temp_r9;

    temp_r11 = M2C_FIELD(arg0, void **, 0x1C);
    temp_r9 = M2C_FIELD(temp_r11, void **, 8);
    if (temp_r9 == NULL) {
        M2C_FIELD(arg0, void **, 0x10) = temp_r9;
    } else if ((s32) M2C_FIELD(temp_r9, u16 *, 0x146) != 0) {
        M2C_FIELD(arg0, void **, 0x10) = (void *)1;
        fn_802D4EC4(M2C_FIELD(temp_r11, void **, 8), 0);
    }
    return 1;
}
