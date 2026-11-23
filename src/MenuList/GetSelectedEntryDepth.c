/* MenuList__GetSelectedEntryDepth @ 0x80014430 (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 MenuList__SubtractAndWrapIndex(void *, s32, s32);
f32 fn_80271C3C(void *);                            /* extern */
extern f32 lbl_8030D9F8 __attribute__((section(".data")));

f32 MenuList__GetSelectedEntryDepth(void *arg0) {
    s32 var_r30;
    s32 var_r3;
    void *var_r29;
    void *var_r31;

    var_r31 = M2C_FIELD(arg0, void **, 0x538);
    var_r30 = 0;
    var_r29 = NULL;
    if (var_r31 != NULL) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x50C) <= (s32) M2C_FIELD(arg0, s32 *, 0x1A0)) {
            var_r3 = M2C_FIELD(arg0, s32 *, 0x1A4);
        } else {
            var_r3 = MenuList__SubtractAndWrapIndex(arg0, M2C_FIELD(arg0, s32 *, 0x1A4), 1);
        }
        while (var_r31 != NULL) {
            if (var_r3 == var_r30) {
                var_r29 = var_r31;
            }
            var_r31 = M2C_FIELD(var_r31, void **, 0x208);
            var_r30 += 1;
        }
        return fn_80271C3C(var_r29);
    }
    return lbl_8030D9F8;
}
