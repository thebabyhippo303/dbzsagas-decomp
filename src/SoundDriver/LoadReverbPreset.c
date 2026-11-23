/* SoundDriver__LoadReverbPreset @ 0x801965AC (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


extern char lbl_80372CCC[] __attribute__((section(".data")));

void SoundDriver__LoadReverbPreset(void *arg0) {
    s32 off = M2C_FIELD(arg0, s32 *, 0x37C) * 0x14;

    M2C_FIELD(arg0, s8 *, 0x4C4) = 0;
    M2C_FIELD(arg0, f32 *, 0x4C8) = *(f32 *)(lbl_80372CCC + off);
    M2C_FIELD(arg0, f32 *, 0x4CC) = *(f32 *)(lbl_80372CCC + 4 + off);
    M2C_FIELD(arg0, f32 *, 0x4D0) = *(f32 *)(lbl_80372CCC + 8 + off);
    M2C_FIELD(arg0, f32 *, 0x4D4) = *(f32 *)(lbl_80372CCC + 12 + off);
    M2C_FIELD(arg0, f32 *, 0x4D8) = *(f32 *)(lbl_80372CCC + 16 + off);
}
