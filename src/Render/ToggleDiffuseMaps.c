/* Render__ToggleDiffuseMaps @ 0x802298F0 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

extern char lbl_803AD9E4[];
void fn_802437F8(s32);

void Render__ToggleDiffuseMaps(void) {
    s32 v = 1;
    char *base = lbl_803AD9E4;

    if (*(s32 *)(base + 0x20) == 1) {
        v = 0;
    }
    *(s32 *)(base + 0x20) = v;
    fn_802437F8(0);
}
