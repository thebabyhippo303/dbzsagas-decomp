/* SuspensionBridge__IntegrateMotion @ 0x800FB8B8 (size: 0x1F0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

float sqrtf(float);
void *fn_8021A2D8(s32);                             /* extern */
extern f32 lbl_8032457C __attribute__((section(".data")));
extern f32 lbl_80324580 __attribute__((section(".data")));
extern f32 lbl_803DC614;
extern f32 lbl_803DC618;
extern f32 lbl_803DC61C;
extern f32 lbl_803DC620;

void SuspensionBridge__IntegrateMotion(void *arg0, f32 farg0) {
    f32 sp20;
    f32 sp1C;
    f32 sp18;
    f32 sp8;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f10;
    f32 temp_f11;
    f32 temp_f11_2;
    f32 temp_f13;
    f32 temp_f1;
    f32 temp_f28;
    f32 temp_f29;
    f32 temp_f9;
    f32 var_f30;
    s32 temp_r9;
    s32 var_ctr;
    s32 var_r11;
    void *temp_r3;
    void *var_r9;

    if (((s32) M2C_FIELD(arg0, s32 *, 0x770) < 0) && (farg0 != lbl_8032457C)) {
        var_r11 = 0;
        do {
            var_ctr = 2;
            var_r9 = (var_r11 * 0x90) + arg0 + 0x4A0;
loop_4:
            temp_f9 = M2C_FIELD(var_r9, f32 *, 0x20);
            temp_f11 = M2C_FIELD(var_r9, f32 *, 0x28);
            temp_f10 = M2C_FIELD(var_r9, f32 *, 0x30);
            temp_f0 = M2C_FIELD(var_r9, f32 *, 0x38);
            temp_f11_2 = (((lbl_803DC614 * (M2C_FIELD(var_r9, f32 *, 0x10) - temp_f9)) + (-lbl_803DC618 * temp_f11)) * farg0) + temp_f11;
            M2C_FIELD(var_r9, f32 *, -8) = temp_f11_2;
            temp_f0_2 = (((lbl_803DC61C * (M2C_FIELD(var_r9, f32 *, 0x18) - temp_f10)) + (-lbl_803DC620 * temp_f0)) * farg0) + temp_f0;
            M2C_FIELD(var_r9, f32 *, 8) = temp_f0_2;
            M2C_FIELD(var_r9, f32 *, -0x10) = (f32) ((temp_f11_2 * farg0) + temp_f9);
            M2C_FIELD(var_r9, f32 *, 0) = (f32) ((temp_f0_2 * farg0) + temp_f10);
            var_r9 += 4;
            var_ctr -= 1;
            if (var_ctr != 0) {
                goto loop_4;
            }
            var_r11 += 1;
        } while (var_r11 <= 1);
        temp_f28 = lbl_803DC614 * -M2C_FIELD(arg0, f32 *, 0x578);
        var_f30 = lbl_8032457C;
        temp_f29 = -lbl_803DC618 * M2C_FIELD(arg0, f32 *, 0x57C);
        temp_r9 = M2C_FIELD(arg0, s32 *, 0x770) & 0x40000000;
        if ((temp_r9 != 0) && (M2C_FIELD(arg0, f32 *, 0x76C) != var_f30) && ((s32) M2C_FIELD(arg0, s32 *, 0x418) == 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x41C) == 0)) {
            temp_r3 = fn_8021A2D8(temp_r9);
            if (temp_r3 != NULL) {
                temp_f0_3 = M2C_FIELD(temp_r3, f32 *, 8);
                temp_f13 = M2C_FIELD(temp_r3, f32 *, 4);
                sp8 = M2C_FIELD(temp_r3, f32 *, 0);
                M2C_FIELD(&sp8, f32 *, 8) = temp_f0_3;
                M2C_FIELD(&sp8, f32 *, 4) = temp_f13;
                sp1C = temp_f13 * temp_f13;
                sp20 = temp_f0_3 * temp_f0_3;
                temp_f1 = sp8 * sp8;
                sp18 = temp_f1;
                var_f30 = M2C_FIELD(arg0, f32 *, 0x76C) * sqrtf(temp_f1 + M2C_FIELD(&sp18, f32 *, 4) + M2C_FIELD(&sp18, f32 *, 8)) * lbl_80324580;
            } else {
                M2C_FIELD(arg0, f32 *, 0x76C) = var_f30;
            }
        }
        temp_f0_4 = ((temp_f28 + temp_f29 + var_f30) * farg0) + M2C_FIELD(arg0, f32 *, 0x57C);
        M2C_FIELD(arg0, f32 *, 0x574) = temp_f0_4;
        M2C_FIELD(arg0, f32 *, 0x570) = (f32) ((temp_f0_4 * farg0) + M2C_FIELD(arg0, f32 *, 0x578));
    }
}

