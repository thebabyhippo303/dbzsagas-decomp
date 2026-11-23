/* VarVector__GetName @ 0x8018F1F4 (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


extern M2C_UNK lbl_8033E3B4 __attribute__((section(".data")));
extern M2C_UNK lbl_8033E3C0 __attribute__((section(".data")));

M2C_UNK *VarVector__GetName(void *arg0) {
    M2C_UNK *result;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x44) != 0) {
        result = &lbl_8033E3B4;
    } else {
        result = &lbl_8033E3C0;
    }
    return result;
}
