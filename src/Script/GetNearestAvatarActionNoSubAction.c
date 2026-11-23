/* Script__GetNearestAvatarActionNoSubAction @ 0x80025E60 (size: 0xC8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Script__PushInt(void *, void *, int);
void *fn_80251510(void *, int, void *, void *, int);
extern f32 lbl_80311424 __attribute__((section(".data")));
extern M2C_UNK lbl_803B1DDC __attribute__((section(".data")));

void Script__GetNearestAvatarActionNoSubAction(void *arg0, void *arg1) {
    f32 sp28;
    f32 sp24;
    f32 sp20;
    void *sp18;
    f32 sp14;
    f32 sp8;
    s16 var_r5;
    void *temp_r9;

    sp18 = NULL;
    temp_r9 = arg0 + 0x10;
    sp14 = lbl_80311424;
    sp20 = M2C_FIELD(temp_r9, f32 *, 0x30);
    sp24 = M2C_FIELD(temp_r9, f32 *, 0x34);
    sp28 = M2C_FIELD(temp_r9, f32 *, 0x38);
    sp8 = sp20;
    M2C_FIELD(&sp8, s32 *, 4) = (s32) M2C_FIELD(&sp20, s32 *, 4);
    M2C_FIELD(&sp8, s32 *, 8) = (s32) M2C_FIELD(&sp20, s32 *, 8);
    sp18 = fn_80251510(&lbl_803B1DDC, 0x10000, &sp8, M2C_FIELD(arg0, void **, 0xC8), 0);
    if (sp18 != NULL) {
        var_r5 = M2C_FIELD(M2C_FIELD(M2C_FIELD(sp18, void **, 0x84), void **, 0xF0), s16 *, 0xA);
    } else {
        var_r5 = 0;
    }
    Script__PushInt(arg0, arg1, var_r5 & 0xFF00);
}
