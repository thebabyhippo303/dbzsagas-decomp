/* SoundDriver__OnAxVoiceDropped @ 0x80196AA0 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


M2C_UNK fn_802D2728(void *);                        /* extern */
M2C_UNK fn_802D6DA4();                              /* extern */

void SoundDriver__OnAxVoiceDropped(void *arg0) {
    void *temp_r29;

    temp_r29 = M2C_FIELD(arg0, void **, 0x14);
    fn_802D6DA4();
    fn_802D2728(arg0);
    M2C_FIELD(temp_r29, s32 *, 8) = 0;
}
