/* MainMenu__PopulatePauseScreen @ 0x80148514 (size: 0x1328, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 Avatar__GetStatValueByIndex(void *, s32);
void ConfirmationDialog__Hide(void *);
void * Game__GetPlayerImpl(void *, int);
void Game__TriggerMenuFade(void *);
void HUD__ClearAllWidgets(void *);
void HUD__InitializeWidgetCollections(void *);
void MainMenu__UpdatePauseMenuSelectionVisuals(void *);
void Mem__DeleteArray(void *);
char * Mem__NewArray(s32);
void Menu__RebuildButtonPromptWidget(void *);
void Menu__RefreshOptionsDisplay(u8 *);
s32 * MissionProgress__GetByIndex(s32);
int MissionProgress__GetCount(void);
s32 Options__GetDialogVolume(s32);
s32 Options__GetMusicVolume(s32);
s32 Options__GetSoundVolume(s32);
int PersistentData__GetPickupCountForLevel(void *, int, int);
int PersistentData__GetUnavailablePickupCountForLevel(void *, int, int);
s32 PickupManager__CountPickupsByType(void *, s32);
void Sphere__AddChild(void *, void *);
void UIList__AddEntry(void *, void *, s32, s32);
void UI__SetColorRGBA(void *, float, float, float, float);
void fn_8026BF14(void *);
void fn_8026D498(void *);
void fn_8026D514(void *);
f32 fn_8026D748(void *);
f32 fn_8026D750(void *);
void fn_80270450(void *);
void fn_80270784(void *, char *);
void * memset(void *, int, u32);
void * sprintf(s8 *, void *, s8 *, s32);
M2C_UNK OptionsMenu__ClearWidgetOpacity(void *);    /* extern */
M2C_UNK UIList__ClearEntries(void *);               /* extern */
M2C_UNK UIList__SetDisabled(void *);                /* extern */
M2C_UNK UIList__SetEnabled(void *);                 /* extern */
M2C_UNK UIList__Update(void *);                     /* extern */
M2C_UNK UIList__UpdateVisibility(void *);           /* extern */
M2C_UNK UpgradeMenu__ResetAttackCategorySelection(void *); /* extern */
M2C_UNK fn_80262308(void *, M2C_UNK, f32, f32, f32, f32); /* extern */
M2C_UNK fn_8026238C(void *, M2C_UNK, f32);          /* extern */
extern u8 lbl_8031FC10 __attribute__((section(".data")));
extern M2C_UNK lbl_8032B648 __attribute__((section(".data")));
extern M2C_UNK lbl_8032B788 __attribute__((section(".data")));
extern M2C_UNK lbl_8032B790 __attribute__((section(".data")));
extern M2C_UNK lbl_8032BC78 __attribute__((section(".data")));
extern M2C_UNK lbl_8032BC88 __attribute__((section(".data")));
extern M2C_UNK lbl_8032BC94 __attribute__((section(".data")));
extern M2C_UNK lbl_8032BC9C __attribute__((section(".data")));
extern M2C_UNK lbl_8032BCA8 __attribute__((section(".data")));
extern M2C_UNK lbl_8032BCB4 __attribute__((section(".data")));
extern f32 lbl_8032BCBC __attribute__((section(".data")));
extern f32 lbl_8032BCC0 __attribute__((section(".data")));
extern f32 lbl_8032BCC4 __attribute__((section(".data")));
extern f32 lbl_8032BCC8 __attribute__((section(".data")));
extern f32 lbl_8032BCCC __attribute__((section(".data")));
extern f32 lbl_8032BCD0 __attribute__((section(".data")));
extern f32 lbl_8032BCD4 __attribute__((section(".data")));
extern f32 lbl_8032BCD8 __attribute__((section(".data")));
extern f32 lbl_8032BCDC __attribute__((section(".data")));
extern M2C_UNK lbl_8032BCE0 __attribute__((section(".data")));
extern f32 lbl_8032BCE4 __attribute__((section(".data")));
extern f32 lbl_8032BCE8 __attribute__((section(".data")));
extern f32 lbl_8032BCEC __attribute__((section(".data")));
extern f32 lbl_8032BCF0 __attribute__((section(".data")));
extern f32 lbl_8032BCF4 __attribute__((section(".data")));
extern f32 lbl_8032BCF8 __attribute__((section(".data")));
extern f32 lbl_8032BCFC __attribute__((section(".data")));
extern s32 lbl_803DC368;
extern void *lbl_803DC3C0;
extern void *lbl_803DC5EC;
extern void *lbl_803DC654;

void MainMenu__PopulatePauseScreen(void *arg0, s32 arg1) {
    M2C_UNK *sp68;
    void *sp60;
    void *sp5C;
    void *sp54;
    void *sp50;
    M2C_UNK sp31;
    u8 sp30;
    M2C_UNK (*var_r0)(void *, f32, f32);
    f32 *var_r4;
    f32 temp_f1;
    f32 temp_f29;
    f32 temp_f30;
    f32 temp_f31;
    f32 var_f1;
    f32 var_f2;
    f32 var_f31;
    s32 temp_cr0_eq;
    s32 temp_r0;
    s32 temp_r24;
    s32 temp_r28_2;
    s32 temp_r29_19;
    s32 temp_r30_12;
    s32 temp_r3;
    s32 var_r25;
    s32 var_r25_2;
    s32 var_r27;
    s32 var_r27_2;
    s32 var_r28;
    s32 var_r28_2;
    s32 var_r29;
    s32 var_r29_2;
    s32 var_r29_3;
    s32 var_r30_3;
    s32 var_r4_2;
    u8 *temp_r30_19;
    void **var_r29_4;
    void **var_r29_5;
    void *temp_r10;
    void *temp_r11_3;
    void *temp_r11_4;
    void *temp_r22;
    void *temp_r24_2;
    void *temp_r25;
    void *temp_r26;
    void *temp_r27;
    void *temp_r28;
    void *temp_r29;
    void *temp_r29_2;
    void *temp_r30;
    void *temp_r30_13;
    void *temp_r30_15;
    void *temp_r30_16;
    void *temp_r30_17;
    void *temp_r30_18;
    void *temp_r30_20;
    void *temp_r30_21;
    void *temp_r30_22;
    void *temp_r30_2;
    void *temp_r30_3;
    void *temp_r30_4;
    void *temp_r30_5;
    void *temp_r30_6;
    void *temp_r30_7;
    void *temp_r30_8;
    void *temp_r30_9;
    void *temp_r31;
    void *temp_r3_10;
    void *temp_r3_11;
    void *temp_r3_12;
    void *temp_r3_13;
    void *temp_r3_14;
    void *temp_r3_15;
    void *temp_r3_16;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r3_5;
    void *temp_r3_6;
    void *temp_r3_7;
    void *temp_r3_8;
    void *temp_r3_9;
    void *temp_r9_10;
    void *temp_r9_11;
    void *temp_r9_12;
    void *temp_r9_13;
    void *temp_r9_14;
    void *temp_r9_15;
    void *temp_r9_16;
    void *temp_r9_17;
    void *temp_r9_18;
    void *temp_r9_19;
    void *temp_r9_20;
    void *temp_r9_21;
    void *temp_r9_22;
    void *temp_r9_23;
    void *temp_r9_24;
    void *temp_r9_25;
    void *temp_r9_26;
    void *temp_r9_27;
    void *temp_r9_28;
    void *temp_r9_29;
    void *temp_r9_2;
    void *temp_r9_30;
    void *temp_r9_31;
    void *temp_r9_32;
    void *temp_r9_33;
    void *temp_r9_34;
    void *temp_r9_35;
    void *temp_r9_36;
    void *temp_r9_37;
    void *temp_r9_3;
    void *temp_r9_4;
    void *temp_r9_5;
    void *temp_r9_6;
    void *temp_r9_7;
    void *temp_r9_8;
    void *temp_r9_9;
    void *var_r26;
    void *var_r30;
    void *var_r30_2;
    void *var_r30_4;
    void *var_r30_5;
    void *var_r3;
    void *var_r3_2;

    var_r27 = 0;
    temp_r30 = arg0 + 0x117A0;
    M2C_FIELD(arg0, s32 *, 0xF260) = arg1;
    ConfirmationDialog__Hide(temp_r30);
    temp_r28 = arg0 + 0xFAD8;
    fn_8026BF14(temp_r30);
    temp_f29 = lbl_8032BCC0;
    temp_f30 = lbl_8032BCCC;
    sp68 = &sp31;
    sp50 = arg0 + 0xFE18;
    sp54 = arg0 + 0xFFB8;
    temp_r31 = arg0 + 0x10498;
    sp5C = arg0 + 0x10638;
    temp_r22 = arg0 + 0x107D8;
    sp60 = arg0 + 0x10158;
    do {
        if (var_r27 != 1) {
            if (var_r27 <= 1) {
                if (var_r27 != 0) {
                    var_r26 = arg0 + 0x10000;
                } else {
                    temp_r9_2 = M2C_FIELD(arg0, void **, 0xFFB4);
                    var_r26 = arg0 + 0x10000;
                    M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, f32, f32), 0xAC)(sp50 + M2C_FIELD(temp_r9_2, s16 *, 0xA8), lbl_8032BCBC, lbl_8032BCBC);
                    temp_r29 = M2C_FIELD(arg0, void **, 0x10634);
                    temp_r30_2 = temp_r31 + M2C_FIELD(temp_r29, s16 *, 0xA8);
                    M2C_FIELD(temp_r29_2, M2C_UNK (**)(void *, f32, f32), 4)(temp_r30_2, fn_8026D748(arg0 + 0xFAD8) * temp_f29, lbl_8032BCBC);
                    temp_r11_3 = M2C_FIELD(arg0, void **, 0x10634);
                    var_r4 = (f32 *)0x80330000;
                    var_f1 = lbl_8032BCC4;
                    var_r0 = M2C_FIELD(temp_r11_3, M2C_UNK (**)(void *, f32, f32), 0xCC);
                    var_r3 = temp_r31 + M2C_FIELD(temp_r11_3, s16 *, 0xC8);
                    goto block_11;
                }
            } else if (var_r27 != 2) {
                if (var_r27 != 3) {
                    var_r26 = arg0 + 0x10000;
                } else {
                    temp_r29_2 = M2C_FIELD(arg0, void **, 0x10494);
                    var_r26 = arg0 + 0x10000;
                    temp_r30_3 = arg0 + 0x102F8 + M2C_FIELD(temp_r29_2, s16 *, 0xA8);
                    M2C_FIELD(temp_r29_2, M2C_UNK (**)(void *, f32, f32), 4)(temp_r30_3, lbl_8032BCBC, fn_8026D750(temp_r28) + temp_f30);
                    temp_r30_4 = M2C_FIELD(arg0, void **, 0x10b14);
                    temp_r29_2 = arg0 + 0x10978 + M2C_FIELD(temp_r30_4, s16 *, 0xA8);
                    M2C_FIELD(temp_r30_5, M2C_UNK (**)(void *, f32, f32), 4)(temp_r29_2, temp_f30, fn_8026D750(temp_r28) * temp_f29);
                }
            } else {
                temp_r29_2 = M2C_FIELD(arg0, void **, 0x102f4);
                var_r26 = arg0 + 0x10000;
                temp_r30_6 = sp60 + M2C_FIELD(temp_r29_2, s16 *, 0xA8);
                temp_f31 = fn_8026D748(temp_r28) + temp_f30;
                M2C_FIELD(temp_r29_2, M2C_UNK (**)(void *, f32, f32), 4)(temp_r30_6, temp_f31, fn_8026D750(temp_r28) + temp_f30);
                temp_r29_2 = M2C_FIELD(arg0, void **, 0x10974);
                temp_r30_7 = temp_r22 + M2C_FIELD(temp_r29_2, s16 *, 0xA8);
                temp_f31 = fn_8026D748(temp_r28) * temp_f29;
                M2C_FIELD(temp_r29_2, M2C_UNK (**)(void *, f32, f32), 4)(temp_r30_7, temp_f31, fn_8026D750(temp_r28) + temp_f30);
                temp_r11_4 = M2C_FIELD(arg0, void **, 0x10974);
                var_r4 = &lbl_8032BCC8;
                var_f1 = lbl_8032BCD0;
                var_r0 = M2C_FIELD(temp_r11_4, M2C_UNK (**)(void *, f32, f32), 0xCC);
                var_r3 = temp_r22 + M2C_FIELD(temp_r11_4, s16 *, 0xC8);
block_11:
                var_f2 = *var_r4;
                goto block_12;
            }
        } else {
            temp_r29 = M2C_FIELD(arg0, void **, 0x10154);
            var_r26 = arg0 + 0x10000;
            temp_r30_8 = sp54 + M2C_FIELD(temp_r29, s16 *, 0xA8);
            M2C_FIELD(temp_r29, M2C_UNK (**)(void *, f32, f32), 4)(temp_r30_8, fn_8026D748(temp_r28) + temp_f30, lbl_8032BCBC);
            temp_r30_9 = M2C_FIELD(arg0, void **, 0x107d4);
            temp_r29 = sp5C + M2C_FIELD(temp_r30_9, s16 *, 0xA8);
            temp_f31 = fn_8026D748(temp_r28) + temp_f30;
            var_r0 = M2C_FIELD(temp_r30, M2C_UNK (**)(void *, f32, f32), 4);
            var_f2 = fn_8026D750(temp_r28) * temp_f29;
            var_r3 = temp_r29;
            var_f1 = temp_f31;
block_12:
            var_r0(var_r3, var_f1, var_f2);
        }
        var_r27 += 1;
    } while (var_r27 <= 3);
    temp_r30 = arg0 + 0x5F60;
    fn_8026238C(temp_r30, 1, lbl_8032BCC8);
    fn_8026238C(temp_r30, 0, lbl_8032BCC8);
    M2C_ERROR(/* unknown instruction: mfcr $r18 */);
    fn_8026238C(temp_r30, 2, lbl_8032BCC8);
    fn_80262308(temp_r30, 1, lbl_8032BCD4, lbl_8032BCD8, lbl_8032BCD4, lbl_8032BCC8);
    fn_80262308(temp_r30, 0, lbl_8032BCD4, lbl_8032BCD8, lbl_8032BCD4, lbl_8032BCC8);
    fn_80262308(temp_r30, 2, lbl_8032BCD4, lbl_8032BCD8, lbl_8032BCD4, lbl_8032BCC8);
    temp_r9_3 = M2C_FIELD(var_r26, void **, 0xB18);
    temp_r24 = MissionProgress__GetCount();
    if (temp_r9_3 != NULL) {
        var_r30 = temp_r9_3 + (M2C_FIELD(temp_r9_3, s32 *, -8) * 0x1F4);
        if (temp_r9_3 != var_r30) {
            do {
                var_r30 -= 0x1F4;
                temp_r9_4 = M2C_FIELD(var_r30, void **, 0x19C);
                M2C_FIELD(temp_r9_4, M2C_UNK (**)(void *, M2C_UNK), 0xC)(var_r30 + M2C_FIELD(temp_r9_4, s16 *, 8), 0);
            } while ((void *) M2C_FIELD(var_r26, void **, 0xB18) != var_r30);
        }
        Mem__DeleteArray(M2C_FIELD(var_r26, void **, 0xB18) - 8);
    }
    temp_r30_12 = temp_r24 + 1;
    var_r29 = temp_r24;
    temp_r27 = Mem__NewArray((temp_r30_12 * 0x1F4) + 8) + 8;
    M2C_FIELD(temp_r27, s32 *, -8) = temp_r30_12;
    var_r30_2 = temp_r27;
    if (temp_r24 != -1) {
        do {
            fn_80270450(var_r30_2);
            var_r30_2 += 0x1F4;
            temp_cr0_eq = var_r29 == 0;
            var_r29 -= 1;
        } while (temp_cr0_eq == 0);
    }
    M2C_FIELD(var_r26, void **, 0xB18) = temp_r27;
    temp_r11_4 = M2C_FIELD(temp_r27, void **, 0x19C);
    temp_f31 = lbl_8032BCC0;
    var_r25 = 1;
    M2C_FIELD(temp_r11_4, M2C_UNK (**)(void *, M2C_UNK *), 0x36C)(temp_r27 + M2C_FIELD(temp_r11_4, s16 *, 0x368), &lbl_8032BC78);
    temp_r11_4 = M2C_FIELD(var_r26, void **, 0xB18);
    temp_r9_5 = M2C_FIELD(temp_r11_4, void **, 0x19C);
    M2C_FIELD(temp_r9_5, M2C_UNK (**)(void *, f32, f32), 0xEC)(temp_r11_4 + M2C_FIELD(temp_r9_5, s16 *, 0xE8), temp_f31, temp_f31);
    temp_r10 = M2C_FIELD(var_r26, void **, 0xB18);
    temp_r9_6 = M2C_FIELD(temp_r10, void **, 0x19C);
    M2C_FIELD(temp_r9_6, M2C_UNK (**)(void *, f32, f32, f32, f32, f32), 0x3E4)(temp_r10 + M2C_FIELD(temp_r9_6, s16 *, 0x3E0), lbl_8032BCDC, M2C_FIELD(&lbl_8032BCE0, f32 *, 0), M2C_FIELD(&lbl_8032BCE0, f32 *, 0), M2C_FIELD(&lbl_8032BCE0, f32 *, 0), M2C_FIELD(&lbl_8032BCE0, f32 *, 0));
    temp_r10 = M2C_FIELD(var_r26, void **, 0xB18);
    temp_r11_4 = M2C_FIELD(temp_r10, void **, 0x19C);
    M2C_FIELD(temp_r11_4, M2C_UNK (**)(void *, f32, f32, f32, f32), 0x10C)(temp_r10 + M2C_FIELD(temp_r11_4, s16 *, 0x108), lbl_8032BCC8, lbl_8032BCC8, lbl_8032BCC8, lbl_8032BCC8);
    temp_r29 = M2C_FIELD(var_r26, void **, 0xB18);
    temp_r30_13 = M2C_FIELD(temp_r29, void **, 0x19C);
    temp_r29 = temp_r29 + M2C_FIELD(temp_r30_13, s16 *, 0xA8);
    M2C_FIELD(temp_r30_13, M2C_UNK (**)(void *, f32, f32), 4)(temp_r29, fn_8026D748(var_r26 - 0x528) * temp_f31, lbl_8032BCE4);
    temp_r11_4 = M2C_FIELD(var_r26, void **, 0xB18);
    temp_r9_7 = M2C_FIELD(temp_r11_4, void **, 0x19C);
    M2C_FIELD(temp_r9_7, M2C_UNK (**)(void *, M2C_UNK), 0x1B4)(temp_r11_4 + M2C_FIELD(temp_r9_7, s16 *, 0x1B0), 0x258);
    temp_r11_4 = M2C_FIELD(var_r26, void **, 0xB18);
    temp_r9_8 = M2C_FIELD(temp_r11_4, void **, 0x19C);
    M2C_FIELD(temp_r9_8, M2C_UNK (**)(void *, M2C_UNK), 0x1EC)(temp_r11_4 + M2C_FIELD(temp_r9_8, s16 *, 0x1E8), 0);
    Sphere__AddChild(var_r26 - 0x388, M2C_FIELD(var_r26, void **, 0xB18));
    if (temp_r24 >= 1) {
        var_r27_2 = 0x1F4;
        do {
            temp_r3 = var_r25 - 1;
            temp_r29 = var_r27_2 + M2C_FIELD(var_r26, void **, 0xB18);
            temp_r30_15 = M2C_FIELD(temp_r29, void **, 0x19C);
            temp_r29 = temp_r29 + M2C_FIELD(temp_r30_15, s16 *, 0x368);
            M2C_FIELD(temp_r30_16, M2C_UNK (**)(void *, s32), 4)(temp_r29, *MissionProgress__GetByIndex(temp_r3));
            temp_r3_2 = var_r27_2 + M2C_FIELD(var_r26, void **, 0xB18);
            temp_r9_9 = M2C_FIELD(temp_r3_2, void **, 0x19C);
            M2C_FIELD(temp_r9_9, M2C_UNK (**)(void *, f32, f32), 0xEC)(temp_r3_2 + M2C_FIELD(temp_r9_9, s16 *, 0xE8), M2C_FIELD(&lbl_8032BCE0, f32 *, 0), M2C_FIELD(&lbl_8032BCE0, f32 *, 0));
            temp_r30_17 = var_r27_2 + M2C_FIELD(var_r26, void **, 0xB18);
            temp_r29 = M2C_FIELD(temp_r30_17, void **, 0x19C);
            temp_r30_18 = temp_r30_17 + M2C_FIELD(temp_r29, s16 *, 0x3E0);
            M2C_FIELD(temp_r29, M2C_UNK (**)(void *, f32 *, f32, f32, f32, f32, f32), 4)(temp_r30_18, &lbl_8032BCE4, lbl_8032BCDC, M2C_FIELD(&lbl_8032BCE0, f32 *, 0), M2C_FIELD(&lbl_8032BCE0, f32 *, 0), fn_8026D748(var_r26 - 0x528) - lbl_8032BCE4, M2C_FIELD(&lbl_8032BCE0, f32 *, 0));
            temp_r3_3 = var_r27_2 + M2C_FIELD(var_r26, void **, 0xB18);
            temp_r9_10 = M2C_FIELD(temp_r3_3, void **, 0x19C);
            M2C_FIELD(temp_r9_10, M2C_UNK (**)(void *, M2C_UNK), 0x1EC)(temp_r3_3 + M2C_FIELD(temp_r9_10, s16 *, 0x1E8), 0);
            temp_r3_4 = var_r27_2 + M2C_FIELD(var_r26, void **, 0xB18);
            temp_r9_11 = M2C_FIELD(temp_r3_4, void **, 0x19C);
            temp_r30_19 = M2C_FIELD(temp_r9_11, u8 *(**)(void *), 0x3AC)(temp_r3_4 + M2C_FIELD(temp_r9_11, s16 *, 0x3A8));
            temp_r11_3 = var_r27_2 + M2C_FIELD(var_r26, void **, 0xB18);
            temp_r9_12 = M2C_FIELD(temp_r11_3, void **, 0x19C);
            M2C_FIELD(temp_r9_12, M2C_UNK (**)(void *), 0x3B4)(temp_r11_3 + M2C_FIELD(temp_r9_12, s16 *, 0x3B0));
            temp_r3_5 = var_r27_2 + M2C_FIELD(var_r26, void **, 0xB18);
            temp_r9_13 = M2C_FIELD(temp_r3_5, void **, 0x19C);
            M2C_FIELD(temp_r9_13, M2C_UNK (**)(void *), 0x3BC)(temp_r3_5 + M2C_FIELD(temp_r9_13, s16 *, 0x3B8));
            if ((s32) *temp_r30_19 == 0x20) {
                temp_r3_6 = var_r27_2 + M2C_FIELD(var_r26, void **, 0xB18);
                temp_r9_14 = M2C_FIELD(temp_r3_6, void **, 0x19C);
                M2C_FIELD(temp_r9_14, M2C_UNK (**)(void *, f32), 0x46C)(temp_r3_6 + M2C_FIELD(temp_r9_14, s16 *, 0x468), lbl_8032BCE8);
            } else {
                temp_r3_7 = var_r27_2 + M2C_FIELD(var_r26, void **, 0xB18);
                temp_r9_15 = M2C_FIELD(temp_r3_7, void **, 0x19C);
                M2C_FIELD(temp_r9_15, M2C_UNK (**)(void *, f32), 0x46C)(temp_r3_7 + M2C_FIELD(temp_r9_15, s16 *, 0x468), lbl_8032BCEC);
            }
            temp_r3_8 = var_r27_2 + M2C_FIELD(var_r26, void **, 0xB18);
            temp_r9_16 = M2C_FIELD(temp_r3_8, void **, 0x19C);
            M2C_FIELD(temp_r9_16, M2C_UNK (**)(void *, M2C_UNK), 0x1B4)(temp_r3_8 + M2C_FIELD(temp_r9_16, s16 *, 0x1B0), 0x258);
            temp_r3_9 = var_r27_2 + M2C_FIELD(var_r26, void **, 0xB18);
            temp_r9_17 = M2C_FIELD(temp_r3_9, void **, 0x19C);
            M2C_FIELD(temp_r9_17, M2C_UNK (**)(void *), 0x3C)(temp_r3_9 + M2C_FIELD(temp_r9_17, s16 *, 0x38));
            if (((s32) M2C_FIELD(MissionProgress__GetByIndex(temp_r3), s32 *, 8) != 0) || (((s32) M2C_FIELD(M2C_FIELD(lbl_803DC3C0, void **, 0x238), s32 *, 4) == 2) && (PickupManager__CountPickupsByType(lbl_803DC5EC, 8) == 0) && ((u32) (var_r25 - 2) <= 1U))) {
                temp_r3_10 = var_r27_2 + M2C_FIELD(var_r26, void **, 0xB18);
                temp_r9_18 = M2C_FIELD(temp_r3_10, void **, 0x19C);
                M2C_FIELD(temp_r9_18, M2C_UNK (**)(void *, f32, f32, f32, f32), 0x10C)(temp_r3_10 + M2C_FIELD(temp_r9_18, s16 *, 0x108), lbl_8032BCF0, lbl_8032BCF0, lbl_8032BCF0, lbl_8032BCF0);
            } else {
                temp_r3_11 = var_r27_2 + M2C_FIELD(var_r26, void **, 0xB18);
                temp_r9_19 = M2C_FIELD(temp_r3_11, void **, 0x19C);
                M2C_FIELD(temp_r9_19, M2C_UNK (**)(void *, f32 *, f32, f32, f32, f32), 0x10C)(temp_r3_11 + M2C_FIELD(temp_r9_19, s16 *, 0x108), &lbl_8032BCC8, lbl_8032BCC8, lbl_8032BCC8, lbl_8032BCC8, lbl_8032BCC8);
            }
            Sphere__AddChild(var_r26 - 0x388, M2C_FIELD(var_r26, void **, 0xB18) + var_r27_2);
            temp_r3_12 = var_r27_2 + M2C_FIELD(var_r26, void **, 0xB18);
            temp_r9_20 = M2C_FIELD(temp_r3_12, void **, 0x19C);
            temp_f1 = M2C_FIELD(temp_r9_20, f32 (**)(void *), 0x3B4)(temp_r3_12 + M2C_FIELD(temp_r9_20, s16 *, 0x3B0));
            M2C_ERROR(/* unknown instruction: cror cr0un, cr0eq, cr0lt */);
            if (0 == 0) {

            }
            var_r25 += 1;
            var_r27_2 += 0x1F4;
        } while (var_r25 <= temp_r24);
    }
    var_f31 = M2C_FIELD(&lbl_8032BCE0, f32 *, 0);
    if (temp_r24 > 0) {
        temp_f29 = lbl_8032BCF4;
        var_r25_2 = temp_r24;
        temp_f30 = lbl_8032BCF8;
        var_r30_3 = 0x1F4;
        do {
            temp_r3_13 = var_r30_3 + M2C_FIELD(var_r26, void **, 0xB18);
            temp_r9_21 = M2C_FIELD(temp_r3_13, void **, 0x19C);
            M2C_FIELD(temp_r9_21, M2C_UNK (**)(void *, f32, f32), 0xAC)(temp_r3_13 + M2C_FIELD(temp_r9_21, s16 *, 0xA8), lbl_8032BCD0, var_f31 + temp_f29);
            temp_r3_14 = var_r30_3 + M2C_FIELD(var_r26, void **, 0xB18);
            temp_r9_22 = M2C_FIELD(temp_r3_14, void **, 0x19C);
            var_r30_3 += 0x1F4;
            var_r25_2 -= 1;
            var_f31 += M2C_FIELD(temp_r9_22, f32 (**)(void *), 0x3BC)(temp_r3_14 + M2C_FIELD(temp_r9_22, s16 *, 0x3B8)) + temp_f30;
        } while (var_r25_2 != 0);
    }
    OptionsMenu__ClearWidgetOpacity(var_r26 + 0x29A4);
    sp30 = lbl_8031FC10;
    memset(sp68, 0, 0x18U);
    if (Game__GetPlayerImpl(lbl_803DC3C0, 0) != NULL) {
        temp_r28_2 = PersistentData__GetPickupCountForLevel(lbl_803DC368 + 0x18C, M2C_FIELD(M2C_FIELD(lbl_803DC3C0, void **, 0x238), s32 *, 4), 9);
        temp_r29_19 = PersistentData__GetUnavailablePickupCountForLevel(lbl_803DC368 + 0x18C, M2C_FIELD(M2C_FIELD(lbl_803DC3C0, void **, 0x238), s32 *, 4), 9);
        if (temp_r28_2 > 0) {
            sprintf((s8 *) &sp30, &lbl_8032BC88, (s8 *) temp_r29_19, temp_r28_2);
            temp_r29 = var_r26 + 0xCBC;
            fn_80270784(temp_r29, (s8 *) &sp30);
            fn_8026D498(var_r26 + 0xB1C);
            fn_8026D498(temp_r29);
        } else {
            fn_8026D514(var_r26 + 0xB1C);
            fn_8026D514(var_r26 + 0xCBC);
        }
    }
    if (Game__GetPlayerImpl(lbl_803DC3C0, 0) != NULL) {
        temp_r28_2 = PersistentData__GetPickupCountForLevel(lbl_803DC368 + 0x18C, M2C_FIELD(M2C_FIELD(lbl_803DC3C0, void **, 0x238), s32 *, 4), 0xA);
        temp_r29_19 = PersistentData__GetUnavailablePickupCountForLevel(lbl_803DC368 + 0x18C, M2C_FIELD(M2C_FIELD(lbl_803DC3C0, void **, 0x238), s32 *, 4), 0xA);
        if (temp_r28_2 > 0) {
            sprintf((s8 *) &sp30, &lbl_8032BC88, (s8 *) temp_r29_19, temp_r28_2);
            temp_r29 = var_r26 + 0x1050;
            fn_80270784(temp_r29, (s8 *) &sp30);
            fn_8026D498(var_r26 + 0xEB0);
            fn_8026D498(temp_r29);
        } else {
            fn_8026D514(var_r26 + 0xEB0);
            fn_8026D514(var_r26 + 0x1050);
        }
    }
    if (Game__GetPlayerImpl(lbl_803DC3C0, 0) != NULL) {
        temp_r28_2 = PersistentData__GetPickupCountForLevel(lbl_803DC368 + 0x18C, M2C_FIELD(M2C_FIELD(lbl_803DC3C0, void **, 0x238), s32 *, 4), 8);
        temp_r29_19 = PersistentData__GetUnavailablePickupCountForLevel(lbl_803DC368 + 0x18C, M2C_FIELD(M2C_FIELD(lbl_803DC3C0, void **, 0x238), s32 *, 4), 8);
        if (temp_r28_2 > 0) {
            sprintf((s8 *) &sp30, &lbl_8032BC88, (s8 *) temp_r29_19, temp_r28_2);
            temp_r29 = var_r26 - 0xBFC;
            fn_80270784(temp_r29, (s8 *) &sp30);
            fn_8026D498(var_r26 - 0xD9C);
            fn_8026D498(temp_r29);
        } else {
            fn_8026D514(var_r26 - 0xD9C);
            fn_8026D514(var_r26 - 0xBFC);
        }
    }
    temp_r0 = M2C_FIELD(M2C_FIELD(lbl_803DC3C0, void **, 0x238), s32 *, 4);
    switch (temp_r0) {                              /* switch 1; irregular */
    case 3:                                         /* switch 1 */
    case 5:                                         /* switch 1 */
        if (Game__GetPlayerImpl(lbl_803DC3C0, 0) != NULL) {
            var_r29_2 = Avatar__GetStatValueByIndex(Game__GetPlayerImpl(lbl_803DC3C0, 0), 3);
            if (Game__GetPlayerImpl(lbl_803DC3C0, 1) != NULL) {
                var_r29_2 += Avatar__GetStatValueByIndex(Game__GetPlayerImpl(lbl_803DC3C0, 1), 3);
            }
            var_r3_2 = Game__GetPlayerImpl(lbl_803DC3C0, 0);
            var_r4_2 = 0x14;
block_61:
            sprintf((s8 *) &sp30, &lbl_8032BC88, (s8 *) var_r29_2, Avatar__GetStatValueByIndex(var_r3_2, var_r4_2));
            fn_80270784(var_r26 + 0x13E4, (s8 *) &sp30);
        }
        break;
    case 12:                                        /* switch 1 */
        if (Game__GetPlayerImpl(lbl_803DC3C0, 0) != NULL) {
            var_r29_2 = Avatar__GetStatValueByIndex(Game__GetPlayerImpl(lbl_803DC3C0, 0), 0xD);
            if (Game__GetPlayerImpl(lbl_803DC3C0, 1) != NULL) {
                var_r29_2 += Avatar__GetStatValueByIndex(Game__GetPlayerImpl(lbl_803DC3C0, 1), 0xD);
            }
            var_r3_2 = Game__GetPlayerImpl(lbl_803DC3C0, 0);
            var_r4_2 = 0x16;
            goto block_61;
        }
        break;
    case 13:                                        /* switch 1 */
        if (Game__GetPlayerImpl(lbl_803DC3C0, 0) != NULL) {
            var_r29_3 = Avatar__GetStatValueByIndex(Game__GetPlayerImpl(lbl_803DC3C0, 0), 0xC);
            if (Game__GetPlayerImpl(lbl_803DC3C0, 1) != NULL) {
                var_r29_3 += Avatar__GetStatValueByIndex(Game__GetPlayerImpl(lbl_803DC3C0, 1), 0xC);
            }
            sprintf((s8 *) &sp30, &lbl_8032BC88, (s8 *) var_r29_3, Avatar__GetStatValueByIndex(Game__GetPlayerImpl(lbl_803DC3C0, 0), 0x15));
            fn_80270784(var_r26 + 0x13E4, (s8 *) &sp30);
        }
        break;
    }
    var_r28 = 8;
    var_r29_4 = arg0 + 0x19FB4;
    var_r30_4 = arg0 + 0x19E18;
    do {
        temp_r9_23 = *var_r29_4;
        var_r29_4 += 0x1A0;
        temp_r3_15 = var_r30_4 + M2C_FIELD(temp_r9_23, s16 *, 0x130);
        var_r30_4 += 0x1A0;
        M2C_FIELD(temp_r9_23, M2C_UNK (**)(void *, f32 *, f32, f32, f32, f32), 0x134)(temp_r3_15, &lbl_8032BCC8, lbl_8032BCC8, lbl_8032BCC8, lbl_8032BCC8, M2C_FIELD(&lbl_8032BCE0, f32 *, 0));
        var_r28 -= 1;
    } while (var_r28 != 0);
    temp_r30_20 = arg0 + 0x19A8C;
    var_r28_2 = 8;
    UIList__ClearEntries(temp_r30_20);
    UIList__Update(temp_r30_20);
    UIList__SetEnabled(temp_r30_20);
    M2C_FIELD(var_r26, s32 *, -0xDA0) = arg1;
    UI__SetColorRGBA(var_r26 - 0x528, lbl_8032BCC8, lbl_8032BCC8, lbl_8032BCC8, M2C_FIELD(&lbl_8032BCE0, f32 *, 0));
    Menu__RebuildButtonPromptWidget(var_r26 - 0x4AF0);
    var_r29_5 = arg0 + 0x19FB4;
    var_r30_5 = arg0 + 0x19E18;
    do {
        temp_r9_24 = *var_r29_5;
        var_r29_5 += 0x1A0;
        temp_r3_16 = var_r30_5 + M2C_FIELD(temp_r9_24, s16 *, 0x130);
        var_r30_5 += 0x1A0;
        M2C_FIELD(temp_r9_24, M2C_UNK (**)(void *, f32 *, f32, f32, f32, f32), 0x134)(temp_r3_16, &lbl_8032BCC8, lbl_8032BCC8, lbl_8032BCC8, lbl_8032BCC8, M2C_FIELD(&lbl_8032BCE0, f32 *, 0));
        var_r28_2 -= 1;
    } while (var_r28_2 != 0);
    UI__SetColorRGBA(var_r26 + 0x7B54, lbl_8032BCC8, lbl_8032BCC8, lbl_8032BCC8, M2C_FIELD(&lbl_8032BCE0, f32 *, 0));
    UI__SetColorRGBA(var_r26 + 0x7CF4, lbl_8032BCC8, lbl_8032BCC8, lbl_8032BCC8, M2C_FIELD(&lbl_8032BCE0, f32 *, 0));
    M2C_ERROR(/* unknown instruction: mtcrf 0x80, $r18 */);
    if (M2C_ERROR(/* Read from unset register $cr0_eq */)) {
        if (M2C_ERROR(/* Read from unset register $cr0_gt */)) {
            switch (arg1) {                         /* switch 2; irregular */
            case 0x29A:                             /* switch 2 */
                temp_r28 = arg0 + 0x18AEC;
                temp_r27 = arg0 + 0x18CE0;
                temp_r26 = arg0 + 0x18ED4;
                temp_r25 = arg0 + 0x190C8;
                temp_r24_2 = arg0 + 0x192BC;
                UI__SetColorRGBA(var_r26 - 0x528, lbl_8032BCC8, lbl_8032BCC8, lbl_8032BCC8, lbl_8032BCC8);
                temp_r30_21 = arg0 + 0x19A8C;
                temp_r9_25 = M2C_FIELD(arg0, void **, 0x18C88);
                M2C_FIELD(temp_r9_25, M2C_UNK (**)(void *, M2C_UNK *), 0x36C)(temp_r28 + M2C_FIELD(temp_r9_25, s16 *, 0x368), &lbl_8032BC94);
                temp_r9_26 = M2C_FIELD(arg0, void **, 0x18E7C);
                M2C_FIELD(temp_r9_26, M2C_UNK (**)(void *, M2C_UNK *), 0x36C)(temp_r27 + M2C_FIELD(temp_r9_26, s16 *, 0x368), &lbl_8032BC9C);
                temp_r9_27 = M2C_FIELD(arg0, void **, 0x19070);
                M2C_FIELD(temp_r9_27, M2C_UNK (**)(void *, M2C_UNK *), 0x36C)(temp_r26 + M2C_FIELD(temp_r9_27, s16 *, 0x368), &lbl_8032BCA8);
                temp_r9_28 = M2C_FIELD(arg0, void **, 0x19264);
                M2C_FIELD(temp_r9_28, M2C_UNK (**)(void *, M2C_UNK *), 0x36C)(temp_r25 + M2C_FIELD(temp_r9_28, s16 *, 0x368), &lbl_8032B648);
                temp_r9_29 = M2C_FIELD(arg0, void **, 0x19458);
                M2C_FIELD(temp_r9_29, M2C_UNK (**)(void *, M2C_UNK *), 0x36C)(temp_r24_2 + M2C_FIELD(temp_r9_29, s16 *, 0x368), &lbl_8032BCB4);
                temp_r9_30 = M2C_FIELD(arg0, void **, 0x1964C);
                M2C_FIELD(temp_r9_30, M2C_UNK (**)(void *, M2C_UNK *), 0x36C)(arg0 + 0x194B0 + M2C_FIELD(temp_r9_30, s16 *, 0x368), &lbl_8032B788);
                temp_r9_31 = M2C_FIELD(arg0, void **, 0x19840);
                M2C_FIELD(temp_r9_31, M2C_UNK (**)(void *, M2C_UNK *), 0x36C)(arg0 + 0x196A4 + M2C_FIELD(temp_r9_31, s16 *, 0x368), &lbl_8032B790);
                UIList__AddEntry(temp_r30_21, temp_r28, 0, 0);
                UIList__AddEntry(temp_r30_21, temp_r27, 2, 0);
                UIList__AddEntry(temp_r30_21, temp_r26, 4, 0);
                UIList__AddEntry(temp_r30_21, temp_r25, 5, 0);
                UIList__AddEntry(temp_r30_21, temp_r24_2, 1, 0);
                temp_r9_32 = M2C_FIELD(arg0, void **, 0x19C);
                M2C_FIELD(temp_r9_32, M2C_UNK (**)(void *, f32, f32, f32, f32), 0x134)(arg0 + M2C_FIELD(temp_r9_32, s16 *, 0x130), lbl_8032BCC8, lbl_8032BCC8, lbl_8032BCC8, lbl_8032BCC8);
                UIList__UpdateVisibility(temp_r30_21);
                temp_r9_33 = M2C_FIELD(arg0, void **, 0x19FB4);
                M2C_FIELD(temp_r9_33, M2C_UNK (**)(void *, f32, f32, f32, f32), 0x134)(arg0 + 0x19E18 + M2C_FIELD(temp_r9_33, s16 *, 0x130), lbl_8032BCC8, lbl_8032BCC8, lbl_8032BCC8, lbl_8032BCFC);
                temp_r9_34 = M2C_FIELD(arg0, void **, 0x1A154);
                M2C_FIELD(temp_r9_34, M2C_UNK (**)(void *, f32, f32, f32, f32), 0x134)(arg0 + 0x19FB8 + M2C_FIELD(temp_r9_34, s16 *, 0x130), lbl_8032BCC8, lbl_8032BCC8, lbl_8032BCC8, lbl_8032BCFC);
                temp_r9_35 = M2C_FIELD(arg0, void **, 0x1A2F4);
                M2C_FIELD(temp_r9_35, M2C_UNK (**)(void *, f32, f32, f32, f32), 0x134)(arg0 + 0x1A158 + M2C_FIELD(temp_r9_35, s16 *, 0x130), lbl_8032BCC8, lbl_8032BCC8, lbl_8032BCC8, lbl_8032BCFC);
                temp_r9_36 = M2C_FIELD(arg0, void **, 0x1A494);
                M2C_FIELD(temp_r9_36, M2C_UNK (**)(void *, f32, f32, f32, f32), 0x134)(arg0 + 0x1A2F8 + M2C_FIELD(temp_r9_36, s16 *, 0x130), lbl_8032BCC8, lbl_8032BCC8, lbl_8032BCC8, lbl_8032BCFC);
                temp_r9_37 = M2C_FIELD(arg0, void **, 0x1A634);
                M2C_FIELD(temp_r9_37, M2C_UNK (**)(void *, f32, f32, f32, f32), 0x134)(arg0 + 0x1A498 + M2C_FIELD(temp_r9_37, s16 *, 0x130), lbl_8032BCC8, lbl_8032BCC8, lbl_8032BCC8, lbl_8032BCFC);
                MainMenu__UpdatePauseMenuSelectionVisuals(arg0);
                return;
            case 0x29B:                             /* switch 2 */
                fn_8026238C(temp_r30, 0, M2C_FIELD(&lbl_8032BCE0, f32 *, -0x4320));
                fn_80262308(temp_r30, 0, lbl_8032BCD4, lbl_8032BCD8, lbl_8032BCD4, M2C_FIELD(&lbl_8032BCE0, f32 *, -0x4320));
                fn_8026238C(temp_r30, 2, M2C_FIELD(&lbl_8032BCE0, f32 *, -0x4320));
                fn_80262308(temp_r30, 2, lbl_8032BCD4, lbl_8032BCD8, lbl_8032BCD4, M2C_FIELD(&lbl_8032BCE0, f32 *, -0x4320));
                UIList__SetDisabled(arg0 + 0x19A8C);
                M2C_FIELD(lbl_803DC3C0, s32 *, 0x1C60) = 1;
                HUD__ClearAllWidgets(lbl_803DC654);
                HUD__InitializeWidgetCollections(lbl_803DC654);
                return;
            }
        } else {
            switch (arg1) {                         /* switch 3; irregular */
            case 0x2A1:                             /* switch 3 */
                temp_r30_22 = arg0 + 0x19A8C;
                M2C_FIELD(arg0, s32 *, 0x1B52C) = Options__GetDialogVolume(lbl_803DC368 + 0x370);
                M2C_FIELD(arg0, s32 *, 0x1B534) = Options__GetMusicVolume(lbl_803DC368 + 0x370);
                M2C_FIELD(arg0, s32 *, 0x1B530) = Options__GetSoundVolume(lbl_803DC368 + 0x370);
                UIList__SetDisabled(temp_r30_22);
                Menu__RefreshOptionsDisplay(var_r26 + 0x29A4);
                fn_8026238C(temp_r30, 0, M2C_FIELD(&lbl_8032BCE0, f32 *, 0));
                fn_80262308(temp_r30, 0, lbl_8032BCD4, lbl_8032BCD8, lbl_8032BCD4, M2C_FIELD(&lbl_8032BCE0, f32 *, 0));
                UIList__AddEntry(temp_r30_22, var_r26 + 0x681C, 0, 0);
                UIList__AddEntry(temp_r30_22, var_r26 + 0x6A10, 1, 0);
                UIList__AddEntry(temp_r30_22, var_r26 + 0x6C04, 2, 0);
                UIList__AddEntry(temp_r30_22, var_r26 + 0x6DF8, 3, 0);
                UIList__AddEntry(temp_r30_22, var_r26 + 0x6FEC, 4, 0);
                UIList__AddEntry(temp_r30_22, var_r26 + 0x71E0, 5, 0);
                UIList__AddEntry(temp_r30_22, var_r26 + 0x75C8, 7, 0);
                UIList__UpdateVisibility(temp_r30_22);
                return;
            case 0x2A3:                             /* switch 3 */
                UIList__SetDisabled(arg0 + 0x19A8C);
                HUD__ClearAllWidgets(lbl_803DC654);
                Game__TriggerMenuFade(lbl_803DC3C0);
                return;
            }
        }
    } else {
        UIList__SetDisabled(arg0 + 0x19A8C);
        UpgradeMenu__ResetAttackCategorySelection(var_r26 - 0x4AF0);
    }
}
