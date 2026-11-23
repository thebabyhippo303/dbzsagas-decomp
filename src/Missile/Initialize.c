/* Missile__Initialize @ 0x800D4E04 (size: 0x160, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Missile__InitializeGeometry(void *, s32, s32, s32);
M2C_UNK fn_801DB5C8();                              /* extern */
extern f32 lbl_803228C8 __attribute__((section(".data")));
extern f32 lbl_803A35C4 __attribute__((section(".data")));
extern s32 lbl_803DD1BC;
extern s32 lbl_803DD1CC;
extern s32 lbl_803DD1DC;

void Missile__Initialize(void *arg0, s32 arg1, s32 arg2, void *arg3, s32 arg4, s32 arg5, void *arg6) {
    s32 sp18;
    s32 sp10;
    s32 sp8;
    f32 var_f0;
    s32 temp_r0;
    s32 temp_r11;
    s32 temp_r9;
    s32 temp_r9_2;
    void *temp_r10;
    void *temp_r7;
    void *temp_r8;
    void *temp_r9_3;

    Missile__InitializeGeometry(arg0, arg1, arg2, arg4);
    M2C_FIELD(arg0, void **, 0x364) = arg3;
    M2C_FIELD(arg0, f32 *, 0x35C) = (f32) lbl_803A35C4;
    if (arg3 != NULL) {
        var_f0 = lbl_803A35C4 + M2C_FIELD(arg3, f32 *, 4);
    } else {
        var_f0 = lbl_803228C8;
    }
    M2C_FIELD(arg0, f32 *, 0x358) = var_f0;
    temp_r10 = arg0 + 0x38;
    M2C_FIELD(arg0, s32 *, 0x28) = arg5;
    temp_r8 = arg0 + 0x3B0;
    M2C_FIELD(arg0, f32 *, 0x360) = (f32) lbl_803228C8;
    temp_r7 = arg0 + 0x3D8;
    M2C_FIELD(arg0, s32 *, 0x36C) = arg5;
    M2C_FIELD(arg0, s32 *, 0x370) = 0;
    temp_r9 = M2C_FIELD(arg6, s32 *, 8);
    temp_r11 = M2C_FIELD(arg6, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) M2C_FIELD(arg6, s32 *, 0);
    M2C_FIELD(temp_r10, s32 *, 8) = temp_r9;
    M2C_FIELD(temp_r10, s32 *, 4) = temp_r11;
    M2C_FIELD(arg0, s32 *, 0x3B0) = (s32) M2C_FIELD(arg0, s32 *, 0x38);
    M2C_FIELD(temp_r8, s32 *, 8) = temp_r9;
    M2C_FIELD(temp_r8, s32 *, 4) = temp_r11;
    M2C_FIELD(arg0, f32 *, 0x3D8) = (f32) lbl_803228C8;
    M2C_FIELD(temp_r7, f32 *, 8) = (f32) lbl_803228C8;
    M2C_FIELD(temp_r7, f32 *, 4) = (f32) lbl_803228C8;
    M2C_FIELD(arg0, f32 *, 0x42C) = (f32) lbl_803228C8;
    M2C_FIELD(arg0, s32 *, 0x458) = 1;
    M2C_FIELD(arg0, s32 *, 0x3D4) = 0;
    M2C_FIELD(arg0, s32 *, 0x3D0) = 1;
    M2C_FIELD(arg0, s32 *, 0x450) = 0;
    M2C_FIELD(arg0, s32 *, 0x454) = 0;
    M2C_FIELD(arg0, s32 *, 0x45C) = 0;
    if ((s32) M2C_FIELD(arg0, s32 *, 0xA4) != 0) {
        fn_801DB5C8();
    }
    temp_r0 = lbl_803DD1CC | lbl_803DD1BC;
    temp_r9_2 = ~(temp_r0 | temp_r0);
    sp10 = temp_r0;
    M2C_FIELD(arg0, s32 *, 0x14) = temp_r9_2;
    sp18 = temp_r9_2;
    sp8 = temp_r9_2;
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) lbl_803DD1DC;
    M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) lbl_803DD1DC;
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x364), s32 *, 0x58) & 0x1000) {
        temp_r9_3 = M2C_FIELD(arg0, void **, 0x34);
        M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *, M2C_UNK), 0x64)(arg0 + M2C_FIELD(temp_r9_3, s16 *, 0x60), 1);
    }
    M2C_FIELD(arg0, s32 *, 0x46C) = 0;
    M2C_FIELD(arg0, s32 *, 0x460) = 0;
    M2C_FIELD(arg0, s32 *, 0x464) = 0;
    M2C_FIELD(arg0, s32 *, 0x468) = 0;
}
