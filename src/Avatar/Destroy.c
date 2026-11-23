/* Avatar__Destroy @ 0x8008AA50 (size: 0x260, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Avatar__RemoveGuisesImpl(void *, s32);
s32 Render__ReleaseObjectHandle(void *, void *);
void AvatarInventory__Destroy(void *, s32);
void Avatar__StopFireShieldImpl(void *, void *);
void AvatarEffectPath__ClearStrings(void *);
void DistortList__Destroy(void *, s32);
void Avatar__DestroyWeaponState(void *, s32);
void AvatarControlRuntime__Destroy(void *, s32);
void AvatarConfig__Destroy(void *, s32);
void AvatarEffectPath__Destroy(void *, s32);
void fn_801843CC(void *);
void fn_80184430(char *);
void fn_80188FB0(void **);
void fn_801F101C(void *, int);
void AvatarModelVariants__Destroy(void *, M2C_UNK);
M2C_UNK fn_80184FC4(M2C_UNK, M2C_UNK);
M2C_UNK fn_80250D34(void *, M2C_UNK);
f32 fn_80251278(void *, M2C_UNK);
extern M2C_UNK lbl_80310E60 __attribute__((section(".data")));
extern M2C_UNK lbl_80333740 __attribute__((section(".data")));
extern M2C_UNK lbl_80333768 __attribute__((section(".data")));
extern M2C_UNK lbl_80333788 __attribute__((section(".data")));
extern M2C_UNK lbl_80333830 __attribute__((section(".data")));
extern M2C_UNK lbl_80335600 __attribute__((section(".data")));
extern void *lbl_803DCE84;

void Avatar__Destroy(void *arg0, s32 arg1) {
    s8 *temp_r3_5;
    void *temp_r3_6;
    char *p7056, *p6680, *p6408, *p5536, *p2048, *p1684, *p440, *p412;
    void **var_r31;
    void *temp_r11;
    void *temp_r9_3;
    void *temp_r11_3;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r11_2;

    M2C_FIELD(arg0, M2C_UNK **, 0x198) = &lbl_80333788;
    M2C_FIELD(arg0, M2C_UNK **, 0x1B4) = &lbl_80333768;
    M2C_FIELD(arg0, M2C_UNK **, 0x1D0) = &lbl_80333740;
    M2C_FIELD(arg0, M2C_UNK **, 0x34) = &lbl_80333830;
    Avatar__RemoveGuisesImpl(arg0, 0);
    temp_r11 = M2C_FIELD(arg0, void **, 0x7E0);
    temp_r9 = M2C_FIELD(temp_r11, void **, 4);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x3C)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x38));
    temp_r3 = M2C_FIELD(arg0, void **, 0x720);
    if ((temp_r3 != NULL) && ((s32) M2C_FIELD(temp_r3, s32 *, 0x10) != 0)) {
        fn_801843CC(temp_r3);
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x19BC) != 0) {
        Render__ReleaseObjectHandle(lbl_803DCE84, arg0 + 0x19BC);
    }
    fn_80184FC4(0x1B000000, 0xFF000000);
    temp_r3_2 = M2C_FIELD(arg0, void **, 0x19F0);
    if (temp_r3_2 != NULL) {
        fn_801843CC(temp_r3_2);
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x7E4) != 0) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x159C), s32 *, 0x1154) = 0;
    }
    temp_r3_3 = M2C_FIELD(arg0, void **, 0x159C);
    if (temp_r3_3 != NULL) {
        AvatarInventory__Destroy(temp_r3_3, 3);
        M2C_FIELD(arg0, void **, 0x159C) = NULL;
    }
    Avatar__StopFireShieldImpl(arg0, (void *)-1);
    AvatarEffectPath__ClearStrings(arg0 + 0x684);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1A0C) != 0) {
        fn_80188FB0(arg0 + 0x1A0C);
    }
    temp_r3_5 = M2C_FIELD(arg0, s8 **, 0x680);
    if (temp_r3_5 != NULL) {
        fn_80184430(temp_r3_5);
    }
    temp_r11_2 = M2C_FIELD(arg0, void **, 0x618);
    M2C_FIELD(arg0, s8 **, 0x680) = NULL;
    if (temp_r11_2 != NULL) {
        temp_r9_2 = M2C_FIELD(temp_r11_2, void **, 0x19C);
        M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, M2C_UNK), 0xC)(M2C_FIELD(temp_r9_2, s16 *, 8) + temp_r11_2, 3);
    }
    p7056 = arg0 + 0x1B90;
    p6680 = arg0 + 0x1A18;
    p6408 = arg0 + 0x1908;
    p5536 = arg0 + 0x15A0;
    p2048 = arg0 + 0x800;
    p1684 = 0x694 + arg0;
    p440 = arg0 + 0x1B8;
    p412 = arg0 + 0x19C;
    var_r31 = arg0 + 0x61C;
    do {
        temp_r11_3 = *var_r31;
        var_r31 += 4;
        if (temp_r11_3 != NULL) {
            temp_r9_3 = M2C_FIELD(temp_r11_3, void **, 0x19C);
            M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *, M2C_UNK), 0xC)(temp_r11_3 + M2C_FIELD(temp_r9_3, s16 *, 8), 3);
        }
    } while ((s32) var_r31 <= (s32) (arg0 + 0x638));
    DistortList__Destroy(p7056, 2);
    fn_80250D34(p6680, 2);
    temp_r3_6 = M2C_FIELD(arg0, void **, 0x19F4);
    if (temp_r3_6 != NULL) {
        fn_801843CC(temp_r3_6);
    }
    AvatarModelVariants__Destroy(p6408, 2);
    Avatar__DestroyWeaponState(p5536, 2);
    AvatarControlRuntime__Destroy(p2048, 2);
    AvatarConfig__Destroy(p1684, 2);
    AvatarEffectPath__Destroy(arg0 + 0x684, 2);
    M2C_FIELD(p440, M2C_UNK **, 0x18) = &lbl_80335600;
    fn_80251278(p412, 0);
    M2C_FIELD(arg0, M2C_UNK **, 0x198) = &lbl_80310E60;
    fn_801F101C(arg0, arg1);
}
