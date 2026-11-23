/* WaterPool__IntersectTriangle @ 0x802930D4 (size: 0x424, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

f32 sqrtf(f32);
s32 Math__ClassifySign(f32);
s32 Triangle__IsInsideFromEdgeSigns(s32, s32, s32);
extern f32 lbl_8034F914 __attribute__((section(".data")));
extern f32 lbl_8034F918 __attribute__((section(".data")));
extern f32 lbl_8034F91C __attribute__((section(".data")));

typedef struct { f32 v0, v1, v2; } mt_vec3_f32;
void WaterPool__IntersectTriangle(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4, f32 *arg5) {
    f32 sp5C;
    f32 sp58;
    mt_vec3_f32 sp8;
    mt_vec3_f32 sp18;
    mt_vec3_f32 sp28;
    mt_vec3_f32 sp38;
    mt_vec3_f32 sp48;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f10_3;
    f32 temp_f10_4;
    f32 temp_f11;
    f32 temp_f11_2;
    f32 temp_f11_3;
    f32 temp_f11_4;
    f32 temp_f11_5;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f12_3;
    f32 temp_f12_4;
    f32 temp_f12_5;
    f32 temp_f12_6;
    f32 temp_f13;
    f32 temp_f13_2;
    f32 temp_f13_3;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f4;
    f32 temp_f5;
    f32 temp_f5_2;
    f32 temp_f6;
    f32 temp_f7;
    f32 temp_f7_2;
    f32 temp_f8;
    f32 temp_f8_2;
    f32 temp_f9;
    f32 var_f31;
    s32 temp_r29;
    s32 temp_r30;
    s32 var_r10;
    u32 lbits;
    u32 cbits;
    u32 eb;
    s32 ok;
    void *temp_r10;

    temp_f7 = M2C_FIELD(arg2, f32 *, 4);
    temp_f9 = M2C_FIELD(arg2, f32 *, 0);
    temp_f5 = M2C_FIELD(arg2, f32 *, 8);
    temp_f8 = M2C_FIELD(arg3, f32 *, 8) - temp_f5;
    temp_f10 = M2C_FIELD(arg1, f32 *, 4) - temp_f7;
    temp_f0 = M2C_FIELD(arg3, f32 *, 4) - temp_f7;
    temp_f13 = M2C_FIELD(arg1, f32 *, 0) - temp_f9;
    sp28.v1 = temp_f0;
    temp_f12 = M2C_FIELD(arg3, f32 *, 0) - temp_f9;
    temp_f11 = M2C_FIELD(arg1, f32 *, 8) - temp_f5;
    sp28.v0 = temp_f12;
    sp38.v0 = temp_f13;
    sp28.v2 = temp_f8;
    sp38.v1 = temp_f10;
    sp48.v0 = (temp_f0 * temp_f11) - (temp_f10 * temp_f8);
    sp38.v2 = temp_f11;
    sp48.v1 = (f32) ((temp_f13 * temp_f8) - (temp_f12 * temp_f11));
    sp48.v2 = (f32) ((temp_f12 * temp_f10) - (temp_f13 * temp_f0));
    sp18 = sp48;
    temp_f0_2 = sp18.v1;
    temp_f13_2 = sp18.v2;
    temp_f1 = sp18.v0 * sp18.v0;
    sp28.v0 = temp_f1;
    sp28.v1 = temp_f0_2 * temp_f0_2;
    sp28.v2 = temp_f13_2 * temp_f13_2;
    temp_f1_2 = sqrtf(temp_f1 + sp28.v1 + sp28.v2);
    sp58 = temp_f1_2;
    sp5C = lbl_8034F914;
    lbits = M2C_BITWISE(u32, sp58);
    cbits = M2C_BITWISE(u32, sp5C);
    eb = (lbits >> 23) & 0xFF;
    if (eb == 0) {
        ok = 1;
    } else {
        ok = ((eb + 127) >= ((cbits >> 23) & 0xFF));
    }
    if (ok != 0) {
        temp_f13_3 = lbl_8034F914 / temp_f1_2;
        sp38.v0 = sp18.v0 * temp_f13_3;
        sp38.v2 = sp18.v2 * temp_f13_3;
        sp38.v1 = sp18.v1 * temp_f13_3;
        sp18 = sp38;
        sp28 = sp38;
    }
    temp_r10 = arg0 + 0xC;
    sp8 = sp18;
    temp_f8_2 = M2C_FIELD(arg0, f32 *, 0xC) - M2C_FIELD(arg0, f32 *, 0);
    sp28.v2 = M2C_FIELD(temp_r10, f32 *, 8) - M2C_FIELD(arg0, f32 *, 8);
    sp28.v0 = temp_f8_2;
    sp28.v1 = M2C_FIELD(temp_r10, f32 *, 4) - M2C_FIELD(arg0, f32 *, 4);
    temp_f11_2 = temp_f8_2 * sp8.v0;
    sp38.v0 = temp_f11_2;
    sp38.v2 = sp28.v2 * sp8.v2;
    sp38.v1 = sp28.v1 * sp8.v1;
    temp_f4 = temp_f11_2 + sp38.v1 + sp38.v2;
    temp_f0_3 = M2C_FIELD(arg1, f32 *, 0) - M2C_FIELD(arg0, f32 *, 0);
    temp_f12_2 = M2C_FIELD(arg1, f32 *, 4) - M2C_FIELD(arg0, f32 *, 4);
    sp38.v0 = temp_f0_3;
    temp_f11_3 = M2C_FIELD(arg1, f32 *, 8) - M2C_FIELD(arg0, f32 *, 8);
    sp38.v1 = temp_f12_2;
    sp38.v2 = temp_f11_3;
    temp_f0_4 = temp_f0_3 * sp8.v0;
    sp48.v0 = temp_f0_4;
    sp48.v1 = temp_f12_2 * sp8.v1;
    sp48.v2 = temp_f11_3 * sp8.v2;
    var_f31 = (temp_f0_4 + sp48.v1 + sp48.v2) / temp_f4;
    if ((__builtin_fabsf(temp_f4) < lbl_8034F918) || (var_f31 < lbl_8034F91C)) {
        goto reject;
    }
    if (!(var_f31 > lbl_8034F914)) {
        goto cont;
    }
reject:
    var_r10 = 0;
    goto join;
cont:
    temp_f10_2 = temp_f8_2 * var_f31;
    temp_f11_4 = sp28.v2 * var_f31;
    sp38.v0 = M2C_FIELD(arg0, f32 *, 0) + temp_f10_2;
    temp_f12_3 = sp28.v1 * var_f31;
    sp48.v0 = temp_f10_2;
    sp38.v1 = M2C_FIELD(arg0, f32 *, 4) + temp_f12_3;
    sp38.v2 = M2C_FIELD(arg0, f32 *, 8) + temp_f11_4;
    var_r10 = 1;
    sp18 = sp38;
    sp48.v1 = temp_f12_3;
    sp48.v2 = temp_f11_4;
join:
    if (var_r10 == 0) {
        goto end;
    }
    if (!(var_f31 < *arg5)) {
        goto end;
    }
    temp_r29 = Math__ClassifySign(((M2C_FIELD(arg2, f32 *, 0) - M2C_FIELD(arg1, f32 *, 0)) * (sp18.v2 - M2C_FIELD(arg2, f32 *, 8))) - ((M2C_FIELD(arg2, f32 *, 8) - M2C_FIELD(arg1, f32 *, 8)) * (sp18.v0 - M2C_FIELD(arg2, f32 *, 0))));
    temp_r30 = Math__ClassifySign(((M2C_FIELD(arg3, f32 *, 0) - M2C_FIELD(arg2, f32 *, 0)) * (sp18.v2 - M2C_FIELD(arg3, f32 *, 8))) - ((M2C_FIELD(arg3, f32 *, 8) - M2C_FIELD(arg2, f32 *, 8)) * (sp18.v0 - M2C_FIELD(arg3, f32 *, 0))));
    if (Triangle__IsInsideFromEdgeSigns(temp_r29, temp_r30, Math__ClassifySign(((M2C_FIELD(arg1, f32 *, 0) - M2C_FIELD(arg3, f32 *, 0)) * (sp18.v2 - M2C_FIELD(arg1, f32 *, 8))) - ((M2C_FIELD(arg1, f32 *, 8) - M2C_FIELD(arg3, f32 *, 8)) * (sp18.v0 - M2C_FIELD(arg1, f32 *, 0))))) != 0) {
        *arg5 = var_f31;
        *(mt_vec3_f32 *)((char *)arg4 + 0) = sp18;
    }
end:;
}
