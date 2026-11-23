/* Game__GetThrownDamage @ 0x80044364 (size: 0xE8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

int PersistentData__GetGlobalImpl(void *, char *);
void * Script__PopInt(void *, void *);
void Script__PushFloat(void *, void *, float);
extern s8 lbl_80311E98 __attribute__((section(".data")));
extern f32 lbl_80311EAC __attribute__((section(".data")));
extern s32 lbl_803DC368;
extern void *lbl_803DC3C0;

void Game__GetThrownDamage(void *arg0, void *arg1) {
    f32 var_f31;
    s32 temp_r0;
    void *temp_r28;
    void *temp_r29;

    temp_r29 = Script__PopInt(arg0, arg1);
    temp_r28 = Script__PopInt(arg0, arg1);
    var_f31 = M2C_FIELD(lbl_803DC3C0, f32 *, 0x20BC);
    temp_r0 = M2C_FIELD(M2C_FIELD(lbl_803DC3C0, void **, 0x238), s32 *, 4);
    if ((temp_r0 == 0x11) || (temp_r0 == 0x13)) {
        var_f31 = lbl_80311EAC;
    }
    if ((temp_r29 != NULL) && ((s32) M2C_FIELD(temp_r29, s32 *, 0x7E4) != 0) && (PersistentData__GetGlobalImpl(lbl_803DC368 + 0x12C, &lbl_80311E98) == 0)) {
        var_f31 = lbl_80311EAC;
    }
    if ((temp_r28 != NULL) && ((s32) M2C_FIELD(temp_r28, s32 *, 0x7E4) != 0) && ((s32) M2C_FIELD(lbl_803DC3C0, s32 *, 0x1C6C) != 0)) {
        var_f31 = lbl_80311EAC;
    }
    Script__PushFloat(arg0, arg1, var_f31);
}
