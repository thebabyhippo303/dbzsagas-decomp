/* PartitionVolume__SetActive @ 0x8021383C (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

extern void lbl_803B1E84;
extern void fn_80252BD4(void *, void *);

void PartitionVolume__SetActive(void *arg0, int arg1) {
    void *child;
    if (arg1 == ((int)((*(unsigned int *)((char *)arg0 + 0x84) >> 1) & 1))) {
        return;
    }
    child = *(void **)((char *)arg0 + 0x88);
    if (arg1 != 0) {
        *(unsigned int *)((char *)child + 0x14) &= 0xBFFFFFFF;
    } else {
        *(unsigned int *)((char *)child + 0x14) |= 0x40000000;
    }
    if (arg1 != 0) {
        *(unsigned int *)((char *)arg0 + 0x84) |= 2u;
        if (*(int *)((char *)arg0 + 0x8C) != -1) {
            fn_80252BD4(&lbl_803B1E84, arg0);
        }
    } else {
        *(unsigned int *)((char *)arg0 + 0x84) &= ~2u;
    }
}
