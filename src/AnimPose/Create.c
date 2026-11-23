/* AnimPose__Create @ 0x8023E284 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

extern void *MemHeap__Alloc(unsigned int size, unsigned int align);
extern void AnimPose__ResetAll(void *pose);

void *AnimPose__Create(void *arg0) {
    void *pose = MemHeap__Alloc(12, 8);
    *(void **)((char *)pose + 8) = MemHeap__Alloc(*(unsigned short *)((char *)arg0 + 2) * 44, 8);
    *(void **)((char *)pose + 4) = arg0;
    *(int *)pose = *(unsigned short *)((char *)arg0 + 2);
    AnimPose__ResetAll(pose);
    return pose;
}
