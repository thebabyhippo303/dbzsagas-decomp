/* App__InitializeRuntime @ 0x8017FC28 (size: 0xB4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

int FileIO__InitializePools(int, int, int);
s32 App__InitializeMemoryHeaps();                   /* extern */
M2C_UNK fn_8017E9A8(u8, M2C_UNK);                   /* extern */
M2C_UNK fn_8017FC20(s32);                           /* extern */
M2C_UNK fn_80180090(s32);                           /* extern */
M2C_UNK fn_80184610(s32);                           /* extern */
M2C_UNK fn_80185034();                              /* extern */
M2C_UNK fn_801851C0(s32);                           /* extern */
s32 fn_801D6374(s32);                               /* extern */
extern M2C_UNK lbl_803729F4 __attribute__((section(".data")));
extern s32 lbl_803DCC60;

s32 App__InitializeRuntime(void) {
    char *base;
    s32 temp_r29;
    s32 temp_r30;
    s32 result;

    base = (char *)&lbl_803729F4;
    if (M2C_FIELD(base, s32 *, 0x38) == 0x87654321) {
        result = 1;
    } else {
        M2C_FIELD(base, s32 *, 0x38) = 0x87654321;
        if (App__InitializeMemoryHeaps() != 0) {
            fn_8017E9A8(M2C_FIELD(base, u8 *, 0x20), 1);
            fn_8017FC20(M2C_FIELD(base, s32 *, 0x24));
            temp_r29 = M2C_FIELD(base, s32 *, 0x2C);
            temp_r30 = M2C_FIELD(base, s32 *, 0x28);
            FileIO__InitializePools(temp_r29, temp_r30, fn_801D6374(lbl_803DCC60));
            fn_80180090(M2C_FIELD(base, s32 *, 0x28));
            fn_80184610(M2C_FIELD(base, s32 *, 0x30));
            fn_80185034();
            fn_801851C0(M2C_FIELD(base, s32 *, 0x34));
            result = 1;
        } else {
            result = 0;
        }
    }
    return result;
}
