/* TriggerBox__GetState @ 0x800FDDE0 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


s32 TriggerBox__GetState(void *arg0) {
    s32 temp_r0;
    s32 var_r9;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x200);
    if (temp_r0 != -1) {
        return temp_r0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x258) == 0) {
        /* Duplicate return node #3. Try simplifying control flow for better match */
        return 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x53C) == 0) {
        return 0;
    } else {
        var_r9 = M2C_FIELD(arg0, s32 *, 0x3C0) != 0;
        if (var_r9 != 0) {
            return 0;
        } else {
            return 5;
        }
    }
}
