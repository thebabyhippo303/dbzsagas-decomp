/* Avatar__ClearPunchHoldAnimVar @ 0x800A3B60 (size: 0x34, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Avatar__SetAnimScriptVarIntImpl(void *, char *, int, int);
extern s8 lbl_80320220 __attribute__((section(".data")));

void Avatar__ClearPunchHoldAnimVar(void **arg0) {
    Avatar__SetAnimScriptVarIntImpl(*arg0, &lbl_80320220, 0, 1);
}
