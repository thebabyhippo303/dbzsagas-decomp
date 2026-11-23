/* MissionUI__CreateStatsSummaryBackground @ 0x801241D0 (size: 0xCC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Sphere__AddChild(void *, void *);
void fn_8026D514(void *);
void fn_80270784(void *, char *);
f32 fn_8026B86C();                                  /* extern */
f32 fn_8026B8B8();                                  /* extern */
M2C_UNK fn_8026C508(void *, f32, f32);              /* extern */
M2C_UNK fn_8026C5A0(void *, f32, f32);              /* extern */
M2C_UNK fn_802721F4(void *, f32);                   /* extern */
M2C_UNK fn_8027227C(void *, f32);                   /* extern */
M2C_UNK fn_80272294(void *, f32);                   /* extern */
extern s8 lbl_8031D820 __attribute__((section(".data")));
extern f32 lbl_803274E4 __attribute__((section(".data")));
extern f32 lbl_803274E8 __attribute__((section(".data")));
extern f32 lbl_803274EC __attribute__((section(".data")));
extern f32 lbl_803274F0 __attribute__((section(".data")));

void MissionUI__CreateStatsSummaryBackground(s32 arg0) {
    f32 temp_f30;
    f32 temp_f31;
    void *temp_r30;

    temp_r30 = arg0 + 0xAE90;
    fn_8027227C(temp_r30, lbl_803274E4);
    fn_8026C5A0(temp_r30, lbl_803274E8, lbl_803274E8);
    temp_f31 = fn_8026B86C();
    temp_f30 = lbl_803274E8;
    temp_f31 *= temp_f30;
    fn_8026C508(temp_r30, temp_f31, fn_8026B8B8() - lbl_803274EC);
    fn_802721F4(temp_r30, lbl_803274F0);
    fn_80272294(temp_r30, temp_f30);
    fn_80270784(temp_r30, &lbl_8031D820);
    fn_8026D514(temp_r30);
    Sphere__AddChild(arg0 + 0x344, temp_r30);
}
