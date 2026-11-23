/* AIBoss__ChanceOfQuickRecovery @ 0x80043FC8 (size: 0x9C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 AIBoss__IsQuickRecoveryBlocked(void *);
f32 Rand__RangeFloat(f32, f32, s32);
void Script__PushInt(void *, s32, s32);
void * Script__PopInt(void *, void *);
extern f32 lbl_80311E8C __attribute__((section(".data")));
extern f32 lbl_80311E90 __attribute__((section(".data")));
extern f32 lbl_80311E94 __attribute__((section(".data")));
extern M2C_UNK lbl_803DD634;

void AIBoss__ChanceOfQuickRecovery(void *arg0, void *arg1) {
    s32 var_r28;
    void *temp_r3;

    temp_r3 = Script__PopInt(arg0, arg1);
    var_r28 = 0;
    if (((s32) M2C_FIELD(temp_r3, s32 *, 0x7E4) == 0) && (AIBoss__IsQuickRecoveryBlocked(temp_r3) == 0) && !(Rand__RangeFloat(lbl_80311E8C, lbl_80311E90, (s32) &lbl_803DD634) >= M2C_FIELD(M2C_FIELD(temp_r3, void **, 0xB8C), f32 *, 0x350))) {
        var_r28 = 1;
        M2C_FIELD(temp_r3, f32 *, 0x70C) = (f32) lbl_80311E94;
    }
    Script__PushInt(arg0, (s32) arg1, var_r28);
}

