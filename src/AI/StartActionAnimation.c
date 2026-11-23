/* AI__StartActionAnimation @ 0x80065650 (size: 0x220, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Avatar__StartAnimationByIdAndFlags(void *, int, int, int);
int Rand__RangeInt(void *, int, int);
M2C_UNK fn_801949E0(s32, M2C_UNK);                  /* extern */
M2C_UNK fn_801954F4(s32, M2C_UNK *, M2C_UNK, f32, f32); /* extern */
extern M2C_UNK lbl_8031E814 __attribute__((section(".data")));
extern f32 lbl_8031E820 __attribute__((section(".data")));
extern f32 lbl_8031E824 __attribute__((section(".data")));
extern f32 lbl_8031E828 __attribute__((section(".data")));
extern f32 lbl_8031E82C __attribute__((section(".data")));
extern f32 lbl_8031E830 __attribute__((section(".data")));
extern M2C_UNK lbl_80361DC0 __attribute__((section(".data")));
extern s32 lbl_803DCC20;
extern M2C_UNK lbl_803DD634;

void AI__StartActionAnimation(void *arg0) {
    f32 var_f0;
    s32 temp_r0;
    s32 var_r4;
    s32 var_r5;
    void *temp_r29;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x39C);
    switch (temp_r0) {                              /* irregular */
    case 1:
        var_r4 = 0x03E80104;
block_27:
        var_r5 = 0x24;
block_28:
        Avatar__StartAnimationByIdAndFlags(M2C_FIELD(arg0, void **, 0x390), var_r4, var_r5, 1);
        var_f0 = lbl_8031E820;
        break;
    case 3:
        Avatar__StartAnimationByIdAndFlags(M2C_FIELD(arg0, void **, 0x390), 0x03E80007, 0x20, 1);
        var_f0 = lbl_8031E824;
        break;
    case 6:
        var_r4 = 0x03E80007;
        var_r5 = 0x20;
        goto block_28;
    case 7:
        var_r4 = 0x03E80007;
        var_r5 = 0x20;
        goto block_28;
    case 8:
        Avatar__StartAnimationByIdAndFlags(M2C_FIELD(arg0, void **, 0x390), 0x03E8018A, 0x20, 1);
        var_f0 = lbl_8031E828;
        break;
    case 9:
        Avatar__StartAnimationByIdAndFlags(M2C_FIELD(arg0, void **, 0x390), 0x03E8018B, 0x20, 1);
        var_f0 = lbl_8031E828;
        break;
    case 10:
        Avatar__StartAnimationByIdAndFlags(M2C_FIELD(arg0, void **, 0x390), 0x03E8018C, 0x20, 1);
        var_f0 = lbl_8031E828;
        break;
    case 11:
        temp_r29 = M2C_FIELD(arg0, void **, 0x390);
        Avatar__StartAnimationByIdAndFlags(temp_r29, *(&lbl_80361DC0 + (Rand__RangeInt(&lbl_803DD634, 0, 8) * 4)), 2, 1);
        var_f0 = lbl_8031E82C;
        break;
    case 12:
        Avatar__StartAnimationByIdAndFlags(M2C_FIELD(arg0, void **, 0x390), 0x03E800BF, 0x20, 1);
        fn_801954F4(lbl_803DCC20 + 0xCC, &lbl_8031E814, 0, lbl_8031E830, lbl_8031E830);
        fn_801949E0(lbl_803DCC20 + 0xCC, 0);
        var_f0 = lbl_8031E82C;
        break;
    default:
        var_r4 = 0x03E80107;
        goto block_27;
    }
    M2C_FIELD(arg0, f32 *, 0x3A0) = var_f0;
}
