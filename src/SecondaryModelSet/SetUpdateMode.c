/* SecondaryModelSet__SetUpdateMode @ 0x80210D54 (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void SecondaryModelSet__SetUpdateMode(void *arg0, int arg1) {
    int off;
    int idx;
    void *entry;

    idx = 0;
    if (idx >= *(int *)((char *)arg0 + 4)) {
        return;
    }
    off = 0;
    do {
        idx += 1;
        entry = *(void **)((char *)(off + *(int *)((char *)arg0 + 0xC)) + 0x78);
        off += 0xB0;
        *(int *)((char *)entry + 0x40) = arg1;
    } while (idx < *(int *)((char *)arg0 + 4));
}
