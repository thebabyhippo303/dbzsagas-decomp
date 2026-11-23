/* MemBlock__GetSizePlusPadding @ 0x80185D5C (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

unsigned int MemBlock__GetAlignment(const unsigned int *);
s32 MemBlock__GetSizePlusPadding(u32 *arg0) {
    s32 temp_r9;
    s32 var_r29;
    s32 var_r30;
    u32 temp_r0;
    u32 temp_r3;

    temp_r0 = *arg0;
    var_r30 = temp_r0 & 0x07FFFFFF;
    if (temp_r0 & 0x04000000) {
        var_r30 |= 0xF8000000;
    }
    var_r29 = 0;
    temp_r3 = MemBlock__GetAlignment(arg0);
    temp_r9 = (s32) ((char *)arg0 + 4) % temp_r3;
    if (temp_r9 != 0) {
        var_r29 = temp_r3 - temp_r9;
    }
    return var_r30 + var_r29;
}
