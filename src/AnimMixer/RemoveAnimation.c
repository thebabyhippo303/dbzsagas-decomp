/* AnimMixer__RemoveAnimation @ 0x8023FA4C (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0

s32 AnimMixerSlot__IsFree(void *);
void AnimPose__ResetChannels(void *, u32, u16);
void AnimMixer__RemoveAnimation(void *arg0, void **arg1, u16 arg2) {
    s32 temp_r3_2;
    void *temp_r3;
    void *temp_r9;

    temp_r3 = *arg1;
    if (temp_r3 != NULL) {
        temp_r3_2 = AnimMixerSlot__IsFree(temp_r3);
        if (temp_r3_2 == 0) {
            temp_r9 = M2C_FIELD(*arg1, void **, 0x14);
            if (temp_r9 != NULL) {
                M2C_FIELD(temp_r9, s32 *, 0xC) = temp_r3_2;
            }
            M2C_FIELD(*arg1, s32 *, 8) = temp_r3_2;
            AnimPose__ResetChannels(M2C_FIELD(arg0, void **, 4), M2C_FIELD(*arg1, u32 *, 0x10), arg2);
            *M2C_FIELD(*arg1, s32 **, 0x18) = temp_r3_2;
            if ((void *) *arg1 != NULL) {
                *arg1 = (void *) temp_r3_2;
            }
        }
    }
}
