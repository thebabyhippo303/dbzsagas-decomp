/* CombatHUD__ConfigureComboBreakerText @ 0x8010E3A0 (size: 0x2F4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void fn_80260304(void *, float, float);
M2C_UNK fn_80260708(s32, M2C_UNK);                  /* extern */
M2C_UNK fn_80260728(s32, M2C_UNK);                  /* extern */
M2C_UNK fn_80260788(s32, M2C_UNK);                  /* extern */
extern f32 lbl_80326380 __attribute__((section(".data")));
extern f32 lbl_80326384 __attribute__((section(".data")));
extern f32 lbl_80326388 __attribute__((section(".data")));
extern f32 lbl_8032638C __attribute__((section(".data")));
extern f32 lbl_80326390 __attribute__((section(".data")));
extern f32 lbl_80326394 __attribute__((section(".data")));
extern f32 lbl_80326398 __attribute__((section(".data")));
extern f32 lbl_8032639C __attribute__((section(".data")));
extern f32 lbl_803263A0 __attribute__((section(".data")));
extern f32 lbl_803263A4 __attribute__((section(".data")));

void CombatHUD__ConfigureComboBreakerText(void *arg0, void *arg1) {
    void *temp_r9;

    temp_r9 = M2C_FIELD(arg1, void **, 0x19C);
    M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK), 0x1EC)(arg1 + M2C_FIELD(temp_r9, s16 *, 0x1E8), 0);
    fn_80260728(M2C_FIELD(arg1, s32 *, 0x164) + 0x244, 0);
    fn_80260708(M2C_FIELD(arg1, s32 *, 0x164) + 0x244, 1);
    fn_80260304(M2C_FIELD(arg1, s32 *, 0x164) + 0x244, lbl_80326380, lbl_80326380);
    fn_80260304(M2C_FIELD(arg1, s32 *, 0x164) + 0x244, lbl_80326384, lbl_80326388);
    fn_80260304(M2C_FIELD(arg1, s32 *, 0x164) + 0x244, lbl_8032638C, lbl_80326388);
    fn_80260304(M2C_FIELD(arg1, s32 *, 0x164) + 0x244, lbl_80326390, lbl_80326380);
    fn_80260788(M2C_FIELD(arg1, s32 *, 0x164) + 0x244, 0);
    fn_80260728(M2C_FIELD(arg1, s32 *, 0x164) + 0xF4, 0);
    fn_80260708(M2C_FIELD(arg1, s32 *, 0x164) + 0xF4, 1);
    fn_80260304(M2C_FIELD(arg1, s32 *, 0x164) + 0xF4, lbl_80326380, lbl_80326394);
    fn_80260304(M2C_FIELD(arg1, s32 *, 0x164) + 0xF4, lbl_80326384, lbl_80326398);
    fn_80260304(M2C_FIELD(arg1, s32 *, 0x164) + 0xF4, lbl_8032638C, lbl_80326398);
    fn_80260304(M2C_FIELD(arg1, s32 *, 0x164) + 0xF4, lbl_80326390, lbl_80326394);
    fn_80260788(M2C_FIELD(arg1, s32 *, 0x164) + 0xF4, 0);
    fn_80260728(M2C_FIELD(arg1, s32 *, 0x164) + 0x124, 0);
    fn_80260708(M2C_FIELD(arg1, s32 *, 0x164) + 0x124, 1);
    fn_80260304(M2C_FIELD(arg1, s32 *, 0x164) + 0x124, lbl_80326380, lbl_80326394);
    fn_80260304(M2C_FIELD(arg1, s32 *, 0x164) + 0x124, lbl_80326384, lbl_80326398);
    fn_80260304(M2C_FIELD(arg1, s32 *, 0x164) + 0x124, lbl_8032638C, lbl_80326398);
    fn_80260304(M2C_FIELD(arg1, s32 *, 0x164) + 0x124, lbl_80326390, lbl_80326394);
    fn_80260788(M2C_FIELD(arg1, s32 *, 0x164) + 0x124, 0);
    fn_80260728(M2C_FIELD(arg1, s32 *, 0x164) + 0x274, 0);
    fn_80260708(M2C_FIELD(arg1, s32 *, 0x164) + 0x274, 1);
    fn_80260304(M2C_FIELD(arg1, s32 *, 0x164) + 0x274, lbl_80326380, lbl_80326388);
    fn_80260304(M2C_FIELD(arg1, s32 *, 0x164) + 0x274, lbl_8032639C, lbl_803263A0);
    fn_80260788(M2C_FIELD(arg1, s32 *, 0x164) + 0x274, 1);
    fn_80260728(M2C_FIELD(arg1, s32 *, 0x164) + 0x2A4, 0);
    fn_80260708(M2C_FIELD(arg1, s32 *, 0x164) + 0x2A4, 1);
    fn_80260304(M2C_FIELD(arg1, s32 *, 0x164) + 0x2A4, lbl_80326380, lbl_803263A0);
    fn_80260304(M2C_FIELD(arg1, s32 *, 0x164) + 0x2A4, lbl_8032639C, lbl_803263A4);
    fn_80260788(M2C_FIELD(arg1, s32 *, 0x164) + 0x2A4, 1);
    fn_80260728(M2C_FIELD(arg1, s32 *, 0x164) + 0x2D4, 0);
    fn_80260708(M2C_FIELD(arg1, s32 *, 0x164) + 0x2D4, 1);
    fn_80260304(M2C_FIELD(arg1, s32 *, 0x164) + 0x2D4, lbl_80326380, lbl_80326398);
    fn_80260304(M2C_FIELD(arg1, s32 *, 0x164) + 0x2D4, lbl_8032639C, lbl_80326388);
    fn_80260788(M2C_FIELD(arg1, s32 *, 0x164) + 0x2D4, 1);
}
