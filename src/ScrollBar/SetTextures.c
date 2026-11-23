/* ScrollBar__SetTextures @ 0x80261BA0 (size: 0x12C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Sphere__InitWithTexture(void *, s32, s32, s32, s32, s32);
void ScrollBar__SetTextures(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;

    Sphere__InitWithTexture(arg0 + 0x1A0, arg1, arg5, 0, 1, 1);
    Sphere__InitWithTexture(arg0 + 0x340, arg1, arg3, 0, 1, 1);
    Sphere__InitWithTexture(arg0 + 0x4E0, arg1, arg4, 0, 1, 1);
    Sphere__InitWithTexture(arg0 + 0x680, arg1, arg2, 0, 1, 1);
    temp_r9 = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *, f32, f32), 0xAC)(arg0 + M2C_FIELD(temp_r9, s16 *, 0xA8), farg0, farg1);
    temp_r9_2 = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, f32, f32), 0x8C)(arg0 + M2C_FIELD(temp_r9_2, s16 *, 0x88), farg2, farg3);
    temp_r9_3 = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *), 0x394)(arg0 + M2C_FIELD(temp_r9_3, s16 *, 0x390));
}
