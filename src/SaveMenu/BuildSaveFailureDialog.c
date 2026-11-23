/* SaveMenu__BuildSaveFailureDialog @ 0x80054504 (size: 0x248, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void UI__SetColorRGBA(void *, f32, f32, f32, f32);
void * dblLoad(const char *, void *, int);
void fn_802675F8(void *, const char *);
void fn_80267EE8(void *, const char *, int);
void fn_8026805C(void *);
void fn_80268398(void *, void *);
void fn_80268BA0(void *, int);
void fn_8026C508(void *, float, float);
void fn_8026C514(void *, float *, float *);
void fn_8026C634(void *, float, float);
void fn_8026C6F8(void *, int);
void fn_8026C7F8(void *, f32, f32, f32, f32);
f32 fn_80271C3C(void *);
f32 fn_80271C7C(void *);
M2C_UNK fn_8026826C(s32, f32, f32, f32, f32);
M2C_UNK fn_80268284(s32, f32, f32, f32, f32);
M2C_UNK fn_80268718(s32, s32);
M2C_UNK fn_8026C2E4(s32, s32, s32, s32, s32, s32);
extern s8 lbl_80319754 __attribute__((section(".data")));
extern s8 lbl_80319F54 __attribute__((section(".data")));
extern s8 lbl_8031A2DC __attribute__((section(".data")));
extern s8 lbl_8031A604 __attribute__((section(".data")));
extern M2C_UNK lbl_8031A614 __attribute__((section(".data")));
extern f32 lbl_8031A658 __attribute__((section(".data")));
extern f32 lbl_8031A65C __attribute__((section(".data")));
extern f32 lbl_8031A660 __attribute__((section(".data")));
extern f32 lbl_8031A664 __attribute__((section(".data")));
extern f32 lbl_8031A668 __attribute__((section(".data")));
extern f32 lbl_8031A66C __attribute__((section(".data")));
extern void *lbl_803DC3B4;
extern void *lbl_803DC3C0;

void SaveMenu__BuildSaveFailureDialog(void *arg0, s32 arg1) {
    f32 spC;
    f32 sp8;
    f32 temp_f31;
    s32 var_r26;
    void *temp_r28;
    void *temp_r29;
    void *temp_r30;
    void *temp_r9;
    void *var_r28;

    if ((void *) lbl_803DC3C0 == NULL) {
        var_r26 = 1;
        var_r28 = dblLoad(&lbl_80319754, NULL, 0);
    } else if ((s32) M2C_FIELD(M2C_FIELD(lbl_803DC3C0, void **, 0x238), s32 *, 0x1C) == 5) {
        var_r26 = 0xB;
        var_r28 = M2C_FIELD(lbl_803DC3B4, void **, 0x28);
    } else {
        var_r26 = 0xD;
        var_r28 = M2C_FIELD(lbl_803DC3B4, void **, 0x24);
    }
    temp_r9 = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *, s32), 0x3B4)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x3B0), arg1);
    if (arg1 == 0xE) {
        temp_r30 = arg0 + 0xD4C4;
        fn_8026805C(temp_r30);
        fn_80268BA0(temp_r30, 1);
        fn_802675F8(temp_r30, &lbl_8031A604);
        fn_80268398(temp_r30, &lbl_8031A614);
        fn_8026826C((s32) temp_r30, lbl_8031A658, lbl_8031A65C, lbl_8031A658, lbl_8031A65C);
        fn_80268284((s32) temp_r30, lbl_8031A660, lbl_8031A660, lbl_8031A660, lbl_8031A65C);
        fn_80267EE8(temp_r30, &lbl_8031A2DC, 0x100);
        fn_80267EE8(temp_r30, &lbl_80319F54, 0x201);
        fn_80268718((s32) temp_r30, 0x201);
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x182BC) != 0) {
        temp_r29 = arg0 + 0x17F58;
        fn_8026C2E4((s32) temp_r29, (s32) var_r28, var_r26, 0, 1, 1);
        temp_r28 = arg0 + 0x17DB8;
        fn_8026C7F8(temp_r29, lbl_8031A660, lbl_8031A660, lbl_8031A660, lbl_8031A660);
        UI__SetColorRGBA(temp_r29, lbl_8031A660, lbl_8031A660, lbl_8031A660, lbl_8031A660);
        UI__SetColorRGBA(temp_r28, lbl_8031A660, lbl_8031A660, lbl_8031A660, lbl_8031A664);
        fn_8026C514(temp_r28, &sp8, &spC);
        fn_8026C508(temp_r29, sp8, spC);
        temp_f31 = fn_80271C3C(M2C_FIELD(arg0, s32 *, 0x182BC) + 0x18) + lbl_8031A668;
        fn_8026C634(temp_r29, temp_f31, fn_80271C7C(M2C_FIELD(arg0, s32 *, 0x182BC) + 0x18) + lbl_8031A66C);
    }
    fn_8026C6F8(arg0 + 0x17F58, -0xC8);
}
