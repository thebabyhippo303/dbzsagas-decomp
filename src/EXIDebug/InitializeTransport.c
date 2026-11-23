/* EXIDebug__InitializeTransport @ 0x8017A814 (size: 0x70, .text, MWCC GC/1.x (Dolphin SDK)) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

M2C_UNK OSGetConsoleType(void);
extern s32 lbl_803DD400;
extern s32 lbl_803DD404;
extern s32 lbl_803DD408;
extern s32 lbl_803DD40C;

s32 EXIDebug__InitializeTransport(void) {
    if ((u32) (lbl_803DD40C + 0x5A010000) == 0x5AU) {
        return 0;
    }
    if (!(OSGetConsoleType() & 0x10000000)) {
        lbl_803DD408 = 0;
        return 2;
    }
    lbl_803DD408 = 0xA5FF005A;
    lbl_803DD400 = 0;
    lbl_803DD404 = 1;
    return 0;
}

