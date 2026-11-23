/* MenuSlider__SetValue @ 0x800156E8 (size: 0x10C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* MenuSlider__SetValue @ 0x800156E8: 100% MATCH. Key: base+416 temp reused as sub-pointer (r9), separate it temp (r11). */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })
void MenuSlider__SetValue(void *arg0, s32 arg1) {
    s32 temp_r9;
    s32 temp_r0;
    s32 var_r29;
    s32 var_r30;
    s32 var_r30_2;
    void *temp_r11;
    void *temp_r28;
    void *it;
    M2C_FIELD(arg0, s32 *, 0x838) = arg1;
    temp_r11 = arg0 + 0x1A0;
    temp_r9 = M2C_FIELD(temp_r11, s32 *, 4);
    if (arg1 > temp_r9) {
        M2C_FIELD(arg0, s32 *, 0x838) = temp_r9;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x838);
    if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0x838) = 0;
    }
    var_r29 = 0;
    temp_r28 = temp_r11;
    if (var_r29 < (s32) M2C_FIELD(arg0, s32 *, 0x838)) {
        var_r30 = 0;
        do {
            it = *(void **)((char *)M2C_FIELD(arg0, void **, 0x1A0) + var_r30);
            var_r29 += 1;
            temp_r11 = M2C_FIELD(it, void **, 0x19C);
            var_r30 += 4;
            M2C_FIELD(temp_r11, void (**)(void *, s32, s32, s32, s32, s32), 0x6C)(it + M2C_FIELD(temp_r11, s16 *, 0x68), M2C_FIELD(arg0, s32 *, 0x848), M2C_FIELD(arg0, s32 *, 0x850), 0, 1, 1);
        } while (var_r29 < (s32) M2C_FIELD(arg0, s32 *, 0x838));
    }
    if (var_r29 < (s32) M2C_FIELD(temp_r28, s32 *, 4)) {
        var_r30_2 = var_r29 * 4;
        do {
            it = *(void **)((char *)M2C_FIELD(arg0, void **, 0x1A0) + var_r30_2);
            var_r29 += 1;
            temp_r11 = M2C_FIELD(it, void **, 0x19C);
            var_r30_2 += 4;
            M2C_FIELD(temp_r11, void (**)(void *, s32, s32, s32, s32, s32), 0x6C)(it + M2C_FIELD(temp_r11, s16 *, 0x68), M2C_FIELD(arg0, s32 *, 0x848), M2C_FIELD(arg0, s32 *, 0x84C), 0, 1, 1);
        } while (var_r29 < (s32) M2C_FIELD(temp_r28, s32 *, 4));
    }
}
