/* AxStream__ConvertPathSlashes @ 0x801984EC (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


void AxStream__ConvertPathSlashes(u8 *arg0, s8 *arg1) {
    s8 *var_r4;
    u8 *var_r3;
    u8 var_r0;

    var_r3 = arg0;
    var_r4 = arg1;
    var_r0 = *var_r3;
    if ((s32) var_r0 != 0) {
        do {
            if ((s32) var_r0 == 0x5C) {
                *var_r4 = 0x2F;
            } else {
                *var_r4 = var_r0;
            }
            var_r0 = M2C_FIELD(var_r3, u8 *, 1);
            var_r3 += 1;
            var_r4 += 1;
        } while ((s32) var_r0 != 0);
    }
    *var_r4 = 0;
}
