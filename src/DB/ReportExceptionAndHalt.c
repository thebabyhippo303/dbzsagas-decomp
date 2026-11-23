/* DB__ReportExceptionAndHalt @ 0x80170944 (size: 0x48, .text, MWCC GC/1.x (Dolphin SDK)) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

M2C_UNK OSReport(s32, s32, s32, s32, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32);
M2C_UNK OSDumpContext(s32);
M2C_UNK PPCHalt(void);
extern M2C_UNK lbl_80371770 __attribute__((section(".data")));

void DB__ReportExceptionAndHalt(s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 farg4, f32 farg5, f32 farg6, f32 farg7) {
    s32 temp_r4;

    temp_r4 = *(s32 *)0xC0;
    OSReport((s32) &lbl_80371770, temp_r4, arg2, arg3, arg4, arg5, arg6, arg7, farg0, farg1, farg2, farg3, farg4, farg5, farg6, farg7);
    OSDumpContext(temp_r4 + 0x80000000);
    PPCHalt();
}

