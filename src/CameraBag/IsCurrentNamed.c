/* CameraBag__IsCurrentNamed @ 0x800BBCA4 (size: 0x9C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void * CameraBag__GetCurrent(void *);
int String__CompareIgnoreCase(const char *, const char *);
s32 CameraBag__IsCurrentNamed(void *arg0, s8 *arg1) {
    s32 temp_r3;
    s32 var_r27;
    s32 var_r28;
    s32 var_r29;
    s32 var_r31;

    if (arg1 == NULL) {
        var_r31 = 0;
    } else {
        var_r27 = 0;
        var_r28 = 0;
        var_r29 = 0;
loop_4:
        if (var_r28 < (s32) M2C_FIELD(arg0, s32 *, 0)) {
            if (String__CompareIgnoreCase(arg1, M2C_FIELD((var_r29 + M2C_FIELD(arg0, s32 *, 4)), s8 **, 4)) == 0) {
                var_r27 = *(s32 *)(var_r29 + M2C_FIELD(arg0, s32 *, 4));
            } else {
                var_r29 += 8;
                var_r28 += 1;
                goto loop_4;
            }
        }
        var_r31 = var_r27;
    }
    temp_r3 = var_r31 ^ CameraBag__GetCurrent(arg0);
    return (0 - temp_r3) + temp_r3 + M2C_CARRY;
}

