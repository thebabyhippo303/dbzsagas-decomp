/* MainMenu__HandleStartInput @ 0x80144810 (size: 0xB0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void MainMenu__AdvancePlayerSelectAnimation(void *);
M2C_UNK MainMenu__ResetCharacterSelection(void *);  /* extern */
s32 MenuInput__IsStartTriggered(M2C_UNK);           /* extern */
s32 fn_801D6750(s32, M2C_UNK);                      /* extern */
extern s32 lbl_803DCC74;

void MainMenu__HandleStartInput(void *arg0) {
    s32 temp_r0;
    void *temp_r31;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x22344);
    switch (temp_r0) {                              /* irregular */
    case 17:
        if (MenuInput__IsStartTriggered(1) != 0) {
            MainMenu__ResetCharacterSelection(arg0 + 0x11F68);
            return;
        }
    case 12:
    case 14:
        return;
    case 5:
        if (fn_801D6750(lbl_803DCC74, 1) != 0) {
            temp_r31 = arg0 + 0x11F68;
            if ((s32) M2C_FIELD(temp_r31, s32 *, 0xDA0) != 0) {
                MainMenu__ResetCharacterSelection(temp_r31);
                MainMenu__AdvancePlayerSelectAnimation(temp_r31);
            }
        }
        break;
    }
}
