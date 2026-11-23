/* MainMenu__HandleRightInput @ 0x801448C0 (size: 0xAB0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Sound__Play2D(s32, s32);
void UpgradeMenu__SelectNextAttackCategory(char *);
void MainMenu__RebuildEntriesForCategory(void *, s32);
s32 UIList__GetSelectedIndex(void *);
void MainMenu__SelectNextSaga(void *);
void UI__SetColorRGBA(void *, f32, f32, f32, f32);
s32 MenuInput__IsRightTriggered(s32);
s32 ControllerMap__IsPlayerAssigned(void *, u32);
s32 UIList__GetSelectedEntryValue(void *);
s32 MenuSlider__GetValue(void *);
s32 Options__GetSoundVolume(s32);
void Options__SetMusicVolume(void *, s32);
void Options__SetDialogVolume(void *, s32);
s32 Sound__Play2DWithVolumePitch(char *, void *, f32, f32);
void OptionsMenu__AnimateRightChoice(void *, u32);
void OptionsMenu__UpdateChoiceWidgetsForSelection(void *, s32);
s32 PersistentData__GetCurrentLevel(s32);
s32 PersistentData__GetPendulumUnlocked(s32);
s32 Game__IsLevelSelectable(void *, s32, s32);
void MainMenu__ConfigureScreen(void *, int);
void Options__SetSoundVolume(void *, int);
void SphereAnimSet__ClearAll(void *);
void SphereText__SetText(void *, void *);
void Sphere__HideTree(void *);
void UpgradeMenu__RefreshSelectedUpgradeDisplay(void *);
char * strcpy(char *, const char *);
M2C_UNK UiAnimator__SetKey(s32, f32, f32);
M2C_UNK SphereAnimSet__RestartAll(s32, s32);
M2C_UNK MainMenu__RotateCharacterCarouselForward(s32);
M2C_UNK MenuSlider__Increment(s32);
M2C_UNK Sphere__Render(s32);
extern M2C_UNK lbl_803251FC __attribute__((section(".data")));
extern f32 lbl_8032BB30 __attribute__((section(".data")));
extern f32 lbl_8032BB34 __attribute__((section(".data")));
extern f32 lbl_8032BB38 __attribute__((section(".data")));
extern f64 lbl_8032BB40 __attribute__((section(".data")));
extern f32 lbl_8032BB48 __attribute__((section(".data")));
extern M2C_UNK lbl_803946C4 __attribute__((section(".data")));
extern s32 lbl_803946D0 __attribute__((section(".data")));
extern void *lbl_803DC368;
extern s32 lbl_803DC388;
extern void *lbl_803DCC74;

void MainMenu__HandleRightInput(void *arg0) {
    s32 sp24;
    s32 sp20;
    union { s8 value; unsigned char bytes[24]; } sp8;
    f32 *var_r8;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r30_5;
    s32 temp_r30_6;
    s32 temp_r30_7;
    s32 temp_r30_8;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 temp_r3_4;
    s32 temp_r9_10;
    s32 temp_r9_12;
    s32 temp_r9_16;
    s32 temp_r9_17;
    s32 temp_r9_4;
    s32 temp_r9_5;
    s32 temp_r9_6;
    s32 temp_r9_8;
    s32 temp_r9_9;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r31;
    s8 *temp_r30;
    s8 *var_r3;
    void *(*var_lr)(void *);
    void *temp_r10;
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r26;
    void *temp_r29;
    void *temp_r29_2;
    void *temp_r29_3;
    void *temp_r30_2;
    void *temp_r30_3;
    void *temp_r30_4;
    void *temp_r30_9;
    void *temp_r31;
    void *temp_r3_5;
    void *temp_r9;
    void *temp_r9_11;
    void *temp_r9_13;
    void *temp_r9_14;
    void *temp_r9_15;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_7;
    void *var_r30;
    void *var_r30_2;
    void *var_r31_2;
    void *var_r3_2;
    void *var_r3_3;

    /* Flowgraph is not reducible, falling back to gotos-only mode. */
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x22344);
    if (temp_r0 == 0x11) {
        goto block_23;
    }
    if (temp_r0 > 0x11) {
        goto block_12;
    }
    if (temp_r0 > 5) {
        goto block_6;
    }
    if (temp_r0 >= 4) {
        goto block_123;
    }
    if (temp_r0 == 1) {
        goto block_84;
    }
    return;
block_6:
    if (temp_r0 == 0xA) {
        goto block_123;
    }
    if (temp_r0 > 0xA) {
        goto block_10;
    }
    if (temp_r0 == 7) {
        goto block_20;
    }
    return;
block_10:
    if (temp_r0 == 0x10) {
        goto block_22;
    }
    return;
block_12:
    if (temp_r0 == 0x15) {
        goto block_19;
    }
    if (temp_r0 > 0x15) {
        goto block_16;
    }
    if (temp_r0 == 0x13) {
        goto block_20;
    }
    return;
block_16:
    if (temp_r0 == 0x17) {
        goto block_123;
    }
    if (temp_r0 < 0x17) {
        goto block_27;
    }
    return;
block_19:
    temp_r30 = arg0 + 0x1BA40;
    Sound__Play2D((s32) &lbl_803251FC, 0);
    UpgradeMenu__SelectNextAttackCategory(temp_r30);
    MainMenu__RebuildEntriesForCategory(arg0 + 0x1BBE0, M2C_FIELD(temp_r30, s32 *, 0x3D48));
    UpgradeMenu__RefreshSelectedUpgradeDisplay(temp_r30);
    return;
block_20:
    if (UIList__GetSelectedIndex(arg0 + 0x16504) != 0) {
        goto block_123;
    }
    Sound__Play2D((s32) &lbl_803251FC, 0);
    MainMenu__SelectNextSaga(arg0);
    temp_r9 = M2C_FIELD(arg0, void **, 0xD354);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *, f32, f32, f32, f32), 0x134)(arg0 + 0xD1B8 + M2C_FIELD(temp_r9, s16 *, 0x130), lbl_8032BB30, lbl_8032BB30, lbl_8032BB30, lbl_8032BB30);
    temp_r9_2 = M2C_FIELD(arg0, void **, 0xD4F4);
    M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, f32, f32, f32, f32), 0x134)(arg0 + 0xD358 + M2C_FIELD(temp_r9_2, s16 *, 0x130), lbl_8032BB30, lbl_8032BB30, lbl_8032BB30, lbl_8032BB30);
    SphereAnimSet__ClearAll(M2C_FIELD(arg0, void **, 0xD7FC));
    UiAnimator__SetKey((s32) (M2C_FIELD(arg0, void **, 0xD7FC) + 0x304), lbl_8032BB34, lbl_8032BB30);
    UiAnimator__SetKey((s32) (M2C_FIELD(arg0, void **, 0xD7FC) + 0x304), lbl_8032BB38, lbl_8032BB34);
    SphereAnimSet__RestartAll((s32) M2C_FIELD(arg0, void **, 0xD7FC), 0);
    UI__SetColorRGBA(arg0 + 0xCB38, lbl_8032BB30, lbl_8032BB30, lbl_8032BB30, lbl_8032BB34);
    UI__SetColorRGBA(arg0 + 0xD838, lbl_8032BB30, lbl_8032BB30, lbl_8032BB30, lbl_8032BB34);
    return;
block_22:
    Sound__Play2D(0x8032BA98, 0);
    goto block_24;
block_23:
    Sound__Play2D(0x8032BA98, 0);
    if (MenuInput__IsRightTriggered(0) == 0) {
        goto block_25;
    }
block_24:
    MainMenu__RotateCharacterCarouselForward((s32) (arg0 + 0xFC9C));
    return;
block_25:
    if (ControllerMap__IsPlayerAssigned(lbl_803DCC74, 1U) == 0) {
        goto block_123;
    }
    MenuInput__IsRightTriggered(1);
    MainMenu__RotateCharacterCarouselForward((s32) (arg0 + 0x11F68));
    return;
block_27:
    temp_r3 = UIList__GetSelectedEntryValue(arg0 + 0x16504);
    if (temp_r3 == 0x1C) {
        goto block_42;
    }
    if (temp_r3 > 0x1C) {
        goto block_33;
    }
    if (temp_r3 == 0x1A) {
        goto block_39;
    }
    if (temp_r3 > 0x1A) {
        goto block_40;
    }
    if (temp_r3 == 0x19) {
        goto block_38;
    }
    return;
block_33:
    if (temp_r3 == 0x1E) {
        goto block_75;
    }
    if (temp_r3 < 0x1E) {
        goto block_46;
    }
    if (temp_r3 == 0x1F) {
        goto block_79;
    }
    if (temp_r3 == 0x21) {
        goto block_61;
    }
    return;
block_38:
    temp_r29 = arg0 + 0x16A30;
    MenuSlider__Increment((s32) temp_r29);
    temp_r30_2 = lbl_803DC368 + 0x370;
    Options__SetSoundVolume(temp_r30_2, MenuSlider__GetValue(temp_r29));
    Sound__Play2D(0x8032BAAC, 0);
    return;
block_39:
    temp_r29_2 = arg0 + 0x1728C;
    var_r31 = Options__GetSoundVolume((s32) (lbl_803DC368 + 0x370));
    Options__SetSoundVolume(lbl_803DC368 + 0x370, 5);
    MenuSlider__Increment((s32) temp_r29_2);
    temp_r30_3 = lbl_803DC368 + 0x370;
    Options__SetMusicVolume(temp_r30_3, MenuSlider__GetValue(temp_r29_2));
    sp24 = MenuSlider__GetValue(temp_r29_2) ^ 0x80000000;
    sp20 = 0x43300000;
    var_r8 = (f32 *)0x80330000;
    var_r3 = (s8 *)0x8032BABC;
    goto block_41;
block_40:
    temp_r29_3 = arg0 + 0x17AE8;
    var_r31 = Options__GetSoundVolume((s32) (lbl_803DC368 + 0x370));
    Options__SetSoundVolume(lbl_803DC368 + 0x370, 5);
    MenuSlider__Increment((s32) temp_r29_3);
    temp_r30_4 = lbl_803DC368 + 0x370;
    Options__SetDialogVolume(temp_r30_4, MenuSlider__GetValue(temp_r29_3));
    sp24 = MenuSlider__GetValue(temp_r29_3) ^ 0x80000000;
    sp20 = 0x43300000;
    var_r8 = &lbl_8032BB34;
    var_r3 = (s8 *)0x8032BACC;
block_41:
    Sound__Play2DWithVolumePitch(var_r3, NULL, (f32) ((f64) sp24 - lbl_8032BB40) * lbl_8032BB48, *var_r8);
    Options__SetSoundVolume(lbl_803DC368 + 0x370, var_r31);
    return;
block_42:
    Sound__Play2D(0x8032BADC, 0);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x22368) == 0) {
        goto block_44;
    }
    SphereText__SetText(arg0 + 0x18344, (void *)0x8032BAF0);
    var_r0 = 0;
    goto block_45;
block_44:
    SphereText__SetText(arg0 + 0x18344, (void *)0x8032BAF8);
    var_r0 = 1;
block_45:
    M2C_FIELD(arg0, s32 *, 0x22368) = var_r0;
    OptionsMenu__AnimateRightChoice(arg0 + 0x16890, UIList__GetSelectedEntryValue(arg0 + 0x16504) - 0x1C);
    Sphere__Render((s32) (arg0 + 0x18344));
    return;
block_46:
    Sound__Play2D(0x8032BADC, 0);
    temp_r9_3 = M2C_FIELD(lbl_803DCC74, void **, 0x10);
    if (M2C_FIELD(temp_r9_3, s32 (**)(void *), 0x24)(lbl_803DCC74 + M2C_FIELD(temp_r9_3, s16 *, 0x20)) != 1) {
        goto block_48;
    }
    var_r31_2 = arg0 + 0x20000;
    M2C_FIELD(arg0, s32 *, 0x2236C) = 3;
    goto block_50;
block_48:
    var_r31_2 = arg0 + 0x20000;
    temp_r9_4 = M2C_FIELD(arg0, s32 *, 0x2236C) + 1;
    M2C_FIELD(arg0, s32 *, 0x2236C) = temp_r9_4;
    if (temp_r9_4 <= 3) {
        goto block_50;
    }
    M2C_FIELD(arg0, s32 *, 0x2236C) = 0;
block_50:
    temp_r0_2 = M2C_FIELD(var_r31_2, s32 *, 0x236C);
    if (temp_r0_2 == 1) {
        goto block_57;
    }
    if (temp_r0_2 > 1) {
        goto block_54;
    }
    if (temp_r0_2 == 0) {
        goto block_59;
    }
    goto block_60;
block_54:
    if (temp_r0_2 == 2) {
        goto block_58;
    }
    if (temp_r0_2 != 3) {
        goto block_60;
    }
    SphereText__SetText(var_r31_2 - 0x7AC8, (void *)0x8032BB00);
    goto block_60;
block_57:
    SphereText__SetText(var_r31_2 - 0x7AC8, (void *)0x8032BB04);
    goto block_60;
block_58:
    SphereText__SetText(var_r31_2 - 0x7AC8, (void *)0x8032BB08);
    goto block_60;
block_59:
    SphereText__SetText(var_r31_2 - 0x7AC8, (void *)0x8032BB0C);
block_60:
    var_r30 = arg0 + 0x16890;
    OptionsMenu__UpdateChoiceWidgetsForSelection(lbl_803DC368 + 0x370, M2C_FIELD(var_r31_2, s32 *, 0x236C));
    var_r3_2 = arg0 + 0x16504;
    goto block_74;
block_61:
    Sound__Play2D(0x8032BADC, 0);
    temp_r9_5 = lbl_803DC388 + 1;
    lbl_803DC388 = temp_r9_5;
    if (temp_r9_5 <= 2) {
        goto block_63;
    }
    lbl_803DC388 = 0;
block_63:
    if ((s32) lbl_803DC388 == 1) {
        goto block_70;
    }
    if ((s32) lbl_803DC388 > 1) {
        goto block_67;
    }
    if ((s32) lbl_803DC388 == 0) {
        goto block_69;
    }
    var_r31_2 = arg0 + 0x20000;
    goto block_73;
block_67:
    if ((s32) lbl_803DC388 == 2) {
        goto block_71;
    }
    var_r31_2 = arg0 + 0x20000;
    goto block_73;
block_69:
    var_r30_2 = arg0 + 0x20000;
    SphereText__SetText(arg0 + 0x1872C, (void *)0x8032BB14);
    goto block_72;
block_70:
    var_r30_2 = arg0 + 0x20000;
    SphereText__SetText(arg0 + 0x1872C, (void *)0x8032BB1C);
    goto block_72;
block_71:
    var_r30_2 = arg0 + 0x20000;
    SphereText__SetText(arg0 + 0x1872C, (void *)0x8032BB24);
block_72:
    var_r31_2 = var_r30_2;
block_73:
    var_r3_2 = arg0 + 0x16504;
    var_r30 = arg0 + 0x16890;
block_74:
    OptionsMenu__AnimateRightChoice(var_r30, UIList__GetSelectedEntryValue(var_r3_2) - 0x1C);
    Sphere__Render((s32) (var_r31_2 - 0x7AC8));
    return;
block_75:
    Sound__Play2D(0x8032BADC, 0);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x22370) == 0) {
        goto block_77;
    }
    SphereText__SetText(arg0 + 0x18920, (void *)0x8032BB00);
    var_r0_2 = 0;
    goto block_78;
block_77:
    SphereText__SetText(arg0 + 0x18920, (void *)0x8032BB2C);
    var_r0_2 = 1;
block_78:
    M2C_FIELD(arg0, s32 *, 0x22370) = var_r0_2;
    goto block_83;
block_79:
    Sound__Play2D(0x8032BADC, 0);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x22374) == 0) {
        goto block_81;
    }
    SphereText__SetText(arg0 + 0x18B14, (void *)0x8032BB00);
    var_r0_3 = 0;
    goto block_82;
block_81:
    SphereText__SetText(arg0 + 0x18B14, (void *)0x8032BB2C);
    var_r0_3 = 1;
block_82:
    M2C_FIELD(arg0, s32 *, 0x22374) = var_r0_3;
block_83:
    OptionsMenu__AnimateRightChoice(arg0 + 0x16890, UIList__GetSelectedEntryValue(arg0 + 0x16504) - 0x1C);
    return;
block_84:
    temp_r3_2 = UIList__GetSelectedEntryValue(arg0 + 0x16504);
    if (temp_r3_2 == 0x27) {
        goto block_97;
    }
    if (temp_r3_2 > 0x27) {
        goto block_89;
    }
    if (temp_r3_2 == 0x12) {
        goto block_92;
    }
    if (temp_r3_2 == 0x22) {
        goto block_117;
    }
    return;
block_89:
    if (temp_r3_2 == 0x2B) {
        goto block_120;
    }
    if (temp_r3_2 == 0x31) {
        goto block_113;
    }
    return;
block_92:
    temp_r31 = arg0 + 0x14BF8;
    temp_r30_5 = M2C_FIELD(&lbl_803946C4, s32 *, 0xC) + 1;
    if (temp_r30_5 > PersistentData__GetCurrentLevel((s32) (lbl_803DC368 + 0x17D))) {
        goto block_95;
    }
block_93:
    temp_r9_6 = M2C_FIELD(&lbl_803946C4, s32 *, 0xC) + 1;
    M2C_FIELD(&lbl_803946C4, s32 *, 0xC) = temp_r9_6;
    if (temp_r9_6 <= 0x22) {
        goto block_95;
    }
    M2C_FIELD(&lbl_803946C4, s32 *, 0xC) = 0;
block_95:
    temp_r30_6 = M2C_FIELD(&lbl_803946C4, s32 *, 0xC);
    if (temp_r30_6 > PersistentData__GetCurrentLevel((s32) (lbl_803DC368 + 0x17D))) {
        goto block_93;
    }
    temp_r11 = M2C_FIELD(temp_r31, void **, 0x19C);
    M2C_FIELD(temp_r11, M2C_UNK (**)(void *, s32), 0x36C)(temp_r31 + M2C_FIELD(temp_r11, s16 *, 0x368), *(s32 *)(0x8035E644 + (M2C_FIELD(&lbl_803946C4, s32 *, 0xC) << 5)));
    temp_r9_7 = M2C_FIELD(temp_r31, void **, 0x19C);
    var_lr = M2C_FIELD(temp_r9_7, void *(**)(void *), 0x38C);
    var_r3_3 = temp_r31 + M2C_FIELD(temp_r9_7, s16 *, 0x388);
    goto block_116;
block_97:
    temp_r26 = arg0 + 0x14BF8;
    temp_r3_3 = PersistentData__GetPendulumUnlocked((s32) (lbl_803DC368 + 0x17C));
    if (temp_r3_3 == 0) {
        goto block_106;
    }
    temp_r9_8 = M2C_FIELD(&lbl_803946C4, s32 *, 0xC) + 1;
    M2C_FIELD(&lbl_803946C4, s32 *, 0xC) = temp_r9_8;
    if (temp_r9_8 <= 0x22) {
        goto loop_102;
    }
    M2C_FIELD(&lbl_803946C4, s32 *, 0xC) = 0;
    goto loop_102;
block_100:
    temp_r0_3 = M2C_FIELD(&lbl_803946C4, s32 *, 0xC) + 1;
    M2C_FIELD(&lbl_803946C4, s32 *, 0xC) = temp_r0_3;
    if (temp_r0_3 <= 0x22) {
        goto loop_102;
    }
    M2C_FIELD(&lbl_803946C4, s32 *, 0xC) = temp_r3_4;
loop_102:
    temp_r3_4 = Game__IsLevelSelectable(lbl_803DC368, M2C_FIELD(&lbl_803946C4, s32 *, 0xC), 0);
    if (temp_r3_4 != 0) {
        goto block_104;
    }
    if ((s32) M2C_FIELD(&lbl_803946C4, s32 *, 0xC) != -1) {
        goto block_100;
    }
block_104:
    if ((s32) M2C_FIELD(&lbl_803946C4, s32 *, 0xC) != 0x21) {
        goto block_112;
    }
    Sphere__HideTree(arg0 + 0xB08C);
    strcpy(((s8 *)sp8.bytes), *(char **)(0x8035EAA0 + (*(s32 *)(0x8033C884 + (M2C_FIELD(arg0, s32 *, 0x22330) * 4)) * 4)));
    SphereText__SetText(arg0 + 0xB22C, ((s8 *)sp8.bytes));
    goto block_112;
block_106:
    temp_r30_7 = M2C_FIELD(&lbl_803946C4, s32 *, 0xC) + 1;
    if (temp_r30_7 > PersistentData__GetCurrentLevel((s32) (lbl_803DC368 + 0x17D))) {
        goto loop_111;
    }
    temp_r9_9 = M2C_FIELD(&lbl_803946C4, s32 *, 0xC) + 1;
    M2C_FIELD(&lbl_803946C4, s32 *, 0xC) = temp_r9_9;
    if (temp_r9_9 <= 0x22) {
        goto loop_111;
    }
    M2C_FIELD(&lbl_803946C4, s32 *, 0xC) = temp_r3_3;
    goto loop_111;
block_109:
    temp_r9_10 = M2C_FIELD(&lbl_803946C4, s32 *, 0xC) + 1;
    M2C_FIELD(&lbl_803946C4, s32 *, 0xC) = temp_r9_10;
    if (temp_r9_10 <= 0x22) {
        goto loop_111;
    }
    M2C_FIELD(&lbl_803946C4, s32 *, 0xC) = 0;
loop_111:
    temp_r30_8 = M2C_FIELD(&lbl_803946C4, s32 *, 0xC);
    if (temp_r30_8 > PersistentData__GetCurrentLevel((s32) (lbl_803DC368 + 0x17D))) {
        goto block_109;
    }
block_112:
    temp_r10 = M2C_FIELD(temp_r26, void **, 0x19C);
    M2C_FIELD(temp_r10, M2C_UNK (**)(void *, s32), 0x36C)(temp_r26 + M2C_FIELD(temp_r10, s16 *, 0x368), *(s32 *)(0x8035E644 + (lbl_803946D0 << 5)));
    temp_r9_11 = M2C_FIELD(temp_r26, void **, 0x19C);
    var_lr = M2C_FIELD(temp_r9_11, void *(**)(void *), 0x38C);
    var_r3_3 = temp_r26 + M2C_FIELD(temp_r9_11, s16 *, 0x388);
    goto block_116;
block_113:
    temp_r9_12 = M2C_FIELD(arg0, s32 *, 0x22330) + 1;
    M2C_FIELD(arg0, s32 *, 0x22330) = temp_r9_12;
    if (temp_r9_12 <= 0x3E) {
        goto block_115;
    }
    M2C_FIELD(arg0, s32 *, 0x22330) = 0;
block_115:
    temp_r30_9 = arg0 + 0x14BF8;
    strcpy(((s8 *)sp8.bytes), *(char **)(0x8035EAA0 + (*(s32 *)(0x8033C884 + (M2C_FIELD(arg0, s32 *, 0x22330) * 4)) * 4)));
    temp_r9_13 = M2C_FIELD(arg0, void **, 0x14D94);
    M2C_FIELD(temp_r9_13, M2C_UNK (**)(void *, s8 *), 0x36C)(temp_r30_9 + M2C_FIELD(temp_r9_13, s16 *, 0x368), ((s8 *)sp8.bytes));
    temp_r9_14 = M2C_FIELD(arg0, void **, 0x14D94);
    var_lr = M2C_FIELD(temp_r9_14, void *(**)(void *), 0x38C);
    var_r3_3 = temp_r30_9 + M2C_FIELD(temp_r9_14, s16 *, 0x388);
block_116:
    temp_r3_5 = var_lr(var_r3_3);
    temp_r9_15 = M2C_FIELD(temp_r3_5, void **, 8);
    M2C_FIELD(temp_r9_15, M2C_UNK (**)(void *), 0x1C)(temp_r3_5 + M2C_FIELD(temp_r9_15, s16 *, 0x18));
    return;
block_117:
    temp_r9_16 = M2C_FIELD(arg0, s32 *, 0x22330) + 1;
    M2C_FIELD(arg0, s32 *, 0x22330) = temp_r9_16;
    if (temp_r9_16 <= 0x3E) {
        goto block_119;
    }
    M2C_FIELD(arg0, s32 *, 0x22330) = 0;
block_119:
    strcpy(((s8 *)sp8.bytes), *(char **)(0x8035EAA0 + (*(s32 *)(0x8033C884 + (M2C_FIELD(arg0, s32 *, 0x22330) * 4)) * 4)));
    SphereText__SetText(arg0 + 0xB22C, ((s8 *)sp8.bytes));
    return;
block_120:
    temp_r11_2 = lbl_803DC368 + 0x12C;
    temp_r9_17 = M2C_FIELD(temp_r11_2, s32 *, 4) + 1;
    M2C_FIELD(temp_r11_2, s32 *, 4) = temp_r9_17;
    if (temp_r9_17 <= 2) {
        goto block_122;
    }
    M2C_FIELD(temp_r11_2, s32 *, 4) = 0;
block_122:
    MainMenu__ConfigureScreen(arg0, 0x1A);
block_123:
    return;
}
