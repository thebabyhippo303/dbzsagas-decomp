/* Game__DisplayInfo @ 0x8003DD80 (size: 0x12C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void DisplayInfo__IncrementEntryCount(void *, int, int);
int Game__IsPendulumModeImpl(void *);
float Script__PopFloat(void *, void *);
int Script__PopInt(void *, void *);
void fn_8014D4E8(void *);
void fn_801949E0(void *, int);
M2C_UNK DisplayInfo__ShowEntry(void *, s32, s32, M2C_UNK, f32); /* extern */
M2C_UNK fn_801954F4(s32, M2C_UNK *, M2C_UNK, f32, f32); /* extern */
extern M2C_UNK lbl_80311B30 __attribute__((section(".data")));
extern f32 lbl_80311B38 __attribute__((section(".data")));
extern s32 lbl_803DC368;
extern void *lbl_803DC3A0;
extern void *lbl_803DC3C0;
extern void *lbl_803DC718;
extern s32 lbl_803DCC20;

void Game__DisplayInfo(void *arg0, void *arg1) {
    f32 temp_f31;
    s32 temp_r27;
    s32 temp_r28;
    s32 temp_r31;

    temp_r27 = Script__PopInt(arg0, arg1);
    temp_r31 = Script__PopInt(arg0, arg1);
    temp_r28 = Script__PopInt(arg0, arg1);
    temp_f31 = Script__PopFloat(arg0, arg1);
    if ((temp_r27 == 1) && (temp_r31 == 0xE) && ((s32) M2C_FIELD(M2C_FIELD(lbl_803DC3C0, void **, 0x238), s32 *, 4) == 1)) {
        fn_801954F4(lbl_803DCC20 + 0xCC, &lbl_80311B30, 0, lbl_80311B38, lbl_80311B38);
        fn_801949E0(lbl_803DCC20 + 0xCC, 0);
        fn_8014D4E8(lbl_803DC718);
        DisplayInfo__IncrementEntryCount(lbl_803DC3A0, 1, 0xE);
        return;
    }
    if (((s32) M2C_FIELD(M2C_FIELD(lbl_803DC3C0, void **, 0x238), s32 *, 4) != 2) || (Game__IsPendulumModeImpl(lbl_803DC368 + 0x17C) == 0)) {
        DisplayInfo__ShowEntry(lbl_803DC3A0, temp_r27, temp_r31, (temp_r28 != 0), temp_f31);
    }
}
