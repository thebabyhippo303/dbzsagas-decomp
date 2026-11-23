/* Vector3__SafeNormalize @ 0x800312AC (size: 0x160, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

float Script__PopFloat(void *, void *);
void Script__PushFloat(void *, void *, float);
float sqrtf(float);
extern f32 lbl_8031176C __attribute__((section(".data")));

void Vector3__SafeNormalize(void *arg0, void *arg1) {
    f32 sp3C;
    f32 sp38;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 sp20;
    f32 sp1C;
    f32 sp18;
    f32 sp8;
    f32 temp_f0;
    f32 temp_f13;
    f32 temp_f13_2;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    s32 var_r0;

    M2C_FIELD(&sp8, f32 *, 8) = Script__PopFloat(arg0, arg1);
    M2C_FIELD(&sp8, f32 *, 4) = Script__PopFloat(arg0, arg1);
    temp_f1 = Script__PopFloat(arg0, arg1);
    sp8 = temp_f1;
    temp_f1_2 = temp_f1 * temp_f1;
    temp_f0 = M2C_FIELD(&sp8, f32 *, 4);
    temp_f13 = M2C_FIELD(&sp8, f32 *, 8);
    sp18 = temp_f1_2;
    sp1C = temp_f0 * temp_f0;
    sp20 = temp_f13 * temp_f13;
    temp_f1_3 = sqrtf(temp_f1_2 + M2C_FIELD(&sp18, f32 *, 4) + M2C_FIELD(&sp18, f32 *, 8));
    sp38 = temp_f1_3;
    sp3C = lbl_8031176C;
    if ((s32) (u8) (M2C_BITWISE(u32, sp38) >> 0x17U) != 0) {
        var_r0 = 0 + M2C_CARRY;
    } else {
        var_r0 = 1;
    }
    if (var_r0 == 0) {
        temp_f13_2 = lbl_8031176C / temp_f1_3;
        sp28 = M2C_FIELD(&sp8, f32 *, 0) * temp_f13_2;
        sp30 = M2C_FIELD(&sp8, f32 *, 8) * temp_f13_2;
        sp2C = M2C_FIELD(&sp8, f32 *, 4) * temp_f13_2;
        M2C_FIELD(&sp8, f32 *, 0) = sp28;
        M2C_FIELD(&sp8, f32 *, 8) = sp30;
        M2C_FIELD(&sp8, f32 *, 4) = sp2C;
        sp18 = sp28;
        sp1C = sp2C;
        sp20 = sp30;
    }
    Script__PushFloat(arg0, arg1, M2C_FIELD(&sp8, f32 *, 8));
    Script__PushFloat(arg0, arg1, M2C_FIELD(&sp8, f32 *, 4));
    Script__PushFloat(arg0, arg1, sp8);
}
