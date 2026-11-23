/* CmdCon__Verbosity @ 0x8018B7D4 (size: 0x1A8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

int String__CompareIgnoreCase(const char *, const char *);
M2C_UNK fn_80189A54(M2C_UNK *, M2C_UNK *, ...);     /* extern */
M2C_UNK fn_80189AF0(M2C_UNK *, M2C_UNK *, s8 *, ...); /* extern */
M2C_UNK fn_80189B8C(M2C_UNK *, M2C_UNK *, ...);     /* extern */
extern M2C_UNK lbl_8033E778 __attribute__((section(".data")));
extern M2C_UNK lbl_8033E78C __attribute__((section(".data")));
extern M2C_UNK lbl_8033E7A4 __attribute__((section(".data")));
extern M2C_UNK lbl_8033E7BC __attribute__((section(".data")));
extern s8 lbl_8033E7D4 __attribute__((section(".data")));
extern s8 lbl_8033E7DC __attribute__((section(".data")));
extern s8 lbl_8033E7E4 __attribute__((section(".data")));
extern s8 lbl_8033E7EC __attribute__((section(".data")));
extern M2C_UNK lbl_8033E7F4 __attribute__((section(".data")));

s32 CmdCon__Verbosity(M2C_UNK *arg0, M2C_UNK *arg1, s8 *arg2) {
    s32 temp_r0;
    s32 temp_r3;

    if ((s32) *arg2 == 0) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 4);
        if (temp_r0 == 0) {
            fn_80189A54(arg0, &lbl_8033E778);
        } else if (temp_r0 == 1) {
            fn_80189A54(arg0, &lbl_8033E78C);
        } else if (temp_r0 == 2) {
            fn_80189A54(arg0, &lbl_8033E7A4);
        } else {
            fn_80189A54(arg0, &lbl_8033E7BC);
        }
    } else {
        temp_r3 = String__CompareIgnoreCase(arg2, &lbl_8033E7D4);
        if (temp_r3 == 0) {
            M2C_FIELD(arg0, s32 *, 4) = temp_r3;
            fn_80189B8C(arg0, &lbl_8033E778);
        } else if (String__CompareIgnoreCase(arg2, &lbl_8033E7DC) == 0) {
            M2C_FIELD(arg0, s32 *, 4) = 1;
            fn_80189B8C(arg0, &lbl_8033E78C);
        } else if (String__CompareIgnoreCase(arg2, &lbl_8033E7E4) == 0) {
            M2C_FIELD(arg0, s32 *, 4) = 2;
            fn_80189B8C(arg0, &lbl_8033E7A4);
        } else if (String__CompareIgnoreCase(arg2, &lbl_8033E7EC) == 0) {
            M2C_FIELD(arg0, s32 *, 4) = 3;
            fn_80189B8C(arg0, &lbl_8033E7BC);
        } else {
            fn_80189AF0(arg0, &lbl_8033E7F4, arg2);
        }
    }
    return 1;
}

