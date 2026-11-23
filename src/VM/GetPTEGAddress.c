/* VM__GetPTEGAddress @ 0x802EAC74 (size: 0x18, .text, MWCC GC/2.0 (Dolphin SDK VM)) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef unsigned int u32;

extern u32 lbl_803DD8E0;

u32 VM__GetPTEGAddress(u32 x) {
    register u32 base = lbl_803DD8E0;
    return (((((x >> 19) | (x << 13)) & 0x38)) | ((base | ((((x >> 6) | (x << 26)) & 0xFFC0)))));
}
