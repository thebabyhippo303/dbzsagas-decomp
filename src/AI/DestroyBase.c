/* AI__DestroyBase @ 0x80058B94 (size: 0xD0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void AIActionPattern__Destroy(s8 **, s32);
void Attacher__Destroy(void *);
void Avatar__ClearPurpleSpiralEffects(void *);
void fn_801843CC(void *);
M2C_UNK fn_8007335C(void *, M2C_UNK);               /* extern */
extern M2C_UNK lbl_80334758 __attribute__((section(".data")));
extern s32 lbl_803DC434;
extern s32 lbl_803DC438;

void AI__DestroyBase(void *arg0, s32 arg1) {
    s8 **temp_r3;
    void *temp_r0;
    void *temp_r3_2;
    void *var_r9;

    temp_r3 = M2C_FIELD(arg0, s8 ***, 0x324);
    M2C_FIELD(arg0, M2C_UNK **, 0x57C) = &lbl_80334758;
    if (temp_r3 != NULL) {
        AIActionPattern__Destroy(temp_r3, 3);
    }
    Avatar__ClearPurpleSpiralEffects(arg0);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x420) != 0) {
        lbl_803DC434 -= 1;
    }
    if ((s32) lbl_803DC434 == 0) {
        lbl_803DC438 = lbl_803DC434;
    }
    temp_r3_2 = M2C_FIELD(arg0, void **, 0x434);
    if (temp_r3_2 != NULL) {
        Attacher__Destroy(temp_r3_2);
        M2C_FIELD(arg0, void **, 0x434) = NULL;
    }
    temp_r0 = arg0 + 0x194;
    if (temp_r0 != NULL) {
        var_r9 = arg0 + 0x324;
        if (temp_r0 != var_r9) {
            do {
                var_r9 -= 0x10;
            } while (temp_r0 != var_r9);
        }
    }
    fn_8007335C(arg0 + 0x90, 2);
    if (arg1 & 1) {
        fn_801843CC(arg0);
    }
}
