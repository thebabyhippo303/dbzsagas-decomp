/* SoundDriver__StreamExists @ 0x80195E18 (size: 0xAC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 File__Exists(s32);
M2C_UNK Path__BuildWithExtension(s32, s32, s32, s32);
extern M2C_UNK lbl_8033F2A4 __attribute__((section(".data")));

s32 SoundDriver__StreamExists(void *arg0, s32 arg1) {
    union { M2C_UNK value; unsigned char bytes[256]; } sp8;
    void *temp_r11;
    void *temp_r9;
    s32 ext = (s32) &lbl_8033F2A4;

    temp_r11 = M2C_FIELD(arg0, void **, 0x60);
    Path__BuildWithExtension((s32) ((M2C_UNK *)sp8.bytes), ext, arg1, M2C_FIELD(temp_r11, s32 (**)(void *), 0x114)(arg0 + M2C_FIELD(temp_r11, s16 *, 0x110)));
    if (File__Exists((s32) ((M2C_UNK *)sp8.bytes)) != 0) {
        return 1;
    } else {
        temp_r9 = M2C_FIELD(arg0, void **, 0x60);
        Path__BuildWithExtension((s32) ((M2C_UNK *)sp8.bytes), ext, arg1, M2C_FIELD(temp_r9, s32 (**)(void *), 0x11C)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x118)));
        return File__Exists((s32) ((M2C_UNK *)sp8.bytes));
    }
}
