/* MissionCollectCount__Construct @ 0x8012A244 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void MissionProgress__Construct(void *, int, int, int, int);
extern M2C_UNK lbl_8032C860 __attribute__((section(".data")));

void *MissionCollectCount__Construct(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, void *arg5, s32 arg6) {
    MissionProgress__Construct(arg0, arg1, arg2, arg3, arg4);
    M2C_FIELD(arg0, void **, 0x20) = arg5;
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_8032C860;
    M2C_FIELD(arg0, s32 *, 0x24) = arg6;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    return arg0;
}
