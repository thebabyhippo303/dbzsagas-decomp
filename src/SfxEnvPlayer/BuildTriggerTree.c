/* SfxEnvPlayer__BuildTriggerTree @ 0x8019ACA4 (size: 0xE8, .text, ProDG 3.9.3 -O2) - MATCHED */
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0

s32 SpatialGrid__GetEntryCount(void *);
void SpatialGrid__Build(void *);
void *fn_8025F728(void *, s32);

s32 SfxEnvPlayer__BuildTriggerTree(void *arg0) {
    s32 var_r30;
    void *temp_r11;
    void *temp_r9;
    void *temp_r11_2;
    void *temp_r9_2;
    void *temp_r3;
    void *temp_r11_3;
    void *temp_r9_3;
    void *temp_r3_2;
    void *temp_r9_4;

    if (M2C_FIELD(arg0, s32 *, 0xB0) != 0) {
        SpatialGrid__Build(M2C_FIELD(arg0, void **, 0xB0));
    }
    temp_r11 = M2C_FIELD(arg0, void **, 0x20);
    temp_r9 = M2C_FIELD(temp_r11, void **, 0x60);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0xE4)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 0xE0));
    temp_r11_2 = M2C_FIELD(arg0, void **, 0x20);
    temp_r9_2 = M2C_FIELD(temp_r11_2, void **, 0x60);
    M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, s32), 0xEC)(temp_r11_2 + M2C_FIELD(temp_r9_2, s16 *, 0xE8), M2C_FIELD(arg0, s32 *, 0xC0));
    if (M2C_FIELD(arg0, s32 *, 0xB0) != 0) {
        var_r30 = 0;
        while (var_r30 < SpatialGrid__GetEntryCount(M2C_FIELD(arg0, void **, 0xB0))) {
            temp_r3 = fn_8025F728(M2C_FIELD(arg0, void **, 0xB0), var_r30++);
            temp_r11_3 = M2C_FIELD(arg0, void **, 0x20);
            temp_r9_3 = M2C_FIELD(temp_r11_3, void **, 0x60);
            M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *, s32), 0xEC)(temp_r11_3 + M2C_FIELD(temp_r9_3, s16 *, 0xE8), M2C_FIELD(temp_r3, s32 *, 0x64));
        }
    }
    temp_r3_2 = M2C_FIELD(arg0, void **, 0x20);
    temp_r9_4 = M2C_FIELD(temp_r3_2, void **, 0x60);
    M2C_FIELD(temp_r9_4, M2C_UNK (**)(void *), 0xF4)(temp_r3_2 + M2C_FIELD(temp_r9_4, s16 *, 0xF0));
    return 1;
}
