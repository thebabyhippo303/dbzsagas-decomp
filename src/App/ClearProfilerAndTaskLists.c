/* App__ClearProfilerAndTaskLists @ 0x8017FE00 (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


M2C_UNK fn_801846B4();                              /* extern */
M2C_UNK fn_80185258();                              /* extern */

void App__ClearProfilerAndTaskLists(void) {
    fn_80185258();
    fn_801846B4();
}
