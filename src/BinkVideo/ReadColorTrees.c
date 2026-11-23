/* BinkVideo__ReadColorTrees @ 0x802F89A8 (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void BinkVideo__ReadTree(void *, void *, void *, void *);
void BinkVideo__ReadColorTrees(void *arg0, void *arg1, void *arg2) {
    char *p0 = (char *)arg2;
    char *p1 = (char *)arg2 + 0x100;
    char *p2 = (char *)arg2 + 0x140;
    do {
        BinkVideo__ReadTree(arg1, p2, p1, p0);
        p0 += 0x10;
        p1 += 4;
        p2 += 4;
    } while ((unsigned int)p0 <= (unsigned int)((char *)arg2 + 0xF0));
    BinkVideo__ReadTree(arg1, (char *)arg0 + 0x24, (char *)arg0 + 0x20, (char *)arg0 + 0x10);
    *(int *)((char *)arg2 + 0x180) = 0;
}
