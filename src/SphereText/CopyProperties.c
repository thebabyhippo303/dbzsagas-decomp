/* SphereText__CopyProperties @ 0x80271A80 (size: 0xD8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 EzString__GetCStr(void *);
M2C_UNK Sphere__CopyProperties(s32, s32);
extern f32 lbl_80349FF4 __attribute__((section(".data")));

void SphereText__CopyProperties(s32 arg0, s32 arg1) {
    s32 temp_r29;
    s32 temp_r30_3;
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r29_2;
    void *temp_r30;
    void *temp_r30_2;
    void *temp_r9;
    void *temp_r9_2;

    Sphere__CopyProperties(arg0, arg1);
    temp_r11 = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(temp_r11, M2C_UNK (**)(s32, s32, f32, f32), 0x364)(arg0 + M2C_FIELD(temp_r11, s16 *, 0x360), M2C_FIELD(arg1, s32 *, 0x1A0), lbl_80349FF4, lbl_80349FF4);
    temp_r30 = M2C_FIELD(arg0, void **, 0x19C);
    temp_r30_2 = temp_r30 + 0x368;
    temp_r29 = arg0 + M2C_FIELD(temp_r30, s16 *, 0x368);
    M2C_FIELD(temp_r30_2, M2C_UNK (**)(s32, s32), 4)(temp_r29, EzString__GetCStr(arg1 + 0x1A4));
    temp_r9 = M2C_FIELD(arg1, void **, 0x19C);
    temp_r11_2 = M2C_FIELD(arg0, void **, 0x19C);
    temp_r29_2 = temp_r11_2 + 0x3E8;
    temp_r30_3 = arg0 + M2C_FIELD(temp_r11_2, s16 *, 0x3E8);
    M2C_FIELD(temp_r9, M2C_UNK (**)(s32), 0x3F4)(arg1 + M2C_FIELD(temp_r9, s16 *, 0x3F0));
    M2C_FIELD(temp_r29_2, M2C_UNK (**)(s32), 4)(temp_r30_3);
    temp_r9_2 = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(temp_r9_2, M2C_UNK (**)(s32, f32), 0x3FC)(arg0 + M2C_FIELD(temp_r9_2, s16 *, 0x3F8), M2C_FIELD(arg1, f32 *, 0x1B4));
}
