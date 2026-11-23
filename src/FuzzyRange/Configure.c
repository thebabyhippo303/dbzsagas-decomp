/* FuzzyRange__Configure @ 0x80072BAC (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })
typedef float f32;
typedef struct { f32 low, midA, midB, high; } FuzzyRange;
extern f32 lbl_8031EF48 __attribute__((section(".data")));
extern f32 lbl_8031EF4C __attribute__((section(".data")));
extern f32 lbl_8031EF50 __attribute__((section(".data")));
void FuzzyRange__Configure(FuzzyRange *self, f32 low, f32 high, f32 spread) {
    f64 mid;
    if (!(low >= lbl_8031EF48)) {
        self->low = low;
        mid = high - spread;
        self->midA = mid; self->midB = mid; self->high = high;
        return;
    }
    if (!(high <= lbl_8031EF4C)) {
        mid = low + spread;
        self->high = high; self->low = low; self->midA = mid; self->midB = mid;
        return;
    }
    mid = (low + high) * lbl_8031EF50;
    self->high = high; self->low = low; self->midA = mid; self->midB = mid;
}