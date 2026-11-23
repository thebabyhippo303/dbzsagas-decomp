/* OscillatorPool__Free @ 0x802172D4 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef short s16;

void SList__Remove(void *, void *);
void SList__PushFront(void *, void *);
extern char lbl_803ADC98[];
extern char lbl_803ADC8C[];

void OscillatorPool__Free(void *self) {
    void *s = self;

    SList__Remove(lbl_803ADC98, s);
    SList__PushFront(lbl_803ADC8C, s);
    *(s16 *)((char *)s + 2) = 0;
}
