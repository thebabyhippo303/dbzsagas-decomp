/* AnimPose__ClearBoneChannels @ 0x8023E4E0 (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void AnimPose__ClearBoneChannels(void *arg0) {
    u32 n = (u32)M2C_FIELD(arg0, u32 *, 0);
    u32 i = 0;
    s32 *base = M2C_FIELD(arg0, s32 *, 8);
    s32 *p;
    if (i >= n) {
        return;
    }
    p = base + 9;
    do {
        *p = -1;
        i += 1;
        p += 11;
    } while (i < (u32)M2C_FIELD(arg0, u32 *, 0));
}
