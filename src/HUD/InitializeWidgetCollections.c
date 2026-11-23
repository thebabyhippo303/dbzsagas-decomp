/* HUD__InitializeWidgetCollections @ 0x8010E07C (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


extern f32 lbl_80326374 __attribute__((section(".data")));
extern f32 lbl_80326378 __attribute__((section(".data")));

void HUD__InitializeWidgetCollections(void *arg0) {
    u8 *var_r9;
    char *base;
    char *var_r9_3;
    u8 *var_r9_2;
    s32 var_ctr;
    s32 var_ctr_2;
    s32 var_ctr_3;
    s32 zero;
    f32 value74;
    f32 value78;

    var_ctr = 8;
    M2C_FIELD(arg0, s32 *, 0x1234) = 0;
    var_r9 = arg0 + 0x1254;
    do {
        *(s32 *)var_r9 = 0;
        var_r9 -= 4;
        var_ctr -= 1;
    } while (var_ctr != 0);
    var_ctr_2 = 0x20;
    base = arg0 + 0x1034;
    zero = 0;
    var_r9_2 = arg0 + 0x1030;
    do {
        *(s32 *)var_r9_2 = zero;
        var_r9_2 -= 4;
        var_ctr_2 -= 1;
    } while (var_ctr_2 != 0);
    var_r9_3 = base + 0x1FC;
    var_ctr_3 = 0x80;
    do {
        *(s32 *)var_r9_3 = 0;
        var_r9_3 -= 4;
        var_ctr_3 -= 1;
    } while (var_ctr_3 != 0);
    value74 = lbl_80326374;
    value78 = lbl_80326378;
    M2C_FIELD(arg0, f32 *, 0x125C) = value74;
    M2C_FIELD(arg0, f32 *, 0x1264) = value78;
    M2C_FIELD(arg0, f32 *, 0x1260) = value74;
    M2C_FIELD(arg0, s32 *, 0x1258) = 1;
}
