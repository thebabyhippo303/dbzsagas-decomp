/* AmbientMixer__ComputeNextTriggerTime @ 0x80199B2C (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 AmbientTrack__GetMinDelay(void *);
s32 AmbientTrack__GetMaxDelay(void *);
s32 Random__IntRange(s32, s32);
s32 AmbientMixer__ComputeNextTriggerTime(s32 arg0, s32 arg1) {
    s32 temp_r29;
    void *temp_r30;

    temp_r30 = arg0 + 0x38;
    temp_r29 = AmbientTrack__GetMinDelay(temp_r30);
    return arg1 + Random__IntRange(temp_r29, AmbientTrack__GetMaxDelay(temp_r30));
}
