/* Event__UpdatePeriodicRecovery @ 0x80123198 (size: 0x1A4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Avatar__SetHealthImpl(void *, float);
s32 Game__GetConfiguredPlayerCount(void *);
void * Game__GetPlayerImpl(void *, int);
void * Sound__Play2D(s32, s32);
M2C_UNK Event__UpdatePeriodicRecoveryWidgets(void *); /* extern */
M2C_UNK HUD__UpdateTrackedEnergyWidgets(s32, void *, f32); /* extern */
M2C_UNK HUD__UpdateTrackedHealthWidgets(s32, void *, f32); /* extern */
extern M2C_UNK lbl_80327460 __attribute__((section(".data")));
extern f32 lbl_80327468 __attribute__((section(".data")));
extern f32 lbl_8032746C;
extern f32 lbl_80327470 __attribute__((section(".data")));
extern M2C_UNK lbl_803A35A0 __attribute__((section(".data")));
extern void *lbl_803DC3C0;
extern s32 lbl_803DC654;

void Event__UpdatePeriodicRecovery(void *arg0) {
    M2C_UNK (*temp_r9_2)(void *, s32, M2C_UNK, M2C_UNK, M2C_UNK);
    char *p_40;
    register s32 flag;
    f32 temp_f31;
    register s32 temp_r0;
    s32 temp_r9_3;
    void *temp_r31;
    s32 var_r29;
    void *temp_r3;
    char *temp_r9;

    flag = 0 == 0;
    p_40 = (char *)arg0 + 0x40;
    if (((s32) M2C_FIELD(p_40, u32 *, 0x34) != 0) && !(M2C_FIELD(&lbl_803A35A0, f32 *, 0x24) < M2C_FIELD(p_40, f32 *, 0x38))) {
        temp_r3 = (M2C_FIELD(p_40, u32 *, 0x30) * 0x1A0) + M2C_FIELD(p_40, s32 *, 0x4);
        temp_r9 = M2C_FIELD(temp_r3, void **, 0x19C);
        temp_r9_2 = M2C_FIELD(temp_r9, M2C_UNK (**)(void *, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK), 0x74);
        temp_r9_2(temp_r3 + M2C_FIELD(temp_r9, s16 *, 0x70), M2C_FIELD(p_40, s32 *, 0x2c), 0, 1, 1);
        temp_r9_3 = M2C_FIELD(p_40, u32 *, 0x30) + 1;
        M2C_FIELD(p_40, f32 *, 0x38) = (f32) (M2C_FIELD(&lbl_803A35A0, f32 *, 0x24) + lbl_80327468);
        M2C_FIELD(p_40, u32 *, 0x30) = temp_r9_3;
        if (temp_r9_3 == (s32) M2C_FIELD(arg0, s32 *, 4)) {
            var_r29 = 0;
            Sound__Play2D((s32) &lbl_80327460, 0);
            temp_f31 = lbl_80327470;
loop_11:
            if (var_r29 < Game__GetConfiguredPlayerCount(lbl_803DC3C0)) {
                temp_r31 = Game__GetPlayerImpl(lbl_803DC3C0, var_r29);
                temp_r0 = M2C_FIELD(p_40, s32 *, 0x28);
                if (0x15 == temp_r0) {
                    M2C_FIELD(temp_r31, f32 *, 0x28C) = (f32) (M2C_FIELD(temp_r31, f32 *, 0x28C) + M2C_FIELD(lbl_803DC3C0, f32 *, 0x2068));
                    HUD__UpdateTrackedHealthWidgets(lbl_803DC654, temp_r31, lbl_8032746C);
                    M2C_ERROR(/* unknown instruction: cror cr0un, cr0eq, cr0lt */);
                    if (flag) {
                        Avatar__SetHealthImpl(temp_r31, M2C_FIELD(temp_r31, f32 *, 0x28C));
                    }
                } else if (temp_r0 == 0x16) {
                    M2C_FIELD(temp_r31, f32 *, 0x298) = (f32) (M2C_FIELD(temp_r31, f32 *, 0x298) + M2C_FIELD(lbl_803DC3C0, f32 *, 0x2074));
                    HUD__UpdateTrackedEnergyWidgets(lbl_803DC654, temp_r31, lbl_8032746C);
                    M2C_ERROR(/* unknown instruction: cror cr0un, cr0eq, cr0lt */);
                    if (flag) {
                        M2C_FIELD(temp_r31, f32 *, 0x294) = (f32) M2C_FIELD(temp_r31, f32 *, 0x298);
                    }
                }
                var_r29 += 1;
                goto loop_11;
            }
            M2C_FIELD(p_40, s32 *, 0x34) = 0;
        }
    }
    Event__UpdatePeriodicRecoveryWidgets(arg0);
}
