/* Avatar__AIBreakComboChance @ 0x8003CE98 (size: 0xA8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

f32 Rand__FloatScaled(f32, s32);
f32 Avatar__GetBreakComboChance(void *);
void Script__PushInt(void *, s32, s32);
void * Script__PopInt(void *, void *);
extern f32 lbl_80311AF4 __attribute__((section(".data")));
extern M2C_UNK lbl_803DD634;

void Avatar__AIBreakComboChance(void *arg0, void *arg1) {
    f32 temp_f31;
    s32 var_r0;
    s32 var_r5;
    void *temp_r30;
    void *temp_r30_2;

    temp_r30 = Script__PopInt(arg0, arg1);
    var_r0 = Script__PopInt(arg0, arg1) != NULL;
    var_r5 = 0;
    if ((var_r0 != 0) && ((s32) M2C_FIELD(temp_r30, s32 *, 0x7E4) == 0)) {
        temp_r30_2 = M2C_FIELD(temp_r30, void **, 0xB8C);
        temp_f31 = Rand__FloatScaled(lbl_80311AF4, (s32) &lbl_803DD634);
        var_r5 = temp_f31 < Avatar__GetBreakComboChance(temp_r30_2);
    }
    Script__PushInt(arg0, (s32) arg1, var_r5);
}

