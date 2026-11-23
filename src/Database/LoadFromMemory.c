/* Database__LoadFromMemory @ 0x8020476C (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Profiler__BeginSection(s32);
void Profiler__EndSection(s32);
M2C_UNK DBFileMgr__SetSourceBuffer(s32, s32);
M2C_UNK Database__LoadFromBuffer(s32, s32, s32, s32);
s32 Database__LoadFromMemory(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 temp_r30;

    DBFileMgr__SetSourceBuffer(arg1, arg2);
    Profiler__BeginSection(0x11);
    temp_r30 = Database__LoadFromBuffer(arg0, arg3, arg4, arg5);
    Profiler__EndSection(0x11);
    return temp_r30;
}
