/* SplinePath__GetTangentAtDistance @ 0x801FDAE0 (size: 0xA4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Profiler__BeginSection(s32);
f32 Bike__WarpToStart(void *, f32);
s32 SplinePath__FindSegmentIndex(s32, f32);
M2C_UNK Profiler__EndSection(s32);
typedef struct { s32 x, y, z; } mt_pointer_copy_s32;
extern s32 lbl_803DCCC8;

void *SplinePath__GetTangentAtDistance(void *arg0, void *arg1, f32 farg0) {
    f32 temp_f1;
    s32 temp_r3;
    void *temp_r9;

    Profiler__BeginSection(lbl_803DCCC8);
    temp_f1 = Bike__WarpToStart(arg1, farg0);
    if (M2C_FIELD(arg1, f32 *, 0x40) != temp_f1) {
        temp_r3 = SplinePath__FindSegmentIndex((s32) arg1, temp_f1);
        M2C_FIELD(arg1, f32 *, 0x40) = temp_f1;
        M2C_FIELD(arg1, s32 *, 0x50) = temp_r3;
    }
    Profiler__EndSection(lbl_803DCCC8);
    temp_r9 = (M2C_FIELD(arg1, s32 *, 0x50) * 0x1C) + M2C_FIELD(arg1, s32 *, 0x24);
    *(mt_pointer_copy_s32 *)((char *)arg0 + 0x0) = *(mt_pointer_copy_s32 *)((char *)temp_r9 + 0x8);
    return arg0;
}
