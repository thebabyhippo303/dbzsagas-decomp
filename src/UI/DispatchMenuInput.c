/* UI__DispatchMenuInput @ 0x800FECE0 (size: 0x22C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 MenuInput__IsUpTriggered(s32);
s32 MenuInput__IsLeftTriggered(s32);
s32 MenuInput__IsRightTriggered(s32);
s32 MenuInput__IsConfirmTriggered(s32);
s32 MenuInput__IsCancelTriggered(s32);
s32 MenuInput__IsDownHeld(s32);
s32 MenuInput__IsUpHeld(s32);
s32 MenuInput__IsDownTriggered(s32);
s32 MenuInput__IsStartTriggered(s32);
M2C_UNK MainMenu__RefreshSelectedEntryAfterDown(s32);
M2C_UNK MainMenu__RefreshSelectedEntryAfterUp(s32);
extern void *lbl_803DC704;

void UI__DispatchMenuInput(void *arg0, s32 arg1) {
    s32 var_r28;
    s32 var_r29;
    void *temp_r10;
    void *temp_r10_2;
    void *temp_r10_3;
    void *temp_r10_4;
    void *temp_r10_5;
    void *temp_r10_6;
    void *temp_r10_7;
    void *temp_r10_8;
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r11_3;
    void *temp_r11_4;
    void *temp_r11_5;
    void *temp_r11_6;
    void *temp_r11_7;
    void *temp_r11_8;

    var_r28 = 0;
    if (var_r28 < (s32) M2C_FIELD(arg0, s32 *, 4)) {
        var_r29 = 0;
        do {
            temp_r10 = *(void * *)(M2C_FIELD(arg0, s32 *, 0) + var_r29);
            temp_r11 = M2C_FIELD(temp_r10, void **, 0x19C);
            if (M2C_FIELD(temp_r11, s32 (**)(void *), 0x3A4)(temp_r10 + M2C_FIELD(temp_r11, s16 *, 0x3A0)) != 0) {
                if (MenuInput__IsUpTriggered(arg1) != 0) {
                    temp_r10_2 = *(void * *)(M2C_FIELD(arg0, s32 *, 0) + var_r29);
                    temp_r11_2 = M2C_FIELD(temp_r10_2, void **, 0x19C);
                    M2C_FIELD(temp_r11_2, M2C_UNK (**)(void *), 0x3E4)(temp_r10_2 + M2C_FIELD(temp_r11_2, s16 *, 0x3E0));
                }
                if (MenuInput__IsDownTriggered(arg1) != 0) {
                    temp_r10_3 = *(void * *)(M2C_FIELD(arg0, s32 *, 0) + var_r29);
                    temp_r11_3 = M2C_FIELD(temp_r10_3, void **, 0x19C);
                    M2C_FIELD(temp_r11_3, M2C_UNK (**)(void *), 0x3EC)(temp_r10_3 + M2C_FIELD(temp_r11_3, s16 *, 0x3E8));
                }
                if (MenuInput__IsLeftTriggered(arg1) != 0) {
                    temp_r10_4 = *(void * *)(M2C_FIELD(arg0, s32 *, 0) + var_r29);
                    temp_r11_4 = M2C_FIELD(temp_r10_4, void **, 0x19C);
                    M2C_FIELD(temp_r11_4, M2C_UNK (**)(void *), 0x3F4)(temp_r10_4 + M2C_FIELD(temp_r11_4, s16 *, 0x3F0));
                }
                if (MenuInput__IsRightTriggered(arg1) != 0) {
                    temp_r10_5 = *(void * *)(M2C_FIELD(arg0, s32 *, 0) + var_r29);
                    temp_r11_5 = M2C_FIELD(temp_r10_5, void **, 0x19C);
                    M2C_FIELD(temp_r11_5, M2C_UNK (**)(void *), 0x3FC)(temp_r10_5 + M2C_FIELD(temp_r11_5, s16 *, 0x3F8));
                }
                if (MenuInput__IsConfirmTriggered(arg1) != 0) {
                    temp_r10_6 = *(void * *)(M2C_FIELD(arg0, s32 *, 0) + var_r29);
                    temp_r11_6 = M2C_FIELD(temp_r10_6, void **, 0x19C);
                    M2C_FIELD(temp_r11_6, M2C_UNK (**)(void *), 0x404)(temp_r10_6 + M2C_FIELD(temp_r11_6, s16 *, 0x400));
                }
                if (MenuInput__IsCancelTriggered(arg1) != 0) {
                    temp_r10_7 = *(void * *)(M2C_FIELD(arg0, s32 *, 0) + var_r29);
                    temp_r11_7 = M2C_FIELD(temp_r10_7, void **, 0x19C);
                    M2C_FIELD(temp_r11_7, M2C_UNK (**)(void *), 0x40C)(temp_r10_7 + M2C_FIELD(temp_r11_7, s16 *, 0x408));
                }
                if (MenuInput__IsStartTriggered(arg1) != 0) {
                    temp_r10_8 = *(void * *)(M2C_FIELD(arg0, s32 *, 0) + var_r29);
                    temp_r11_8 = M2C_FIELD(temp_r10_8, void **, 0x19C);
                    M2C_FIELD(temp_r11_8, M2C_UNK (**)(void *), 0x414)(temp_r10_8 + M2C_FIELD(temp_r11_8, s16 *, 0x410));
                }
                if ((MenuInput__IsDownHeld(arg1) != 0) && ((void *) lbl_803DC704 != NULL) && ((s32) M2C_FIELD(lbl_803DC704, s32 *, 0x22344) == 0x21)) {
                    MainMenu__RefreshSelectedEntryAfterDown((s32) lbl_803DC704);
                }
                if ((MenuInput__IsUpHeld(arg1) != 0) && ((void *) lbl_803DC704 != NULL) && ((s32) M2C_FIELD(lbl_803DC704, s32 *, 0x22344) == 0x21)) {
                    MainMenu__RefreshSelectedEntryAfterUp((s32) lbl_803DC704);
                }
            }
            var_r28 += 1;
            var_r29 += 4;
        } while (var_r28 < (s32) M2C_FIELD(arg0, s32 *, 4));
    }
}
