/* MenuList__AddAndWrapIndex @ 0x800144D0 (size: 0x18, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 MenuList__AddAndWrapIndex(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;
    s32 temp_r3;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x544);
    temp_r3 = arg1 + arg2;
    if (temp_r3 >= temp_r0) {
        return temp_r3 - temp_r0;
    }
    return temp_r3;
}
