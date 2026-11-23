/* AvatarControls__ApplyPositionRelativeToTarget @ 0x800A1938 (size: 0x168, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


extern f32 lbl_803200BC __attribute__((section(".data")));
extern f32 lbl_803200C0 __attribute__((section(".data")));

void AvatarControls__ApplyPositionRelativeToTarget(void *arg0) {
    f32 fx;
    s16 ld_10;
    char *p_84;
    void *sp58;
    f32 sp4C;
    f32 sp8;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f11;
    f32 temp_f13;
    f32 temp_f1;
    f64 temp_f2;
    f32 temp_f31;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f5;
    f32 temp_f6;
    f32 temp_f7;
    f32 temp_f8;
    f32 temp_f9;
    void *temp_r10;
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r7;
    void *temp_r8;
    void *temp_r9;

    sp58 = NULL;
    temp_r10 = M2C_FIELD(arg0, void **, 0);
    temp_r11 = M2C_FIELD(temp_r10, void **, 0x7CC);
    temp_r9 = M2C_FIELD(temp_r11, void **, 4);
    ld_10 = M2C_FIELD(temp_r9, s16 *, 0x10);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *, void **, void *, void *), 0x14)(temp_r11 + ld_10, &sp58, temp_r9, temp_r10);
    if (sp58 == NULL) {
        return;
    }
    temp_r11_2 = M2C_FIELD(sp58, void **, 0x20);
    temp_r7 = M2C_FIELD(sp58, void **, 0x24);
    sp8 = M2C_FIELD(temp_r11_2, f32 *, 0);
    temp_f31 = M2C_FIELD(temp_r11_2, f32 *, 4);
    p_84 = (char *)arg0 + 0x84;
    temp_f7 = M2C_FIELD(p_84, f32 *, 0x0);
    M2C_FIELD(&sp8, f32 *, 4) = temp_f31;
    temp_f6 = M2C_FIELD(temp_r11_2, f32 *, 8);
    temp_r8 = M2C_FIELD(arg0, void **, 0);
    M2C_FIELD(&sp8, f32 *, 8) = temp_f6;
    M2C_FIELD(&sp8, f32 *, 0xC) = (f32) lbl_803200BC;
    temp_f8 = M2C_FIELD(temp_r11_2, f32 *, 0xC);
    M2C_FIELD(&sp8, f32 *, 0x10) = temp_f8;
    temp_f1 = M2C_FIELD(temp_r11_2, f32 *, 0x10);
    M2C_FIELD(&sp8, f32 *, 0x14) = temp_f1;
    temp_f9 = M2C_FIELD(temp_r11_2, f32 *, 0x14);
    M2C_FIELD(&sp8, f32 *, 0x1C) = (f32) lbl_803200BC;
    M2C_FIELD(&sp8, f32 *, 0x18) = temp_f9;
    temp_f11 = M2C_FIELD(temp_r11_2, f32 *, 0x18);
    M2C_FIELD(&sp8, f32 *, 0x20) = temp_f11;
    temp_f2 = M2C_FIELD(temp_r11_2, f32 *, 0x1C);
    M2C_FIELD(&sp8, f32 *, 0x24) = temp_f2;
    temp_f10 = M2C_FIELD(temp_r11_2, f32 *, 0x20);
    M2C_FIELD(&sp8, f32 *, 0x2C) = (f32) lbl_803200BC;
    M2C_FIELD(&sp8, f32 *, 0x28) = temp_f10;
    temp_f5 = M2C_FIELD(temp_r7, f32 *, 0);
    M2C_FIELD(&sp8, f32 *, 0x30) = temp_f5;
    temp_f4 = M2C_FIELD(temp_r7, f32 *, 4);
    M2C_FIELD(&sp8, f32 *, 0x34) = temp_f4;
    temp_f3 = M2C_FIELD(temp_r7, f32 *, 8);
    M2C_FIELD(&sp8, f32 *, 0x3C) = (f32) lbl_803200C0;
    M2C_FIELD(&sp8, f32 *, 0x38) = temp_f3;
    temp_f13 = M2C_FIELD(p_84, f32 *, 0x4);
    temp_f0 = M2C_FIELD(p_84, f32 *, 0x8);
    sp4C = (temp_f0 * temp_f2) + ((temp_f7 * temp_f31) + (temp_f13 * temp_f1)) + temp_f4;
    temp_f31 = (temp_f11 * temp_f0) + ((temp_f13 * temp_f8) + (temp_f7 * sp8)) + temp_f5;
    fx = temp_f7 * temp_f6;
    sp8 = (temp_f0 * temp_f10) + (fx + (temp_f13 * temp_f9)) + temp_f3;
    M2C_FIELD(temp_r8, f32 *, 0x38) = temp_f31;
    M2C_FIELD(temp_r8, s32 *, 0x40) = (s32) M2C_FIELD(&temp_f31, s32 *, 8);
    M2C_FIELD(temp_r8, s32 *, 0x3c) = (s32) M2C_FIELD(&temp_f31, s32 *, 4);
}
