/* Avatar__SetWeaponLaunchParameters @ 0x8009D684 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void * WeaponInventory__GetSelected(void *, int);
void Avatar__SetWeaponLaunchParameters(u8 *arg0, void *arg1, f32 farg0) {
    s32 ld_8;
    register s32 ld_4;
    register s32 ld_0;
    char *temp_r11;

    ld_0 = M2C_FIELD(arg1, s32 *, 0);
    temp_r11 = 0x338 + arg0;
    ld_4 = M2C_FIELD(arg1, s32 *, 4);
    ld_8 = M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x338) = (s32) ld_0;
    M2C_FIELD(temp_r11, s32 *, 4) = (s32) ld_4;
    M2C_FIELD(temp_r11, s32 *, 8) = ld_8;
    M2C_FIELD(WeaponInventory__GetSelected(0x50 + arg0, 1), f32 *, 0xC) = farg0;
}
