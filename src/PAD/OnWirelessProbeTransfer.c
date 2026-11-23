/* PAD__OnWirelessProbeTransfer @ 0x8017AD08 (size: 0xCC, .text, MWCC GC/1.x (Dolphin SDK)) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

int OSDisableInterrupts(void);
void OSRestoreInterrupts(int);
M2C_UNK OSSetWirelessID(s32, M2C_UNK, s32, s32, s32, s32, s32); /* extern */
M2C_UNK PAD__NormalizeOrigin(s32);                  /* extern */
M2C_UNK SIDisablePolling(u32);                      /* extern */
extern s32 lbl_803DD414;
extern s32 lbl_803DD420;
extern s32 lbl_803DD424;
extern s32 lbl_803DD428;
extern s32 lbl_803DD42C;

void PAD__OnWirelessProbeTransfer(s32 arg0, s32 arg1) {
    s32 temp_r31;
    s32 temp_r5;
    s32 temp_r6;
    s32 temp_r7;
    s32 temp_r8;
    s32 temp_r9;
    u32 temp_r30;

    temp_r30 = 0x80000000U >> arg0;
    if (lbl_803DD414 & temp_r30) {
        if (!(arg1 & 0xF)) {
            PAD__NormalizeOrigin(arg0);
        }
        if (arg1 & 8) {
            temp_r31 = OSDisableInterrupts();
            SIDisablePolling(temp_r30);
            temp_r9 = ~(temp_r30 | temp_r30);
            temp_r8 = lbl_803DD414 & temp_r9;
            temp_r7 = lbl_803DD420 & temp_r9;
            temp_r6 = lbl_803DD424 & temp_r9;
            temp_r5 = lbl_803DD428 & temp_r9;
            lbl_803DD414 = temp_r8;
            lbl_803DD420 = temp_r7;
            lbl_803DD424 = temp_r6;
            lbl_803DD428 = temp_r5;
            lbl_803DD42C &= temp_r9;
            OSSetWirelessID(arg0, 0, temp_r5, temp_r6, temp_r7, temp_r8, temp_r9);
            OSRestoreInterrupts(temp_r31);
        }
    }
}
