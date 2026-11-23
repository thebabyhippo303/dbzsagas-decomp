/* AI__CalibrateSampleRateTiming @ 0x8017CB0C (size: 0x1E4, .text, MWCC GC/1.x (Dolphin SDK)) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


u64 OSGetTime();                                    /* extern */

void AI__CalibrateSampleRateTiming(void) {
    s32 temp_r5;
    s32 temp_r7;
    s32 temp_r8;
    u32 temp_r26;
    u32 var_r0;
    u64 temp_r27;
    u64 temp_ret;
    u64 temp_ret_2;
    void *temp_r30;

    var_r0 = 0U;
loop_15:
    if (var_r0 == 0U) {
        temp_r30 = (s32 *)0xCC000000 + 0x6C00;
        *(s32 *)0xCC006C00 = (*(s32 *)0xCC006C00 & 0xFFFFFFDF) | 0x20;
        *(s32 *)0xCC006C00 &= 0xFFFFFFFD;
        *(s32 *)0xCC006C00 = (*(s32 *)0xCC006C00 & 0xFFFFFFFE) | 1;
        do {

        } while ((u32) M2C_FIELD(temp_r30, u32 *, 8) == (u32) M2C_FIELD(temp_r30, u32 *, 8));
        temp_ret = OSGetTime();
        temp_r26 = (u32) temp_ret;
        temp_r27 = temp_ret;
        *(s32 *)0xCC006C00 = (*(s32 *)0xCC006C00 & 0xFFFFFFFD) | 2;
        *(s32 *)0xCC006C00 = (*(s32 *)0xCC006C00 & 0xFFFFFFFE) | 1;
        do {

        } while ((u32) M2C_FIELD(temp_r30, u32 *, 8) == (u32) M2C_FIELD(temp_r30, u32 *, 8));
        temp_ret_2 = OSGetTime();
        temp_r8 = (u32) temp_ret_2 - temp_r26;
        temp_r7 = ((temp_ret_2 - temp_r27) - !M2C_CARRY) ^ 0x80000000;
        *(s32 *)0xCC006C00 &= 0xFFFFFFFD;
        *(s32 *)0xCC006C00 &= 0xFFFFFFFE;
        if ((s32) -((temp_r7 - temp_r7) - !M2C_CARRY) != 0) {
            var_r0 = 1U;
        } else if (((s32) -((temp_r7 - temp_r7) - !M2C_CARRY) == 0) && ((s32) -((temp_r7 - temp_r7) - !M2C_CARRY) != 0)) {
            var_r0 = 1U;
        } else {
            var_r0 = 0U;
        }
        goto loop_15;
    }
    do {
        temp_r5 = OSGetTime() ^ 0x80000000;
    } while ((s32) -((temp_r5 - temp_r5) - !M2C_CARRY) != 0);
}

