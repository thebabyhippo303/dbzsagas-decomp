/* SfxPlayer__StartVoice @ 0x80199068 (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 SfxPlayer__GetVoice(s32, void *);
M2C_UNK fn_8019D674(s32, s32);
s32 SfxPlayer__StartVoice(s32 arg0, void *arg1) {
    s32 temp_r29;
    s32 temp_r3;
    void *temp_r11;
    void *temp_r30;
    void *temp_r30_2;
    void *temp_r9;

    temp_r3 = SfxPlayer__GetVoice(arg0, arg1);
    if ((temp_r3 == 0) || (fn_8019D674(M2C_FIELD(arg0, s32 *, 0x24), temp_r3) == 0)) {
        return 0;
    }
    temp_r11 = M2C_FIELD(arg0, void **, 0x20);
    temp_r30 = M2C_FIELD(temp_r3, void **, 0x54);
    temp_r9 = M2C_FIELD(temp_r11, void **, 0x60);
    temp_r30_2 = temp_r30 + 0x28;
    temp_r29 = temp_r3 + M2C_FIELD(temp_r30, s16 *, 0x28);
    M2C_FIELD(temp_r30_2, M2C_UNK (**)(s32, s32), 4)(temp_r29, M2C_FIELD(temp_r9, s32 (**)(void *), 0x4C)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x48)));
    return 1;
}
