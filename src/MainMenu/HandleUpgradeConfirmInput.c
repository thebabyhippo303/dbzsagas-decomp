/* MainMenu__HandleUpgradeConfirmInput @ 0x8014E300 (size: 0x460, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Sound__Play2D(s32, s32);
s32 UpgradeMenu__IsSelectedUpgradeUnpurchased(char *);
s32 UpgradeMenu__CanAffordSelectedUpgrade(void *);
void ConfirmationDialog__InitializeChoiceWidgets(void *, char *);
void MainMenu__BeginWidgetAnimationState(void *);
s32 ConfirmationDialog__AreAnimationsActive(void *);
s32 UIList__GetSelectedEntryValue(void *);
void UI__SetColorRGBA(void *, f32, f32, f32, f32);
void HUD__ClearAllWidgets(void *);
void MainMenu__AdvanceWidgetAnimationState(void *);
void ConfirmationDialog__Hide(void *);
f32 fn_8026B86C(void);
f32 fn_8026B8B8(void);
void fn_8026C634(void *, float, float);
void fn_8026C7F8(void *, f32, f32, f32, f32);
void fn_80270784(void *, char *);
void * fn_80271BF0(void *);
M2C_UNK UpgradeMenu__HasSelectedUpgradePrerequisiteStateTwo(s32);
M2C_UNK ConfirmationDialog__Show(s32);
M2C_UNK UpgradeMenu__PurchaseSelectedUpgrade(s32);
M2C_UNK MainMenu__ExitUpgradeScreen(s32);
M2C_UNK fn_8026C2E4(s32, s32, s32, s32, s32, s32);
M2C_UNK UIList__ClearEntries(s32);
M2C_UNK UIList__Update(s32);
M2C_UNK UpgradeMenu__ResetAttackCategorySelection(s32);
M2C_UNK fn_8026238C(s32, s32, f32);
M2C_UNK fn_80262360(s32, s32, f32);
extern M2C_UNK lbl_8032539C __attribute__((section(".data")));
extern M2C_UNK lbl_8032BA34 __attribute__((section(".data")));
extern s8 lbl_8032BFE0 __attribute__((section(".data")));
extern s8 lbl_8032C01C __attribute__((section(".data")));
extern s8 lbl_8032C060 __attribute__((section(".data")));
extern s8 lbl_8032C09C __attribute__((section(".data")));
extern s8 lbl_8032C0BC __attribute__((section(".data")));
extern f32 lbl_8032C0E8 __attribute__((section(".data")));
extern f32 lbl_8032C0EC __attribute__((section(".data")));
extern void *lbl_803DC3B4;
extern void *lbl_803DC3C0;
extern void *lbl_803DC654;

void MainMenu__HandleUpgradeConfirmInput(void *arg0) {
    f32 temp_f31;
    f32 temp_f31_2;
    s32 var_r19;
    s8 *temp_r30;
    s8 *var_r4;
    void **var_r23;
    void *temp_r21;
    void *temp_r26;
    void *temp_r28;
    void *temp_r28_2;
    void *temp_r29;
    void *temp_r29_2;
    void *temp_r29_3;
    void *temp_r30_2;
    register void *temp_r30_3;
    void *temp_r3_2;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;
    void *var_r22;

    switch (M2C_FIELD(arg0, s32 *, 0xAE90)) {                              /* switch 1; irregular */
    case 3:                                         /* switch 1 */
        if ((s32) M2C_FIELD(M2C_FIELD(lbl_803DC3C0, void **, 0x238), s32 *, 4) == 1) {
            Sound__Play2D((s32) &lbl_8032BA34, 0);
            var_r4 = &lbl_8032BFE0;
            M2C_FIELD(arg0, s32 *, 0xAE90) = 5;
            fn_80270784(arg0 + 0x122E8, var_r4);
            MainMenu__BeginWidgetAnimationState(arg0 + 0x11884);
            M2C_FIELD(arg0, f32 *, 0x124E4) = (f32) lbl_8032C0E8;
            return;
        }
        temp_r30 = arg0 + 0xC934;
        if (UpgradeMenu__IsSelectedUpgradeUnpurchased(temp_r30) == 0) {
            if (UpgradeMenu__HasSelectedUpgradePrerequisiteStateTwo((s32) temp_r30) == 0) {
                Sound__Play2D((s32) &lbl_8032BA34, 0);
                var_r4 = &lbl_8032C01C;
                M2C_FIELD(arg0, s32 *, 0xAE90) = 5;
                fn_80270784(arg0 + 0x122E8, var_r4);
                MainMenu__BeginWidgetAnimationState(arg0 + 0x11884);
                M2C_FIELD(arg0, f32 *, 0x124E4) = (f32) lbl_8032C0E8;
                return;
            }
            if (UpgradeMenu__CanAffordSelectedUpgrade(temp_r30) == 0) {
                Sound__Play2D((s32) &lbl_8032BA34, 0);
                var_r4 = &lbl_8032C060;
                M2C_FIELD(arg0, s32 *, 0xAE90) = 5;
                fn_80270784(arg0 + 0x122E8, var_r4);
                MainMenu__BeginWidgetAnimationState(arg0 + 0x11884);
                M2C_FIELD(arg0, f32 *, 0x124E4) = (f32) lbl_8032C0E8;
                return;
            }
            temp_r30_2 = arg0 + 0x10680;
            Sound__Play2D((s32) &lbl_8032539C, 0);
            M2C_FIELD(arg0, s32 *, 0xAE90) = 4;
            ConfirmationDialog__InitializeChoiceWidgets(temp_r30_2, &lbl_8032C09C);
            ConfirmationDialog__Show((s32) temp_r30_2);
            return;
        }
        Sound__Play2D((s32) &lbl_8032BA34, 0);
        var_r4 = &lbl_8032C0BC;
        M2C_FIELD(arg0, s32 *, 0xAE90) = 5;
        fn_80270784(arg0 + 0x122E8, var_r4);
        MainMenu__BeginWidgetAnimationState(arg0 + 0x11884);
        M2C_FIELD(arg0, f32 *, 0x124E4) = (f32) lbl_8032C0E8;
        return;
    case 4:                                         /* switch 1 */
        temp_r30_3 = arg0 + 0x10680;
        if (ConfirmationDialog__AreAnimationsActive(temp_r30_3) == 0) {
            Sound__Play2D((s32) &lbl_8032539C, 0);
            if ((s32) M2C_FIELD(temp_r30_3, s32 *, 0x11CC) != 0) {
                UpgradeMenu__PurchaseSelectedUpgrade((s32) (arg0 + 0xC934));
            }
            ConfirmationDialog__Hide(temp_r30_3);
block_28:
            M2C_FIELD(arg0, s32 *, 0xAE90) = 3;
        }
        return;
    case 2:                                         /* switch 1 */
        switch (UIList__GetSelectedEntryValue(arg0 + 0xBC38)) {                          /* switch 2; irregular */
        case 1:                                     /* switch 2 */
            Sound__Play2D((s32) &lbl_8032539C, 0);
            MainMenu__ExitUpgradeScreen((s32) arg0);
            return;
        case 0:                                     /* switch 2 */
            temp_r28 = arg0 + 0xB5B8;
            Sound__Play2D((s32) &lbl_8032539C, 0);
            temp_r26 = arg0 + 0xBFC4;
            M2C_FIELD(arg0, s32 *, 0xAE90) = 3;
            temp_r29 = M2C_FIELD(arg0, void **, 0x19C);
            temp_r21 = arg0 + 0x5F60;
            var_r22 = arg0 + 0xAE98;
            var_r23 = arg0 + 0xB034;
            var_r19 = 4;
            temp_f31 = fn_8026B86C();
            M2C_FIELD(temp_r29_2, M2C_UNK (**)(void *, f32, f32), 4)((arg0 + M2C_FIELD(temp_r29, s16 *, 0x88)), temp_f31, fn_8026B8B8());
            fn_8026C2E4((s32) temp_r28, M2C_FIELD(lbl_803DC3B4, s32 *, 0x28), 0, 0, 1, 1);
            fn_8026C7F8(temp_r28, lbl_8032C0EC, lbl_8032C0EC, lbl_8032C0EC, lbl_8032C0EC);
            temp_f31_2 = fn_8026B86C();
            fn_8026C634(temp_r28, temp_f31_2, fn_8026B8B8());
            temp_r3_2 = fn_80271BF0(temp_r26);
            temp_r9 = M2C_FIELD(temp_r3_2, void **, 8);
            M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x1C)(temp_r3_2 + M2C_FIELD(temp_r9, s16 *, 0x18));
            UI__SetColorRGBA(temp_r26, lbl_8032C0EC, lbl_8032C0EC, lbl_8032C0EC, lbl_8032C0E8);
            UI__SetColorRGBA(arg0 + 0xB758, lbl_8032C0EC, lbl_8032C0EC, lbl_8032C0EC, lbl_8032C0EC);
            UI__SetColorRGBA(arg0 + 0xB8F8, lbl_8032C0EC, lbl_8032C0EC, lbl_8032C0EC, lbl_8032C0EC);
            UI__SetColorRGBA(arg0 + 0xBA98, lbl_8032C0EC, lbl_8032C0EC, lbl_8032C0EC, lbl_8032C0E8);
            do {
                temp_r9_2 = *var_r23;
                var_r23 += 0x1C0;
                var_r22 += 0x1C0;
                M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *), 0x134)((var_r22 + M2C_FIELD(temp_r9_2, s16 *, 0x130)));
                var_r19 -= 1;
            } while (var_r19 != 0);
            temp_r9_3 = M2C_FIELD(arg0, void **, 0x19C);
            temp_r29_3 = arg0 + 0xBC38;
            temp_r28_2 = arg0 + 0xC934;
            M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *), 0x3C)(arg0 + M2C_FIELD(temp_r9_3, s16 *, 0x38));
            UIList__ClearEntries((s32) temp_r29_3);
            UIList__Update((s32) temp_r29_3);
            UI__SetColorRGBA(temp_r28_2, lbl_8032C0EC, lbl_8032C0EC, lbl_8032C0EC, lbl_8032C0EC);
            UpgradeMenu__ResetAttackCategorySelection((s32) temp_r28_2);
            fn_8026238C((s32) temp_r21, 0, lbl_8032C0EC);
            fn_8026238C((s32) temp_r21, 1, lbl_8032C0EC);
            fn_8026238C((s32) temp_r21, 2, lbl_8032C0EC);
            fn_80262360((s32) temp_r21, 0, lbl_8032C0EC);
            fn_80262360((s32) temp_r21, 1, lbl_8032C0EC);
            fn_80262360((s32) temp_r21, 2, lbl_8032C0EC);
            HUD__ClearAllWidgets(lbl_803DC654);
            return;
        }
        break;
    case 5:                                         /* switch 1 */
        Sound__Play2D((s32) &lbl_8032539C, 0);
        MainMenu__AdvanceWidgetAnimationState(arg0 + 0x11884);
        goto block_28;
    }
}
