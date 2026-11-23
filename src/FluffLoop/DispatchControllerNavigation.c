/* FluffLoop__DispatchControllerNavigation @ 0x80057564 (size: 0x1A8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 MenuInput__IsCancelTriggered(s32);
int MenuInput__IsLeftTriggered(int);
int MenuInput__IsRightTriggered(int);
s32 MenuInput__IsUpTriggered(s32);
s32 MenuInput__RequiresControllerOwner(void *);
void * fn_801D6674(void *, int);
s32 fn_801D6750(void *, u32);
s32 MenuInput__IsDownTriggered(s32);                /* extern */
extern void *lbl_803DC368;
extern void *lbl_803DCC74;

void FluffLoop__DispatchControllerNavigation(void *arg0) {
    s32 temp_r29;
    s32 var_r28;
    s32 var_r30;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;
    void *temp_r9_5;
    void *temp_r9_6;
    void *temp_r9_7;
    void *var_r3;

    temp_r9 = M2C_FIELD(arg0, void **, 0x19C);
    if (M2C_FIELD(temp_r9, s32 (**)(void *), 0x3A4)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x3A0)) != 0) {
        var_r28 = 1;
        temp_r9_2 = M2C_FIELD(lbl_803DCC74, void **, 0x10);
        temp_r29 = M2C_FIELD(temp_r9_2, s32 (**)(void *), 0x24)(lbl_803DCC74 + M2C_FIELD(temp_r9_2, s16 *, 0x20));
        if (MenuInput__RequiresControllerOwner(lbl_803DC368) != 0) {
            var_r28 = 2;
        }
        var_r30 = 0;
        if (var_r30 < temp_r29) {
            do {
                if ((var_r28 != 2) || ((s32) M2C_FIELD(lbl_803DC368, s32 *, 0xC0) == var_r30)) {
                    if (fn_801D6750(lbl_803DCC74, (u32) var_r30) != 0) {
                        var_r3 = fn_801D6674(lbl_803DCC74, var_r30);
                    } else {
                        var_r3 = NULL;
                    }
                    if (var_r3 != NULL) {
                        if (MenuInput__IsUpTriggered(var_r30) != 0) {
                            temp_r9_3 = M2C_FIELD(arg0, void **, 0x19C);
                            M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *), 0x3E4)(arg0 + M2C_FIELD(temp_r9_3, s16 *, 0x3E0));
                        }
                        if (MenuInput__IsDownTriggered(var_r30) != 0) {
                            temp_r9_4 = M2C_FIELD(arg0, void **, 0x19C);
                            M2C_FIELD(temp_r9_4, M2C_UNK (**)(void *), 0x3EC)(arg0 + M2C_FIELD(temp_r9_4, s16 *, 0x3E8));
                        }
                        if (MenuInput__IsLeftTriggered(var_r30) != 0) {
                            temp_r9_5 = M2C_FIELD(arg0, void **, 0x19C);
                            M2C_FIELD(temp_r9_5, M2C_UNK (**)(void *), 0x3F4)(arg0 + M2C_FIELD(temp_r9_5, s16 *, 0x3F0));
                        }
                        if (MenuInput__IsRightTriggered(var_r30) != 0) {
                            temp_r9_6 = M2C_FIELD(arg0, void **, 0x19C);
                            M2C_FIELD(temp_r9_6, M2C_UNK (**)(void *), 0x3FC)(arg0 + M2C_FIELD(temp_r9_6, s16 *, 0x3F8));
                        }
                        if (MenuInput__IsCancelTriggered(var_r30) != 0) {
                            temp_r9_7 = M2C_FIELD(arg0, void **, 0x19C);
                            M2C_FIELD(temp_r9_7, M2C_UNK (**)(void *), 0x40C)(arg0 + M2C_FIELD(temp_r9_7, s16 *, 0x408));
                        }
                    }
                }
                var_r30 += 1;
            } while (var_r30 < temp_r29);
        }
    }
}

