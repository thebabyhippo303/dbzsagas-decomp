/* CombatHUD__UpdateAttemptBreakerText @ 0x80112380 (size: 0x3E8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

f32 CombatHUD__MeasureAttemptBreakerTextWidth(char *);
void fn_80260304(void *, float, float);
M2C_UNK fn_80260728(s32, s32);
M2C_UNK fn_80260788(s32, s32);
M2C_UNK fn_80260708(s32, s32);
extern f32 lbl_80326624 __attribute__((section(".data")));
extern f32 lbl_80326628 __attribute__((section(".data")));
extern f32 lbl_8032662C __attribute__((section(".data")));
extern f32 lbl_80326630 __attribute__((section(".data")));
extern f32 lbl_80326634 __attribute__((section(".data")));
extern f32 lbl_80326638 __attribute__((section(".data")));
extern f32 lbl_8032663C __attribute__((section(".data")));
extern f32 lbl_80326640 __attribute__((section(".data")));
extern f32 lbl_80326644 __attribute__((section(".data")));
extern f32 lbl_80326648 __attribute__((section(".data")));
extern f32 lbl_8032664C __attribute__((section(".data")));

void CombatHUD__UpdateAttemptBreakerText(s8 *arg0) {
    f32 temp_f28;
    f32 temp_f29;
    f32 temp_f29_2;
    f32 temp_f30;
    f32 temp_f30_2;
    f32 temp_f31;
    f32 temp_f31_2;
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r9;
    void *temp_r9_2;

    temp_f28 = CombatHUD__MeasureAttemptBreakerTextWidth(arg0);
    temp_r11 = M2C_FIELD(arg0, void **, 0x2F08);
    if (temp_r11 != NULL) {
        temp_r9 = M2C_FIELD(temp_r11, void **, 0x19C);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK), 0x1EC)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x1E8), -1);
        fn_80260728(M2C_FIELD(M2C_FIELD(arg0, void **, 0x2F08), s32 *, 0x164) + 0x34, 0);
        fn_80260304(M2C_FIELD(M2C_FIELD(arg0, void **, 0x2F08), s32 *, 0x164) + 0x34, lbl_80326624, lbl_80326628);
        temp_f29 = lbl_8032662C;
        temp_f30 = lbl_80326628;
        temp_f31 = temp_f28 * temp_f29;
        fn_80260304(M2C_FIELD(M2C_FIELD(arg0, void **, 0x2F08), s32 *, 0x164) + 0x34, lbl_80326630, temp_f31 + temp_f30);
        fn_80260304(M2C_FIELD(M2C_FIELD(arg0, void **, 0x2F08), s32 *, 0x164) + 0x34, lbl_80326634, temp_f30 - temp_f31);
        fn_80260788(M2C_FIELD(M2C_FIELD(arg0, void **, 0x2F08), s32 *, 0x164) + 0x34, 0);
        fn_80260728(M2C_FIELD(M2C_FIELD(arg0, void **, 0x2F08), s32 *, 0x164) + 0x244, 0);
        fn_80260708(M2C_FIELD(M2C_FIELD(arg0, void **, 0x2F08), s32 *, 0x164) + 0x244, 0);
        fn_80260304(M2C_FIELD(M2C_FIELD(arg0, void **, 0x2F08), s32 *, 0x164) + 0x244, lbl_80326624, lbl_80326638);
        fn_80260304(M2C_FIELD(M2C_FIELD(arg0, void **, 0x2F08), s32 *, 0x164) + 0x244, lbl_80326634, lbl_80326624);
        fn_80260304(M2C_FIELD(M2C_FIELD(arg0, void **, 0x2F08), s32 *, 0x164) + 0x244, lbl_8032663C, lbl_80326638);
        fn_80260304(M2C_FIELD(M2C_FIELD(arg0, void **, 0x2F08), s32 *, 0x164) + 0x244, lbl_80326640, lbl_80326624);
        fn_80260304(M2C_FIELD(M2C_FIELD(arg0, void **, 0x2F08), s32 *, 0x164) + 0x244, lbl_80326644, lbl_80326638);
        fn_80260304(M2C_FIELD(M2C_FIELD(arg0, void **, 0x2F08), s32 *, 0x164) + 0x244, temp_f29, lbl_80326624);
        fn_80260304(M2C_FIELD(M2C_FIELD(arg0, void **, 0x2F08), s32 *, 0x164) + 0x244, lbl_80326648, lbl_80326638);
        fn_80260304(M2C_FIELD(M2C_FIELD(arg0, void **, 0x2F08), s32 *, 0x164) + 0x244, lbl_8032664C, lbl_80326638);
        fn_80260788(M2C_FIELD(M2C_FIELD(arg0, void **, 0x2F08), s32 *, 0x164) + 0x244, 0);
    }
    temp_r11_2 = M2C_FIELD(arg0, void **, 0x2F04);
    if (temp_r11_2 == NULL) {
        return;
    }
    temp_r9_2 = M2C_FIELD(temp_r11_2, void **, 0x19C);
    M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, M2C_UNK), 0x1EC)(temp_r11_2 + M2C_FIELD(temp_r9_2, s16 *, 0x1E8), -1);
    fn_80260728(M2C_FIELD(M2C_FIELD(arg0, void **, 0x2F04), s32 *, 0x164) + 0x34, 0);
    fn_80260304(M2C_FIELD(M2C_FIELD(arg0, void **, 0x2F04), s32 *, 0x164) + 0x34, lbl_80326624, lbl_80326628);
    temp_f29_2 = lbl_8032662C;
    temp_f30_2 = lbl_80326628;
    temp_f31_2 = temp_f28 * temp_f29_2;
    fn_80260304(M2C_FIELD(M2C_FIELD(arg0, void **, 0x2F04), s32 *, 0x164) + 0x34, lbl_80326630, temp_f31_2 + temp_f30_2);
    fn_80260304(M2C_FIELD(M2C_FIELD(arg0, void **, 0x2F04), s32 *, 0x164) + 0x34, lbl_80326634, temp_f30_2 - temp_f31_2);
    fn_80260788(M2C_FIELD(M2C_FIELD(arg0, void **, 0x2F04), s32 *, 0x164) + 0x34, 0);
    fn_80260728(M2C_FIELD(M2C_FIELD(arg0, void **, 0x2F04), s32 *, 0x164) + 0x244, 0);
    fn_80260708(M2C_FIELD(M2C_FIELD(arg0, void **, 0x2F04), s32 *, 0x164) + 0x244, 0);
    fn_80260304(M2C_FIELD(M2C_FIELD(arg0, void **, 0x2F04), s32 *, 0x164) + 0x244, lbl_80326624, lbl_80326638);
    fn_80260304(M2C_FIELD(M2C_FIELD(arg0, void **, 0x2F04), s32 *, 0x164) + 0x244, lbl_80326634, lbl_80326624);
    fn_80260304(M2C_FIELD(M2C_FIELD(arg0, void **, 0x2F04), s32 *, 0x164) + 0x244, lbl_8032663C, lbl_80326638);
    fn_80260304(M2C_FIELD(M2C_FIELD(arg0, void **, 0x2F04), s32 *, 0x164) + 0x244, lbl_80326640, lbl_80326624);
    fn_80260304(M2C_FIELD(M2C_FIELD(arg0, void **, 0x2F04), s32 *, 0x164) + 0x244, lbl_80326644, lbl_80326638);
    fn_80260304(M2C_FIELD(M2C_FIELD(arg0, void **, 0x2F04), s32 *, 0x164) + 0x244, temp_f29_2, lbl_80326624);
    fn_80260304(M2C_FIELD(M2C_FIELD(arg0, void **, 0x2F04), s32 *, 0x164) + 0x244, lbl_80326648, lbl_80326638);
    fn_80260304(M2C_FIELD(M2C_FIELD(arg0, void **, 0x2F04), s32 *, 0x164) + 0x244, lbl_8032664C, lbl_80326638);
    fn_80260788(M2C_FIELD(M2C_FIELD(arg0, void **, 0x2F04), s32 *, 0x164) + 0x244, 0);
}
