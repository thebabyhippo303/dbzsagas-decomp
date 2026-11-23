/* Avatar__InitializeFireShieldAttacherSlots @ 0x800952E4 (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


void Avatar__InitializeFireShieldAttacherSlots(void *arg0) {
    s32 var_ctr;
    void *var_r9;

    var_ctr = 0x20;
    var_r9 = arg0 + 0x3EC;
    do {
        M2C_FIELD(var_r9, s32 *, -0x104) = 0;
        M2C_FIELD(var_r9, s32 *, 0) = 0;
        var_r9 += 4;
        var_ctr -= 1;
    } while (var_ctr != 0);
    M2C_FIELD(arg0, s32 *, 0x4EC) = 0;
}
