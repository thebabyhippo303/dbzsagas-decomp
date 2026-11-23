/* HUD__SetBossStatBarsEnabledForGameMode @ 0x8012065C (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef unsigned int u32;
typedef int s32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
extern void *lbl_803DC3C0;
extern s32 lbl_803DC6B8;
void HUD__SetBossStatBarsEnabledForGameMode(void) {
    s32 mode = M2C_FIELD(M2C_FIELD(lbl_803DC3C0, void **, 0x238), s32 *, 4);
    if ((u32)(mode - 2) <= 19U) goto enabled;
    if (mode != 1) goto disabled;
enabled:
    lbl_803DC6B8 = 1;
    return;
disabled:
    lbl_803DC6B8 = 0;
}
