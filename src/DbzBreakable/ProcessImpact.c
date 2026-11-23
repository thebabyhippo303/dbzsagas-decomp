/* DbzBreakable__ProcessImpact @ 0x800E804C (size: 0x3D0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef struct { f32 x, y, z; } Vec3;
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Camera__AddEffect(void *, void *);
void Sound__Play3DAtActorWithVolumePitch(s32, s32, s32, f32, f32);
void Sound__Play3D(s32, s32, s32, s32);
void DbzBreakable__SetTrackedPieceFlags(s32);
void * CameraBag__GetCurrent(void *);
s32 Mem__New(s32);
int String__CompareIgnoreCase(const char *, const char *);
void fn_8021CDC8(void *, void *, s32, s32, s32, s32, s32, s32, f32, f32, f32, f32);
void fn_80251510(void *, int, void *, void *, int);
void fn_802CB514(void *);
float sqrtf(float);
int strcmp(const char *, const char *);
M2C_UNK DbzBreakable__SpawnConfiguredFragments(s32, s32);
M2C_UNK CameraShake__ConstructDistanceAttenuated(s32, s32, f32, f32, f32, f32, f32);
M2C_UNK DbzBreakable__SpawnConfiguredPickup(s32);
extern s8 lbl_8031D820 __attribute__((section(".data")));
extern f32 lbl_803236A0 __attribute__((section(".data")));
extern f32 lbl_803236A4 __attribute__((section(".data")));
extern f32 lbl_803236A8 __attribute__((section(".data")));
extern f32 lbl_803236AC __attribute__((section(".data")));
extern f32 lbl_803236B0 __attribute__((section(".data")));
extern f32 lbl_803236B4 __attribute__((section(".data")));
extern f32 lbl_803236B8;
extern s8 lbl_8036ADC8 __attribute__((section(".data")));
extern M2C_UNK lbl_803B1DDC __attribute__((section(".data")));
extern void *lbl_803DC5B4;

void DbzBreakable__ProcessImpact(void *arg0, s32 arg1) {
    Vec3 vec_sp50;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp48;
    f32 sp44;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp24;
    f32 sp20;
    f32 sp10;
    s32 spC;
    s32 sp8;
    f32 temp_f0;
    f32 temp_f11;
    f32 temp_f12;
    f32 temp_f13;
    f32 temp_f31;
    s32 var_r29;
    s8 *temp_r27;
    u8 temp_r0;
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r9;
    void *temp_r9_3;
    void *var_r28;
    void *var_r28_2;
    void *var_r3;

    temp_f31 = lbl_803236A0;
    sp10 = temp_f31;
    M2C_FIELD(&sp10, f32 *, 8) = (f32) lbl_803236A4;
    M2C_FIELD(&sp10, f32 *, 4) = (f32) lbl_803236A4;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x548) != 5) {
        DbzBreakable__SpawnConfiguredFragments((s32) arg0, arg1);
        temp_r9 = arg0 + 0x82C;
        sp30 = M2C_FIELD(arg0, f32 *, 0x82C);
        sp34 = M2C_FIELD(temp_r9, s32 *, 4);
        sp38 = M2C_FIELD(temp_r9, f32 *, 8);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x53C) == 0) {
            temp_r11 = arg0 + 0x8B8;
            sp20 = M2C_FIELD(arg0, f32 *, 0x8B8);
            var_r28 = arg0 + 0x38;
            M2C_FIELD(&sp20, s32 *, 4) = (s32) M2C_FIELD(temp_r11, s32 *, 4);
            M2C_FIELD(&sp20, s32 *, 8) = (s32) M2C_FIELD(temp_r11, s32 *, 8);
        } else {
            temp_r11_2 = arg0 + 0x38;
            sp20 = M2C_FIELD(arg0, f32 *, 0x38);
            var_r28 = temp_r11_2;
            M2C_FIELD(&sp20, s32 *, 4) = (s32) M2C_FIELD(temp_r11_2, s32 *, 4);
            M2C_FIELD(&sp20, s32 *, 8) = (s32) M2C_FIELD(temp_r11_2, s32 *, 8);
            sp24 += temp_f31;
        }
        vec_sp50 = *(Vec3 *)((char *)lbl_803DC5B4 + 0xa0);
        temp_f0 = M2C_FIELD(var_r28, f32 *, 4) - sp54;
        temp_f13 = M2C_FIELD(var_r28, f32 *, 8) - sp58;
        sp44 = temp_f0;
        sp48 = temp_f13;
        temp_f12 = M2C_FIELD(arg0, f32 *, 0x38) - sp50;
        temp_f11 = temp_f12 * temp_f12;
        sp48 = temp_f12;
        sp60 = temp_f11;
        sp64 = temp_f0 * temp_f0;
        sp68 = temp_f13 * temp_f13;
        if (!(sqrtf(temp_f11 + M2C_FIELD(&sp60, f32 *, 4) + M2C_FIELD(&sp60, f32 *, 8)) <= lbl_803236A8)) {
            temp_r0 = M2C_FIELD(arg0, u8 *, 0x5CE);
            if ((s8) temp_r0 != 0) {
                spC = 0;
                sp8 = 0;
                var_r3 = arg0 + 0x5CE;
                goto block_9;
            }
            if ((s32) M2C_FIELD(arg0, u8 *, 0x508) != 0) {
                spC = (s32) (s8) temp_r0;
                var_r3 = arg0 + 0x508;
                sp8 = (s32) (s8) temp_r0;
block_9:
                fn_8021CDC8(var_r3, &sp20, (s32) &sp30, 0, 0, 0, 0, -1, lbl_803236A4, lbl_803236A0, lbl_803236A0, lbl_803236A0);
            }
        } else if ((s32) M2C_FIELD(arg0, u8 *, 0x508) != 0) {
            spC = 0;
            sp8 = 0;
            fn_8021CDC8(arg0 + 0x508, var_r28, (s32) &sp30, 0, 0, 0, 0, -1, lbl_803236A4, lbl_803236A0, lbl_803236A0, lbl_803236A0);
        }
        temp_r27 = arg0 + 0x632;
        sp48 = M2C_FIELD(arg0, f32 *, 0x38);
        M2C_FIELD(&sp48, f32 *, 8) = (f32) M2C_FIELD(var_r28, f32 *, 8);
        M2C_FIELD(&sp48, f32 *, 4) = (f32) M2C_FIELD(var_r28, f32 *, 4);
        Camera__AddEffect(CameraBag__GetCurrent(lbl_803DC5B4), CameraShake__ConstructDistanceAttenuated(Mem__New(0x18), (s32) &sp48, lbl_803236AC, lbl_803236B0, lbl_803236B4, lbl_803236A4, lbl_803236B8));
        if (strcmp(temp_r27, &lbl_8031D820) == 0) {
            var_r29 = 0;
            var_r28_2 = arg0 + 0x19C;
loop_15:
            if (var_r29 == 0) {
                if (String__CompareIgnoreCase(&lbl_8036ADC8, arg0 + 0x59C) == 0) {
                    Sound__Play3DAtActorWithVolumePitch((s32) (&lbl_8036ADC8 + 0x32), (s32) arg0, 0, (&lbl_8036ADC8 + 0x64)[var_r29], lbl_803236A4);
                } else {
                    var_r29 = 1;
                    goto loop_15;
                }
            }
        } else {
            Sound__Play3D((s32) temp_r27, (s32) var_r28, 0, 0);
            var_r28_2 = arg0 + 0x19C;
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x7B8) != 0) {
            DbzBreakable__SpawnConfiguredPickup((s32) arg0);
        }
        temp_r9_3 = M2C_FIELD(arg0, void **, 0x34);
        M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *, M2C_UNK), 0x64)(arg0 + M2C_FIELD(temp_r9_3, s16 *, 0x60), 1);
        DbzBreakable__SetTrackedPieceFlags((s32) arg0);
        M2C_FIELD(arg0, s32 *, 0x8A8) = 0;
        M2C_FIELD(arg0, s32 *, 0x548) = 5;
        M2C_FIELD(arg0, s32 *, 0x8DC) = 1;
        fn_802CB514(arg0);
        fn_80251510(&lbl_803B1DDC, 0x20072, arg0, arg0, (s32) var_r28_2);
    }
}
