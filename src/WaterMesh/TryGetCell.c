/* WaterMesh__TryGetCell @ 0x8027AB60 (size: 0x190, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 WaterMesh__GetCell(void *, s32, s32);
extern f32 lbl_8034F188 __attribute__((section(".data")));

s32 WaterMesh__TryGetCell(void *arg0, s32 arg1, s32 arg2, void *arg3) {
    f32 temp_f0;
    s32 temp_r11_2;
    s32 temp_r3;
    s32 temp_r7;
    s32 temp_r6;
    s32 temp_r9_2;
    s32 var_r0;
    s32 *sp;
    s32 *dp;
    void *temp_r10;
    void *temp_r11;
    s32 *temp_r11_3;
    void *temp_r11_4;
    void *temp_r9;

    if ((arg1 < 0) || (arg1 >= (s32) M2C_FIELD(arg0, s32 *, 0x94)) || (arg2 < 0) || (arg2 >= (s32) M2C_FIELD(arg0, s32 *, 0x98))) {
        return 0;
    }
    temp_r3 = WaterMesh__GetCell(arg0, arg1, arg2);
    if (M2C_FIELD(arg3, s32 *, 0) & 1) {
        if ((s32) M2C_FIELD(arg3, s32 *, 4) == 0) {
            M2C_FIELD(temp_r3, s32 *, 0x48) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x48) & 0xFFFFFFFE);
        } else {
            var_r0 = M2C_FIELD(temp_r3, s32 *, 0x48);
            temp_f0 = lbl_8034F188;
            M2C_FIELD(temp_r3, s32 *, 0x48) = var_r0 | 1;
            M2C_FIELD(temp_r3, f32 *, 0xDC) = temp_f0;
        }
    }
    if (M2C_FIELD(arg3, s32 *, 0) & 2) {
        sp = (s32 *)arg3 + 2;
        temp_r7 = sp[1];
        dp = (s32 *)temp_r3 + 19;
        temp_r6 = sp[2];
        M2C_FIELD(temp_r3, s32 *, 0x4C) = (s32) M2C_FIELD(arg3, s32 *, 8);
        dp[1] = temp_r7;
        dp[2] = temp_r6;
        temp_r10 = M2C_FIELD(arg0, void **, 0xAC);
        temp_r9_2 = (arg1 + (arg2 * M2C_FIELD(arg0, s32 *, 0x94))) * M2C_FIELD(temp_r10, s32 *, 0x24);
        temp_r11_2 = M2C_FIELD(temp_r10, s32 *, 0x2C);
        *(s32 *)(temp_r11_2 + temp_r9_2) = M2C_FIELD(temp_r3, s32 *, 0x4C);
        temp_r11_2 = temp_r11_2 + temp_r9_2;
        M2C_FIELD(temp_r11_2, s32 *, 4) = temp_r7;
        M2C_FIELD(temp_r11_2, s32 *, 8) = temp_r6;
    }
    if (M2C_FIELD(arg3, s32 *, 0) & 4) {
        temp_f0 = M2C_FIELD(arg3, f32 *, 0x14);
        M2C_FIELD(temp_r3, f32 *, 0xDC) = (f32) (temp_f0 * temp_f0);
    }
    if (M2C_FIELD(arg3, s32 *, 0) & 8) {
        temp_r11_4 = M2C_FIELD(arg0, void **, 0xAC);
        *(s32 *)(M2C_FIELD(temp_r11_4, s32 *, 0x2C) + (((arg1 + (arg2 * M2C_FIELD(arg0, s32 *, 0x94))) * M2C_FIELD(temp_r11_4, s32 *, 0x24)) + M2C_FIELD(temp_r11_4, s32 *, 0x38))) = M2C_FIELD(arg3, s32 *, 0x18);
    }
    if (M2C_FIELD(arg3, s32 *, 0) & 0x10) {
        if ((s32) M2C_FIELD(arg3, s32 *, 0x1C) != 0) {
            var_r0 = M2C_FIELD(temp_r3, s32 *, 0x48) | 2;
        } else {
            var_r0 = M2C_FIELD(temp_r3, s32 *, 0x48) & 0xFFFFFFFD;
        }
        M2C_FIELD(temp_r3, s32 *, 0x48) = var_r0;
    }
    return 1;
}
