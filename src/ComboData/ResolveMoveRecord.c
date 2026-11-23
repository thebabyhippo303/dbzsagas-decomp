/* ComboData__ResolveMoveRecord @ 0x80033764 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef int M2C_UNK;
void *ComboData__GetCurrentValuePointer(void *);
extern M2C_UNK lbl_803914A4 __attribute__((section(".data")));
extern void *lbl_803DC71C;
void *ComboData__ResolveMoveRecord(s32 use_index, s32 unused, s32 index) {
    void *result;
    if (use_index == 0) goto current;
    result = (void *)((char *)&lbl_803914A4 + index * 4);
    goto done;
current:
    result = ComboData__GetCurrentValuePointer(lbl_803DC71C);
done:
    return result;
}