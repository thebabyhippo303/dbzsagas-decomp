/* DVDGetCommandBlockStatus @ 0x801734BC (size: 0x4C, .text, MWCC GC/1.x (Dolphin SDK)) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

int OSDisableInterrupts(void);
void OSRestoreInterrupts(int);

s32 DVDGetCommandBlockStatus(void *block) {
    s32 level = OSDisableInterrupts();
    s32 ret;

    if (M2C_FIELD(block, s32 *, 12) == 3) {
        ret = 1;
    } else {
        ret = M2C_FIELD(block, s32 *, 12);
    }
    OSRestoreInterrupts(level);
    return ret;
}
