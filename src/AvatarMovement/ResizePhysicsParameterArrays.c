/* AvatarMovement__ResizePhysicsParameterArrays @ 0x800B68C8 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 fn_80254CC4(s32, s32, s32, s32);
extern s32 lbl_803DC594;
extern s32 lbl_803DCCC0;

void AvatarMovement__ResizePhysicsParameterArrays(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC8) = fn_80254CC4(lbl_803DCCC0, (s32) (arg0 + 0xB4), M2C_FIELD(arg0, s32 *, 0xC8), 0x14);
    M2C_FIELD(arg0, s32 *, 0x1C) = fn_80254CC4(lbl_803DC594, (s32) (arg0 + 8), M2C_FIELD(arg0, s32 *, 0x1C), 0x14);
    M2C_FIELD(arg0, s32 *, 0x64) = fn_80254CC4(lbl_803DC594, (s32) (arg0 + 0x50), M2C_FIELD(arg0, s32 *, 0x64), 0x14);
}
