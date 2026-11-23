/* AI__DestroyEnemyBase @ 0x80074718 (size: 0x148, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void AI__DestroyBase(void *, s32);
void HUD__ClearStatsWidgetGroup(char *);
void HUD__DeleteBossStatBar(void *);
extern M2C_UNK lbl_803346B0 __attribute__((section(".rodata")));
extern void *lbl_803DC3C0;
extern s32 lbl_803DC438;
extern s8 *lbl_803DC654;

void AI__DestroyEnemyBase(void *arg0, s32 arg1) {
    s32 type;

    M2C_FIELD(arg0, M2C_UNK **, 0x57C) = &lbl_803346B0;
    if (M2C_FIELD(arg0, s32 *, 0x3E4) != 0) {
        type = M2C_FIELD(arg0, s32 *, 0xCC);
        if ((type == 10 || type == 14 || type == 0 || type == 9 || type == 8
            || type == 4 || type == 2 || type == 4
            || type == 5 || type == 6 || type == 7 || type == 1 || type == 16 || type == 13
            || type == 17 || type == 3 || type == 15 || type == 18 || type == 19 || type == 20)
            && M2C_FIELD(arg0, s32 *, 0x59C) == 0) {
            HUD__DeleteBossStatBar(lbl_803DC654);
        }
    }
    if (M2C_FIELD(arg0, s32 *, 0xCC) == 12
        && M2C_FIELD(M2C_FIELD(lbl_803DC3C0, void **, 0x238), s32 *, 4) == 6) {
        HUD__DeleteBossStatBar(lbl_803DC654);
    }
    if (M2C_FIELD(arg0, s32 *, 0xCC) == 11) {
        HUD__ClearStatsWidgetGroup(lbl_803DC654);
    }
    lbl_803DC438 = M2C_FIELD(arg0, s32 *, 0x424);
    AI__DestroyBase(arg0, arg1);
}
