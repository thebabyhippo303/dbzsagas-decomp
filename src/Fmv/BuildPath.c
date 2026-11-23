/* Fmv__BuildPath @ 0x801D912C (size: 0xA4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

char * strcat(char *, const char *);
char * strcpy(char *, const char *);
extern s8 lbl_80343438 __attribute__((section(".data")));
extern s8 lbl_8034344C __attribute__((section(".data")));
extern s8 lbl_8034345C __attribute__((section(".data")));
extern s32 lbl_803DCC80;

void Fmv__BuildPath(s8 *arg0, s8 *arg1) {
    s8 *var_r3;
    u8 var_r0;

    if ((s32) lbl_803DCC80 != 0) {
        strcpy(arg1, &lbl_80343438);
    } else {
        strcpy(arg1, &lbl_8034344C);
    }
    strcat(arg1, arg0);
    strcat(arg1, &lbl_8034345C);
    var_r3 = arg1;
    var_r0 = (u8) *var_r3;
    if ((s32) var_r0 != 0) {
        do {
            if ((s32) var_r0 == 0x5C) {
                M2C_FIELD(var_r3, s8 *, 0) = 0x2F;
            }
            var_r0 = M2C_FIELD(var_r3, u8 *, 1);
            var_r3 += 1;
        } while ((s32) var_r0 != 0);
    }
}
