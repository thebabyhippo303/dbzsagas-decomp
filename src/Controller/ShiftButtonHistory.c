/* Controller__ShiftButtonHistory @ 0x801D5044 (size: 0x1C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


void Controller__ShiftButtonHistory(void *arg0) {
    s32 var_ctr;
    void *var_r3;

    var_r3 = arg0;
    var_ctr = 0x13;
    do {
        M2C_FIELD(var_r3, s32 *, 0) = (s32) M2C_FIELD(var_r3, s32 *, 4);
        var_r3 += 8;
        var_ctr -= 1;
    } while (var_ctr != 0);
}
