/* EXIChannel2__GetPendingPacketSize @ 0x8017D00C (size: 0x9C, .text, MWCC GC/1.x (Dolphin SDK)) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

int OSDisableInterrupts(void);
void OSRestoreInterrupts(int);
M2C_UNK EXIChannel2__ReadMailboxHeader(volatile s32 *);      /* extern */
M2C_UNK EXIChannel2__ReadMailboxStatus(volatile s32 *);      /* extern */
extern s32 lbl_803DD498 __attribute__((section(".sbss")));
extern s32 lbl_803DD49C __attribute__((section(".sbss")));
extern s8 lbl_803DD4A4 __attribute__((section(".sbss")));

s32 EXIChannel2__GetPendingPacketSize(void) {
    volatile s32 sp8;
    s32 temp_r31;

    lbl_803DD4A4 = 0;
    if ((s32) lbl_803DD49C == 0) {
        temp_r31 = OSDisableInterrupts();
        EXIChannel2__ReadMailboxStatus(&sp8);
        if (sp8 & 1) {
            EXIChannel2__ReadMailboxHeader(&sp8);
            sp8 &= 0x1FFFFFFF;
            if ((u32) ((sp8 & 0x1F000000) + 0xE1000000) == 0U) {
                lbl_803DD498 = sp8;
                lbl_803DD49C = sp8 & 0x7FFF;
                lbl_803DD4A4 = 1;
            }
        }
        OSRestoreInterrupts(temp_r31);
    }
    return lbl_803DD49C;
}
