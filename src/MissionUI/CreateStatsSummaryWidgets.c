/* MissionUI__CreateStatsSummaryWidgets @ 0x80123F14 (size: 0x20C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Sphere__AddChild(void *, void *);
void fn_8026C508(void *, float, float);
void fn_8026C5A0(void *, float, float);
void fn_8026C634(void *, float, float);
void fn_8026C6F8(void *, int);
void fn_8026C7F8(void *, void *);
f32 fn_8026B86C();                                  /* extern */
f32 fn_8026B8B8();                                  /* extern */
M2C_UNK fn_8026C2E4(void *, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, void *); /* extern */
M2C_UNK fn_8026C6F0(void *, f32);                   /* extern */
extern f32 lbl_803274A4 __attribute__((section(".data")));
extern f32 lbl_803274AC __attribute__((section(".data")));
extern f32 lbl_803274B0 __attribute__((section(".data")));
extern f32 lbl_803274B4 __attribute__((section(".data")));
extern f32 lbl_803274B8 __attribute__((section(".data")));
extern void *lbl_803DC3B4;

void MissionUI__CreateStatsSummaryWidgets(void *arg0) {
    f32 temp_f30;
    f32 temp_f31;
    f32 temp_f31_2;
    void *temp_r28;
    void *temp_r29;
    void *temp_r30;

    temp_r30 = arg0 + 0xB2C8;
    fn_8026C2E4(temp_r30, M2C_FIELD(lbl_803DC3B4, s32 *, 0x28), 0, 0, 1, 1, lbl_803DC3B4);
    temp_r29 = arg0 + 0xB468;
    fn_8026C5A0(temp_r30, lbl_803274A4, lbl_803274A4);
    temp_r28 = arg0 + 0xB608;
    fn_8026C508(temp_r30, lbl_803274A4, lbl_803274A4);
    fn_8026C7F8(temp_r30, M2C_ERROR(/* Read from unset register $r4 */));
    temp_f31 = fn_8026B86C();
    fn_8026C634(temp_r30, temp_f31, fn_8026B8B8());
    Sphere__AddChild(arg0, temp_r30);
    fn_8026C6F8(temp_r30, 0x5000);
    fn_8026C2E4(temp_r29, M2C_FIELD(lbl_803DC3B4, s32 *, 0x28), 1, 0, 1, 1, lbl_803DC3B4);
    fn_8026C5A0(temp_r29, lbl_803274AC, lbl_803274A4);
    temp_f30 = lbl_803274AC;
    fn_8026C508(temp_r29, fn_8026B86C() * temp_f30, lbl_803274A4);
    fn_8026C7F8(temp_r29, M2C_ERROR(/* Read from unset register $r4 */));
    fn_8026C634(temp_r29, lbl_803274B0, lbl_803274B4);
    fn_8026C6F8(temp_r29, 0x5001);
    Sphere__AddChild(arg0, temp_r29);
    fn_8026C2E4(temp_r28, M2C_FIELD(lbl_803DC3B4, s32 *, 0x28), 1, 0, 1, 1, lbl_803DC3B4);
    fn_8026C5A0(temp_r28, temp_f30, lbl_803274A4);
    temp_f31_2 = fn_8026B86C() * temp_f30;
    fn_8026C508(temp_r28, temp_f31_2, fn_8026B8B8());
    fn_8026C7F8(temp_r28, M2C_ERROR(/* Read from unset register $r4 */));
    fn_8026C634(temp_r28, lbl_803274B0, lbl_803274B4);
    fn_8026C6F0(temp_r28, lbl_803274B8);
    fn_8026C6F8(temp_r28, 0x5001);
    Sphere__AddChild(arg0, temp_r28);
}

