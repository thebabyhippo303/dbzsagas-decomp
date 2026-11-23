/* Voice__Reclaim @ 0x8019CB8C (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void SoundChannel__Release(void *, void *);
s32 SoundChannel__Stop(void *, s32);
void Voice__ScheduleRetrigger(void *, s32);
void Voice__Reclaim(s32 arg0, s32 arg1) {
    void *temp_r3;
    void *temp_r4;

    temp_r3 = M2C_FIELD(arg0, void **, 8);
    if (temp_r3 != NULL) {
        SoundChannel__Stop(temp_r3, 1);
        temp_r4 = M2C_FIELD(arg0, void **, 8);
        SoundChannel__Release(M2C_FIELD(temp_r4, void **, 0x14), temp_r4);
        M2C_FIELD(arg0, void **, 8) = NULL;
    }
    M2C_FIELD(arg0, u32 *, 0x20) = 2;
    Voice__ScheduleRetrigger(arg0, arg1);
}
