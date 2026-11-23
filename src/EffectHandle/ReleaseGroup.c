/* EffectHandle__ReleaseGroup @ 0x8022F67C (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 EffectHandle__Release(u32);
extern void *lbl_803ADDA0 __attribute__((section(".data")));

void EffectHandle__ReleaseGroup(s32 arg0) {
    u16 temp_r0;
    void *temp_r9;
    void *var_r31;

    var_r31 = lbl_803ADDA0;
loop_1:
    if (var_r31 != NULL) {
        temp_r9 = var_r31;
        temp_r0 = M2C_FIELD(temp_r9, u16 *, 0x12);
        var_r31 = M2C_FIELD(var_r31, void **, 0);
        if ((s32) temp_r0 == arg0) {
            EffectHandle__Release(M2C_FIELD(temp_r9, u32 *, 0x18));
        }
        goto loop_1;
    }
}

