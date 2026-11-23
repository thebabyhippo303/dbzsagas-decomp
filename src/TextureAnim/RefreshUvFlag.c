/* TextureAnim__RefreshUvFlag @ 0x80246B54 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


extern f32 lbl_80347854 __attribute__((section(".data")));

void TextureAnim__RefreshUvFlag(void *arg0) {
    if ((M2C_FIELD(arg0, f32 *, 0x18) != lbl_80347854) || (M2C_FIELD(arg0, f32 *, 0x1C) != lbl_80347854) || (M2C_FIELD(arg0, f32 *, 0x20) != lbl_80347854) || (M2C_FIELD(arg0, f32 *, 0x24) != lbl_80347854) || (M2C_FIELD(arg0, f32 *, 0x28) != lbl_80347854) || (M2C_FIELD(arg0, f32 *, 0x2C) != lbl_80347854)) {
        M2C_FIELD(arg0, u16 *, 0xE) = (u16) (M2C_FIELD(arg0, u16 *, 0xE) | 1);
        return;
    }
    M2C_FIELD(arg0, u16 *, 0xE) = (u16) (M2C_FIELD(arg0, u16 *, 0xE) & 0xFFFE);
}
