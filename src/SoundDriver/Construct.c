/* SoundDriver__Construct @ 0x8019569C (size: 0xA8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 SoundDriver__GetOutputMode(s32);
M2C_UNK fn_8019321C(s32);
extern M2C_UNK lbl_80340480 __attribute__((section(".data")));

s32 SoundDriver__Construct(s32 arg0) {
    void *temp_r10;
    void *temp_r11;
    void *temp_r8;
    void *temp_r9;

    fn_8019321C(arg0);
    temp_r11 = arg0 + 0x4DC;
    M2C_FIELD(arg0, M2C_UNK **, 0x60) = &lbl_80340480;
    temp_r10 = arg0 + 0x4EC;
    M2C_FIELD(temp_r11, s32 *, 4) = 0;
    temp_r9 = arg0 + 0x4FC;
    M2C_FIELD(arg0, s32 *, 0x4DC) = 0;
    temp_r8 = arg0 + 0x50C;
    M2C_FIELD(temp_r11, s32 *, 8) = 0;
    M2C_FIELD(temp_r11, s32 *, 0xC) = 0;
    M2C_FIELD(temp_r10, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x4EC) = 0;
    M2C_FIELD(temp_r10, s32 *, 8) = 0;
    M2C_FIELD(temp_r10, s32 *, 0xC) = 0;
    M2C_FIELD(temp_r9, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x4FC) = 0;
    M2C_FIELD(temp_r9, s32 *, 8) = 0;
    M2C_FIELD(temp_r9, s32 *, 0xC) = 0;
    M2C_FIELD(temp_r8, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x50C) = 0;
    M2C_FIELD(temp_r8, s32 *, 8) = 1;
    M2C_FIELD(temp_r8, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x64) = 0;
    M2C_FIELD(arg0, s32 *, 0x384) = 0;
    M2C_FIELD(arg0, s32 *, 8) = SoundDriver__GetOutputMode(arg0);
    return arg0;
}
