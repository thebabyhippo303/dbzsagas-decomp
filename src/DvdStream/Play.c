/* DvdStream__Play @ 0x801974F4 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void AIResetStreamSampleCount(void);
void AISetStreamVolLeft(s32);
void AISetStreamVolRight(s32);
M2C_UNK AISetStreamPlayState(M2C_UNK);              /* extern */

s32 DvdStream__Play(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3C) = 1;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x38) != 0) {
        AIResetStreamSampleCount();
        AISetStreamVolLeft((s32) M2C_FIELD(arg0, u8 *, 0x54));
        AISetStreamVolRight((s32) M2C_FIELD(arg0, u8 *, 0x54));
        AISetStreamPlayState(1);
    }
    return 1;
}
