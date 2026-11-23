/* MainMenu__DestroyUpgradeScreen @ 0x8014C28C (size: 0x3D8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Sphere__DestroyCore(void *, s32);
void MainMenu__DestroySelectionListState(void *, s32);
void fn_802704BC(void *, int);
M2C_UNK PointerArray__Remove(s32, s32);
M2C_UNK UIList__Destroy(s32, s32);
M2C_UNK fn_80267A1C(s32, s32);
extern M2C_UNK lbl_8030E220 __attribute__((section(".data")));
extern M2C_UNK lbl_803106B8 __attribute__((section(".data")));
extern M2C_UNK lbl_8032D920 __attribute__((section(".data")));
extern M2C_UNK lbl_80336270 __attribute__((section(".data")));
extern s32 lbl_803DC630;

void MainMenu__DestroyUpgradeScreen(void *arg0, s32 arg1) {
    char *p_19c;
    s16 ld_8;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r28;
    void *temp_r29;
    void *temp_r29_2;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;
    void *temp_r9_5;
    void *var_r31;
    void *var_r31_2;
    void *var_r31_4;

    M2C_FIELD(arg0, M2C_UNK **, 0x19C) = &lbl_8032D920;
    PointerArray__Remove(lbl_803DC630, (s32) arg0);
    temp_r29 = arg0 + 0x11884;
    fn_802704BC(arg0 + 0x122E8, 2);
    temp_r0 = arg0 + 0x11BC4;
    M2C_FIELD(temp_r29, M2C_UNK **, 0x19C) = &lbl_80336270;
    if (temp_r0 != NULL) {
        var_r31 = arg0 + 0x122C4;
        if (temp_r0 != var_r31) {
            while (temp_r0 != var_r31) {
                var_r31 -= 0x1C0;
                p_19c = (char *)var_r31 + 0x19c;
                temp_r9 = M2C_FIELD(p_19c, void **, 0x0);
                M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK), 0xC)(var_r31 + M2C_FIELD(temp_r9, s16 *, 8), 0);
            }
        }
    }
    Sphere__DestroyCore(temp_r29 + 0x1A0, 2);
    Sphere__DestroyCore(temp_r29, 2);
    temp_r29_2 = arg0 + 0x10680;
    temp_r9_2 = arg0 + 0x1113C;
    M2C_FIELD(temp_r29_2, M2C_UNK **, 0x19C) = &lbl_803106B8;
    if (temp_r9_2 != NULL) {
        var_r31_2 = arg0 + 0x1183C;
        if (temp_r9_2 != var_r31_2) {
            do {
                var_r31_2 -= 0x1C0;
                temp_r9_3 = M2C_FIELD(var_r31_2, void **, 0x19C);
                ld_8 = M2C_FIELD(temp_r9_3, s16 *, 8);
                M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *, M2C_UNK), 0xC)(var_r31_2 + ld_8, 0);
            } while ((void *) (arg0 + 0x1113C) != var_r31_2);
        }
    }
    Sphere__DestroyCore(temp_r29_2 + 0x91C, 2);
    temp_r28 = arg0 + 0xC934;
    Sphere__DestroyCore(temp_r29_2 + 0x77C, 2);
    var_r31 = arg0 + 0xD368;
    fn_802704BC(temp_r29_2 + 0x588, 2);
    fn_802704BC(temp_r29_2 + 0x394, 2);
    fn_802704BC(temp_r29_2 + 0x1A0, 2);
    Sphere__DestroyCore(temp_r29_2, 2);
    M2C_FIELD(temp_r28, M2C_UNK **, 0x19C) = &lbl_8030E220;
    fn_802704BC(arg0 + 0x10488, 2);
    fn_802704BC(arg0 + 0x10294, 2);
    fn_802704BC(0x100A0 + arg0, 2);
    fn_802704BC(arg0 + 0xFEAC, 2);
    fn_802704BC(arg0 + 0xFCB8, 2);
    fn_802704BC(arg0 + 0xFAC4, 2);
    fn_802704BC(arg0 + 0xF8D0, 2);
    fn_802704BC(arg0 + 0xF6DC, 2);
    fn_802704BC(arg0 + 0xF4E8, 2);
    fn_802704BC(arg0 + 0xF2F4, 2);
    fn_802704BC(arg0 + 0xF100, 2);
    fn_802704BC(arg0 + 0xEF0C, 2);
    fn_802704BC(arg0 + 0xED18, 2);
    fn_802704BC(arg0 + 0xEB24, 2);
    fn_802704BC(arg0 + 0xE930, 2);
    fn_802704BC(arg0 + 0xE73C, 2);
    fn_802704BC(arg0 + 0xE548, 2);
    Sphere__DestroyCore(arg0 + 0xE3A8, 2);
    Sphere__DestroyCore(arg0 + 0xE208, 2);
    Sphere__DestroyCore(arg0 + 0xE068, 2);
    Sphere__DestroyCore(arg0 + 0xDEC8, 2);
    Sphere__DestroyCore(arg0 + 0xDD28, 2);
    Sphere__DestroyCore(arg0 + 0xDB88, 2);
    Sphere__DestroyCore(arg0 + 0xD9E8, 2);
    Sphere__DestroyCore(arg0 + 0xD848, 2);
    Sphere__DestroyCore(arg0 + 0xD6A8, 2);
    Sphere__DestroyCore(arg0 + 0xD508, 2);
    Sphere__DestroyCore(var_r31, 2);
    temp_r0_2 = arg0 + 0xD028;
    if (temp_r0_2 != NULL) {
        if (temp_r0_2 != var_r31) {
            do {
                var_r31 -= 0x1A0;
                temp_r9_4 = M2C_FIELD(p_19c, void **, 0x0);
                M2C_FIELD(temp_r9_4, M2C_UNK (**)(void *, M2C_UNK), 0xC)(var_r31 + M2C_FIELD(temp_r9_4, s16 *, 8), 0);
            } while (temp_r0_2 != var_r31);
        }
    }
    MainMenu__DestroySelectionListState(temp_r28 + 0x1A0, 2);
    Sphere__DestroyCore(temp_r28, 2);
    fn_802704BC(arg0 + 0xC740, 2);
    Sphere__DestroyCore(arg0 + 0xC5A0, 2);
    fn_802704BC(arg0 + 0xC3AC, 2);
    fn_802704BC(arg0 + 0xC1B8, 2);
    fn_802704BC(arg0 + 0xBFC4, 2);
    UIList__Destroy((s32) (arg0 + 0xBC38), 2);
    Sphere__DestroyCore(arg0 + 0xBA98, 2);
    Sphere__DestroyCore(arg0 + 0xB8F8, 2);
    Sphere__DestroyCore(arg0 + 0xB758, 2);
    Sphere__DestroyCore(arg0 + 0xB5B8, 2);
    temp_r0_3 = arg0 + 0xAE98;
    if (temp_r0_3 != NULL) {
        var_r31_4 = arg0 + 0xB598;
        if (temp_r0_3 != var_r31_4) {
            do {
                var_r31_4 -= 0x1C0;
                temp_r9_5 = M2C_FIELD(var_r31_4, void **, 0x19C);
                M2C_FIELD(temp_r9_5, M2C_UNK (**)(void *, M2C_UNK), 0xC)(var_r31_4 + M2C_FIELD(temp_r9_5, s16 *, 8), 0);
            } while (temp_r0_3 != var_r31_4);
        }
    }
    fn_80267A1C((s32) arg0, arg1);
}
