/* Dende__FollowSpline @ 0x80040614 (size: 0x1E4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Script__PushFloat(void *, s32, f32);
float Script__PopFloat(void *, void *);
void * Script__PopInt(void *, void *);
extern f32 lbl_80311BF8 __attribute__((section(".data")));

void Dende__FollowSpline(void *arg0, void *arg1) {
    union { f32 value; unsigned char bytes[12]; } sp28;
    f32 sp20;
    union { f32 value; unsigned char bytes[12]; } sp18;
    union { f32 value; unsigned char bytes[16]; } sp8;
    f32 temp_f29;
    f64 temp_f30;
    f32 temp_f31_2;
    f32 var_f0;
    f32 var_f0_2;
    s32 temp_cr0_eq;
    void *temp_r30;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;

    temp_f29 = lbl_80311BF8;
    temp_r30 = Script__PopInt(arg0, arg1);
    sp8.value = Script__PopFloat(arg0, arg1);
    M2C_FIELD(((f32 *)sp8.bytes), f32 *, 4) = Script__PopFloat(arg0, arg1);
    M2C_FIELD(((f32 *)sp8.bytes), f32 *, 8) = Script__PopFloat(arg0, arg1);
    sp18.value = sp8.value;
    M2C_FIELD(((f32 *)sp18.bytes), f32 *, 8) = (f32) M2C_FIELD(((f32 *)sp8.bytes), f32 *, 8);
    temp_r9 = M2C_FIELD(temp_r30, void **, 0x14);
    M2C_FIELD(((f32 *)sp18.bytes), f32 *, 4) = (f32) M2C_FIELD(((f32 *)sp8.bytes), f32 *, 4);
    temp_r9_2 = M2C_FIELD(temp_r30, void **, 0x14);
    M2C_FIELD(temp_r9_2, M2C_UNK (**)(f32 *, void *), 0x14)(((f32 *)sp18.bytes), temp_r30 + M2C_FIELD(temp_r9_2, u16 *, 0x10));
    temp_f31_2 = sp8.value - sp18.value;
    temp_r9_3 = M2C_FIELD(temp_r30, void **, 0x14);
    M2C_FIELD(temp_r9_3, M2C_UNK (**)(f32 *, void *, f32), 0x14)(((f32 *)sp28.bytes), temp_r30 + M2C_FIELD(temp_r9_3, s16 *, 0x10), (M2C_FIELD(temp_r9, f32 (**)(void *, f32 *), 0x24)(temp_r30 + M2C_FIELD(temp_r9, s16 *, 0x20), ((f32 *)sp18.bytes))));
    temp_f30 = M2C_FIELD(((f32 *)sp8.bytes), f32 *, 8) - sp20;
    temp_cr0_eq = temp_f31_2 == -temp_f29;
    sp18.value = sp28.value;
    M2C_FIELD(((f32 *)sp18.bytes), f32 *, 8) = (f32) M2C_FIELD(((f32 *)sp28.bytes), f32 *, 8);
    M2C_FIELD(((f32 *)sp18.bytes), f32 *, 4) = (f32) M2C_FIELD(((f32 *)sp28.bytes), f32 *, 4);
    if (temp_cr0_eq == 0) {
        var_f0 = sp18.value - temp_f29;
    } else if (!(temp_f31_2 <= temp_f29)) {
        var_f0 = sp18.value + temp_f29;
    } else {
        var_f0 = sp18.value + temp_f31_2;
    }
    sp18.value = var_f0;
    if (!(temp_f30 >= -temp_f29)) {
        var_f0_2 = sp20 - temp_f29;
    } else if (!(temp_f30 <= temp_f29)) {
        var_f0_2 = sp20 + temp_f29;
    } else {
        var_f0_2 = sp20 + temp_f30;
    }
    sp20 = var_f0_2;
    Script__PushFloat(arg0, (s32) arg1, sp18.value);
    Script__PushFloat(arg0, (s32) arg1, M2C_FIELD(((f32 *)sp18.bytes), f32 *, 4));
    Script__PushFloat(arg0, (s32) arg1, sp20);
}
