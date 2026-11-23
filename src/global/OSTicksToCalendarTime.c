/* OSTicksToCalendarTime @ 0x80170418 (size: 0x204, .text, MWCC GC/1.x (Dolphin SDK)) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Runtime__Remainder64SignedThunk(void);
M2C_UNK OS__DaysToCalendarDate(s32, void *);        /* extern */
u64 Runtime__Divide64SignedThunk(s32, s32, M2C_UNK, u32); /* extern */

void OSTicksToCalendarTime(s32 arg0, s32 arg1, void *arg2) {
    s32 temp_r29;
    s32 temp_r30;
    s32 temp_r4;
    s32 var_r25;
    s32 var_r26;
    s32 var_r26_2;
    s32 var_r27;

    Runtime__Remainder64SignedThunk();
    var_r26 = M2C_ERROR(/* Read from unset register $r3 */);
    var_r25 = M2C_ERROR(/* Read from unset register $r4 */);
    temp_r4 = var_r26 ^ 0x80000000;
    if ((s32) -((temp_r4 - temp_r4) - !M2C_CARRY) != 0) {
        var_r25 += (u32) *(u32 *)0x800000F8 >> 2U;
        var_r26 += M2C_CARRY;
    }
    Runtime__Divide64SignedThunk((var_r26 * 8) + (var_r25 / 536870912) + (var_r25 * 0), var_r25 * 8, 0, *(void *)0x800000F8 / 500000);
    Runtime__Remainder64SignedThunk();
    M2C_FIELD(arg2, s32 *, 0x24) = (s32) M2C_ERROR(/* Read from unset register $r4 */);
    Runtime__Divide64SignedThunk(var_r26, var_r25, 0, *(void *)0x800000F8 / 4000);
    Runtime__Remainder64SignedThunk();
    M2C_FIELD(arg2, s32 *, 0x20) = (s32) M2C_ERROR(/* Read from unset register $r4 */);
    temp_r30 = arg1 - var_r25;
    temp_r29 = (arg0 - var_r26) - !M2C_CARRY;
    Runtime__Divide64SignedThunk(temp_r29, temp_r30, 0, (u32) *(void *)0x800000F8 >> 2U);
    var_r26_2 = (u32) Runtime__Divide64SignedThunk(0, 0x15180) + 0xB2575;
    Runtime__Divide64SignedThunk(temp_r29, temp_r30, 0, (u32) *(void *)0x800000F8 >> 2U);
    Runtime__Remainder64SignedThunk();
    var_r27 = M2C_ERROR(/* Read from unset register $r4 */);
    if (var_r27 < 0) {
        var_r26_2 -= 1;
        var_r27 += 0x15180;
    }
    OS__DaysToCalendarDate(var_r26_2, arg2);
    M2C_FIELD(arg2, u32 *, 8) = (u32) ((var_r27 / 60) / 60);
    M2C_FIELD(arg2, s32 *, 4) = (s32) ((var_r27 / 60) % 60);
    M2C_FIELD(arg2, s32 *, 0) = (s32) (var_r27 % 60);
}

