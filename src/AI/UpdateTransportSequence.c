/* AI__UpdateTransportSequence @ 0x80066928 (size: 0x4AC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Actor__ToNonProtagonistCastImpl(void *);
void * CActor__FindBoneByName(void *, char *);
s32 Avatar__CreateAttacherImpl(void *, char *, s32, s32);
void AI__SetAttackSuppressed(void *, s32);
s32 NamedPoint__FindByName(void *, s32, s32);
s32 AI__HasPrimaryTimerElapsed(void *, f32, s32);
void Attacher__Destroy(u32);
void AI__SetState(void *, s32);
void * Game__FindAvatarByAnimationId(s32);
f32 atan2f(f32, f32);
void Actor__ToProtagonistCastImpl(void *);
void AI__ComputeTargetingInfo(void *, void *);
void Avatar__SetPositionImpl(int, int, float);
void * Game__FindNearestEligibleAvatar(void *);
extern s8 lbl_8031E188 __attribute__((section(".data")));
extern s8 lbl_8031E9D0 __attribute__((section(".data")));
extern s8 lbl_8031E9D8 __attribute__((section(".data")));
extern s8 lbl_8031E9E8 __attribute__((section(".data")));
extern M2C_UNK lbl_8031E9F8 __attribute__((section(".data")));
extern M2C_UNK lbl_8031EA00 __attribute__((section(".data")));
extern f32 lbl_8031EA08 __attribute__((section(".data")));
extern f32 lbl_8031EA0C __attribute__((section(".data")));
extern f32 lbl_8031EA10 __attribute__((section(".data")));
extern f32 lbl_8031EA14 __attribute__((section(".data")));
extern f32 lbl_8031EA18 __attribute__((section(".data")));
extern f32 lbl_8031EA1C __attribute__((section(".data")));
extern f32 lbl_8031EA20 __attribute__((section(".data")));
extern f32 lbl_803A35C0 __attribute__((section(".data")));
extern M2C_UNK lbl_803B1E84 __attribute__((section(".data")));
extern f32 lbl_803DE500;

void AI__UpdateTransportSequence(void *arg0) {
    union { M2C_UNK value; unsigned char bytes[28]; } sp8;
    f32 var_f0;
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f2;
    s32 temp_cr0_eq;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r30;
    s32 temp_ret;
    s32 var_r0;
    s32 var_r3;
    u32 var_r4;
    void *temp_r11;
    void *temp_r11_3;
    void *temp_r11_5;
    void *temp_r11_6;
    void *temp_r3;
    void *temp_r3_3;
    void *temp_r3_5;
    void *temp_r3_6;
    void *temp_r4;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;

    AI__ComputeTargetingInfo(((M2C_UNK *)sp8.bytes), arg0);
    temp_r30 = M2C_FIELD(arg0, s32 *, 0x7C);
    switch (temp_r30) {                             /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        Actor__ToNonProtagonistCastImpl(M2C_FIELD(arg0, void **, 0x390));
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x488);
        M2C_FIELD(arg0, s32 *, 0x380) = temp_r30;
        switch (temp_r0) {                          /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            Actor__ToNonProtagonistCastImpl(M2C_FIELD(arg0, void **, 0x390));
            temp_r9 = M2C_FIELD(arg0, void **, 0x390);
            M2C_FIELD(arg0, s32 *, 0x154) = Avatar__CreateAttacherImpl(temp_r9 + 0x684, &lbl_8031E9D8, (s32) temp_r9, CActor__FindBoneByName(M2C_FIELD(M2C_FIELD(arg0, void **, 0x38C), void **, 0xC8), &lbl_8031E9D0));
            temp_r9_2 = M2C_FIELD(arg0, void **, 0x390);
            M2C_FIELD(arg0, s32 *, 0x158) = Avatar__CreateAttacherImpl(temp_r9_2 + 0x684, &lbl_8031E9E8, (s32) temp_r9_2, CActor__FindBoneByName(M2C_FIELD(M2C_FIELD(arg0, void **, 0x38C), void **, 0xC8), &lbl_8031E188));
            temp_r11 = M2C_FIELD(arg0, void **, 0x390);
            M2C_FIELD(arg0, s32 *, 0x380) = 0x2D;
            temp_r9_3 = M2C_FIELD(temp_r11, void **, 0x34);
            M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *, M2C_UNK), 0x64)(temp_r11 + M2C_FIELD(temp_r9_3, s16 *, 0x60), 1);
            AI__SetAttackSuppressed(arg0, 1);
            if ((s32) M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x390), void **, 0x19D8), s32 *, 0xC) == 0x21) {
                var_r3 = NamedPoint__FindByName(&lbl_803B1E84, (s32) &lbl_8031E9F8, 0);
                if (var_r3 == 0) {
                    temp_r3 = Game__FindNearestEligibleAvatar(M2C_FIELD(arg0, void **, 0x390));
                    M2C_FIELD(arg0, f32 *, 0x3F4) = (f32) M2C_FIELD(temp_r3, f32 *, 0x38);
                    M2C_FIELD(arg0, s32 *, 0x3fc) = (s32) M2C_FIELD(temp_r3, s32 *, 0x40);
                    M2C_FIELD(arg0, s32 *, 0x3f8) = (s32) M2C_FIELD(temp_r3, s32 *, 0x3c);
                    var_f0 = M2C_FIELD(arg0, f32 *, 0x3F4) - lbl_8031EA08;
                    goto block_13;
                }
                goto block_11;
            }
            var_r3 = NamedPoint__FindByName(&lbl_803B1E84, (s32) &lbl_8031EA00, 0);
            if (var_r3 != 0) {
block_11:
                M2C_FIELD(arg0, f32 *, 0x3F4) = (f32) M2C_FIELD(var_r3, f32 *, 0);
                M2C_FIELD(arg0, s32 *, 0x3fc) = (s32) M2C_FIELD(var_r3, s32 *, 8);
                M2C_FIELD(arg0, s32 *, 0x3f8) = (s32) M2C_FIELD(var_r3, s32 *, 4);
            } else {
                temp_r3_3 = Game__FindNearestEligibleAvatar(M2C_FIELD(arg0, void **, 0x390));
                M2C_FIELD(arg0, f32 *, 0x3F4) = (f32) M2C_FIELD(temp_r3_3, f32 *, 0x38);
                M2C_FIELD(arg0, s32 *, 0x3fc) = (s32) M2C_FIELD(temp_r3_3, s32 *, 0x40);
                M2C_FIELD(arg0, s32 *, 0x3f8) = (s32) M2C_FIELD(temp_r3_3, s32 *, 0x3c);
                var_f0 = M2C_FIELD(arg0, f32 *, 0x3F4) + lbl_8031EA08;
block_13:
                M2C_FIELD(arg0, f32 *, 0x3F4) = var_f0;
            }
            M2C_FIELD(arg0, s32 *, 0x488) = 1;
            M2C_FIELD(arg0, f32 *, 0xDC) = (f32) lbl_803A35C0;
            return;
        case 1:                                     /* switch 2 */
            if (AI__HasPrimaryTimerElapsed(arg0, lbl_8031EA0C, M2C_ERROR(/* Read from unset register $r4 */)) != 0) {
                var_r0 = 0;
                temp_r4 = arg0 + 0x3F4;
                if (!(__builtin_fabsf(M2C_FIELD(arg0, f32 *, 0x3F4)) >= lbl_8031EA14) && !(__builtin_fabsf(M2C_FIELD(temp_r4, f32 *, 4)) >= lbl_8031EA14)) {
                    var_r0 = __builtin_fabsf(M2C_FIELD(temp_r4, f32 *, 8)) < lbl_8031EA14;
                }
                if (var_r0 == 0) {
                    Avatar__SetPositionImpl((s32) M2C_FIELD(arg0, void **, 0x390), (s32) temp_r4, lbl_8031EA10);
                }
            }
            temp_ret = AI__HasPrimaryTimerElapsed(arg0, lbl_8031EA18, M2C_ERROR(/* Read from unset register $r4 */));
            var_r4 = (u32) (u64) temp_ret;
            if (temp_ret != 0) {
                temp_r11_3 = M2C_FIELD(arg0, void **, 0x390);
                temp_r9_4 = M2C_FIELD(temp_r11_3, void **, 0x34);
                var_r4 = (u32) M2C_FIELD(temp_r9_4, u64 (**)(void *, M2C_UNK), 0x64)(temp_r11_3 + M2C_FIELD(temp_r9_4, s16 *, 0x60), 0);
                M2C_FIELD(arg0, f32 *, 0x3F4) = (f32) lbl_8031EA10;
                M2C_FIELD(arg0, f32 *, 0x3fc) = (f32) lbl_8031EA10;
                M2C_FIELD(arg0, f32 *, 0x3f8) = (f32) lbl_8031EA10;
            }
            if (AI__HasPrimaryTimerElapsed(arg0, lbl_8031EA1C, (s32) var_r4) != 0) {
                M2C_FIELD(arg0, s32 *, 0x488) = 2;
                return;
            }
            return;
        case 2:                                     /* switch 2 */
            M2C_FIELD(arg0, s32 *, 0x380) = temp_r30;
            Attacher__Destroy((u32) M2C_FIELD(arg0, s32 *, 0x154));
            M2C_FIELD(arg0, s32 *, 0x154) = temp_r30;
            Attacher__Destroy((u32) M2C_FIELD(arg0, s32 *, 0x158));
            M2C_FIELD(arg0, s32 *, 0x158) = temp_r30;
            AI__SetState(arg0, 1);
            return;
        }
        break;
    case 1:                                         /* switch 1 */
        M2C_FIELD(arg0, s32 *, 0x488) = 0;
        M2C_FIELD(arg0, s32 *, 0x380) = 0x2C;
        M2C_FIELD(arg0, s32 *, 0x41C) = 0x11;
        AI__SetState(arg0, 2);
        temp_r0_2 = M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x390), void **, 0x19D8), s32 *, 0xC);
        if (temp_r0_2 == 0x21) {
            temp_r3_5 = Game__FindAvatarByAnimationId(0x1B);
            temp_r11_5 = M2C_FIELD(arg0, void **, 0x390);
            var_f2 = M2C_FIELD(temp_r11_5, f32 *, 0x40) - M2C_FIELD(temp_r3_5, f32 *, 0x40);
            var_f1 = M2C_FIELD(temp_r11_5, f32 *, 0x38) - M2C_FIELD(temp_r3_5, f32 *, 0x38);
            if (var_f2 == lbl_8031EA10) {
                if (var_f1 != lbl_8031EA10) {
                    if (!(var_f1 > lbl_8031EA10)) {
                        goto block_39;
                    }
                    goto block_38;
                }
                goto block_36;
            }
            goto block_40;
            goto block_41;
        }
        if (temp_r0_2 == 0x1B) {
            temp_r3_6 = Game__FindAvatarByAnimationId(0x21);
            temp_r11_6 = M2C_FIELD(arg0, void **, 0x390);
            var_f2 = M2C_FIELD(temp_r11_6, f32 *, 0x40) - M2C_FIELD(temp_r3_6, f32 *, 0x40);
            var_f1 = M2C_FIELD(temp_r11_6, f32 *, 0x38) - M2C_FIELD(temp_r3_6, f32 *, 0x38);
            if (var_f2 == lbl_8031EA10) {
                temp_cr0_eq = var_f1 == lbl_8031EA10;
                if (temp_cr0_eq != 0) {
block_36:
                    var_f1_2 = lbl_8031EA10;
                } else {
                    if (temp_cr0_eq == 0) {
block_38:
                        var_f1_2 = lbl_803DE500 * lbl_8031EA20;
                    } else {
block_39:
                        var_f1_2 = -lbl_803DE500 * lbl_8031EA20;
                    }
                }
            } else {
block_40:
                var_f1_2 = atan2f(var_f1, var_f2);
            }
block_41:
            M2C_FIELD(arg0, f32 *, 0x384) = (f32) (lbl_803DE500 + var_f1_2);
        }
        M2C_FIELD(arg0, f32 *, 0xDC) = (f32) lbl_803A35C0;
        return;
    case 2:                                         /* switch 1 */
        if (AI__HasPrimaryTimerElapsed(arg0, lbl_8031EA1C, M2C_ERROR(/* Read from unset register $r4 */)) != 0) {
            temp_r0_3 = M2C_FIELD(arg0, s32 *, 0x560);
            if (temp_r0_3 == 0) {
                M2C_FIELD(arg0, s32 *, 0x380) = temp_r0_3;
                AI__SetState(arg0, 3);
                AI__ComputeTargetingInfo(((M2C_UNK *)sp8.bytes), arg0);
                Actor__ToProtagonistCastImpl(M2C_FIELD(arg0, void **, 0x390));
            }
        }
        break;
    }
}
