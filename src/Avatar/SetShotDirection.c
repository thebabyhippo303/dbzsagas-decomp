/* Avatar__SetShotDirection @ 0x8003A680 (size: 0x2F0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Avatar__SetWeaponLaunchParameters(void *, void *, f32);
float Script__PopFloat(void *, void *);
void * Script__PopInt(void *, void *);
float cosf(float);
float sinf(float);
extern f32 lbl_80311A20 __attribute__((section(".data")));
extern f32 lbl_80311A24 __attribute__((section(".data")));
extern f32 lbl_803DE520;

void Avatar__SetShotDirection(void *arg0, void *arg1) {
    s32 ld_10;
    f32 sp78;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp40;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32  sp30_b;
    f32 sp8;
    f32 *temp_r30;
    f32 *var_r11;
    f32 temp_f0;
    f32 temp_f11;
    f32 temp_f12;
    f32 temp_f1;
    f32 temp_f29;
    f32 temp_f2;
    f32 temp_f30;
    f32 temp_f30_2;
    f32 temp_f31;
    f32 temp_f4;
    s32 temp_r0;
    s32 var_r10;
    void *temp_r28;
    void *var_r9;

    temp_r28 = Script__PopInt(arg0, arg1);
    temp_f30 = Script__PopFloat(arg0, arg1);
    var_r11 = &sp8;
    temp_f29 = Script__PopFloat(arg0, arg1);
    temp_r30 = var_r11;
    var_r9 = temp_r28 + 0x44;
    var_r10 = 0x18;
    do {
        var_r10 -= 0x18;
        M2C_FIELD(var_r11, s32 *, 0) = M2C_FIELD(var_r9, s32 *, 0);
        M2C_FIELD(var_r11, f32 *, 4) = (s32) M2C_FIELD(var_r9, s32 *, 4);
        M2C_FIELD(var_r11, s32 *, 8) = (s32) M2C_FIELD(var_r9, s32 *, 8);
        M2C_FIELD(var_r11, s32 *, 0xC) = (s32) M2C_FIELD(var_r9, s32 *, 0xC);
        ld_10 = M2C_FIELD(var_r9, s32 *, 0x10);
        M2C_FIELD(var_r11, s32 *, 0x10) = (s32) ld_10;
        temp_r0 = M2C_FIELD(var_r9, s32 *, 0x14);
        var_r9 += 0x18;
        M2C_FIELD(var_r11, s32 *, 0x14) = temp_r0;
        var_r11 += 0x18;
    } while (var_r10 != 0);
    M2C_FIELD(var_r11, s32 *, 0) = M2C_FIELD(var_r9, s32 *, 0);
    temp_f31 = temp_f30 * lbl_803DE520;
    M2C_FIELD(var_r11, f32 *, 4) = (s32) M2C_FIELD(var_r9, s32 *, 4);
    M2C_FIELD(var_r11, s32 *, 8) = (s32) M2C_FIELD(var_r9, s32 *, 8);
    temp_f30_2 = sinf(temp_f31);
    temp_f1 = cosf(temp_f31);
    sp30 = temp_f1;
    M2C_FIELD(&sp30, f32 *, 0x1C) = (f32) lbl_80311A20;
    M2C_FIELD(&sp30, f32 *, 0x10) = (f32) lbl_80311A24;
    M2C_FIELD(&sp30, f32 *, 8) = (f32) -temp_f30_2;
    M2C_FIELD(&sp30, f32 *, 4) = (f32) lbl_80311A20;
    M2C_FIELD(&sp30, f32 *, 0xC) = (f32) lbl_80311A20;
    M2C_FIELD(&sp30, f32 *, 0x14) = (f32) lbl_80311A20;
    M2C_FIELD(&sp30, f32 *, 0x20) = temp_f1;
    M2C_FIELD(&sp30, f32 *, 0x18) = temp_f30_2;
    temp_f4 = (sp8 * sp30) + (M2C_FIELD(temp_r30, f32 *, 8) * temp_f30_2);
    sp58 = temp_f4;
    temp_f2 = (M2C_FIELD(temp_r30, f32 *, 8) * M2C_FIELD(&sp30, f32 *, 0x1C)) + ((sp8 * M2C_FIELD(&sp30, f32 *, 4)) + (M2C_FIELD(temp_r30, f32 *, 4) * M2C_FIELD(&sp30, f32 *, 0x10)));
    sp5C = temp_f2;
    sp60 = (M2C_FIELD(temp_r30, f32 *, 8) * M2C_FIELD(&sp30, f32 *, 0x20)) + ((sp8 * M2C_FIELD(&sp30, f32 *, 8)) + (M2C_FIELD(temp_r30, f32 *, 4) * M2C_FIELD(&sp30, f32 *, 0x14)));
    temp_f0 = (M2C_FIELD(temp_r30, f32 *, 0x14) * M2C_FIELD(&sp30, f32 *, 0x20)) + ((M2C_FIELD(temp_r30, f32 *, 0xC) * M2C_FIELD(&sp30, f32 *, 8)) + (M2C_FIELD(temp_r30, f32 *, 0x10) * M2C_FIELD(&sp30, f32 *, 0x14)));
    sp6C = temp_f0;
    temp_f12 = (M2C_FIELD(temp_r30, f32 *, 0x20) * M2C_FIELD(&sp30, f32 *, 0x18)) + ((M2C_FIELD(temp_r30, f32 *, 0x18) * sp30) + (M2C_FIELD(temp_r30, f32 *, 0x1C) * M2C_FIELD(&sp30, f32 *, 0xC)));
    sp70 = temp_f12;
    temp_f11 = (M2C_FIELD(temp_r30, f32 *, 0x20) * M2C_FIELD(&sp30, f32 *, 0x1C)) + ((M2C_FIELD(temp_r30, f32 *, 0x18) * M2C_FIELD(&sp30, f32 *, 4)) + (M2C_FIELD(temp_r30, f32 *, 0x1C) * M2C_FIELD(&sp30, f32 *, 0x10)));
    sp74 = temp_f11;
    sp78 = (M2C_FIELD(temp_r30, f32 *, 0x20) * M2C_FIELD(&sp30, f32 *, 0x20)) + ((M2C_FIELD(temp_r30, f32 *, 0x18) * M2C_FIELD(&sp30, f32 *, 8)) + (M2C_FIELD(temp_r30, f32 *, 0x1C) * M2C_FIELD(&sp30, f32 *, 0x14)));
    sp8 = temp_f4;
    M2C_FIELD(temp_r30, f32 *, 4) = temp_f2;
    M2C_FIELD(temp_r30, f32 *, 8) = sp60;
    M2C_FIELD(temp_r30, f32 *, 0xC) = ((M2C_FIELD(temp_r30, f32 *, 0x14) * M2C_FIELD(&sp30, f32 *, 0x18)) + ((M2C_FIELD(temp_r30, f32 *, 0xC) * sp30) + (M2C_FIELD(temp_r30, f32 *, 0x10) * M2C_FIELD(&sp30, f32 *, 0xC))));
    M2C_FIELD(temp_r30, f32 *, 0x10) = ((M2C_FIELD(temp_r30, f32 *, 0x14) * M2C_FIELD(&sp30, f32 *, 0x1C)) + ((M2C_FIELD(temp_r30, f32 *, 0xC) * M2C_FIELD(&sp30, f32 *, 4)) + (M2C_FIELD(temp_r30, f32 *, 0x10) * M2C_FIELD(&sp30, f32 *, 0x10))));
    sp30_b = temp_f12;
    M2C_FIELD(temp_r30, f32 *, 0x14) = temp_f0;
    M2C_FIELD(temp_r30, f32 *, 0x20) = sp78;
    sp34 = temp_f11;
    sp38 = sp78;
    M2C_FIELD(temp_r30, f32 *, 0x18) = temp_f12;
    M2C_FIELD(temp_r30, f32 *, 0x1C) = temp_f11;
    sp40 = sp30_b;
    M2C_FIELD(&sp40, f32 *, 4) = (f32) M2C_FIELD(&sp30_b, f32 *, 4);
    M2C_FIELD(&sp40, f32 *, 8) = (f32) M2C_FIELD(&sp30_b, f32 *, 8);
    Avatar__SetWeaponLaunchParameters(temp_r28 + 0x15A0, &sp40, temp_f29);
}
