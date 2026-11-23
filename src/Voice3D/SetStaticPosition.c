/* Voice3D__SetStaticPosition @ 0x8019BF34 (size: 0x28, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Voice3D__SetStaticPosition(void *arg0, void *arg1) {
    void *temp_r9;
    volatile s32 *source;
    register s32 temp_r10;
    register s32 temp_r11;
    register s32 temp_r0;
    register s32 temp_r8;
    volatile s32 *destination;

    temp_r9 = arg0 + 0x58;
    destination = (volatile s32 *)temp_r9;
    source = (volatile s32 *)arg1;
    temp_r10 = source[0];
    temp_r11 = source[2];
    temp_r8 = 0;
    temp_r0 = source[1];
    M2C_FIELD(arg0, s32 *, 0x58) = temp_r10;
    destination[2] = temp_r11;
    destination[1] = temp_r0;
    M2C_FIELD(arg0, s32 *, 0x70) = temp_r8;
}
