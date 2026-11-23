/* ProblemDialog__Destroy @ 0x80008E00 (size: 0xBC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Sphere__DestroyCore(void *, s32);
void fn_802704BC(void *, int);
M2C_UNK PointerArray__Remove(s32, void *, M2C_UNK *); /* extern */
M2C_UNK fn_80267A1C(void *, s32);                   /* extern */
extern M2C_UNK lbl_803093F8 __attribute__((section(".data")));
extern s32 lbl_803DC650;

void ProblemDialog__Destroy(void *arg0, s32 arg1) {
    void *temp_r0;
    void *temp_r9;
    void *var_r30;

    M2C_FIELD(arg0, M2C_UNK **, 0x19C) = &lbl_803093F8;
    PointerArray__Remove(lbl_803DC650, arg0, &lbl_803093F8);
    temp_r0 = arg0 + 0xB418;
    var_r30 = arg0 + 0xB758;
    if (temp_r0 != var_r30) {
        do {
            var_r30 -= 0x1A0;
            temp_r9 = M2C_FIELD(var_r30, void **, 0x19C);
            M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK), 0xC)(var_r30 + M2C_FIELD(temp_r9, s16 *, 8), 0);
        } while (temp_r0 != var_r30);
    }
    Sphere__DestroyCore(arg0 + 0xB278, 2);
    fn_802704BC(arg0 + 0xB084, 2);
    fn_802704BC(arg0 + 0xAE90, 2);
    fn_80267A1C(arg0, arg1);
}
