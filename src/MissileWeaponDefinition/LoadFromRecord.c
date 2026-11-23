/* MissileWeaponDefinition__LoadFromRecord @ 0x800DB84C (size: 0x1D8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

int fn_80254BB8(void *, const char *, int);
extern void *lbl_803DCCC0;

void MissileWeaponDefinition__LoadFromRecord(void *arg0, void *arg1) {
    f32 sp18;
    f32 sp10;
    f32  sp10_b;
    f32 spC;
    f32  spC_b;
    f32 sp8;
    u8 *temp_r7;
    u8 *temp_r7_b;
    void *temp_r11;
    void *temp_r10;
    void *temp_r9;
    void *temp_r9_b;

    temp_r10 = arg1 + 4;
    temp_r9 = arg0 + 0x5C;
    temp_r7 = arg1 + 0x18;
    M2C_FIELD(arg0, s32 *, 0x58) = (s32) M2C_FIELD(arg1, u16 *, 0);
    temp_r11 = arg0 + 0x70;
    M2C_FIELD(arg0, f32 *, 0x5C) = (f32) M2C_FIELD(arg1, u32 *, 4);
    M2C_FIELD(temp_r9, s32 *, 4) = (f32) M2C_FIELD(temp_r10, f32 *, 4);
    M2C_FIELD(temp_r9, s32 *, 8) = (f32) M2C_FIELD(temp_r10, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x68) = (f32) M2C_FIELD(arg1, f32 *, 0x10);
    sp8 = M2C_FIELD(arg0, f32 *, 0x5C);
    M2C_FIELD(arg0, s32 *, 0x6C) = (s32) M2C_FIELD(arg1, s32 *, 0x14);
    spC = M2C_FIELD(temp_r9, s32 *, 4);
    sp10 = M2C_FIELD(temp_r9, s32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x70) = (f32) M2C_FIELD(arg1, f32 *, 0x18);
    M2C_FIELD(temp_r11, f32 *, 4) = (f32) M2C_FIELD(temp_r7, f32 *, 4);
    M2C_FIELD(temp_r11, f32 *, 8) = (f32) M2C_FIELD(temp_r7, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0xFC) = (f32) M2C_FIELD(arg1, f32 *, 0x7C);
    sp8 = M2C_FIELD(arg0, f32 *, 0x70);
    spC_b = M2C_FIELD(temp_r11, f32 *, 4);
    sp10_b = M2C_FIELD(temp_r11, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x7C) = (f32) M2C_FIELD(arg1, f32 *, 0x30);
    M2C_FIELD(arg0, s32 *, 0x80) = fn_80254BB8(lbl_803DCCC0, M2C_FIELD(arg1, s8 **, 0x34), -1);
    temp_r7_b = arg1 + 0x80;
    temp_r9_b = arg0 + 0xE0;
    M2C_FIELD(arg0, f32 *, 0x84) = (f32) M2C_FIELD(arg1, f32 *, 0x10);
    M2C_FIELD(arg0, f32 *, 0x88) = (f32) M2C_FIELD(arg1, f32 *, 0x38);
    M2C_FIELD(arg0, f32 *, 0x8C) = (f32) M2C_FIELD(arg1, f32 *, 0x3C);
    M2C_FIELD(arg0, f32 *, 0x90) = (f32) M2C_FIELD(arg1, f32 *, 0x40);
    M2C_FIELD(arg0, f32 *, 0x94) = (f32) M2C_FIELD(arg1, f32 *, 0x44);
    sp18 = M2C_FIELD(arg1, f32 *, 0x24);
    M2C_FIELD(arg0, f32 *, 0x98) = sp18;
    M2C_FIELD(arg0, f32 *, 0x9C) = M2C_FIELD(arg1, f32 *, 0x28);
    M2C_FIELD(arg0, s32 *, 0xA0) = (s32) M2C_FIELD(arg1, s32 *, 0x2C);
    M2C_FIELD(arg0, s32 *, 0xA4) = (s32) M2C_FIELD(arg1, s32 *, 0x48);
    M2C_FIELD(arg0, s32 *, 0xA8) = (s32) M2C_FIELD(arg1, s32 *, 0x4C);
    M2C_FIELD(arg0, f32 *, 0xAC) = (f32) M2C_FIELD(arg1, f32 *, 0x50);
    M2C_FIELD(arg0, s32 *, 0xB0) = (s32) M2C_FIELD(arg1, s32 *, 0x54);
    M2C_FIELD(arg0, s32 *, 0xB4) = (s32) M2C_FIELD(arg1, s32 *, 0x58);
    M2C_FIELD(arg0, s32 *, 0xB8) = (s32) M2C_FIELD(arg1, s32 *, 0x5C);
    M2C_FIELD(arg0, s32 *, 0xBC) = (s32) M2C_FIELD(arg1, s32 *, 0x60);
    M2C_FIELD(arg0, s32 *, 0xC0) = (s32) M2C_FIELD(arg1, s32 *, 0x64);
    M2C_FIELD(arg0, s32 *, 0xC4) = (s32) M2C_FIELD(arg1, s32 *, 0x68);
    M2C_FIELD(arg0, s32 *, 0xC8) = (s32) M2C_FIELD(arg1, s32 *, 0x6C);
    M2C_FIELD(arg0, s32 *, 0xCC) = (s32) M2C_FIELD(arg1, s32 *, 0x70);
    M2C_FIELD(arg0, s32 *, 0xD0) = (s32) M2C_FIELD(arg1, s32 *, 0x74);
    M2C_FIELD(arg0, s32 *, 0xD4) = (s32) M2C_FIELD(arg1, s32 *, 0x78);
    M2C_FIELD(arg0, f32 *, 0xD8) = (f32) M2C_FIELD(arg1, f32 *, 0x7C);
    M2C_FIELD(arg0, s32 *, 0xE0) = (s32) M2C_FIELD(arg1, s32 *, 0x80);
    M2C_FIELD(temp_r9_b, s32 *, 4) = (s32) M2C_FIELD(temp_r7_b, s32 *, 4);
    M2C_FIELD(temp_r9_b, s32 *, 8) = (s32) M2C_FIELD(temp_r7_b, s32 *, 8);
    M2C_FIELD(temp_r9_b, s32 *, 0xC) = (s32) M2C_FIELD(temp_r7_b, s32 *, 0xC);
    M2C_FIELD(temp_r9_b, s32 *, 0x18) = (s32) M2C_FIELD(temp_r7_b, s32 *, 0x18);
    M2C_FIELD(temp_r9_b, s32 *, 0x10) = (s32) M2C_FIELD(temp_r7_b, s32 *, 0x10);
    M2C_FIELD(temp_r9_b, s32 *, 0x14) = (s32) M2C_FIELD(temp_r7_b, s32 *, 0x14);
}
