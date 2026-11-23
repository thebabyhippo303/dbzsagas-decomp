/* OccluderSet__IsOccluded @ 0x80240F44 (size: 0x78, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

int Occluder__OccludesInstance(void *, int);
int OccluderSet__IsOccluded(void *arg0, int arg1) {
    int i;
    int off;
    i = 0;
    if (i < *(int *)((char *)arg0 + 4)) {
        off = 0;
        do {
            if (Occluder__OccludesInstance(*(char **)((char *)arg0 + 0) + off, arg1))
                return 1;
            i++;
            off += 128;
        } while (i < *(int *)((char *)arg0 + 4));
    }
    return 0;
}
