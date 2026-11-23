/* MainMenu__InitializePauseMenuWidgets @ 0x8014B3DC (size: 0x34C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Sphere__AddChild(void *, void *);
f32 fn_8026B86C(void);
f32 fn_8026B8B8(void);
void fn_8026C508(void *, float, float);
void fn_8026C5A0(void *, float, float);
void fn_8026C634(void *, float, float);
void fn_8026C7F8(void *, f32, f32, f32, f32);
M2C_UNK Audio__StopAll(s32, s32);
M2C_UNK fn_8026C2E4(s32, s32, s32, s32, s32, s32);
M2C_UNK fn_80272134(s32, f32, f64, f32, f32, f64);
M2C_UNK fn_80262198(s32, f32, f32, f32);
M2C_UNK fn_80262284(s32, s32, f32, f32, f32, f32);
M2C_UNK fn_80261FD8(s32, s32, s32, s32, s32);
M2C_UNK fn_802623E4(s32, s32, f32, f32);
extern M2C_UNK lbl_8032B530 __attribute__((section(".data")));
extern f32 lbl_8032BDFC __attribute__((section(".data")));
extern f32 lbl_8032BE00 __attribute__((section(".data")));
extern f32 lbl_8032BE04 __attribute__((section(".data")));
extern f32 lbl_8032BE08 __attribute__((section(".data")));
extern f32 lbl_8032BE0C __attribute__((section(".data")));
extern f32 lbl_8032BE10 __attribute__((section(".data")));
extern f32 lbl_8032BE14 __attribute__((section(".data")));
extern f32 lbl_8032BE18 __attribute__((section(".data")));
extern f32 lbl_8032BE1C;
extern f32 lbl_8032BE20 __attribute__((section(".data")));
extern f32 lbl_8032BE24 __attribute__((section(".data")));
extern f32 lbl_8032BE28 __attribute__((section(".data")));
extern void *lbl_803DC3B4;
extern s32 lbl_803DCC20;

void MainMenu__InitializePauseMenuWidgets(void *arg0) {
    s32 ld_0;
    f32 temp_f28;
    f32 temp_f29;
    f32 temp_f30;
    f32 temp_f30_2;
    f32 temp_f31;
    f32 temp_f31_3;
    s32 temp_r26;
    void *temp_r11;
    void *temp_r24;
    void *temp_r25;
    void *temp_r29;
    void *temp_r30;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;
    void *temp_r9_5;

    Audio__StopAll(lbl_803DCC20, 1);
    temp_r26 = arg0 + 0xB084;
    temp_r11 = M2C_FIELD(arg0, void **, 0x19C);
    temp_r25 = arg0 + 0xAE90;
    temp_r24 = arg0 + 0x5F60;
    M2C_FIELD(temp_r11, M2C_UNK (**)(void *, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, void *), 0x14)(arg0 + M2C_FIELD(temp_r11, s16 *, 0x10), M2C_FIELD(lbl_803DC3B4, s32 *, 0), 0, 0, 1, 1, lbl_803DC3B4);
    temp_r9 = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *, f32, f32, f32, f32), 0x10C)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x108), lbl_8032BDFC, lbl_8032BDFC, lbl_8032BDFC, lbl_8032BDFC);
    temp_r9_2 = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, f32, f32), 0xEC)(arg0 + M2C_FIELD(temp_r9_2, s16 *, 0xE8), lbl_8032BDFC, lbl_8032BDFC);
    temp_r9_3 = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *, f32, f32), 0xAC)(arg0 + M2C_FIELD(temp_r9_3, s16 *, 0xA8), lbl_8032BDFC, lbl_8032BDFC);
    temp_r29 = M2C_FIELD(arg0, void **, 0x19C);
    temp_r30 = arg0 + M2C_FIELD(temp_r29, s16 *, 0x88);
    temp_f31 = fn_8026B86C();
    M2C_FIELD((temp_r29 + 0x88), M2C_UNK (**)(void *, f32, f32), 4)(temp_r30, temp_f31, fn_8026B8B8());
    temp_r9_4 = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(temp_r9_4, M2C_UNK (**)(void *, M2C_UNK), 0x1B4)(arg0 + M2C_FIELD(temp_r9_4, s16 *, 0x1B0), 0);
    fn_8026C7F8(arg0 + 0x1A4, lbl_8032BDFC, lbl_8032BDFC, lbl_8032BDFC, lbl_8032BDFC);
    fn_8026C7F8(arg0 + 0x344, lbl_8032BDFC, lbl_8032BDFC, lbl_8032BDFC, lbl_8032BDFC);
    fn_8026C7F8(arg0 + 0x2F88, lbl_8032BDFC, lbl_8032BDFC, lbl_8032BDFC, lbl_8032BDFC);
    ld_0 = M2C_FIELD(lbl_803DC3B4, s32 *, 0);
    fn_8026C2E4(temp_r26, ld_0, 0, 0, 1, 1);
    fn_8026C5A0((void *) temp_r26, lbl_8032BDFC, lbl_8032BDFC);
    temp_f30 = fn_8026B86C();
    temp_f29 = lbl_8032BE00;
    temp_f28 = lbl_8032BE04;
    temp_f30_2 = (temp_f30 - (fn_8026B86C() * temp_f29)) * temp_f28;
    fn_8026C508((void *) temp_r26, temp_f30_2, (fn_8026B8B8() - (fn_8026B8B8() * temp_f29)) * temp_f28);
    fn_8026C7F8((void *) temp_r26, lbl_8032BDFC, lbl_8032BE08, lbl_8032BDFC, lbl_8032BE0C);
    temp_f31_3 = fn_8026B86C() * temp_f29;
    fn_8026C634((void *) temp_r26, temp_f31_3, fn_8026B8B8() * temp_f29);
    Sphere__AddChild(arg0, (void *) temp_r26);
    fn_8026C5A0(temp_r25, lbl_8032BDFC, lbl_8032BDFC);
    fn_8026C508(temp_r25, lbl_8032BE10, lbl_8032BE10);
    fn_80272134((s32) temp_r25, lbl_8032BE14, lbl_8032BDFC, lbl_8032BDFC, lbl_8032BDFC, lbl_8032BE18);
    Sphere__AddChild((void *) temp_r26, temp_r25);
    fn_80262198((s32) temp_r24, lbl_8032BE1C, lbl_8032BE20, temp_f28);
    fn_80262284((s32) temp_r24, (s32) (u32) (u64) fn_80262198((s32) temp_r24, lbl_8032BE24, lbl_8032BE20, temp_f28), lbl_8032BE18, lbl_8032BE18, lbl_8032BE18, lbl_8032BE0C);
    fn_80261FD8((s32) temp_r24, 0, (s32) &lbl_8032B530, M2C_FIELD(lbl_803DC3B4, s32 *, 4), 0xA);
    fn_802623E4((s32) temp_r24, 0, lbl_8032BDFC, lbl_8032BE28);
    temp_r9_5 = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(temp_r9_5, M2C_UNK (**)(void *), 0x1E4)(arg0 + M2C_FIELD(temp_r9_5, s16 *, 0x1E0));
}
