/* GridBase__Destroy @ 0x80254DF8 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

extern char lbl_80348630[];
void GridBase__Clear(void *);
void TableReader__Destroy(void *, s32);
void Mem__Delete(void *);

void GridBase__Destroy(void *self, s32 flags) {
    *(void **)((char *)self + 0x10) = lbl_80348630;
    GridBase__Clear(self);
    TableReader__Destroy((char *)self + 8, 2);
    if (flags & 1) {
        Mem__Delete(self);
    }
}
