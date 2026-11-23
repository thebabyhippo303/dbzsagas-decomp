/* gfxTexCache__LoadTexture @ 0x802477C4 (size: 0xFC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


M2C_UNK Debug__FormatMessage(M2C_UNK *, ...);            /* extern */
u16 fn_8024E690();                                  /* extern */
M2C_UNK fn_8024EB40(u16, M2C_UNK);                  /* extern */
s32 fn_8024ED28(u16, int, void *, int);      /* extern */
M2C_UNK sprintf(M2C_UNK *, M2C_UNK *, ...); /* extern */
extern M2C_UNK lbl_80347864 __attribute__((section(".data")));
extern u16 lbl_803DCDE0 __attribute__((section(".sdata")));

u16 gfxTexCache__LoadTexture(void *arg0, void *arg1, void *arg2) {
    u16 result;
    s8 sp8[104];
    u16 temp_r30;
    void *var_r29;
    void *var_r31;

    temp_r30 = fn_8024E690();
    if (fn_8024ED28(temp_r30, 0, arg2, 0) == 0) {
        sprintf(sp8, &lbl_80347864, arg2 + 0x28, lbl_803DCDE0);
        Debug__FormatMessage(sp8);
        result = lbl_803DCDE0;
    } else {
    s32 flags = M2C_FIELD(arg2, s32 *, 0);
    lbl_803DCDE0 = temp_r30;
    if (flags & 0x800) {
        fn_8024EB40(temp_r30, 4);
    }
    if (M2C_FIELD(arg2, s32 *, 0) & 0x4000) {
        fn_8024EB40(temp_r30, 8);
    }
    if (M2C_FIELD(arg2, s32 *, 0) & 0x40) {
        fn_8024EB40(temp_r30, 0x10);
    }
    var_r31 = M2C_FIELD(arg2, void **, 4);
    var_r29 = (void *)1;
    if (var_r31 != NULL) {
        do {
            fn_8024ED28(temp_r30, var_r29, var_r31, 0);
            var_r29 += 1;
            var_r31 = M2C_FIELD(var_r31, void **, 4);
        } while (var_r31 != NULL);
    }
    result = temp_r30;
    }
    return result;
}

