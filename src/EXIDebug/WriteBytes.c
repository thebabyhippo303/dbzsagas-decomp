/* EXIDebug__WriteBytes @ 0x8017A884 (size: 0x21C, .text, MWCC GC/1.x (Dolphin SDK)) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

int OSDisableInterrupts(void);
void OSRestoreInterrupts(int);
M2C_UNK EXIDeselect(s32);                           /* extern */
M2C_UNK EXIImm(s32, u32 *, u32, M2C_UNK, M2C_UNK);  /* extern */
s32 EXILock(s32, s32, M2C_UNK);                     /* extern */
s32 EXISelect(s32, s32, M2C_UNK);                   /* extern */
M2C_UNK EXISync(s32);                               /* extern */
M2C_UNK EXIUnlock(s32);                             /* extern */
extern s32 lbl_803DD400;
extern s32 lbl_803DD404;
extern s32 lbl_803DD408;

s32 EXIDebug__WriteBytes(u32 *arg0, u32 arg1) {
    u32 sp14;
    u32 sp10;
    s32 temp_r27;
    s32 var_r0;
    s32 var_r25;
    s32 var_r26;
    u32 *var_r30;
    u32 *var_r4;
    u32 var_r28;
    u32 var_r31;

    var_r30 = arg0;
    var_r31 = arg1;
    if ((u32) (lbl_803DD408 + 0x5A010000) != 0x5AU) {
        return 2;
    }
    temp_r27 = OSDisableInterrupts();
    if (EXILock(lbl_803DD400, lbl_803DD404, 0) == 0) {
        OSRestoreInterrupts(temp_r27);
        return 0;
    }
    var_r4 = var_r30;
loop_8:
    if ((u32) (var_r4 - var_r30) < var_r31) {
        if ((s32) *var_r4 == 0xA) {
            *var_r4 = 0xDU;
        }
        var_r4 += 1;
        goto loop_8;
    }
    sp14 = 0xA0010000;
    var_r25 = 0;
loop_29:
    if (var_r31 != 0U) {
        if (EXISelect(lbl_803DD400, lbl_803DD404, 3) == 0) {
            var_r0 = -1;
        } else {
            sp10 = 0x20010000;
            EXIImm(lbl_803DD400, &sp10, 4U, 1, 0);
            EXISync(lbl_803DD400);
            EXIImm(lbl_803DD400, &sp10, 1U, 0, 0);
            EXISync(lbl_803DD400);
            EXIDeselect(lbl_803DD400);
            var_r0 = 0x10 - (sp10 >> 0x18U);
        }
        var_r26 = var_r0;
        if (var_r0 < 0) {
            var_r25 = 3;
        } else if ((var_r0 >= 0xC) || ((u32) var_r0 >= var_r31)) {
            if (EXISelect(lbl_803DD400, lbl_803DD404, 3) == 0) {
                var_r25 = 3;
            } else {
                EXIImm(lbl_803DD400, &sp14, 4U, 1, 0);
                EXISync(lbl_803DD400);
loop_26:
                if ((var_r26 != 0) && (var_r31 != 0U)) {
                    if ((var_r26 >= 4) || ((u32) var_r26 >= var_r31)) {
                        if (var_r31 < 4U) {
                            var_r28 = var_r31;
                        } else {
                            var_r28 = 4U;
                        }
                        EXIImm(lbl_803DD400, var_r30, var_r28, 1, 0);
                        var_r30 += var_r28;
                        var_r31 -= var_r28;
                        var_r26 -= var_r28;
                        EXISync(lbl_803DD400);
                        goto loop_26;
                    }
                }
                EXIDeselect(lbl_803DD400);
                goto loop_29;
            }
        } else {
            goto loop_29;
        }
    }
    EXIUnlock(lbl_803DD400);
    OSRestoreInterrupts(temp_r27);
    return var_r25;
}

