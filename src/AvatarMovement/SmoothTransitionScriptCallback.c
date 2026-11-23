/* AvatarMovement__SmoothTransitionScriptCallback @ 0x800B73C4 (size: 0x138, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


u32 fn_8023E8E0(s32, void *);                       /* extern */
extern f32 lbl_803213C0;

void AvatarMovement__SmoothTransitionScriptCallback(void *arg0) {
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 sp20;
    f32 sp1C;
    f32 sp18;
    f32 sp10;
    f32 spC;
    f32 sp8;
    f32 temp_f10;
    f32 temp_f11;
    f32 temp_f8;
    f32 temp_f8_2;
    f32 temp_f9;
    f32 var_f0;
    void *temp_r10;
    void *temp_r11;
    void *temp_r9;
    void *temp_r9_4;
    void *temp_r9_5;

    temp_r9 = M2C_FIELD(arg0, void **, 0);
    var_f0 = (f32) (f64) fn_8023E8E0(M2C_FIELD(temp_r9, s32 *, 0x84) + 0x108, temp_r9) * lbl_803213C0;
    M2C_ERROR(/* unknown instruction: cror cr0un, cr0eq, cr0lt */);
    if (0 == 0) {
        var_f0 = M2C_FIELD(arg0, f32 *, 0xF0);
    }
    temp_f8 = M2C_FIELD(arg0, f32 *, 0xF4);
    M2C_FIELD(arg0, f32 *, 0xF4) = var_f0;
    temp_f8_2 = var_f0 - temp_f8;
    temp_f10 = M2C_FIELD(arg0, f32 *, 0xE0) * temp_f8_2;
    temp_f9 = M2C_FIELD(arg0, f32 *, 0xe8) * temp_f8_2;
    sp18 = temp_f10;
    temp_f11 = M2C_FIELD(arg0, f32 *, 0xe4) * temp_f8_2;
    sp20 = temp_f9;
    sp1C = temp_f11;
    temp_r10 = M2C_FIELD(arg0, void **, 0);
    sp28 = M2C_FIELD(temp_r10, u32 *, 0x38) + temp_f10;
    sp2C = M2C_FIELD(temp_r10, f32 *, 0x3c) + temp_f11;
    M2C_FIELD(temp_r10, u32 *, 0x38) = sp28;
    sp30 = M2C_FIELD(temp_r10, f32 *, 0x40) + temp_f9;
    M2C_FIELD(temp_r10, f32 *, 0x40) = sp30;
    M2C_FIELD(temp_r10, f32 *, 0x3c) = sp2C;
    sp8 = sp28;
    sp10 = sp30;
    spC = sp2C;
    temp_r9_4 = M2C_FIELD(arg0, void **, 0);
    M2C_FIELD(temp_r9_4, f32 *, 0x75C) = (f32) ((M2C_FIELD(arg0, f32 *, 0xEC) * temp_f8_2) + M2C_FIELD(temp_r9_4, f32 *, 0x75C));
    temp_r11 = M2C_FIELD(arg0, void **, 0);
    temp_r9_5 = M2C_FIELD(temp_r11, void **, 0x34);
    M2C_FIELD(temp_r9_5, M2C_UNK (**)(void *), 0xAC)(temp_r11 + M2C_FIELD(temp_r9_5, s16 *, 0xA8));
}
