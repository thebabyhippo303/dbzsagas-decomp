/* SoundBank__Destroy @ 0x8019277C (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Mem__Delete(void *);
void SoundBank__Release(void *);
extern char lbl_80340780 __attribute__((section(".data")));

void SoundBank__Destroy(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0xC) = &lbl_80340780;
    SoundBank__Release(arg0);
    if (arg1 & 1) {
        Mem__Delete(arg0);
    }
}
