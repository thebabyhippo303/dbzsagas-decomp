/* Keyboard__Destroy @ 0x801D8FE0 (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

/* Byte-matched: Keyboard__Destroy @ 0x801D8FE0 (0x34). ProDG -O2. */
extern char lbl_803433D8[];
extern void Mem__Delete(void *object);

void Keyboard__Destroy(void *self, int flags) {
    *(void **)((char *)self + 4) = lbl_803433D8;
    if (flags & 1)
        Mem__Delete(self);
}
