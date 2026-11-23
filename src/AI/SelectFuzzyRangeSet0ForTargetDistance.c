/* AI__SelectFuzzyRangeSet0ForTargetDistance @ 0x800729EC (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
void AI__ComputeTargetingInfo(void *, void *);
float sqrtf(float);
float AI__SelectHighestFuzzyRangeScore(void *, s32, s32, s32, s32, s32, f32, f32);
float AI__SelectFuzzyRangeSet0ForTargetDistance(void *arg0) {
    struct { char pad[24]; f32 value; } out;
    AI__ComputeTargetingInfo(&out, arg0);
    return AI__SelectHighestFuzzyRangeScore(arg0, 0, 2, 5, 5, 0, sqrtf(out.value), *(f32 *)((char *)arg0 + 0x348));
}
