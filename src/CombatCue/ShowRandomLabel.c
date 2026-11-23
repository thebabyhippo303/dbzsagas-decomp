/* CombatCue__ShowRandomLabel @ 0x801336D8 (size: 0x158, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void * Game__GetPlayerImpl(void *, int);
int Rand__RangeInt(void *, int, int);
void memset(void *, int, u32);
char * strcat(char *, const char *);
M2C_UNK CombatCue__SelectUnusedEntry(s32, s32, u8 *); /* extern */
M2C_UNK CombatCue__TryShowForOwner(s32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK fn_801949AC(s32, f32);                      /* extern */
M2C_UNK fn_801949E0(s32, M2C_UNK);                  /* extern */
M2C_UNK fn_801954F4(s32, s32 *, M2C_UNK, f32, f32); /* extern */
extern u8 lbl_8031FC10 __attribute__((section(".data")));
extern M2C_UNK lbl_8032AACC __attribute__((section(".data")));
extern f32 lbl_8032AAD0 __attribute__((section(".data")));
extern f32 lbl_8032AAD4 __attribute__((section(".data")));
extern void *lbl_803DC3C0 __attribute__((section(".data")));
extern s32 lbl_803DCC20 __attribute__((section(".data")));
extern M2C_UNK lbl_803DD634;

void CombatCue__ShowRandomLabel(s32 arg0, s32 arg1, s32 arg2) {
    s32 sp14;
    s32 sp10;
    M2C_UNK sp9;
    u8 sp8;

    sp10 = M2C_FIELD(&lbl_8032AACC, s32 *, 0);
    sp14 = M2C_FIELD(&lbl_8032AACC, s32 *, 4);
    sp8 = lbl_8031FC10;
    memset(&sp9, 0, 2U);
    if (Rand__RangeInt(&lbl_803DD634, 1, 0x64) <= arg2) {
        strcat(&sp10, &sp8);
        strcat((s8 *) &sp10, arg0 + 0x94);
        strcat((s8 *) &sp10, arg0 + (arg1 * 0x10) + 0xC);
        CombatCue__SelectUnusedEntry(arg0, arg1, &sp8);
        fn_801949E0(0xCC + lbl_803DCC20, 0);
        fn_801954F4(lbl_803DCC20 + 0xCC, &sp10, 0, lbl_8032AAD0, lbl_8032AAD0);
        fn_801949AC(lbl_803DCC20 + 0xCC, lbl_8032AAD4);
        switch (arg1) {                             /* irregular */
        case 1:
            CombatCue__TryShowForOwner(M2C_FIELD(M2C_FIELD(Game__GetPlayerImpl(lbl_803DC3C0, 0), void **, 0x19D8), s32 *, 0xC), 0, 0x64);
            return;
        case 4:
            CombatCue__TryShowForOwner(M2C_FIELD(M2C_FIELD(Game__GetPlayerImpl(lbl_803DC3C0, 0), void **, 0x19D8), s32 *, 0xC), 8, 0x64);
            break;
        }
    }
}
