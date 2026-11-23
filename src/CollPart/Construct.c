/* CollPart__Construct @ 0x80280E80 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

extern char lbl_803485F8[] __attribute__((section(".data")));
extern char lbl_80350390[] __attribute__((section(".data")));
extern char lbl_80350410[] __attribute__((section(".data")));
void CollPart__ConstructBase(void *);
void *CollPart__Construct(void *self) {
    M2C_FIELD(self, s32 *, 0) = 0;
    M2C_FIELD(self, s32 *, 4) = 0;
    M2C_FIELD(self, char **, 8) = lbl_803485F8;
    CollPart__ConstructBase((char *)self + 12);
    M2C_FIELD(self, char **, 12) = lbl_80350390;
    M2C_FIELD(self, char **, 8) = lbl_80350410;
    M2C_FIELD(self, s32 *, 44) = 0;
    return self;
}
