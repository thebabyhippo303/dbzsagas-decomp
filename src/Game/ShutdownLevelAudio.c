/* Game__ShutdownLevelAudio @ 0x80022438 (size: 0x30, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


M2C_UNK Preload__ClearCachedBanks();                /* extern */
M2C_UNK fn_801888F8();                              /* extern */
M2C_UNK fn_80190028(s32, M2C_UNK);                  /* extern */
extern s32 lbl_803DCC20;

void Game__ShutdownLevelAudio(void) {
    fn_80190028(lbl_803DCC20, 1);
    fn_801888F8();
    Preload__ClearCachedBanks();
}
