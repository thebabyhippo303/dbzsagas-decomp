/* Attacher__ResetSystem @ 0x80214B08 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

extern void Attacher__FreeAll(void);
extern void *lbl_803ACF90 __attribute__((section(".data")));

void Attacher__ResetSystem(void) {
    void *e;
    Attacher__FreeAll();
    e = lbl_803ACF90;
    if (e != 0) {
        do {
            *(int *)e = 0;
            e = *(void **)((char *)e + 4);
        } while (e != 0);
    }
}
