/* MenuList__GetSelectedItemIndex @ 0x800142F8 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


s32 MenuList__SubtractAndWrapIndex(void *, s32, s32);

s32 MenuList__GetSelectedItemIndex(void *arg0) {
    s32 var_r11;
    void *var_r10;
    void *var_r9;

    var_r9 = M2C_FIELD(arg0, void **, 0x538);
    var_r11 = 0;
    var_r10 = NULL;
    if (var_r9 != NULL) {
        do {
            if ((s32) M2C_FIELD(arg0, s32 *, 0x1A4) == var_r11) {
                var_r10 = var_r9;
            }
            var_r9 = M2C_FIELD(var_r9, void **, 0x208);
            var_r11 += 1;
        } while (var_r9 != NULL);
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x50C) <= (s32) M2C_FIELD(arg0, s32 *, 0x1A0)) {
        return M2C_FIELD(var_r10, s32 *, 0x1F4);
    }
    return MenuList__SubtractAndWrapIndex(arg0, M2C_FIELD(var_r10, s32 *, 0x1F4), 1);
}

