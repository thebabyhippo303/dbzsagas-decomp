/* Profiler__GetSectionTimeByIndex @ 0x80185A00 (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

f32 Profiler__ComputeSectionTime(s32);
extern f32 lbl_8033DEA0 __attribute__((section(".data")));
extern s32 *lbl_803DCBCC;

f32 Profiler__GetSectionTimeByIndex(s32 index) {
    return Profiler__ComputeSectionTime(lbl_803DCBCC[index]) * lbl_8033DEA0;
}
