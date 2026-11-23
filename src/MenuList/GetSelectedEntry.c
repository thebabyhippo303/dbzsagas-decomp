/* MenuList__GetSelectedEntry @ 0x8001436C (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void *MenuList__GetSelectedEntry(void *arg0) {
    s32 var_r11;
    void *var_r0;
    void *var_r9;

    var_r9 = M2C_FIELD(arg0, void **, 0x538);
    var_r11 = 0;
    var_r0 = NULL;
    if (var_r9 != NULL) {
        do {
            if ((s32) M2C_FIELD(arg0, s32 *, 0x1A4) == var_r11) {
                var_r0 = var_r9;
            }
            var_r9 = M2C_FIELD(var_r9, void **, 0x208);
            var_r11 += 1;
        } while (var_r9 != NULL);
    }
    return var_r0;
}
