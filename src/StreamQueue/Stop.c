/* StreamQueue__Stop @ 0x801945FC (size: 0x1CC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


extern f32 lbl_8033F558 __attribute__((section(".data")));
extern f32 lbl_8033F55C __attribute__((section(".data")));

s32 StreamQueue__Stop(void *arg0, f32 farg0) {
    register f32 var_f0;
    s32 temp_r0;
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r11_3;
    void *temp_r30;
    void *temp_r3;
    u8 *temp_r8;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;
    void *temp_r9_5;
    void *var_r29;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x80) == 0) {
        return 0;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x50);
    if (temp_r0 == 0) {
        temp_r11 = M2C_FIELD(arg0, void **, 0);
        var_r29 = arg0 + 0x68;
        temp_r9 = M2C_FIELD(temp_r11, void **, 0x60);
        temp_r3 = arg0 + 0x54;
        temp_r8 = M2C_FIELD(temp_r3, void **, 8);
        var_f0 = M2C_FIELD(arg0, f32 *, 0x54) * M2C_FIELD(temp_r8, f32 (**)(void *, f32), 0x1C)(temp_r3 + M2C_FIELD(temp_r8, s16 *, 0x18), ((f32) (f64) M2C_FIELD(temp_r9, u32 (**)(void *, void *), 0x4C)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x48), temp_r9) * lbl_8033F558) - M2C_FIELD(temp_r3, f32 *, 4));
    } else if (temp_r0 == 1) {
        temp_r11_2 = M2C_FIELD(arg0, void **, 0);
        temp_r30 = arg0 + 0x68;
        var_r29 = temp_r30;
        temp_r9_2 = M2C_FIELD(temp_r11_2, void **, 0x60);
        temp_r9_3 = M2C_FIELD(temp_r30, void **, 8);
        var_f0 = M2C_FIELD(arg0, f32 *, 0x68) * M2C_FIELD(temp_r9_3, f32 (**)(void *), 0x1C)(temp_r30 + M2C_FIELD(temp_r9_3, s16 *, 0x18));
    } else {
        var_r29 = arg0 + 0x68;
        var_f0 = lbl_8033F55C;
    }
    M2C_FIELD(arg0, s32 *, 0x50) = 1;
    M2C_FIELD(var_r29, f32 *, 0x10) = farg0;
    M2C_FIELD(arg0, f32 *, 0x68) = var_f0;
    temp_r11_3 = M2C_FIELD(arg0, void **, 0);
    temp_r9_4 = M2C_FIELD(temp_r11_3, void **, 0x60);
    temp_r9_5 = M2C_FIELD(var_r29, void **, 8);
    M2C_FIELD(temp_r9_5, M2C_UNK (**)(void *, f32), 0x14)(var_r29 + M2C_FIELD(temp_r9_5, s16 *, 0x10), (f32) (f64) M2C_FIELD(temp_r9_4, u32 (**)(void *), 0x4C)(temp_r11_3 + M2C_FIELD(temp_r9_4, s16 *, 0x48)) * lbl_8033F558);
    return 1;
}
