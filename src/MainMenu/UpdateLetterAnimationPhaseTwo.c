/* MainMenu__UpdateLetterAnimationPhaseTwo @ 0x8012FB70 (size: 0x238, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void fn_80188B64(char *, int);
void fn_80188FB0(void **);
f32 fn_8026B8B8(void);
M2C_UNK MainMenu__ActivateLetterAnimationChildrenPastThreshold(s32, f32);
extern s8 lbl_8032A93C __attribute__((section(".data")));
extern s8 lbl_8032A96C __attribute__((section(".data")));
extern f32 lbl_8032A980 __attribute__((section(".data")));
extern f32 lbl_8032A984 __attribute__((section(".data")));
extern f32 lbl_8032A990 __attribute__((section(".data")));
extern f32 lbl_8032A994 __attribute__((section(".data")));
extern f32 lbl_8032A998 __attribute__((section(".data")));
extern u32 lbl_803A35AC __attribute__((section(".data")));
extern void *lbl_803DC704;
extern void *lbl_803DC70C;

void MainMenu__UpdateLetterAnimationPhaseTwo(void *arg0) {
    M2C_UNK spC;
    f32 sp8;
    M2C_UNK (*temp_lr)(void *);
    f32 temp_f0;
    f32 temp_f30;
    s32 temp_r3;
    s32 var_r28;
    s32 var_r28_2;
    s32 var_r30;
    void **var_r31;
    void *temp_r29;
    void *temp_r29_2;
    void *temp_r30;
    void *temp_r3_2;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;
    void *temp_r9_5;
    void *var_r31_2;

    var_r30 = arg0 + 0x368;
    var_r31 = arg0 + 0x504;
    var_r28 = 4;
    do {
        temp_r9 = *var_r31;
        var_r31 += 0x1A0;
        temp_r3 = var_r30 + M2C_FIELD(temp_r9, s16 *, 0x130);
        var_r30 += 0x1A0;
        M2C_FIELD(temp_r9, M2C_UNK (**)(s32, f32, f32, f32, f32), 0x134)(temp_r3, lbl_8032A980, lbl_8032A980, lbl_8032A980, lbl_8032A980);
        var_r28 -= 1;
    } while (var_r28 != 0);
    if (!(M2C_FIELD(arg0, f32 *, 0x35C) >= lbl_8032A984)) {
        M2C_FIELD(arg0, f32 *, 0x35C) = (f32) lbl_8032A984;
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0x9F0) == 0) && ((temp_r9_2 = M2C_FIELD(lbl_803DC704, void **, 0x19C), ((M2C_FIELD(temp_r9_2, s32 (**)(void *), 0x3A4)(lbl_803DC704 + M2C_FIELD(temp_r9_2, s16 *, 0x3A0)) == 0) == 0)) || (temp_r9_3 = M2C_FIELD(lbl_803DC70C, void **, 0x19C), ((M2C_FIELD(temp_r9_3, s32 (**)(void *), 0x3A4)(lbl_803DC70C + M2C_FIELD(temp_r9_3, s16 *, 0x3A0)) == 0) == 0)))) {
        M2C_FIELD(arg0, s32 *, 0x9F0) = 1;
        fn_80188B64(&lbl_8032A96C, (s32) (arg0 + 0x9EC));
    }
    temp_f0 = ((f32) lbl_803A35AC * lbl_8032A990) + M2C_FIELD(arg0, f32 *, 0x35C);
    temp_f30 = temp_f0 * lbl_8032A994;
    M2C_FIELD(arg0, f32 *, 0x35C) = temp_f0;
    if (!(temp_f0 > lbl_8032A998)) {
        var_r31_2 = arg0 + 0x368;
        for (var_r28_2 = 0; var_r28_2 < 4; var_r28_2 += 1) {
            temp_r9_4 = M2C_FIELD(var_r31_2, void **, 0x19C);
            M2C_FIELD(temp_r9_4, M2C_UNK (**)(void *, f32 *, M2C_UNK *), 0xB4)(var_r31_2 + M2C_FIELD(temp_r9_4, s16 *, 0xB0), &sp8, &spC);
            temp_r29 = M2C_FIELD(var_r31_2, void **, 0x19C);
            temp_r29_2 = temp_r29 + 0xA8;
            temp_r30 = var_r31_2 + M2C_FIELD(temp_r29, s16 *, 0xA8);
            M2C_FIELD(temp_r29_2, M2C_UNK (**)(void *, f32, f32), 4)(temp_r30, sp8, fn_8026B8B8() * temp_f30);
            temp_r9_5 = M2C_FIELD(var_r31_2, void **, 0x19C);
            temp_r3_2 = var_r31_2 + M2C_FIELD(temp_r9_5, s16 *, 0x38);
            temp_lr = M2C_FIELD(temp_r9_5, M2C_UNK (**)(void *), 0x3C);
            var_r31_2 += 0x1A0;
            temp_lr(temp_r3_2);
        }
        MainMenu__ActivateLetterAnimationChildrenPastThreshold((s32) (arg0 + 0x1A0), fn_8026B8B8() * temp_f30);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x9E8) = 0;
    M2C_FIELD(arg0, f32 *, 0x35C) = (f32) lbl_8032A984;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x9EC) != 0) {
        M2C_FIELD(arg0, s32 *, 0x9F0) = 0;
        fn_80188FB0(arg0 + 0x9EC);
        fn_80188B64(&lbl_8032A93C, 0);
    }
}
