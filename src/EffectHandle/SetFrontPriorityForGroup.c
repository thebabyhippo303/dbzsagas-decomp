/* EffectHandle__SetFrontPriorityForGroup @ 0x8022F5D0 (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


extern void *lbl_803ADDA0 __attribute__((section(".data")));

void EffectHandle__SetFrontPriorityForGroup(s32 arg0) {
    void *var_r9;

    var_r9 = lbl_803ADDA0;
    if (var_r9 != NULL) {
        do {
            if ((s32) M2C_FIELD(var_r9, u16 *, 0x12) == arg0) {
                M2C_FIELD(var_r9, s32 *, 8) = (s32) (M2C_FIELD(var_r9, s32 *, 8) | 0x40);
            }
            var_r9 = M2C_FIELD(var_r9, void **, 0);
        } while (var_r9 != NULL);
    }
}
