/* CActor__Initialize @ 0x801DC3F0 (size: 0x110, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Animation__SetRate(void *, float);
M2C_UNK fn_801DC500(s32, s32);
M2C_UNK fn_8023F588(s32, s32);
M2C_UNK BoneChainSet__CreateFromModel(s32);
M2C_UNK CActor__ResetLighting(s32);
extern f32 lbl_80343B4C __attribute__((section(".data")));
extern f32 lbl_80343B50 __attribute__((section(".data")));

s32 CActor__Initialize(s32 arg0, s32 arg1) {
    f32 temp_f31;
    s32 temp_r4;
    s32 var_ctr;
    s32 var_r11;
    s32 zero;
    f32 *rp;
    char *arr;
    s32 var_r29;
    s32 var_r30;
    void *temp_r9;
    void *temp_r9_2;

    if (fn_801DC500(arg0, arg1) == 0) {
        return 0;
    }
    temp_r9 = M2C_FIELD(arg0, void **, 0x84);
    temp_r4 = M2C_FIELD(temp_r9, s32 *, 0xC);
    if (temp_r4 != 0) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x84), s32 *, 0x174) = fn_8023F588(7, temp_r4);
    } else {
        M2C_FIELD(temp_r9, s32 *, 0x174) = temp_r4;
    }
    M2C_FIELD(arg0, s32 *, 0xA4) = BoneChainSet__CreateFromModel((s32) M2C_FIELD(arg0, void **, 0x84));
    temp_r9_2 = M2C_FIELD(arg0, void **, 0x34);
    M2C_FIELD(temp_r9_2, M2C_UNK (**)(s32), 0x9C)(arg0 + M2C_FIELD(temp_r9_2, s16 *, 0x98));
    rp = &lbl_80343B4C;
    var_r29 = 0x108;
    for (var_r30 = 0; var_r30 < 4; var_r30 += 1) {
        Animation__SetRate(M2C_FIELD(arg0, void **, 0x84) + var_r29, *rp);
        var_r29 += 0x14;
    }
    var_ctr = 4;
    zero = 0;
    var_r11 = 0;
    do {
        arr = (char *)M2C_FIELD(arg0, void **, 0x84) + 0xF0;
        *(s32 *)(arr + var_r11) = zero;
        var_r11 += 4;
        var_ctr -= 1;
    } while (0 != var_ctr);
    temp_f31 = lbl_80343B50;
    M2C_FIELD(arg0, s32 *, 0xB4) = 0;
    M2C_FIELD(arg0, f32 *, 0xB8) = temp_f31;
    CActor__ResetLighting(arg0);
    M2C_FIELD(arg0, f32 *, 0x118) = temp_f31;
    M2C_FIELD(arg0, s32 *, 0x110) = 0;
    M2C_FIELD(arg0, s32 *, 0x11C) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x84), s32 *, 0xA0);
    return 1;
}
