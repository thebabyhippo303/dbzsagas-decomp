/* PathManager__FindPath @ 0x801FD128 (size: 0x98, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

int String__CompareIgnoreCase(const char *, const char *);
void *PathManager__FindPath(s32 arg0, s8 *arg1, s32 arg2) {
    s32 i;
    void **slot;
    void *group;
    void *node;

    slot = (void **)(arg0 + 8);
    for (i = 0; i < 32; i++) {
        group = *slot++;
        if (group != NULL && (arg2 & M2C_FIELD(group, s32 *, 4))) {
            for (node = M2C_FIELD(group, void **, 0xC); node != NULL; node = M2C_FIELD(node, void **, 4)) {
                if (String__CompareIgnoreCase(arg1, M2C_FIELD(M2C_FIELD(node, void **, 0), s8 **, 4)) == 0) {
                    return M2C_FIELD(node, void **, 0);
                }
            }
        }
    }
    return NULL;
}
