/* Pickup__SetTimer @ 0x800F2A24 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef float f32;

extern f32 lbl_80324190 __attribute__((section(".data")));
extern f32 lbl_80324194 __attribute__((section(".data")));
extern f32 lbl_80324198 __attribute__((section(".data")));
extern char lbl_803DD634[8] __attribute__((section(".sbss")));
extern f32 Rand__RangeFloat(f32, f32, void *);

void Pickup__SetTimer(char *self, f32 value) {
    f32 old = *(f32 *)(self + 0x64C);
    f32 low, high;
    void *seed;

    if (old != lbl_80324190) {
        if (value > old) return;
    }

    low = lbl_80324194;
    seed = lbl_803DD634;
    high = lbl_80324198;
    *(f32 *)(self + 0x64C) = value;
    *(f32 *)(self + 0x650) =
        *(f32 *)(self + 0x64C) * Rand__RangeFloat(low, high, seed);
}