/* SurfaceType__ParseKinetic @ 0x801F8FF0 (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

/* Byte-matched: SurfaceType__ParseKinetic @ 0x801F8FF0 (0x6C). ProDG -O2. */
extern char lbl_80344650[];
extern char lbl_80344658[];
extern int String__CompareIgnoreCase(const char *left, const char *right);

int SurfaceType__ParseKinetic(void *self, const char *value) {
    if (value == 0)
        return 2;
    if (String__CompareIgnoreCase(value, lbl_80344650) == 0)
        return 0;
    if (String__CompareIgnoreCase(value, lbl_80344658) == 0)
        return 1;
    return 2;
}
