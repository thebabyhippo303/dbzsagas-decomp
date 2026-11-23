/* OS__GetResetParameters @ 0x8016D8B4 (size: 0x14, .text, MWCC GC/1.x (Dolphin SDK)) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

extern s32 lbl_803DD258;
extern s32 lbl_803DD25C;

void OS__GetResetParameters(s32 *arg0, s32 *arg1) {
    s32 t;

    t = lbl_803DD258;
    *arg0 = t;
    t = lbl_803DD25C;
    *arg1 = t;
}
