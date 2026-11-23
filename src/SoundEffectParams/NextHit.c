/* SoundEffectParams__NextHit @ 0x8018948C (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


typedef struct { s32 x, y, z; } V3i;

s32 SoundEffectParams__NextHit(void *arg0, void *arg1, u8 *arg2) {
    s32 ld_4;
    s32 temp_r9;
    void *temp_r11;
    void *temp_r11_2;
    void *var_r8;

    temp_r11 = M2C_FIELD(arg0, void **, 0x804);
    if (temp_r11 == NULL) {
        return 0;
    }
    temp_r9 = M2C_FIELD(arg0, s32 *, 0x808);
    M2C_FIELD(arg0, s32 *, 0x808) = (s32) (temp_r9 + 1);
    temp_r11_2 = M2C_FIELD(temp_r11, void **, 0x54);
    if ((temp_r11_2 == NULL) || (temp_r9 < 0) || (temp_r9 >= (s32) M2C_FIELD(temp_r11_2, s32 *, 0x24))) {
        var_r8 = NULL;
    } else {
        var_r8 = M2C_FIELD(temp_r11_2, s32 *, 0x2C) + (temp_r9 * 0x14);
    }
    if (var_r8 == NULL) {
        return 0;
    } else {
        *(V3i *)arg1 = *(V3i *)((char *)var_r8 + 4);
        *arg2 = M2C_FIELD(M2C_FIELD(var_r8, void **, 0), u8 *, 6);
        return 1;
    }
}
