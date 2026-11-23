/* OccluderSet__Update @ 0x80240EE0 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Occluder__BuildPlanes(void *, int);
void OccluderSet__Update(void *arg0, int arg1) {
    int i = 0;
    int off;
    if (i < *(int *)((char *)arg0 + 4)) {
        off = 0;
        do {
            i++;
            Occluder__BuildPlanes(*(char **)((char *)arg0 + 0) + off, arg1);
            off += 128;
        } while (i < *(int *)((char *)arg0 + 4));
    }
}
