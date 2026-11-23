/* CollPart__ResizeRows @ 0x80280F48 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Mem__DeleteArray(void *);
void *Mem__NewArray(u32);
void CollPart__ResizeRows(void *arg0, s32 arg1) {
    void *old;
    s32 i;
    old = M2C_FIELD(arg0, void **, 0x2C);
    if (old != NULL) {
        Mem__DeleteArray(old);
    }
    M2C_FIELD(arg0, void **, 0x2C) = Mem__NewArray(arg1 * 2);
    for (i = 0; i < arg1; i++) {
        M2C_FIELD(arg0, s16 **, 0x2C)[i] = -1;
    }
}
