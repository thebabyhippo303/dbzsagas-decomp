/* Avatar__ChooseRandomComboInput @ 0x800336E0 (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

int Rand__RangeInt(void *, int, int);
extern M2C_UNK lbl_803603A0 __attribute__((section(".data")));
extern M2C_UNK lbl_803603B4 __attribute__((section(".data")));
extern char lbl_803DD634[8] __attribute__((section(".sbss")));

u8 ComboData__ChooseRandomFallbackMove(s32 arg0) {
    u8 var_r0;
    u8 *tbl;
    u8 *tbl2;

    var_r0 = 0;
    if (arg0 == 0) {
        tbl = (u8 *)&lbl_803603A0;
        var_r0 = tbl[Rand__RangeInt(&lbl_803DD634, 0, 4) * 4 + 3];
    }
    if (arg0 == 1) {
        tbl2 = (u8 *)&lbl_803603B4;
        var_r0 = tbl2[Rand__RangeInt(&lbl_803DD634, 0, 4) * 4 + 3];
    }
    return var_r0;
}
