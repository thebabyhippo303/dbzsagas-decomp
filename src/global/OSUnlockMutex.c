/* OSUnlockMutex @ 0x801707E4 (size: 0xC8, .text, MWCC GC/1.x (Dolphin SDK)) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

int OSDisableInterrupts(void);
void OSRestoreInterrupts(int);
void *OSGetCurrentThread();                         /* extern */
M2C_UNK OSWakeupThread(void *);                     /* extern */
s32 Thread__GetEffectivePriority(void *);           /* extern */

void OSUnlockMutex(void *arg0) {
    s32 temp_r0;
    s32 temp_r31;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r4;

    temp_r31 = OSDisableInterrupts();
    temp_r3 = OSGetCurrentThread();
    if ((u32) M2C_FIELD(arg0, u32 *, 8) == temp_r3) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0xC) - 1;
        M2C_FIELD(arg0, s32 *, 0xC) = temp_r0;
        if (temp_r0 == 0) {
            temp_r3_2 = M2C_FIELD(arg0, void **, 0x10);
            temp_r4 = M2C_FIELD(arg0, void **, 0x14);
            if (temp_r3_2 == NULL) {
                M2C_FIELD(temp_r3, void **, 0x2F8) = temp_r4;
            } else {
                M2C_FIELD(temp_r3_2, void **, 0x14) = temp_r4;
            }
            if (temp_r4 == NULL) {
                M2C_FIELD(temp_r3, void **, 0x2F4) = temp_r3_2;
            } else {
                M2C_FIELD(temp_r4, void **, 0x10) = temp_r3_2;
            }
            M2C_FIELD(arg0, u32 *, 8) = 0U;
            if ((s32) M2C_FIELD(temp_r3, s32 *, 0x2D0) < (s32) M2C_FIELD(temp_r3, s32 *, 0x2D4)) {
                M2C_FIELD(temp_r3, s32 *, 0x2D0) = Thread__GetEffectivePriority(temp_r3);
            }
            OSWakeupThread(arg0);
        }
    }
    OSRestoreInterrupts(temp_r31);
}
