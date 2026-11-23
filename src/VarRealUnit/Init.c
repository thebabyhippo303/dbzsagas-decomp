/* VarRealUnit__Init @ 0x8018C78C (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void VarRealUnit__SetUnitName(void *, s8 *);
void Variable__Init(void *, int, int, int, int);
extern M2C_UNK lbl_8033F1A0 __attribute__((section(".data")));

void *VarRealUnit__Init(void *arg0, s32 arg1, s32 arg2, s32 arg3, s8 *arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg_sp8) {
    Variable__Init(arg0, arg1, arg2, arg7, arg_sp8);
    M2C_FIELD(arg0, s32 *, 0x40) = arg3;
    M2C_FIELD(arg0, M2C_UNK **, 4) = &lbl_8033F1A0;
    VarRealUnit__SetUnitName(arg0, arg4);
    M2C_FIELD(arg0, s32 *, 0x50) = arg5;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = arg6;
    return arg0;
}
