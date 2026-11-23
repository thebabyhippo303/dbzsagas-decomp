/* AI__UpdatePelvisWeaponRecoverySequence @ 0x80070AC0 (size: 0x264, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 AI__HasPrimaryTimerElapsed(void *, f32);
void AI__SetState(void *, int);
void Avatar__ClearPurpleSpiralEffects(void *);
void Avatar__SelectWeaponWithBoneNameImpl(void *, int, const char *);
void Avatar__SetHealthImpl(void *, float);
void Avatar__SetWeaponScriptFlag(void *, int);
void Avatar__ShowWeaponImpl(void *, int);
void Avatar__StartAnimationByIdAndFlags(void *, int, int, int);
float Rand__RangeFloat(float, float, s32);
void WeaponInventory__AddById(void *, int);
extern s8 lbl_8031E188 __attribute__((section(".data")));
extern f32 lbl_8031EE38 __attribute__((section(".data")));
extern f32 lbl_8031EE3C __attribute__((section(".data")));
extern f32 lbl_8031EE40 __attribute__((section(".data")));
extern f32 lbl_8031EE44 __attribute__((section(".data")));
extern f32 lbl_8031EE48 __attribute__((section(".data")));
extern char lbl_803DD634[8] __attribute__((section(".sbss")));
extern f32 lbl_803A35C0 __attribute__((section(".data")));

void AI__UpdatePelvisWeaponRecoverySequence(void *arg0) {
    f32 temp_f1;
    s32 temp_r0;
    s32 temp_r11;
    s32 temp_r9_2;
    s32 var_r4;
    void *temp_r30;
    void *temp_r9;

    temp_r11 = M2C_FIELD(arg0, s32 *, 0xC8);
    temp_r30 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x38C), void **, 0xC8);
    if ((temp_r11 != 4) || ((s32) M2C_FIELD(arg0, s32 *, 0x570) != 0)) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x7C);
        switch (temp_r0) {                          /* irregular */
        case 0:
            M2C_FIELD(arg0, s32 *, 0x380) = 0x2D;
            if ((temp_r11 != 5) || ((s32) M2C_FIELD(arg0, s32 *, 0xCC) != 2)) {
                WeaponInventory__AddById(M2C_FIELD(arg0, void **, 0x390) + 0x15F0, 0x58);
                Avatar__SelectWeaponWithBoneNameImpl(M2C_FIELD(arg0, void **, 0x390) + 0x15A0, 0x58, &lbl_8031E188);
                Avatar__ShowWeaponImpl(M2C_FIELD(arg0, void **, 0x390) + 0x15A0, 1);
                Avatar__SetWeaponScriptFlag(M2C_FIELD(arg0, void **, 0x390) + 0x15A0, 1);
            }
            AI__SetState(arg0, 1);
            M2C_FIELD(arg0, s32 *, 0x138) = 1;
            Avatar__ClearPurpleSpiralEffects(arg0);
            return;
        case 1:
            M2C_FIELD(arg0, s32 *, 0x380) = 0x2A;
            M2C_FIELD(arg0, f32 *, 0xDC) = (f32) lbl_803A35C0;
            AI__SetState(arg0, 2);
            return;
        case 2:
            if ((s32) M2C_FIELD(arg0, s32 *, 0x428) != 0) {
                if (AI__HasPrimaryTimerElapsed(arg0, lbl_8031EE38) != 0) {
                    Avatar__SetHealthImpl(M2C_FIELD(arg0, void **, 0x390), lbl_8031EE3C);
                    Avatar__ClearPurpleSpiralEffects(arg0);
                    AI__SetState(arg0, 3);
                    if ((s32) M2C_FIELD(arg0, s32 *, 0xC8) != 7) {
                        temp_r9 = M2C_FIELD(temp_r30, void **, 0x34);
                        M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK), 0x64)(temp_r30 + M2C_FIELD(temp_r9, s16 *, 0x60), 1);
                        return;
                    }
                }
            } else if ((AI__HasPrimaryTimerElapsed(arg0, lbl_8031EE40) != 0) && (Avatar__SetHealthImpl(M2C_FIELD(arg0, void **, 0x390), lbl_8031EE3C), Avatar__ClearPurpleSpiralEffects(arg0), AI__SetState(arg0, 3), temp_r9_2 = M2C_FIELD(arg0, s32 *, 0xC8), ((temp_r9_2 == 3) == 0)) && (((s32) M2C_FIELD(arg0, s32 *, 0x13C) == 0) || (temp_r9_2 == 7))) {
                temp_f1 = Rand__RangeFloat(lbl_8031EE3C, lbl_8031EE44, (s32) &lbl_803DD634);
                if (!(temp_f1 >= lbl_8031EE40)) {
                    var_r4 = 0x03E800F9;
                    Avatar__StartAnimationByIdAndFlags(M2C_FIELD(arg0, void **, 0x390), var_r4, 0x20, 1);
                    return;
                }
                if (!(temp_f1 >= lbl_8031EE48)) {
                    var_r4 = 0x03E800FA;
                    Avatar__StartAnimationByIdAndFlags(M2C_FIELD(arg0, void **, 0x390), var_r4, 0x20, 1);
                    return;
                }
                Avatar__StartAnimationByIdAndFlags(M2C_FIELD(arg0, void **, 0x390), 0x03E800FB, 0x20, 1);
            }
            break;
        }
    }
}
