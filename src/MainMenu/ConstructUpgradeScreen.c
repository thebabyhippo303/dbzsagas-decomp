/* MainMenu__ConstructUpgradeScreen @ 0x8014BF4C (size: 0x340, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void PointerArray__AddUnique(void *, void *);
void fn_802678CC(s32);
void fn_8026B590(void *);
void fn_80270450(void *);
s32 UIList__Construct(s32);
M2C_UNK MainMenu__ConstructSelectionListState(s32);
extern M2C_UNK lbl_8030E220;
extern M2C_UNK lbl_803106B8 __attribute__((section(".data")));
extern M2C_UNK lbl_80310AD0 __attribute__((section(".data")));
extern f32 lbl_8032BEAC __attribute__((section(".data")));
extern f32 lbl_8032BEB0 __attribute__((section(".data")));
extern f32 lbl_8032BEB4 __attribute__((section(".data")));
extern f32 lbl_8032BEB8 __attribute__((section(".data")));
extern M2C_UNK lbl_8032D920 __attribute__((section(".data")));
extern M2C_UNK lbl_80336270 __attribute__((section(".data")));
extern void *lbl_803DC650;

s32 MainMenu__ConstructUpgradeScreen(s32 arg0) {
    char *p_11c0;
    s32 flag;
    f64 temp_f30;
    f64 temp_f31;
    s32 temp_cr0_eq;
    s32 var_r31;
    void *temp_r31;
    void *var_r28;
    char *var_r30;

    var_r31 = 3;
    fn_802678CC(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x19C) = &lbl_8032D920;
    var_r30 = arg0 + 0xAE98;
    do {
        fn_8026B590(var_r30);
        M2C_FIELD(var_r30, M2C_UNK **, 0x19C) = &lbl_80310AD0;
        temp_cr0_eq = var_r31 == 0;
        flag = temp_cr0_eq == 0;
        var_r30 += 0x1C0;
        var_r31 -= 1;
    } while (flag);
    var_r31 = 1;
    temp_r31 = arg0 + 0xC934;
    fn_8026B590(arg0 + 0xB5B8);
    var_r28 = arg0 + 0xD028;
    fn_8026B590(arg0 + 0xB758);
    fn_8026B590(arg0 + 0xB8F8);
    fn_8026B590(arg0 + 0xBA98);
    UIList__Construct(arg0 + 0xBC38);
    fn_80270450(arg0 + 0xBFC4);
    fn_80270450(arg0 + 0xC1B8);
    fn_80270450(arg0 + 0xC3AC);
    fn_8026B590(arg0 + 0xC5A0);
    fn_80270450(arg0 + 0xC740);
    fn_8026B590(temp_r31);
    M2C_FIELD(temp_r31, M2C_UNK **, 0x19C) = &lbl_8030E220;
    MainMenu__ConstructSelectionListState(arg0 + 0xCAD4);
    do {
        fn_8026B590(var_r28);
        var_r28 += 0x1A0;
        temp_cr0_eq = var_r31 == 0;
        var_r31 -= 1;
    } while (flag);
    var_r28 = arg0 + 0x10680;
    fn_8026B590(temp_r31 + 0xA34);
    var_r30 = arg0 + 0x1113C;
    var_r31 = 3;
    fn_8026B590(temp_r31 + 0xBD4);
    fn_8026B590(temp_r31 + 0xD74);
    fn_8026B590(temp_r31 + 0xF14);
    fn_8026B590(temp_r31 + 0x10B4);
    fn_8026B590(temp_r31 + 0x1254);
    fn_8026B590(temp_r31 + 0x13F4);
    fn_8026B590(temp_r31 + 0x1594);
    fn_8026B590(temp_r31 + 0x1734);
    fn_8026B590(temp_r31 + 0x18D4);
    fn_8026B590(temp_r31 + 0x1A74);
    fn_80270450(temp_r31 + 0x1C14);
    fn_80270450(temp_r31 + 0x1E08);
    fn_80270450(temp_r31 + 0x1FFC);
    fn_80270450(temp_r31 + 0x21F0);
    fn_80270450(temp_r31 + 0x23E4);
    fn_80270450(temp_r31 + 0x25D8);
    fn_80270450(temp_r31 + 0x27CC);
    fn_80270450(temp_r31 + 0x29C0);
    fn_80270450(temp_r31 + 0x2BB4);
    fn_80270450(temp_r31 + 0x2DA8);
    fn_80270450(temp_r31 + 0x2F9C);
    fn_80270450(temp_r31 + 0x3190);
    fn_80270450(temp_r31 + 0x3384);
    fn_80270450(temp_r31 + 0x3578);
    fn_80270450(temp_r31 + 0x376C);
    fn_80270450(temp_r31 + 0x3960);
    fn_80270450(temp_r31 + 0x3B54);
    fn_8026B590(var_r28);
    M2C_FIELD(var_r28, M2C_UNK **, 0x19C) = &lbl_803106B8;
    fn_80270450(arg0 + 0x10820);
    fn_80270450(arg0 + 0x10A14);
    fn_80270450(arg0 + 0x10C08);
    fn_8026B590(arg0 + 0x10DFC);
    fn_8026B590(arg0 + 0x10F9C);
    do {
        fn_8026B590(var_r30);
        M2C_FIELD(var_r30, M2C_UNK **, 0x19C) = &lbl_80310AD0;
        temp_cr0_eq = var_r31 == 0;
        var_r30 += 0x1C0;
        var_r31 -= 1;
    } while (flag);
    temp_r31 = arg0 + 0x11884;
    p_11c0 = (char *)var_r28 + 0x11c0;
    M2C_FIELD(p_11c0, s32 *, 0xc) = 0;
    M2C_FIELD(p_11c0, s32 *, 0x10) = 0;
    var_r30 = arg0 + 0x11BC4;
    fn_8026B590(temp_r31);
    var_r31 = 3;
    M2C_FIELD(temp_r31, M2C_UNK **, 0x19C) = &lbl_80336270;
    fn_8026B590(arg0 + 0x11A24);
    while (flag) {
        fn_8026B590(var_r30);
        M2C_FIELD(var_r30, M2C_UNK **, 0x19C) = &lbl_80310AD0;
        temp_cr0_eq = var_r31 == 0;
        var_r30 += 0x1C0;
        var_r31 -= 1;
    }
    M2C_FIELD(temp_r31, s32 *, 0xA40) = 0;
    temp_f30 = lbl_8032BEAC;
    M2C_FIELD(temp_r31, f32 *, 0xA4C) = temp_f30;
    M2C_FIELD(temp_r31, f32 *, 0xA48) = temp_f30;
    M2C_FIELD(temp_r31, f32 *, 0xA44) = temp_f30;
    temp_f31 = lbl_8032BEB0;
    M2C_FIELD(temp_r31, f32 *, 0xA54) = temp_f31;
    M2C_FIELD(temp_r31, f32 *, 0xA50) = temp_f31;
    M2C_FIELD(temp_r31, f32 *, 0xA60) = temp_f31;
    M2C_FIELD(temp_r31, f32 *, 0xA5C) = temp_f31;
    M2C_FIELD(temp_r31, f32 *, 0xA58) = temp_f31;
    fn_80270450(arg0 + 0x122E8);
    PointerArray__AddUnique(lbl_803DC650, (void *) arg0);
    M2C_FIELD(arg0, f32 *, 0xB5B4) = (f32) lbl_8032BEB4;
    M2C_FIELD(arg0, s32 *, 0xAE90) = 7;
    M2C_FIELD(arg0, s32 *, 0xAE94) = 0;
    M2C_FIELD(arg0, f32 *, 0xB5A0) = temp_f31;
    M2C_FIELD(arg0, f32 *, 0xB5AC) = (f32) lbl_8032BEB8;
    M2C_FIELD(arg0, f32 *, 0xB5B0) = temp_f30;
    M2C_FIELD(arg0, f32 *, 0xB598) = temp_f31;
    M2C_FIELD(arg0, f32 *, 0xB59C) = temp_f31;
    M2C_FIELD(arg0, f32 *, 0xB5A4) = (f32) lbl_8032BEB4;
    M2C_FIELD(arg0, f32 *, 0xB5A8) = temp_f30;
    return arg0;
}
