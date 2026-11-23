/* AvatarConfig__ResolveSurfaceTypeSelection @ 0x8009C720 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


s32 SurfaceType__ResolveIndex(s32, void *, s32, M2C_UNK); /* extern */
extern s32 lbl_803DCCC0;

void AvatarConfig__ResolveSurfaceTypeSelection(void *arg0) {
    s32 ld_4;

    ld_4 = M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(arg0, void **, 0x44) = (((s32) ld_4 != 0) ? arg0 + 0x1C : arg0 + 0x30);
    M2C_FIELD(arg0, s32 *, 0x70) = SurfaceType__ResolveIndex(lbl_803DCCC0, arg0 + 0x5C, M2C_FIELD(arg0, s32 *, 0x70), 0x14);
}
