/* GameApp__EndCurrentLoop @ 0x801D5CB0 (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


void GameApp__EndCurrentLoop(void *arg0) {
    s16 ld_40;
    void *temp_r9;
    s16 ld_20;
    void **temp_r11;
    s32 var_r3;

    temp_r11 = M2C_FIELD(arg0, void ***, 0);
    if (NULL == temp_r11) {
        return;
    }
    temp_r9 = *temp_r11;
    ld_20 = M2C_FIELD(temp_r9, s16 *, 0x20);
    var_r3 = M2C_FIELD(temp_r9, s32 (**)(void *), 0x24)((char *) temp_r11 + ld_20);
    M2C_FIELD(arg0, void ***, 0) = NULL;
    if (0 != (s32) M2C_FIELD(arg0, s32 *, 0xC)) {
        var_r3 = -1;
    }
    temp_r9 = M2C_FIELD(arg0, void **, 0xA8);
    ld_40 = M2C_FIELD(temp_r9, u16 *, 0x40);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *, s32), 0x44)(arg0 + ld_40, var_r3);
}
