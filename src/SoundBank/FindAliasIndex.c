/* SoundBank__FindAliasIndex @ 0x80192E30 (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

int String__CompareIgnoreCase(const char *, const char *);

s32 SoundBank__FindAliasIndex(void *arg0, char *name) {
    s32 lo = 0;
    s32 hi = M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0xC) - 1;
    s32 mid;
    s32 cmp;

    while (lo <= hi) {
        mid = (lo + hi) / 2;
        cmp = String__CompareIgnoreCase(name, *(char **) ((mid * 0x14) + M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x18)));
        if (cmp < 0) {
            hi = mid - 1;
        } else if (cmp > 0) {
            lo = mid + 1;
        } else {
            return mid;
        }
    }
    return -1;
}
