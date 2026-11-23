/* Weapon__ConstructFromDefinition @ 0x800D0C38 (size: 0x268, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Weapon__Construct(void *, s32);
float sqrtf(float);
M2C_UNK fn_801C2304(s32, s32, s32, s32);
extern f32 lbl_80322878 __attribute__((section(".data")));
extern f32 lbl_8032287C __attribute__((section(".data")));
extern M2C_UNK lbl_80334B88 __attribute__((section(".data")));

typedef struct { f32 v0, v1, v2; } mt_vec3_f32;
void *Weapon__ConstructFromDefinition(void *arg0, s32 arg1) {
    mt_vec3_f32 sp70;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    mt_vec3_f32 sp50;
    mt_vec3_f32 sp40;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp28;
    f32 sp24;
    f32 sp20;
    union { f32 value; unsigned char bytes[12]; } sp14;
    union { f32 value; unsigned char bytes[12]; } sp8;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f11;
    f32 temp_f11_2;
    f32 temp_f12;
    f32 temp_f13;
    f32 temp_f13_2;
    f32 temp_f13_3;
    f32 temp_f13_4;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 var_f10;
    f32 var_f11;
    f32 var_f12;
    s32 temp_cr0_eq;
    s32 var_r11;
    void *temp_r10;
    void *temp_r10_2;
    void *temp_r26;
    void *temp_r7;
    void *temp_r8;
    void *temp_r8_2;

    Weapon__Construct(arg0, arg1);
    var_r11 = 1;
    M2C_FIELD(arg0, M2C_UNK **, 0x64) = &lbl_80334B88;
    do {
        temp_cr0_eq = var_r11 == 0;
        var_r11 -= 1;
    } while (temp_cr0_eq == 0);
    temp_r26 = arg0 + 0x9C;
    fn_801C2304((s32) temp_r26, (s32) (arg0 + 0xC4), (s32) (arg0 + 0xE8), 0);
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
    temp_r10 = arg0 + 0x84;
    temp_r7 = arg0 + 0x90;
    temp_r8 = arg1 + 0x20;
    M2C_FIELD(arg0, f32 *, 0x84) = (f32) lbl_80322878;
    M2C_FIELD(temp_r10, u32 *, 8) = (f32) lbl_80322878;
    M2C_FIELD(temp_r10, f32 *, 4) = (f32) lbl_80322878;
    M2C_FIELD(arg0, f32 *, 0x90) = (f32) lbl_80322878;
    M2C_FIELD(temp_r7, f32 *, 8) = (f32) lbl_80322878;
    M2C_FIELD(temp_r7, f32 *, 4) = (f32) lbl_80322878;
    temp_f0 = M2C_FIELD(temp_r8, s32 *, 4) * lbl_8032287C;
    temp_f13 = M2C_FIELD(temp_r8, f32 *, 8) * lbl_8032287C;
    sp34 = temp_f0;
    sp38 = temp_f13;
    temp_f11 = M2C_FIELD(arg1, f32 *, 0x20) * lbl_8032287C;
    sp30 = temp_f11;
    sp20 = -temp_f11;
    sp24 = -temp_f0;
    sp28 = -temp_f13;
    sp40.v0 = temp_f11;
    sp40.v1 = M2C_FIELD(temp_r8, s32 *, 4) * lbl_8032287C;
    sp40.v2 = M2C_FIELD(temp_r8, f32 *, 8) * lbl_8032287C;
    sp8.value = sp20;
    M2C_FIELD(((f32 *)sp8.bytes), f32 *, 4) = sp24;
    M2C_FIELD(((f32 *)sp8.bytes), f32 *, 8) = sp28;
    M2C_FIELD(((f32 *)sp14.bytes), f32 *, 4) = sp40.v1;
    sp14.value = sp40.v0;
    M2C_FIELD(((f32 *)sp14.bytes), f32 *, 8) = sp40.v2;
    temp_f13_2 = __builtin_fabsf(M2C_FIELD(((f32 *)sp8.bytes), f32 *, 4));
    sp50.v2 = __builtin_fabsf(M2C_FIELD(((f32 *)sp8.bytes), f32 *, 8));
    temp_f11_2 = __builtin_fabsf(sp8.value);
    sp50.v1 = temp_f13_2;
    sp50.v0 = temp_f11_2;
    temp_f0_2 = __builtin_fabsf(sp14.value);
    temp_f13_3 = __builtin_fabsf(M2C_FIELD(((f32 *)sp14.bytes), f32 *, 8));
    sp60 = temp_f0_2;
    temp_f12 = __builtin_fabsf(M2C_FIELD(((f32 *)sp14.bytes), f32 *, 4));
    sp68 = temp_f13_3;
    var_f10 = temp_f0_2;
    sp64 = temp_f12;
    if (!(temp_f11_2 <= temp_f0_2)) {
        var_f10 = temp_f11_2;
    }
    temp_f0_3 = sp50.v1;
    var_f11 = temp_f12;
    if (!(temp_f0_3 <= temp_f12)) {
        var_f11 = temp_f0_3;
    }
    temp_f0_4 = sp50.v2;
    var_f12 = temp_f13_3;
    if (!(temp_f0_4 <= temp_f13_3)) {
        var_f12 = temp_f0_4;
    }
    sp70.v0 = var_f10;
    temp_r10_2 = arg0 + 0xAC;
    sp70.v1 = var_f11;
    temp_r8_2 = arg0 + 0xA0;
    sp70.v2 = var_f12;
    *(mt_vec3_f32 *)((char *)arg0 + 0xAC) = sp70;
    sp70.v1 = -M2C_FIELD(temp_r10_2, f32 *, 4);
    sp70.v0 = -M2C_FIELD(arg0, f32 *, 0xAC);
    sp70.v2 = -M2C_FIELD(temp_r10_2, f32 *, 8);
    *(mt_vec3_f32 *)((char *)arg0 + 0xA0) = sp70;
    temp_f0_5 = M2C_FIELD(temp_r10_2, f32 *, 8);
    temp_f1 = M2C_FIELD(arg0, f32 *, 0xAC);
    temp_f13_4 = M2C_FIELD(temp_r10_2, f32 *, 4);
    temp_f1_2 = temp_f1 * temp_f1;
    sp50.v2 = temp_f0_5 * temp_f0_5;
    sp50.v0 = temp_f1_2;
    sp50.v1 = temp_f13_4 * temp_f13_4;
    M2C_FIELD(temp_r26, f32 *, 0x1C) = sqrtf(sp50.v1 + temp_f1_2 + sp50.v2);
    return arg0;
}
