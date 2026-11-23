/* EXIChannel2__SendPacket @ 0x8017CD20 (size: 0x260, .text, MWCC GC/1.x (Dolphin SDK)) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

int OSDisableInterrupts(void);
void OSRestoreInterrupts(int);
s32 EXIChannel2__TransferImmediate(s32 *, M2C_UNK, M2C_UNK); /* extern */
s32 EXIChannel2__WriteAtAddress(s32, s32, s32);     /* extern */
extern u8 lbl_803DCB38;

s32 EXIChannel2__SendPacket(s32 arg0, s32 arg1) {
    s32 sp54;
    s32 sp50;
    s32 sp4C;
    s32 sp44;
    s32 sp3C;
    s32 temp_r24;
    s32 temp_r26;
    s32 temp_r28;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 var_r3;
    void *temp_r29;
    void *temp_r30;

    temp_r28 = OSDisableInterrupts();
    do {
        temp_r30 = (s32 *)0xCC000000 + 0x6800;
        M2C_FIELD(temp_r30, s32 *, 0x28) = (s32) ((*(s32 *)0xCC006828 & 0x405) | 0xC0);
        sp50 = 0x40000000;
        EXIChannel2__TransferImmediate(&sp50, 2, 1);
loop_2:
        temp_r29 = (s32 *)0xCC000000 + 0x6800;
        if (M2C_FIELD(temp_r29, s32 *, 0x34) & 1) {
            goto loop_2;
        }
        EXIChannel2__TransferImmediate(&sp54, 4, 0);
loop_4:
        if (M2C_FIELD(temp_r29, s32 *, 0x34) & 1) {
            goto loop_4;
        }
        M2C_FIELD(temp_r30, s32 *, 0x28) = (s32) (M2C_FIELD(temp_r30, s32 *, 0x28) & 0x405);
    } while (sp54 & 2);
    lbl_803DCB38 += 1;
    if (lbl_803DCB38 & 1) {
        var_r3 = 0x1000;
    } else {
        var_r3 = 0;
    }
    do {

    } while (EXIChannel2__WriteAtAddress(var_r3 | 0x10000 | 0xC000, arg0, (arg1 + 3) & 0xFFFFFFFC) == 0);
    do {
        M2C_FIELD(temp_r30, s32 *, 0x28) = (s32) ((M2C_FIELD(temp_r30, s32 *, 0x28) & 0x405) | 0xC0);
        sp4C = 0x40000000;
        EXIChannel2__TransferImmediate(&sp4C, 2, 1);
loop_13:
        if (M2C_FIELD(temp_r29, s32 *, 0x34) & 1) {
            goto loop_13;
        }
        EXIChannel2__TransferImmediate(&sp54, 4, 0);
loop_15:
        if (M2C_FIELD(temp_r29, s32 *, 0x34) & 1) {
            goto loop_15;
        }
        M2C_FIELD(temp_r30, s32 *, 0x28) = (s32) (M2C_FIELD(temp_r30, s32 *, 0x28) & 0x405);
    } while (sp54 & 2);
    temp_r24 = (((lbl_803DCB38 << 0x10) | 0x1F000000 | arg1) & 0x1FFFFFFF) | 0xC0000000;
    do {
        M2C_FIELD(temp_r30, s32 *, 0x28) = (s32) ((M2C_FIELD(temp_r30, s32 *, 0x28) & 0x405) | 0xC0);
        sp44 = temp_r24;
        temp_r3 = EXIChannel2__TransferImmediate(&sp44, 4, 1) == 0;
loop_19:
        if (M2C_FIELD(temp_r29, s32 *, 0x34) & 1) {
            goto loop_19;
        }
        M2C_FIELD(temp_r30, s32 *, 0x28) = (s32) (M2C_FIELD(temp_r30, s32 *, 0x28) & 0x405);
    } while (temp_r3 != 0);
    do {
loop_22:
        M2C_FIELD(temp_r30, s32 *, 0x28) = (s32) ((M2C_FIELD(temp_r30, s32 *, 0x28) & 0x405) | 0xC0);
        sp3C = 0x40000000;
        temp_r26 = EXIChannel2__TransferImmediate(&sp3C, 2, 1) == 0;
loop_23:
        if (M2C_FIELD(temp_r29, s32 *, 0x34) & 1) {
            goto loop_23;
        }
        temp_r3_2 = temp_r26 | (EXIChannel2__TransferImmediate(&sp54, 4, 0) == 0);
loop_25:
        if (M2C_FIELD(temp_r29, s32 *, 0x34) & 1) {
            goto loop_25;
        }
        M2C_FIELD(temp_r30, s32 *, 0x28) = (s32) (M2C_FIELD(temp_r30, s32 *, 0x28) & 0x405);
        if (temp_r3_2 != 0) {
            goto loop_22;
        }
    } while (sp54 & 2);
    OSRestoreInterrupts(temp_r28);
    return 0;
}
