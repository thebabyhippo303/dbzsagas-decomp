/* DvdFile__WaitForCompletion @ 0x80180FD4 (size: 0x11C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 DvdFile__PollStatus(void *, void *);
u32 Timer__GetMilliseconds(void);
extern s32 lbl_803DCB90;

s32 DvdFile__WaitForCompletion(void *arg0, s32 arg1, s32 *arg2, s32 *arg3, s32 *arg4) {
    s32 temp_r9;

loop_1:
    if ((s32) M2C_FIELD(arg0, s32 *, 0x18) == 0) {
        lbl_803DCB90 = 0xB;
        M2C_FIELD(arg0, s32 *, 0x1C) = 0xB;
        if (arg4 != NULL) {
            *arg4 = 0xB;
        }
        goto block_12;
    }
    temp_r9 = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_r9 == 0) {
        if (arg2 != NULL) {
            *arg2 = M2C_FIELD(arg0, s32 *, 0xC);
        }
        if (arg3 != NULL) {
            *arg3 = M2C_FIELD(arg0, s32 *, 0x10);
        }
        if (arg4 != NULL) {
            *arg4 = M2C_FIELD(arg0, s32 *, 0x1C);
        }
        M2C_FIELD(arg0, s32 *, 0x18) = temp_r9;
block_12:
        return 1;
    }
    if (arg1 == 0) {
        if (DvdFile__PollStatus(arg0, arg3) != 0) {
            goto loop_1;
        }
        if (arg4 != NULL) {
            *arg4 = M2C_FIELD(arg0, s32 *, 0x1C);
        }
        return 0;
    }
    if (arg1 < 0) {
        do {
        } while (DvdFile__PollStatus(arg0, NULL) == 0);
    } else {
        Timer__GetMilliseconds();
        while (DvdFile__PollStatus(arg0, NULL) == 0) {
            Timer__GetMilliseconds();
        }
    }
    goto loop_1;
}
