/* Water__FindSurfaceByName @ 0x80276998 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

int String__CompareIgnoreCase(const char *, const char *);
void *Water__FindSurfaceByName(void *arg0, char *arg1) {
    void *node = *(void **)((char *)arg0 + 4);
    while (node != 0) {
        if (String__CompareIgnoreCase(arg1, (char *)(*(int *)((char *)node + 0xCC) + 0x20)) == 0) {
            return node;
        }
        node = *(void **)((char *)node + 0x3B4);
    }
    return 0;
}
