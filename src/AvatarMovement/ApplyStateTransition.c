/* AvatarMovement__ApplyStateTransition @ 0x800A6C64 (size: 0x210, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void AvatarMovement__SetSurface(void *, int);
s32 AvatarMovement__TrySetBallisticVelocityToPoint(void *, void *);
void Avatar__SetAnimScriptVarIntImpl(void *, char *, int, int);
extern s8 lbl_80320060 __attribute__((section(".data")));
extern s8 lbl_80320B08 __attribute__((section(".data")));
extern f32 lbl_80320B44 __attribute__((section(".data")));

void *AvatarMovement__ApplyStateTransition(void *arg0) {
    void **sp24;
    s32 sp20;
    s32 sp14;
    M2C_UNK sp8;
    s32 var_r9;
    void *temp_r0;
    void *temp_r10;
    void *temp_r10_2;
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r11_3;
    void *temp_r11_4;
    void *temp_r11_5;
    void *temp_r28;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;
    void *temp_r9_5;
    void *temp_r9_6;
    void *temp_r9_7;

    temp_r10 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x7D4);
    temp_r9 = M2C_FIELD(temp_r10, void **, 4);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK *, void *, void *), 0x14)(temp_r10 + M2C_FIELD(temp_r9, s16 *, 0x10), &sp8, temp_r9, temp_r10);
    if (sp14 != 0) {
        temp_r28 = arg0 + 0x478;
        if (AvatarMovement__TrySetBallisticVelocityToPoint(temp_r28, &sp8) != 0) {
            sp20 = 0;
            temp_r11 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x7D0);
            temp_r9_2 = M2C_FIELD(temp_r11, void **, 4);
            M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, s32 *), 0xC)(temp_r11 + M2C_FIELD(temp_r9_2, s16 *, 8), &sp20);
            M2C_FIELD(arg0, s32 *, 0x58C) = 0;
            AvatarMovement__SetSurface(arg0, 0);
            M2C_FIELD(arg0, f32 *, 0x598) = (f32) lbl_80320B44;
            Avatar__SetAnimScriptVarIntImpl(M2C_FIELD(arg0, void **, 0), &lbl_80320060, 0, 0);
            Avatar__SetAnimScriptVarIntImpl(M2C_FIELD(arg0, void **, 0), &lbl_80320B08, 0, 0);
            M2C_FIELD(arg0, void **, 0x148) = temp_r28;
        }
        sp14 = 0;
        temp_r11_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x7D4);
        temp_r9_3 = M2C_FIELD(temp_r11_2, void **, 4);
        M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *, M2C_UNK *), 0xC)(temp_r11_2 + M2C_FIELD(temp_r9_3, s16 *, 8), &sp8);
    }
    temp_r0 = M2C_FIELD(arg0, void **, 0x148);
    if (temp_r0 != (void *) M2C_FIELD(arg0, void **, 0x144)) {
        temp_r11_3 = M2C_FIELD(arg0, void **, 0);
        var_r9 = 0;
        if (!(M2C_FIELD(temp_r11_3, f32 *, 0x288) > lbl_80320B44) && ((s32) M2C_FIELD(temp_r11_3, s32 *, 0x90) != 0)) {
            var_r9 = 1;
        }
        if ((var_r9 == 0) || (temp_r0 == (void *) (arg0 + 0x3AC))) {
            temp_r11_4 = M2C_FIELD(arg0, void **, 0x144);
            temp_r9_4 = M2C_FIELD(temp_r11_4, void **, 4);
            M2C_FIELD(temp_r9_4, M2C_UNK (**)(void *), 0x3C)(temp_r11_4 + M2C_FIELD(temp_r9_4, s16 *, 0x38));
            temp_r11_5 = M2C_FIELD(arg0, void **, 0x148);
            temp_r9_5 = M2C_FIELD(temp_r11_5, void **, 4);
            M2C_FIELD(temp_r9_5, M2C_UNK (**)(void *), 0x34)(temp_r11_5 + M2C_FIELD(temp_r9_5, s16 *, 0x30));
            M2C_FIELD(arg0, void **, 0x144) = (void *) M2C_FIELD(arg0, void **, 0x148);
        }
    }
    temp_r10_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x7D8);
    temp_r9_6 = M2C_FIELD(temp_r10_2, void **, 4);
    M2C_FIELD(temp_r9_6, M2C_UNK (**)(void *, void ***), 0x14)(temp_r10_2 + M2C_FIELD(temp_r9_6, s16 *, 0x10), &sp24);
    if (sp24 != NULL) {
        temp_r9_7 = *sp24;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), void ***, 0x28) = M2C_FIELD(temp_r9_7, void **(**)(void *), 0x34)(sp24 + M2C_FIELD(temp_r9_7, s16 *, 0x30));
    } else {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), void ***, 0x28) = sp24;
    }
    return M2C_FIELD(arg0, void **, 0x144);
}

