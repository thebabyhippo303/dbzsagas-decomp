/* __AXGetAuxBInput @ 0x802D2B78 (size: 0x34, .text, MWCC GC/1.x (Dolphin SDK)) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

extern u32 lbl_803DD704;
extern u32 lbl_803DD720;
extern u8 lbl_803C0A60[];

void __AXGetAuxBInput(void **out) {
    if (lbl_803DD704 != 0U) {
        *out = lbl_803C0A60 + lbl_803DD720 * 1920U;
    } else {
        *out = NULL;
    }
}
