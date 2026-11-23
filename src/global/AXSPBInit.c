/* __AXSPBInit @ 0x802D4120 (size: 0x2C, .text, MWCC GC/1.x (Dolphin SDK)) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

extern s32 lbl_803DD7A8;
extern s32 lbl_803DD7AC;
extern s32 lbl_803DD7B0;
extern s32 lbl_803DD7B4;
extern s32 lbl_803DD7B8;
extern s32 lbl_803DD7BC;
extern s32 lbl_803DD7C0;
extern s32 lbl_803DD7C4;
extern s32 lbl_803DD7C8;

void __AXSPBInit(void) {
    lbl_803DD7C4 = 0;
    lbl_803DD7C0 = 0;
    lbl_803DD7BC = 0;
    lbl_803DD7B8 = 0;
    lbl_803DD7B4 = 0;
    lbl_803DD7B0 = 0;
    lbl_803DD7AC = 0;
    lbl_803DD7A8 = 0;
    lbl_803DD7C8 = 0;
}
