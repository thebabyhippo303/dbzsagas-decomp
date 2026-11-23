/* App__BuildDataPath @ 0x80180F6C (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

char * strcpy(char *, const char *);
M2C_UNK Path__Join(s8 *, s8 *, M2C_UNK *, M2C_UNK *);     /* extern */
extern M2C_UNK lbl_8033D538 __attribute__((section(".data")));
extern M2C_UNK lbl_8033D544 __attribute__((section(".data")));
extern M2C_UNK lbl_80372A30 __attribute__((section(".data")));
extern s32 lbl_803DCB94;

void App__BuildDataPath(s8 *arg0, s8 *arg1, s32 arg2) {
    M2C_UNK *var_r5;

    if ((s32) lbl_803DCB94 == 0) {
        strcpy(arg1, arg0);
        return;
    }
    if (arg2 != 0) {
        var_r5 = &lbl_8033D538;
    } else {
        var_r5 = &lbl_8033D544;
    }
    Path__Join(arg0, arg1, var_r5, &lbl_80372A30);
}
