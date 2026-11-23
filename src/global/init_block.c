/* init_block @ 0x8025A210 (size: 0x78, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


void init_block(void *arg0) {
    u8 *var_r9;
    s32 var_ctr;
    register u8 *var_r9_2;
    s32 var_ctr_3;
    u8 *var_r9_3;
    s16 *base;
    s16 zero;
    s32 var_ctr_2;

    var_ctr = 0x11E;
    var_r9 = arg0 + 0x500;
    do {
        *(s16 *)var_r9 = 0;
        var_r9 -= 4;
        var_ctr -= 1;
    } while (var_ctr != 0);
    base = (s16 *)((char *)arg0 + 0xA74);
    var_ctr_2 = 0x1E;
    zero = 0;
    var_r9_2 = arg0 + 0x9F4;
    do {
        *(s16 *)var_r9_2 = zero;
        var_r9_2 -= 4;
        var_ctr_2 -= 1;
    } while (var_ctr_2 != 0);
    var_r9_3 = base + 36;
    var_ctr_3 = 0x13;
    do {
        *(s16 *)var_r9_3 = 0;
        var_r9_3 -= 4;
        var_ctr_3 -= 1;
    } while (var_ctr_3 != 0);
    M2C_FIELD(arg0, s32 *, 0x16A4) = 0;
    M2C_FIELD(arg0, s16 *, 0x48C) = 1;
    M2C_FIELD(arg0, s32 *, 0x16A0) = 0;
    M2C_FIELD(arg0, s32 *, 0x16A8) = 0;
    M2C_FIELD(arg0, s32 *, 0x1698) = 0;
}
