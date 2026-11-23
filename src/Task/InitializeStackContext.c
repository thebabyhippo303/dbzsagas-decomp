/* Task__InitializeStackContext @ 0x8017E94C (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


void Task__InitializeStackContext(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 sp8;
    s32 temp_r0;
    s32 temp_r5;
    void *temp_r9;

    temp_r5 = arg2 + (((arg4 + arg3) & 0xFFFFFFF8) - 0x10);
    temp_r9 = temp_r5 - 0xE8;
    M2C_FIELD(arg0, s32 *, 0) = temp_r5;
    M2C_FIELD(arg0, void **, 4) = temp_r9;
    temp_r0 = M2C_ERROR(/* unknown instruction: mfcr $r0 */);
    sp8 = temp_r0;
    M2C_FIELD(temp_r9, s32 *, 4) = arg1;
    M2C_FIELD(temp_r9, s32 *, 8) = temp_r0;
}
