/* CameraLOD__SetCamera @ 0x80253CF4 (size: 0x4C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void CameraLOD__SetCamera(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r9;
    s32 temp_r0;
    s32 *temp_r11;
    temp_r11 = (s32 *)(arg0 + 0x40);
    *(s32 *)((u32)temp_r11 + ((u32)arg1 << 2)) = arg2;
    M2C_FIELD(arg0, s32 *, 0x3C) = 4;
    if ((s32) M2C_FIELD(temp_r11, s32 *, 0xC) == 0) {
    loop_1:
        temp_r9 = M2C_FIELD(arg0, s32 *, 0x3C) - 1;
        M2C_FIELD(arg0, s32 *, 0x3C) = temp_r9;
        if (temp_r9 > 0) {
            temp_r0 = (temp_r9 - 1) << 2;
            if (*(s32 *)((char *)temp_r11 + temp_r0) != 0) return;
            goto loop_1;
        }
    }
}