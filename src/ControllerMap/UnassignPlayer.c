/* ControllerMap__UnassignPlayer @ 0x801D6648 (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


void ControllerMap__UnassignPlayer(void *arg0, s32 arg1) {
    s32 temp_r11;
    s32 temp_r4;

    temp_r11 = M2C_FIELD(arg0, s32 *, 4);
    temp_r4 = arg1 * 4;
    if ((s32) *(s32 *)(temp_r4 + temp_r11) != -1) {
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) - 1);
        *(s32 *)(temp_r4 + temp_r11) = -1;
    }
}
