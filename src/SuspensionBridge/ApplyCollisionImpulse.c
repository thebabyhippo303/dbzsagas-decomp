/* SuspensionBridge__ApplyCollisionImpulse @ 0x800FB344 (size: 0x288, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

f32 Rand__RangeFloat(f32, f32, s32);
extern f32 lbl_80324548 __attribute__((section(".data")));
extern f32 lbl_8032454C __attribute__((section(".data")));
extern f32 lbl_80324550 __attribute__((section(".data")));
extern f32 lbl_80324554 __attribute__((section(".data")));
extern f32 lbl_80324558 __attribute__((section(".data")));
extern f32 lbl_8032455C __attribute__((section(".data")));
extern f32 lbl_80324560 __attribute__((section(".data")));
extern M2C_UNK lbl_803DD634;

typedef struct { f32 v0, v1, v2; } mt_vec3_f32;
void SuspensionBridge__ApplyCollisionImpulse(void *arg0, s32 arg1) {
    volatile mt_vec3_f32 sp8;
    volatile mt_vec3_f32 sp18;
    volatile mt_vec3_f32 sp28;
    volatile mt_vec3_f32 sp38;
    volatile mt_vec3_f32 sp48;
    volatile mt_vec3_f32 sp58;
    char *p_420;
    f32 fx;
    f32 temp_f0;
    f32 temp_f11;
    f32 temp_f11_2;
    f32 temp_f12;
    f32 temp_f13;
    f32 temp_f12_3;
    f32 temp_f12_4;
    f32 temp_f12_2;
    f32 temp_f13_2;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f5;
    f32 temp_f5_2;
    f32 temp_f6;
    register f32 temp_f7;
    f32 temp_f8;
    f32 temp_f9;
    f32 temp_f9_2;
    f32 var_f1;
    void *temp_r6;
    void *temp_r9;

    M2C_FIELD(arg0, f32 *, 0x498) = (f32) (M2C_FIELD(arg0, f32 *, 0x498) + Rand__RangeFloat(lbl_80324548, lbl_8032454C, (s32) &lbl_803DD634));
    M2C_FIELD(arg0, f32 *, 0x49C) = (f32) (M2C_FIELD(arg0, f32 *, 0x49C) + Rand__RangeFloat(lbl_80324550, lbl_80324554, (s32) &lbl_803DD634));
    M2C_FIELD(arg0, f32 *, 0x528) = (f32) (M2C_FIELD(arg0, f32 *, 0x528) + Rand__RangeFloat(lbl_80324548, lbl_8032454C, (s32) &lbl_803DD634));
    M2C_FIELD(arg0, f32 *, 0x52C) = (f32) (M2C_FIELD(arg0, f32 *, 0x52C) + Rand__RangeFloat(lbl_80324550, lbl_80324554, (s32) &lbl_803DD634));
    if ((s32) M2C_FIELD(arg0, s32 *, 0x418) == 0) {
        var_f1 = Rand__RangeFloat(lbl_80324558, lbl_8032455C, (s32) &lbl_803DD634);
        temp_r9 = arg0 + 0x42C;
        p_420 = (char *)arg0 + 0x420;
        temp_f7 = M2C_FIELD(p_420, f32 *, 0x0);
        temp_r6 = arg0 + 0x438;
        sp18.v1 = M2C_FIELD(temp_r9, f32 *, 4) - M2C_FIELD(p_420, f32 *, 0x4);
        temp_f9 = M2C_FIELD(p_420, f32 *, 0xc) - temp_f7;
        sp18.v2 = M2C_FIELD(temp_r9, f32 *, 8) - M2C_FIELD(p_420, f32 *, 0x8);
        sp18.v0 = temp_f9;
        temp_f8 = temp_f9 * temp_f9;
        temp_f4 = M2C_FIELD(arg1, f32 *, 8);
        temp_f6 = M2C_FIELD(arg1, f32 *, 0);
        temp_f5 = M2C_FIELD(arg1, f32 *, 4);
        temp_f12 = temp_f6 - temp_f7;
        temp_f11 = temp_f5 - M2C_FIELD(p_420, f32 *, 0x4);
        sp48.v0 = temp_f12;
        temp_f13 = temp_f4 - M2C_FIELD(p_420, f32 *, 0x8);
        sp48.v1 = temp_f11;
        sp48.v2 = temp_f13;
        temp_f12_2 = temp_f12 * temp_f9;
        sp58.v0 = temp_f12_2;
        sp58.v2 = temp_f13 * sp18.v2;
        sp58.v1 = temp_f11 * sp18.v1;
        temp_f0 = sp18.v1;
        temp_f13_2 = sp18.v2;
        sp58.v1 = temp_f0 * temp_f0;
        sp58.v0 = temp_f8;
        fx = temp_f8 + sp58.v1 + sp58.v2;
        sp58.v2 = temp_f13_2 * temp_f13_2;
        temp_f12_3 = (temp_f12_2 + sp58.v1 + sp58.v2) / fx;
        temp_f9_2 = temp_f12_3 * temp_f9;
        sp38.v0 = temp_f9_2;
        temp_f11_2 = sp18.v2 * temp_f12_3;
        temp_f12 = sp18.v1 * temp_f12_3;
        sp38.v2 = temp_f11_2;
        sp38.v1 = temp_f12;
        sp28.v2 = temp_f11_2 + M2C_FIELD(p_420, f32 *, 0x8);
        sp28.v0 = temp_f7 + temp_f9_2;
        sp28.v1 = M2C_FIELD(p_420, f32 *, 0x4) + temp_f12;
        sp8 = sp28;
        temp_f12_3 = temp_f6 - sp8.v0;
        temp_f4_2 = temp_f4 - sp8.v2;
        temp_f5_2 = temp_f5 - sp8.v1;
        sp18.v0 = temp_f12_3;
        sp18.v2 = temp_f4_2;
        sp18.v1 = temp_f5_2;
        temp_f12_4 = M2C_FIELD(p_420, f32 *, 0x18) * temp_f12_3;
        sp28.v0 = temp_f12_4;
        sp28.v2 = M2C_FIELD(temp_r6, f32 *, 8) * temp_f4_2;
        sp28.v1 = M2C_FIELD(temp_r6, f32 *, 4) * temp_f5_2;
        if (!((temp_f12_4 + sp28.v1 + sp28.v2) < lbl_80324560)) {
            var_f1 = -var_f1;
        }
        M2C_FIELD(arg0, f32 *, 0x574) = (f32) (M2C_FIELD(arg0, f32 *, 0x574) + var_f1);
    }
    M2C_FIELD(arg0, s32 *, 0x770) = (s32) (M2C_FIELD(arg0, s32 *, 0x770) | 0x80000000);
}
