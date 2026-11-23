/* Audio__GetMaxChannels @ 0x8019156C (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


s32 Audio__GetMaxChannels(void *arg0) {
    void *temp_r11;
    void *temp_r9;

    temp_r11 = M2C_FIELD(arg0, void **, 0x180);
    if (temp_r11 == NULL) {
        return 0;
    } else {
        temp_r9 = M2C_FIELD(temp_r11, void **, 0x60);
        return M2C_FIELD(temp_r9, s32 (**)(void *), 0x44)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x40));
    }
}
