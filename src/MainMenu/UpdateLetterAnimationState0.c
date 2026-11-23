/* MainMenu__UpdateLetterAnimationState0 @ 0x80113FE8 (size: 0x1E4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void fn_8026BF14(void *);
void fn_8026C508(void *, float, float);
void * fn_8026C7F8(void *, f32, f32, f32, f32);
f32 fn_8026D748(void *);
f32 fn_8026D750(void *);
M2C_UNK fn_80272454(void *, M2C_UNK, f32 *, f32 *, M2C_UNK *, f32 *); /* extern */
extern f32 lbl_803266D8 __attribute__((section(".data")));
extern f32 lbl_803266DC __attribute__((section(".data")));
extern f32 lbl_803266E4 __attribute__((section(".data")));
extern f32 lbl_803266E8;
extern f32 lbl_803266EC __attribute__((section(".data")));
extern f32 lbl_803266F0 __attribute__((section(".data")));
extern u32 lbl_803A35AC __attribute__((section(".data")));

void MainMenu__UpdateLetterAnimationState0(void *arg0, s32 arg1, s32 arg2) {
    f32 sp14;
    M2C_UNK sp10;
    f32 spC;
    f32 sp8;
    f32 *var_r9;
    f32 temp_f29;
    f32 temp_f30;
    s32 var_ctr;
    s32 var_r7;
    void *temp_r11;
    void *temp_r29;
    void *temp_r30;
    void *temp_r9;

    fn_80272454(M2C_FIELD(arg0, void **, 0x68), 0, &sp8, &spC, &sp10, &sp14);
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) (((f32) (f64) lbl_803A35AC * lbl_803266D8) + M2C_FIELD(arg0, f32 *, 0xC));
    var_r7 = 0;
    if (arg1 > 0) {
        for (; var_r7 < arg1; var_r7 += 1) {
            var_ctr = 4;
            var_r9 = (var_r7 * 0x9C) + (arg2 + 0xC) + 0x60;
loop_3:
            var_r9 -= 0x20;
            *var_r9 = lbl_803266DC;
            var_ctr -= 1;
            if (var_ctr != 0) {
                goto loop_3;
            }
        }
    }
    M2C_ERROR(/* unknown instruction: cror cr0un, cr0eq, cr0gt */);
    if (0 != 0) {
        M2C_FIELD(arg0, s32 *, 0x3C4) = 1;
    } else {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x40) != 0) {
            temp_r11 = M2C_FIELD(arg0, void **, 0x68);
            temp_r30 = arg0 + 0x6C;
            temp_r9 = M2C_FIELD(temp_r11, void **, 0x19C);
            temp_f30 = lbl_803266E4 * M2C_FIELD(arg0, f32 *, 0xC);
            temp_f29 = lbl_803266EC;
            temp_r29 = arg0 + 0x20C;
            fn_8026C508(temp_r30, (sp8 + M2C_FIELD(temp_r9, f32 (**)(void *), 0x3B4)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x3B0))) - lbl_803266E8, ((sp14 - spC) * temp_f29) + spC);
            fn_8026C7F8(temp_r30, lbl_803266F0, lbl_803266F0, lbl_803266F0, temp_f30);
            fn_8026BF14(temp_r30);
            sp14 = fn_8026D748(temp_r30);
            fn_8026C508(temp_r29, sp14, fn_8026D750(temp_r30) * temp_f29);
            fn_8026C7F8(temp_r29, lbl_803266F0, lbl_803266F0, lbl_803266F0, temp_f30);
            fn_8026BF14(temp_r29);
        }
    }
}
