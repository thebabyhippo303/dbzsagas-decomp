/* MainMenu__HandleLeftInput @ 0x80145370 (size: 0xADC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Sound__Play2D(s32, s32);
void UpgradeMenu__SelectPreviousAttackCategory(void *);
void MainMenu__RebuildEntriesForCategory(void *, s32);
s32 UIList__GetSelectedIndex(void *);
void MainMenu__SelectPreviousSaga(void *);
void UI__SetColorRGBA(void *, f32, f32, f32, f32);
s32 MenuInput__IsLeftTriggered(s32);
s32 ControllerMap__IsPlayerAssigned(void *, u32);
s32 MenuInput__IsRightTriggered(s32);
s32 UIList__GetSelectedEntryValue(void *);
void MenuSlider__Decrement(void *);
s32 MenuSlider__GetValue(void *);
s32 Options__GetSoundVolume(s32);
void Options__SetMusicVolume(void *, s32);
void Options__SetDialogVolume(void *, s32);
s32 Sound__Play2DWithVolumePitch(char *, void *, f32, f32);
void OptionsMenu__AnimateLeftChoice(void *, u32);
void OptionsMenu__UpdateChoiceWidgetsForSelection(void *, s32);
void OptionsMenu__AnimateRightChoice(void *, u32);
s32 PersistentData__GetCurrentLevel(s32);
s32 PersistentData__GetPendulumUnlocked(s32);
s32 Game__IsLevelSelectable(void *, s32, s32);
void MainMenu__ConfigureScreen(void *, int);
void Options__SetSoundVolume(void *, int);
void SphereAnimSet__ClearAll(void *);
void SphereText__SetText(void *, void *);
void Sphere__HideTree(void *);
void Sphere__ShowTree(void *);
void UpgradeMenu__RefreshSelectedUpgradeDisplay(void *);
char * strcpy(char *, const char *);
void UiAnimator__SetKey(void *, f32, f32);
void SphereAnimSet__RestartAll(void *, s32);
void MainMenu__RotateCharacterCarouselBackward(void *);
void Sphere__Render(void *);
extern M2C_UNK lbl_803251F0 __attribute__((section(".data")));
extern f32 lbl_8032BB74 __attribute__((section(".data")));
extern f32 lbl_8032BB78 __attribute__((section(".data")));
extern f32 lbl_8032BB7C __attribute__((section(".data")));
extern f64 lbl_8032BB80 __attribute__((section(".data")));
extern f32 lbl_8032BB88 __attribute__((section(".data")));
extern M2C_UNK lbl_803946C4 __attribute__((section(".data")));
extern s32 lbl_803946D0 __attribute__((section(".data")));
extern void *lbl_803DC368;
extern s32 lbl_803DC388;
extern void *lbl_803DCC74;
extern s32 lbl_8035E644[];
extern s32 lbl_8033C884[];
extern char *lbl_8035EAA0[];
extern char lbl_8032BB4C[];
extern char lbl_8032BB60[];
extern char lbl_8032BAAC[];
extern char lbl_8032BAF0[];
extern char lbl_8032BAF8[];
extern char lbl_8032BB00[];
extern char lbl_8032BB2C[];

void MainMenu__HandleLeftInput(void *arg0) {
    union I2D { f64 d; struct { s32 hi; s32 lo; } w; } sp28u;
    union { s8 value; unsigned char bytes[32]; } sp8;
    f32 *var_r8;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r30_5;
    s32 temp_r30_6;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r9_10;
    s32 temp_r9_12;
    s32 temp_r9_16;
    s32 temp_r9_17;
    s32 temp_r9_4;
    s32 temp_r9_5;
    s32 temp_r9_6;
    s32 temp_r9_7;
    s32 temp_r9_9;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r0_4;
    s32 var_r31;
    s8 *var_r3;
    void *(*var_lr)(void *);
    void *temp_r10;
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r29;
    void *temp_r29_2;
    void *temp_r29_3;
    void *temp_r29_4;
    void *temp_r29_5;
    void *temp_r30;
    void *temp_r30_2;
    void *temp_r30_3;
    void *temp_r30_4;
    void *temp_r30_7;
    void *temp_r3_3;
    void *temp_r9;
    void *temp_r9_11;
    void *temp_r9_13;
    void *temp_r9_14;
    void *temp_r9_15;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_8;
    void *var_r30;
    void *var_r31_2;
    void *var_r3_2;

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
    if (4 <= temp_r0) {
        goto block_130;
    }
    if (temp_r0 == 1) {
        goto block_84;
    }
    return;
block_6:
    if (temp_r0 == 0xA) {
        goto block_130;
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
        goto block_130;
    }
    if (temp_r0 < 0x17) {
        goto block_27;
    }
    return;
block_19:
    temp_r30 = arg0 + 0x1BA40;
    Sound__Play2D((s32) &lbl_803251F0, 0);
    UpgradeMenu__SelectPreviousAttackCategory(temp_r30);
    MainMenu__RebuildEntriesForCategory(arg0 + 0x1BBE0, M2C_FIELD(temp_r30, s32 *, 0x3D48));
    UpgradeMenu__RefreshSelectedUpgradeDisplay(temp_r30);
    return;
block_20:
    if (UIList__GetSelectedIndex(arg0 + 0x16504) != 0) {
        goto block_130;
    }
    Sound__Play2D((s32) &lbl_803251F0, 0);
    MainMenu__SelectPreviousSaga(arg0);
    temp_r9 = M2C_FIELD(arg0, void **, 0xD354);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *, f32, f32, f32, f32), 0x134)(arg0 + 0xD1B8 + M2C_FIELD(temp_r9, s16 *, 0x130), lbl_8032BB74, lbl_8032BB74, lbl_8032BB74, lbl_8032BB74);
    temp_r9_2 = M2C_FIELD(arg0, void **, 0xD4F4);
    M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, f32, f32, f32, f32), 0x134)(arg0 + 0xD358 + M2C_FIELD(temp_r9_2, s16 *, 0x130), lbl_8032BB74, lbl_8032BB74, lbl_8032BB74, lbl_8032BB74);
    SphereAnimSet__ClearAll(M2C_FIELD(arg0, void **, 0xD65C));
    UiAnimator__SetKey(M2C_FIELD(arg0, void **, 0xD65C) + 0x304, lbl_8032BB78, lbl_8032BB74);
    UiAnimator__SetKey(M2C_FIELD(arg0, void **, 0xD65C) + 0x304, lbl_8032BB7C, lbl_8032BB78);
    SphereAnimSet__RestartAll(M2C_FIELD(arg0, void **, 0xD65C), 0);
    UI__SetColorRGBA(arg0 + 0xCB38, lbl_8032BB74, lbl_8032BB74, lbl_8032BB74, lbl_8032BB78);
    UI__SetColorRGBA(arg0 + 0xD838, lbl_8032BB74, lbl_8032BB74, lbl_8032BB74, lbl_8032BB78);
    return;
block_22:
    Sound__Play2D((s32)lbl_8032BB4C, 0);
    goto block_24;
block_23:
    Sound__Play2D((s32)lbl_8032BB4C, 0);
    if (MenuInput__IsLeftTriggered(0) == 0) {
        goto block_25;
    }
block_24:
    MainMenu__RotateCharacterCarouselBackward(arg0 + 0xFC9C);
    return;
block_25:
    if (ControllerMap__IsPlayerAssigned(lbl_803DCC74, 1U) == 0) {
        goto block_130;
    }
    MenuInput__IsRightTriggered(1);
    MainMenu__RotateCharacterCarouselBackward(arg0 + 0x11F68);
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
    MenuSlider__Decrement(temp_r29);
    temp_r30_2 = lbl_803DC368 + 0x370;
    Options__SetSoundVolume(temp_r30_2, MenuSlider__GetValue(temp_r29));
    Sound__Play2D((s32)lbl_8032BAAC, 0);
    return;
block_39:
    temp_r29_2 = arg0 + 0x1728C;
    var_r31 = Options__GetSoundVolume((s32) (lbl_803DC368 + 0x370));
    Options__SetSoundVolume(lbl_803DC368 + 0x370, 5);
    MenuSlider__Decrement(temp_r29_2);
    temp_r30_3 = lbl_803DC368 + 0x370;
    Options__SetMusicVolume(temp_r30_3, MenuSlider__GetValue(temp_r29_2));
    sp28u.w.lo = MenuSlider__GetValue(temp_r29_2) ^ 0x80000000;
    sp28u.w.hi = 0x43300000;
    var_r8 = (f32 *)0x80330000;
    var_r3 = (s8 *)0x8032BABC;
    goto block_41;
block_40:
    temp_r29_3 = arg0 + 0x17AE8;
    var_r31 = Options__GetSoundVolume((s32) (lbl_803DC368 + 0x370));
    Options__SetSoundVolume(lbl_803DC368 + 0x370, 5);
    MenuSlider__Decrement(temp_r29_3);
    temp_r30_4 = lbl_803DC368 + 0x370;
    Options__SetDialogVolume(temp_r30_4, MenuSlider__GetValue(temp_r29_3));
    sp28u.w.lo = MenuSlider__GetValue(temp_r29_3) ^ 0x80000000;
    sp28u.w.hi = 0x43300000;
    var_r8 = &lbl_8032BB78;
    var_r3 = (s8 *)0x8032BACC;
block_41:
    Sound__Play2DWithVolumePitch(var_r3, NULL, (f32) (sp28u.d - lbl_8032BB80) * lbl_8032BB88, *var_r8);
    Options__SetSoundVolume(lbl_803DC368 + 0x370, var_r31);
    return;
block_42:
    Sound__Play2D((s32)lbl_8032BB60, 0);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x22368) == 0) {
        goto block_44;
    }
    SphereText__SetText(arg0 + 0x18344, lbl_8032BAF0);
    var_r0 = 0;
    goto block_45;
block_44:
    SphereText__SetText(arg0 + 0x18344, lbl_8032BAF8);
    var_r0 = 1;
block_45:
    M2C_FIELD(arg0, s32 *, 0x22368) = var_r0;
    OptionsMenu__AnimateLeftChoice(arg0 + 0x16890, UIList__GetSelectedEntryValue(arg0 + 0x16504) - 0x1C);
    Sphere__Render(arg0 + 0x18344);
    return;
block_46:
    Sound__Play2D((s32)lbl_8032BB60, 0);
    temp_r9_3 = M2C_FIELD(lbl_803DCC74, void **, 0x10);
    if (M2C_FIELD(temp_r9_3, s32 (**)(void *), 0x24)(lbl_803DCC74 + M2C_FIELD(temp_r9_3, s16 *, 0x20)) != 1) {
        goto block_48;
    }
    var_r31_2 = arg0 + 0x20000;
    M2C_FIELD(arg0, s32 *, 0x2236C) = 0;
    goto block_50;
block_48:
    var_r31_2 = arg0 + 0x20000;
    temp_r9_4 = M2C_FIELD(arg0, s32 *, 0x2236C) - 1;
    M2C_FIELD(arg0, s32 *, 0x2236C) = temp_r9_4;
    if (temp_r9_4 >= 0) {
        goto block_50;
    }
    M2C_FIELD(arg0, s32 *, 0x2236C) = 3;
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
    OptionsMenu__UpdateChoiceWidgetsForSelection(lbl_803DC368 + 0x370, M2C_FIELD(var_r31_2, s32 *, 0x236C));
    OptionsMenu__AnimateLeftChoice(arg0 + 0x16890, UIList__GetSelectedEntryValue(arg0 + 0x16504) - 0x1C);
    goto block_74;
block_61:
    Sound__Play2D((s32)lbl_8032BB60, 0);
    temp_r9_5 = lbl_803DC388 - 1;
    lbl_803DC388 = temp_r9_5;
    if (temp_r9_5 >= 0) {
        goto block_63;
    }
    lbl_803DC388 = 2;
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
    var_r30 = arg0 + 0x20000;
    SphereText__SetText(arg0 + 0x1872C, (void *)0x8032BB14);
    goto block_72;
block_70:
    var_r30 = arg0 + 0x20000;
    SphereText__SetText(arg0 + 0x1872C, (void *)0x8032BB1C);
    goto block_72;
block_71:
    var_r30 = arg0 + 0x20000;
    SphereText__SetText(arg0 + 0x1872C, (void *)0x8032BB24);
block_72:
    var_r31_2 = var_r30;
block_73:
    OptionsMenu__AnimateRightChoice(arg0 + 0x16890, UIList__GetSelectedEntryValue(arg0 + 0x16504) - 0x1C);
block_74:
    Sphere__Render(var_r31_2 - 0x7AC8);
    return;
block_75:
    Sound__Play2D((s32)lbl_8032BB60, 0);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x22370) == 0) {
        goto block_77;
    }
    SphereText__SetText(arg0 + 0x18920, (void *)(s32)lbl_8032BB00);
    var_r0_2 = 0;
    goto block_78;
block_77:
    SphereText__SetText(arg0 + 0x18920, (void *)(s32)lbl_8032BB2C);
    var_r0_2 = 1;
block_78:
    M2C_FIELD(arg0, s32 *, 0x22370) = var_r0_2;
    goto block_83;
block_79:
    Sound__Play2D((s32)lbl_8032BB60, 0);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x22374) == 0) {
        goto block_81;
    }
    SphereText__SetText(arg0 + 0x18B14, (void *)(s32)lbl_8032BB00);
    var_r0_3 = 0;
    goto block_82;
block_81:
    SphereText__SetText(arg0 + 0x18B14, (void *)(s32)lbl_8032BB2C);
    var_r0_3 = 1;
block_82:
    M2C_FIELD(arg0, s32 *, 0x22374) = var_r0_3;
block_83:
    OptionsMenu__AnimateLeftChoice(arg0 + 0x16890, UIList__GetSelectedEntryValue(arg0 + 0x16504) - 0x1C);
    return;
block_84:
    temp_r3_2 = UIList__GetSelectedEntryValue(arg0 + 0x16504);
    if (temp_r3_2 == 0x27) {
        goto block_102;
    }
    if (temp_r3_2 > 0x27) {
        goto block_89;
    }
    if (temp_r3_2 == 0x12) {
        goto block_92;
    }
    if (temp_r3_2 == 0x22) {
        goto block_124;
    }
    return;
block_89:
    if (temp_r3_2 == 0x2B) {
        goto block_127;
    }
    if (temp_r3_2 == 0x31) {
        goto block_120;
    }
    return;
block_92:
    temp_r29_4 = arg0 + 0x14BF8;
    temp_r9_6 = M2C_FIELD(&lbl_803946C4, s32 *, 0xC) - 1;
    M2C_FIELD(&lbl_803946C4, s32 *, 0xC) = temp_r9_6;
    if (temp_r9_6 >= 0) {
        goto loop_99;
    }
    var_r0_4 = 0x22;
    goto block_98;
block_94:
    temp_r9_7 = M2C_FIELD(&lbl_803946C4, s32 *, 0xC) - 1;
    M2C_FIELD(&lbl_803946C4, s32 *, 0xC) = temp_r9_7;
    if (temp_r9_7 >= 0) {
        goto block_96;
    }
    M2C_FIELD(&lbl_803946C4, s32 *, 0xC) = 0x22;
block_96:
    if ((s32) M2C_FIELD(&lbl_803946C4, s32 *, 0xC) > 1) {
        goto loop_99;
    }
    var_r0_4 = 2;
block_98:
    M2C_FIELD(&lbl_803946C4, s32 *, 0xC) = var_r0_4;
loop_99:
    temp_r30_5 = M2C_FIELD(&lbl_803946C4, s32 *, 0xC);
    if (temp_r30_5 > PersistentData__GetCurrentLevel((s32) (lbl_803DC368 + 0x17D))) {
        goto block_94;
    }
    if ((s32) M2C_FIELD(&lbl_803946C4, s32 *, 0xC) <= 1) {
        goto block_94;
    }
    temp_r11 = M2C_FIELD(temp_r29_4, void **, 0x19C);
    M2C_FIELD(temp_r11, M2C_UNK (**)(void *, s32), 0x36C)(temp_r29_4 + M2C_FIELD(temp_r11, s16 *, 0x368), lbl_8035E644[M2C_FIELD(&lbl_803946C4, s32 *, 0xC) << 3]);
    temp_r9_8 = M2C_FIELD(temp_r29_4, void **, 0x19C);
    var_lr = M2C_FIELD(temp_r9_8, void *(**)(void *), 0x38C);
    var_r3_2 = temp_r29_4 + M2C_FIELD(temp_r9_8, s16 *, 0x388);
    goto block_123;
block_102:
    temp_r29_5 = arg0 + 0x14BF8;
    temp_r9_9 = M2C_FIELD(&lbl_803946C4, s32 *, 0xC) - 1;
    M2C_FIELD(&lbl_803946C4, s32 *, 0xC) = temp_r9_9;
    if (temp_r9_9 >= 0) {
        goto block_104;
    }
    M2C_FIELD(&lbl_803946C4, s32 *, 0xC) = 0x22;
block_104:
    if (PersistentData__GetPendulumUnlocked((s32) (lbl_803DC368 + 0x17C)) == 0) {
        goto loop_117;
    }
    goto loop_108;
block_106:
    temp_r0_3 = M2C_FIELD(&lbl_803946C4, s32 *, 0xC) - 1;
    M2C_FIELD(&lbl_803946C4, s32 *, 0xC) = temp_r0_3;
    if (temp_r0_3 >= 0) {
        goto loop_108;
    }
    M2C_FIELD(&lbl_803946C4, s32 *, 0xC) = 0x22;
loop_108:
    if (Game__IsLevelSelectable(lbl_803DC368, M2C_FIELD(&lbl_803946C4, s32 *, 0xC), 0) != 0) {
        goto block_110;
    }
    if ((s32) M2C_FIELD(&lbl_803946C4, s32 *, 0xC) != -1) {
        goto block_106;
    }
block_110:
    if ((s32) M2C_FIELD(&lbl_803946C4, s32 *, 0xC) != 0x21) {
        goto block_112;
    }
    Sphere__HideTree(arg0 + 0xB08C);
    strcpy(((s8 *)sp8.bytes), lbl_8035EAA0[lbl_8033C884[M2C_FIELD(arg0, s32 *, 0x22330)]]);
    SphereText__SetText(arg0 + 0xB22C, ((s8 *)sp8.bytes));
    goto block_119;
block_112:
    Sphere__ShowTree(arg0 + 0xB08C);
    goto block_119;
block_113:
    temp_r9_10 = M2C_FIELD(&lbl_803946C4, s32 *, 0xC) - 1;
    M2C_FIELD(&lbl_803946C4, s32 *, 0xC) = temp_r9_10;
    if (temp_r9_10 >= 0) {
        goto block_115;
    }
    M2C_FIELD(&lbl_803946C4, s32 *, 0xC) = 0x22;
block_115:
    if ((s32) M2C_FIELD(&lbl_803946C4, s32 *, 0xC) > 1) {
        goto loop_117;
    }
    M2C_FIELD(&lbl_803946C4, s32 *, 0xC) = 2;
loop_117:
    temp_r30_6 = M2C_FIELD(&lbl_803946C4, s32 *, 0xC);
    if (temp_r30_6 > PersistentData__GetCurrentLevel((s32) (lbl_803DC368 + 0x17D))) {
        goto block_113;
    }
    if ((s32) M2C_FIELD(&lbl_803946C4, s32 *, 0xC) <= 1) {
        goto block_113;
    }
block_119:
    temp_r10 = M2C_FIELD(temp_r29_5, void **, 0x19C);
    M2C_FIELD(temp_r10, M2C_UNK (**)(void *, s32), 0x36C)(temp_r29_5 + M2C_FIELD(temp_r10, s16 *, 0x368), lbl_8035E644[lbl_803946D0 << 3]);
    temp_r9_11 = M2C_FIELD(temp_r29_5, void **, 0x19C);
    var_lr = M2C_FIELD(temp_r9_11, void *(**)(void *), 0x38C);
    var_r3_2 = temp_r29_5 + M2C_FIELD(temp_r9_11, s16 *, 0x388);
    goto block_123;
block_120:
    temp_r9_12 = M2C_FIELD(arg0, s32 *, 0x22330) - 1;
    M2C_FIELD(arg0, s32 *, 0x22330) = temp_r9_12;
    if (temp_r9_12 >= 0) {
        goto block_122;
    }
    M2C_FIELD(arg0, s32 *, 0x22330) = 0x3E;
block_122:
    temp_r30_7 = arg0 + 0x14BF8;
    strcpy(((s8 *)sp8.bytes), lbl_8035EAA0[lbl_8033C884[M2C_FIELD(arg0, s32 *, 0x22330)]]);
    temp_r9_13 = M2C_FIELD(arg0, void **, 0x14D94);
    M2C_FIELD(temp_r9_13, M2C_UNK (**)(void *, s8 *), 0x36C)(temp_r30_7 + M2C_FIELD(temp_r9_13, s16 *, 0x368), ((s8 *)sp8.bytes));
    temp_r9_14 = M2C_FIELD(arg0, void **, 0x14D94);
    var_lr = M2C_FIELD(temp_r9_14, void *(**)(void *), 0x38C);
    var_r3_2 = temp_r30_7 + M2C_FIELD(temp_r9_14, s16 *, 0x388);
block_123:
    temp_r3_3 = var_lr(var_r3_2);
    temp_r9_15 = M2C_FIELD(temp_r3_3, void **, 8);
    M2C_FIELD(temp_r9_15, M2C_UNK (**)(void *), 0x1C)(temp_r3_3 + M2C_FIELD(temp_r9_15, s16 *, 0x18));
    return;
block_124:
    temp_r9_16 = M2C_FIELD(arg0, s32 *, 0x22330) - 1;
    M2C_FIELD(arg0, s32 *, 0x22330) = temp_r9_16;
    if (temp_r9_16 >= 0) {
        goto block_126;
    }
    M2C_FIELD(arg0, s32 *, 0x22330) = 0x3E;
block_126:
    strcpy(((s8 *)sp8.bytes), lbl_8035EAA0[lbl_8033C884[M2C_FIELD(arg0, s32 *, 0x22330)]]);
    SphereText__SetText(arg0 + 0xB22C, ((s8 *)sp8.bytes));
    return;
block_127:
    temp_r11_2 = lbl_803DC368 + 0x12C;
    temp_r9_17 = M2C_FIELD(temp_r11_2, s32 *, 4) - 1;
    M2C_FIELD(temp_r11_2, s32 *, 4) = temp_r9_17;
    if (temp_r9_17 >= 0) {
        goto block_129;
    }
    M2C_FIELD(temp_r11_2, s32 *, 4) = 3;
block_129:
    MainMenu__ConfigureScreen(arg0, 0x1A);
block_130:
    return;
}
