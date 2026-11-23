/* PadManager__Construct @ 0x801D89CC (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void * ControllerMap__Construct(void *, s32, s32, s32);
extern M2C_UNK lbl_80343210 __attribute__((section(".data")));

void *PadManager__Construct(void *arg0) {
    register s32 *var_r9;
    s32 var_ctr;

    ControllerMap__Construct(arg0, arg0 + 0x18, arg0 + 0x28, 4);
    M2C_FIELD(arg0, M2C_UNK **, 0x10) = &lbl_80343210;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    var_ctr = 4;
    var_r9 = arg0 + 0x24;
    do {
        *var_r9 = 0;
        var_r9 = (s32 *)((char *)var_r9 - 4);
        var_ctr -= 1;
    } while (var_ctr != 0);
    return arg0;
}
