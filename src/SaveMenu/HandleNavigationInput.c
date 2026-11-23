/* SaveMenu__HandleNavigationInput @ 0x8005176C (size: 0x3F4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void ControllerMap__AssignPort(void *, s32, s32);
s32 ControllerMap__GetPlayerController(void *, u32);
s32 ControllerMap__IsPortAssigned(void *, u32);
void ControllerMap__UnassignPlayer(void *, s32);
s32 MenuInput__IsCancelTriggered(s32);
int MenuInput__IsConfirmTriggered(int);
s32 MenuInput__IsDownTriggered(s32);
int MenuInput__IsLeftTriggered(int);
int MenuInput__IsRightTriggered(int);
s32 MenuInput__IsUpTriggered(s32);
s32 Sound__Play2DWithVolumePitch(u8 *, void *, f32, f32);
s32 fn_802676D4(void *);
int fn_802687C8(void *);
void *ControllerMap__GetController(void *, u32);    /* extern */
s32 ControllerMap__IsPlayerAssigned(void *, M2C_UNK); /* extern */
M2C_UNK SaveMenu__ResetNavigationPromptColors(void *); /* extern */
extern u8 lbl_80319E1C __attribute__((section(".data")));
extern u8 lbl_80319E24 __attribute__((section(".data")));
extern f32 lbl_80319E30 __attribute__((section(".data")));
extern f32 lbl_80319E34 __attribute__((section(".data")));
extern void *lbl_803DCC50;
extern void *lbl_803DCC54;

void SaveMenu__HandleNavigationInput(s32 arg0) {
    char *p_190;
    s32 temp_r25;
    s32 temp_r3_2;
    s32 var_r24;
    s32 var_r30;
    u32 var_r31;
    void *temp_r3;
    void *temp_r9;
    void *temp_r9_10;
    void *temp_r9_11;
    void *temp_r9_12;
    void *temp_r9_13;
    void *temp_r9_14;
    void *temp_r9_15;
    void *temp_r9_2;
    void *temp_r9_4;
    void *temp_r9_5;
    void *temp_r9_6;
    void *temp_r9_7;
    void *temp_r9_8;
    void *temp_r9_9;
    void *var_r30_2;
    void *var_r31_2;

    var_r24 = 0;
    p_190 = (char *)arg0 + 0x190;
    if ((s32) M2C_FIELD(p_190, s32 *, 0x10) == 0) {
        if (ControllerMap__IsPlayerAssigned(lbl_803DCC54, 0) != 0) {
            goto block_4;
        }
        var_r30 = 0;
        var_r31 = 0;
loop_9:
        temp_r9 = M2C_FIELD(lbl_803DCC54, void **, 0x10);
        if (var_r31 < M2C_FIELD(temp_r9, u32 (**)(void *), 0x24)(lbl_803DCC54 + M2C_FIELD(temp_r9, s16 *, 0x20))) {
            if ((ControllerMap__IsPortAssigned(lbl_803DCC54, var_r31) != 0) || (temp_r3 = ControllerMap__GetController(lbl_803DCC54, var_r31), temp_r9_2 = M2C_FIELD(temp_r3, void **, 0x1F8), ((M2C_FIELD(temp_r9_2, s32 (**)(void *), 0x24)(temp_r3 + M2C_FIELD(temp_r9_2, s16 *, 0x20)) == 0) != 0))) {
                var_r31 += 1;
                goto loop_9;
            }
            var_r24 = 1;
            ControllerMap__AssignPort(lbl_803DCC54, 0, (s32) var_r31);
block_4:
            var_r30 = ControllerMap__GetPlayerController(lbl_803DCC54, 0U);
        }
        if (var_r30 != 0) {
            temp_r9_2 = M2C_FIELD(var_r30, void **, 0x1F8);
            if (M2C_FIELD(temp_r9_2, s32 (**)(s32), 0x24)(var_r30 + M2C_FIELD(temp_r9_2, s16 *, 0x20)) != 0) {
                var_r30_2 = NULL;
                var_r31_2 = 0xD4C4 + arg0;
                if (fn_802676D4(var_r31_2) == 0) {
                    if (fn_802676D4(arg0 + 0x18834) == 0) {
                        var_r31_2 = arg0 + 0x3DA28;
                        if (fn_802676D4(var_r31_2) != 0) {
                            goto block_16;
                        }
                    } else {
                        var_r30_2 = arg0 + 0x236C4;
                    }
                } else {
block_16:
                    var_r30_2 = var_r31_2;
                }
                if (var_r30_2 != NULL) {
                    temp_r25 = fn_802687C8(arg0 + 0x236C4);
                    if (MenuInput__IsUpTriggered(0) != 0) {
                        Sound__Play2DWithVolumePitch(&lbl_80319E1C, NULL, lbl_80319E30, lbl_80319E34);
                        temp_r9_4 = M2C_FIELD(var_r30_2, void **, 0x19C);
                        M2C_FIELD(temp_r9_4, M2C_UNK (**)(void *), 0x3E4)(var_r30_2 + M2C_FIELD(temp_r9_4, s16 *, 0x3E0));
                        SaveMenu__ResetNavigationPromptColors(var_r30_2);
                    } else if (MenuInput__IsDownTriggered(0) != 0) {
                        Sound__Play2DWithVolumePitch(&lbl_80319E24, NULL, lbl_80319E30, lbl_80319E34);
                        temp_r9_5 = M2C_FIELD(var_r30_2, void **, 0x19C);
                        M2C_FIELD(temp_r9_5, M2C_UNK (**)(void *), 0x3EC)(var_r30_2 + M2C_FIELD(temp_r9_5, s16 *, 0x3E8));
                        SaveMenu__ResetNavigationPromptColors(var_r30_2);
                    }
                    if (MenuInput__IsLeftTriggered(0) != 0) {
                        temp_r9_6 = M2C_FIELD(var_r30_2, void **, 0x19C);
                        M2C_FIELD(temp_r9_6, M2C_UNK (**)(void *), 0x3F4)(var_r30_2 + M2C_FIELD(temp_r9_6, s16 *, 0x3F0));
                    } else if (MenuInput__IsRightTriggered(0) != 0) {
                        temp_r9_7 = M2C_FIELD(var_r30_2, void **, 0x19C);
                        M2C_FIELD(temp_r9_7, M2C_UNK (**)(void *), 0x3FC)(var_r30_2 + M2C_FIELD(temp_r9_7, s16 *, 0x3F8));
                    }
                    if (MenuInput__IsConfirmTriggered(0) != 0) {
                        temp_r9_8 = M2C_FIELD(var_r30_2, void **, 0x19C);
                        M2C_FIELD(temp_r9_8, M2C_UNK (**)(void *), 0x404)(var_r30_2 + M2C_FIELD(temp_r9_8, s16 *, 0x400));
                    }
                    if (MenuInput__IsCancelTriggered(0) != 0) {
                        temp_r9_9 = M2C_FIELD(var_r30_2, void **, 0x19C);
                        M2C_FIELD(temp_r9_9, M2C_UNK (**)(void *), 0x40C)(var_r30_2 + M2C_FIELD(temp_r9_9, s16 *, 0x408));
                        return;
                    }
                    temp_r9_10 = M2C_FIELD(lbl_803DCC50, void **, 0xC);
                    temp_r3_2 = M2C_FIELD(temp_r9_10, s32 (**)(void *), 0x44)(lbl_803DCC50 + M2C_FIELD(temp_r9_10, s16 *, 0x40));
                    if (temp_r3_2 == 1) {
                        if ((s32) M2C_FIELD(arg0, s32 *, 0x49130) == 0) {
                            if ((var_r30_2 == (void *) (arg0 + 0x236C4)) || (var_r30_2 == (void *) (arg0 + 0xD4C4))) {
                                temp_r9_11 = M2C_FIELD(var_r30_2, void **, 0x19C);
                                M2C_FIELD(temp_r9_11, M2C_UNK (**)(void *, M2C_UNK), 0x4DC)(var_r30_2 + M2C_FIELD(temp_r9_11, s16 *, 0x4D8), 0x201);
                            } else if (var_r30_2 == (void *) (arg0 + 0x3DA28)) {
                                temp_r9_12 = M2C_FIELD(var_r30_2, void **, 0x19C);
                                M2C_FIELD(temp_r9_12, M2C_UNK (**)(void *, M2C_UNK), 0x4DC)(var_r30_2 + M2C_FIELD(temp_r9_12, s16 *, 0x4D8), 0x207);
                                temp_r9_13 = M2C_FIELD(var_r30_2, void **, 0x19C);
                                M2C_FIELD(temp_r9_13, M2C_UNK (**)(void *, M2C_UNK), 0x4DC)(var_r30_2 + M2C_FIELD(temp_r9_13, s16 *, 0x4D8), 0x201);
                            }
                        }
                    }
                    M2C_FIELD(arg0, s32 *, 0x49130) = temp_r3_2;
                    if (temp_r25 != fn_802687C8(arg0 + 0x236C4)) {
                        temp_r9_14 = M2C_FIELD(p_190, void **, 0xc);
                        M2C_FIELD(temp_r9_14, M2C_UNK (**)(void *), 0x4AC)(arg0 + M2C_FIELD(temp_r9_14, s16 *, 0x4A8));
                    }
                    if (MenuInput__IsConfirmTriggered(0) != 0) {
                        temp_r9_15 = M2C_FIELD(var_r30_2, void **, 0x19C);
                        M2C_FIELD(temp_r9_15, M2C_UNK (**)(void *), 0x404)(var_r30_2 + M2C_FIELD(temp_r9_15, s16 *, 0x400));
                    }
                    goto block_41;
                }
                goto block_41;
            }
        }
block_41:
        if (var_r24 != 0) {
            ControllerMap__UnassignPlayer(lbl_803DCC54, 0);
        }
    }
}
