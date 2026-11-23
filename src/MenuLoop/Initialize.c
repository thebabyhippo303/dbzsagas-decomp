/* MenuLoop__Initialize @ 0x8004C79C (size: 0x210, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void fn_80243670(s32 *, s32);
void fn_80243680(s32);
void fn_80260E34(void *);
void fn_8026BF14(void *);
void fn_8026C528(void *, float, float);
void fn_8026C5A0(void *, float, float);
void fn_8026C6F8(void *, int);
void fn_80270784(void *, char *);
void fn_802721F4(void *, float);
void fn_80272248(void *, float);
M2C_UNK MenuLoop__ShowCopyrightSplash(void *);      /* extern */
M2C_UNK fn_8004CCF4(void *);                        /* extern */
M2C_UNK fn_8026B860(f32, f32);                      /* extern */
f32 fn_8026B86C();                                  /* extern */
M2C_UNK fn_80272264(void *, f32);                   /* extern */
M2C_UNK fn_8027227C(void *, f32);                   /* extern */
M2C_UNK fn_80272294(void *, f32);                   /* extern */
extern M2C_UNK lbl_8031970C __attribute__((section(".data")));
extern s8 lbl_8031971C __attribute__((section(".data")));
extern f32 lbl_80319720 __attribute__((section(".data")));
extern f32 lbl_80319724 __attribute__((section(".data")));
extern f32 lbl_80319728 __attribute__((section(".data")));
extern f32 lbl_8031972C __attribute__((section(".data")));
extern f32 lbl_80319730 __attribute__((section(".data")));
extern f32 lbl_80319734 __attribute__((section(".data")));
extern f32 lbl_80319738 __attribute__((section(".data")));
extern f32 lbl_8031973C __attribute__((section(".data")));
extern f32 lbl_80319740 __attribute__((section(".data")));
extern f32 lbl_80319750 __attribute__((section(".data")));
extern s32 lbl_803946C8 __attribute__((section(".data")));
extern M2C_UNK lbl_803A35A0 __attribute__((section(".data")));
extern M2C_UNK lbl_803B325C __attribute__((section(".data")));
extern s32 lbl_803DC374;
extern s32 lbl_803DC378;

s32 MenuLoop__Initialize(void *arg0) {
    s32 sp8;
    f32 temp_f0;
    f32 temp_f31;
    s32 temp_r28;
    void *temp_r30;

    fn_80260E34(&lbl_8031970C);
    temp_f31 = lbl_80319724;
    M2C_FIELD(&lbl_803B325C, f32 *, 0x2320) = (f32) lbl_80319720;
    M2C_FIELD(&lbl_803B325C, f32 *, 0x2328) = temp_f31;
    M2C_FIELD(&lbl_803B325C, f32 *, 0x2318) = (f32) lbl_80319720;
    M2C_FIELD(arg0, s8 *, 0x1A) = 0;
    M2C_FIELD(arg0, s8 *, 0x18) = 0;
    M2C_FIELD(arg0, s8 *, 0x19) = 0;
    M2C_FIELD(arg0, s8 *, 0x1B) = 0xFF;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    sp8 = (s32) M2C_FIELD(arg0, s8 *, 0x18);
    fn_80243670(&sp8, M2C_ERROR(/* Read from unset register $r4 */));
    fn_80243680(1);
    if (((s32) lbl_803DC374 == 0) && (temp_r28 = lbl_803DC378, ((temp_r28 == 0) != 0))) {
        temp_r30 = arg0 + 0x1C;
        fn_8026B860(lbl_80319728, lbl_8031972C);
        fn_8026C5A0(temp_r30, lbl_80319730, lbl_80319730);
        fn_8026C528(temp_r30, lbl_80319730, lbl_80319730);
        fn_8027227C(temp_r30, fn_8026B86C() * lbl_80319734);
        fn_80270784(temp_r30, &lbl_8031971C);
        fn_802721F4(temp_r30, lbl_80319738);
        fn_80272248(temp_r30, lbl_8031973C);
        fn_80272264(temp_r30, lbl_80319740);
        fn_80272294(temp_r30, lbl_80319730);
        fn_8026C6F8(temp_r30, 0x64);
        fn_8026BF14(temp_r30);
        M2C_FIELD(&lbl_803A35A0, s32 *, 0x3C) = 3;
        M2C_FIELD(&lbl_803A35A0, s32 *, 0) = temp_r28;
        temp_f0 = (f32) (f64) 0x11U * lbl_80319750;
        M2C_FIELD(&lbl_803A35A0, s32 *, 0x18) = temp_r28;
        M2C_FIELD(&lbl_803A35A0, f32 *, 0x28) = temp_f0;
        M2C_FIELD(&lbl_803A35A0, f32 *, 0x30) = temp_f31;
        M2C_FIELD(&lbl_803A35A0, s32 *, 8) = temp_r28;
        M2C_FIELD(&lbl_803A35A0, s32 *, 0x10) = 0x11;
        M2C_FIELD(&lbl_803A35A0, s32 *, 0x14) = temp_r28;
        M2C_FIELD(&lbl_803A35A0, f32 *, 0x1C) = temp_f0;
        M2C_FIELD(&lbl_803A35A0, f32 *, 0x20) = temp_f31;
        M2C_FIELD(&lbl_803A35A0, f32 *, 0x24) = temp_f31;
        M2C_FIELD(&lbl_803A35A0, f32 *, 0x2C) = temp_f31;
        if ((s32) lbl_803946C8 == -1) {
            MenuLoop__ShowCopyrightSplash(arg0);
        } else {
            M2C_FIELD(arg0, s32 *, 0xBD0) = 2;
            fn_8004CCF4(arg0);
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0xBD0) = 2;
        fn_8004CCF4(arg0);
    }
    return 1;
}

