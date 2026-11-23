/* Path__BuildWithExtension @ 0x801886A8 (size: 0xC8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 Path__HasExtension(s8 *);
void Path__StripExtension(s8 *);
char * strcat(char *, const char *);
char * strcpy(char *, const char *);
int strlen(const char *);
extern s8 lbl_8033DFE0 __attribute__((section(".data")));
extern s8 lbl_8033DFE4 __attribute__((section(".data")));

s8 *Path__BuildWithExtension(s8 *arg0, s8 arg1, s8 *arg2, s8 *arg3) {
    if (arg1 == 0) {
        *arg0 = arg1;
    } else {
        strcpy(arg0, (s8 *) arg1);
        if ((s32) M2C_FIELD((s8 *)(strlen(arg0) + (s32)arg0), u8 *, -1) != 0x5C) {
            strcat(arg0, &lbl_8033DFE0);
        }
    }
    strcat(arg0, arg2);
    if (arg3 != NULL) {
        if (Path__HasExtension(arg0) != 0) {
            Path__StripExtension(arg0);
        }
        if ((s32) *arg3 != 0x2E) {
            strcat(arg0, &lbl_8033DFE4);
        }
        strcat(arg0, arg3);
    }
    return arg0;
}
