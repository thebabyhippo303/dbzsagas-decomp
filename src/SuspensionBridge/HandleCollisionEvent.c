/* SuspensionBridge__HandleCollisionEvent @ 0x800FBE78 (size: 0x2B8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void SuspensionBridge__ApplyCollisionImpulse(void *, s32);
float sqrtf(float);
extern f32 lbl_803245E4 __attribute__((section(".data")));
extern f32 lbl_803245E8 __attribute__((section(".data")));

typedef struct { f32 v0, v1, v2; } mt_vec3_f32;
void SuspensionBridge__HandleCollisionEvent(void *arg0, s32 arg1, void *arg2) {
    volatile mt_vec3_f32 sp8;
    volatile mt_vec3_f32 sp18;
    volatile mt_vec3_f32 sp28;
    volatile mt_vec3_f32 sp38;
    volatile mt_vec3_f32 sp48;
    volatile mt_vec3_f32 sp58;
    volatile mt_vec3_f32 sp68;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f11;
    f32 temp_f11_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f13;
    f32 temp_f13_2;
    f32 temp_f13_3;
    f64 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f4;
    f32 temp_f5;
    f32 temp_f6;
    f32 temp_f7;
    f32 temp_f9;
    f32 temp_f9_2;
    f32 var_r0;
    f32 var_r11;
    f32 var_r9;
    void *temp_r26;
    void *temp_r27;
    void *temp_r28;
    void *temp_r31;

    if (arg1 == 0x30016) {
        temp_r31 = arg0 + 0x420;
        temp_r28 = arg0 + 0x42C;
        temp_r27 = arg2 + 4;
        sp28.v1 = M2C_FIELD(temp_r28, f32 *, 4) - M2C_FIELD(temp_r31, f32 *, 4);
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x42C) - M2C_FIELD(arg0, f32 *, 0x420);
        sp28.v2 = M2C_FIELD(temp_r28, f32 *, 8) - M2C_FIELD(temp_r31, f32 *, 8);
        sp28.v0 = temp_f1;
        temp_f1_2 = temp_f1 * temp_f1;
        temp_f0 = sp28.v1;
        temp_f13 = sp28.v2;
        sp38.v0 = temp_f1_2;
        sp38.v1 = temp_f0 * temp_f0;
        sp38.v2 = temp_f13 * temp_f13;
        temp_f1_3 = sqrtf(temp_f1_2 + sp38.v1 + sp38.v2);
        if (temp_f1_3 == lbl_803245E4) {
            sp18.v1 = M2C_FIELD(temp_r31, f32 *, 4);
            sp18.v0 = M2C_FIELD(arg0, f32 *, 0x420);
            sp18.v2 = M2C_FIELD(temp_r31, f32 *, 8);
        } else {
            temp_f0_2 = lbl_803245E8 / temp_f1_3;
            temp_f4 = M2C_FIELD(arg0, f32 *, 0x420);
            temp_f6 = sp28.v0 * temp_f0_2;
            temp_f5 = sp28.v1 * temp_f0_2;
            sp38.v0 = temp_f6;
            temp_f7 = sp28.v2 * temp_f0_2;
            sp38.v1 = temp_f5;
            sp38.v2 = temp_f7;
            temp_f10 = M2C_FIELD(arg2, f32 *, 4) - temp_f4;
            temp_f9 = temp_f10 * temp_f6;
            temp_f0_3 = M2C_FIELD(temp_r27, f32 *, 4) - M2C_FIELD(temp_r31, f32 *, 4);
            sp58.v0 = temp_f9;
            temp_f13_2 = M2C_FIELD(temp_r27, f32 *, 8) - M2C_FIELD(temp_r31, f32 *, 8);
            sp48.v0 = temp_f10;
            sp58.v1 = temp_f0_3 * temp_f5;
            sp48.v1 = temp_f0_3;
            sp58.v2 = temp_f13_2 * temp_f7;
            sp48.v2 = temp_f13_2;
            temp_f9_2 = temp_f9 + sp58.v1 + sp58.v2;
            if (!(temp_f9_2 >= lbl_803245E4)) {
                var_r0 = M2C_FIELD(temp_r31, f32 *, 8);
                var_r9 = M2C_FIELD(temp_r31, f32 *, 4);
                var_r11 = M2C_FIELD(arg0, f32 *, 0x420);
                goto block_7;
            }
            if (!(temp_f9_2 <= temp_f1_3)) {
                var_r0 = M2C_FIELD(temp_r28, f32 *, 8);
                var_r9 = M2C_FIELD(temp_r28, f32 *, 4);
                var_r11 = M2C_FIELD(arg0, f32 *, 0x42C);
block_7:
                sp48.v1 = var_r9;
                sp48.v0 = var_r11;
                sp48.v2 = var_r0;
            } else {
                temp_f10_2 = temp_f7 * temp_f9_2;
                temp_f12 = temp_f6 * temp_f9_2;
                sp68.v2 = temp_f10_2;
                temp_f11 = temp_f5 * temp_f9_2;
                sp68.v0 = temp_f12;
                sp68.v1 = temp_f11;
                sp58.v0 = temp_f4 + temp_f12;
                sp58.v2 = M2C_FIELD(temp_r31, f32 *, 8) + temp_f10_2;
                sp58.v1 = M2C_FIELD(temp_r31, f32 *, 4) + temp_f11;
                sp48 = sp58;
            }
            sp18 = sp48;
        }
        temp_f12_2 = M2C_FIELD(arg2, f32 *, 4) - sp18.v0;
        sp8.v0 = temp_f12_2;
        sp8.v1 = M2C_FIELD(temp_r27, f32 *, 4) - sp18.v1;
        sp8.v2 = M2C_FIELD(temp_r27, f32 *, 8) - sp18.v2;
        temp_f12_3 = temp_f12_2 * temp_f12_2;
        temp_f0_4 = sp8.v1;
        temp_f13_3 = sp8.v2;
        temp_f11_2 = M2C_FIELD(arg2, f32 *, 0x14);
        sp28.v0 = temp_f12_3;
        sp28.v1 = temp_f0_4 * temp_f0_4;
        sp28.v2 = temp_f13_3 * temp_f13_3;
        if (!((temp_f12_3 + sp28.v1 + sp28.v2) >= (temp_f11_2 * temp_f11_2))) {
            temp_r26 = arg2 + 4;
            sp8.v0 = M2C_FIELD(arg2, f32 *, 4);
            sp8.v1 = (f32) M2C_FIELD(temp_r26, f32 *, 4);
            sp8.v2 = (f32) M2C_FIELD(temp_r26, f32 *, 8);
            SuspensionBridge__ApplyCollisionImpulse(arg0, (s32) &sp8);
        }
    }
}
