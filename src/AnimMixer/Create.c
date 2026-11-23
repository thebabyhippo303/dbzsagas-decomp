/* AnimMixer__Create @ 0x8023F588 (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void * AnimPose__Create(void *);
void * MemHeap__Alloc(unsigned int, unsigned int);
void * memset(void *, int, u32);
void *AnimMixer__Create(s32 arg0, void *arg1) {
    u32 temp_r28;
    void *temp_r30;
    void *temp_r3;

    temp_r28 = arg0 * 0x1C;
    temp_r30 = MemHeap__Alloc(0x10U, 8U);
    temp_r3 = MemHeap__Alloc(temp_r28, 8U);
    memset(temp_r3, 0, temp_r28);
    M2C_FIELD(temp_r30, void **, 0xC) = temp_r3;
    M2C_FIELD(temp_r30, s32 *, 0) = arg0;
    M2C_FIELD(temp_r30, s32 *, 8) = (s32) M2C_FIELD(arg1, u16 *, 2);
    M2C_FIELD(temp_r30, void **, 4) = AnimPose__Create(arg1);
    return temp_r30;
}
