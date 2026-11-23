/* FireShieldEnemy__UpdateShieldState @ 0x80084AF4 (size: 0x278, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void AI__ComputeTargetingInfo(void *, void *);
void AI__RecordRecentActionState(void *, s32);
void AI__SetState(void *, s32);
void AI__UpdateHealthThresholdReaction(void *);
void *Actor__GetStateHandler(int);
void Avatar__ClearPurpleSpiralEffects(void *);
void Avatar__StartFireShieldImpl(void *, int);
void Avatar__StopFireShieldImpl(void *, void *);
void Instance__SetHolographic(void *, int);
void AI__SelectNextMovementState(void *);
s32 AI__TryQuickRecovery(void *);
extern f32 lbl_8031F388 __attribute__((section(".data")));
extern f32 lbl_8031F38C __attribute__((section(".data")));
extern f32 lbl_803A35BC __attribute__((section(".data")));
extern s32 lbl_803DC460;
extern s32 lbl_803DC464;

void FireShieldEnemy__UpdateShieldState(void *arg0) {
    union { M2C_UNK value; unsigned char bytes[28]; } sp8;
    s32 result;
    s32 f5b4;
    s32 v5b0;
    void *r9;

    if ((lbl_803DC460 == 0) || (lbl_803DC464 == 0)) {
        AI__SetState(arg0, 0);
        M2C_FIELD(arg0, s32 *, 0x74) = 0x86;
        M2C_FIELD(arg0, s32 *, 0x78) = 0x86;
        M2C_FIELD(arg0, void **, 0x388) = Actor__GetStateHandler(0x86);
        return;
    }
    M2C_FIELD(arg0, f32 *, 0x540) = M2C_FIELD(arg0, f32 *, 0x540) + lbl_803A35BC;
    if ((result = AI__TryQuickRecovery(arg0)) != 0) {
        return;
    }
    M2C_FIELD(arg0, f32 *, 0x540) = lbl_8031F388;
    if (M2C_FIELD(arg0, s32 *, 0x7C) != 3) {
        return;
    }
    AI__SetState(arg0, 0);
    f5b4 = M2C_FIELD(arg0, s32 *, 0x5B4);
    if (f5b4 != 0) {
        v5b0 = M2C_FIELD(arg0, s32 *, 0x5B0);
        M2C_FIELD(arg0, s32 *, 0x5B4) = result;
        M2C_FIELD(arg0, s32 *, 0x74) = v5b0;
        M2C_FIELD(arg0, void **, 0x388) = Actor__GetStateHandler(v5b0);
        M2C_FIELD(arg0, s32 *, 0x78) = M2C_FIELD(arg0, s32 *, 0x74);
        AI__RecordRecentActionState(arg0, M2C_FIELD(arg0, s32 *, 0x74));
    } else {
        AI__ComputeTargetingInfo(sp8.bytes, arg0);
        Avatar__ClearPurpleSpiralEffects(arg0);
        if (M2C_FIELD(arg0, s32 *, 0x528) != 0) {
            M2C_FIELD(arg0, s32 *, 0x528) = f5b4;
            AI__SetState(arg0, 0);
            M2C_FIELD(arg0, s32 *, 0x74) = 0x88;
            M2C_FIELD(arg0, void **, 0x388) = Actor__GetStateHandler(0x88);
            M2C_FIELD(arg0, s32 *, 0x78) = M2C_FIELD(arg0, s32 *, 0x74);
            return;
        }
        AI__UpdateHealthThresholdReaction(arg0);
        if (M2C_FIELD(arg0, s32 *, 0x84) != 0) {
            goto range;
        }
        M2C_FIELD(arg0, s32 *, 0x84) = 1;
        M2C_FIELD(arg0, s32 *, 0x74) = 0x83;
        M2C_FIELD(arg0, void **, 0x388) = Actor__GetStateHandler(0x83);
        M2C_FIELD(arg0, s32 *, 0x78) = M2C_FIELD(arg0, s32 *, 0x74);
        return;
range:
        switch (M2C_FIELD(arg0, s32 *, 0x580)) {
        case 1:
        case 2:
        case 3:
            r9 = M2C_FIELD(arg0, void **, 0x57C);
            M2C_FIELD(r9, M2C_UNK (**)(void *), 0x7C)((char *)arg0 + M2C_FIELD(r9, s16 *, 0x78));
            break;
        default:
            break;
        }
        AI__SelectNextMovementState(arg0);
        AI__RecordRecentActionState(arg0, M2C_FIELD(arg0, s32 *, 0x74));
    }
    if (M2C_FIELD(arg0, s32 *, 0x5C4) != 0) {
        goto chkc8;
    }
    if (M2C_FIELD(arg0, s32 *, 0xF8) != 0) {
        goto chkc8;
    }
    if (M2C_FIELD(arg0, s32 *, 0x5C8) != 0) {
        goto toggle;
    }
    goto set;
chkc8:
    if (M2C_FIELD(arg0, s32 *, 0x5C8) == 0) {
        goto toggle;
    }
set:
    M2C_FIELD(arg0, s32 *, 0x5C0) = 1;
toggle:;
    if (M2C_FIELD(arg0, s32 *, 0x5C0) != 0) {
        if (M2C_FIELD(arg0, s32 *, 0x5C8) != 0) {
            Avatar__StopFireShieldImpl(M2C_FIELD(arg0, void **, 0x390), (void *)0xF);
            Instance__SetHolographic(M2C_FIELD(M2C_FIELD(arg0, void **, 0x390), void **, 0x84), 0);
            M2C_FIELD(arg0, s32 *, 0x5C8) = 0;
        } else {
            Avatar__StartFireShieldImpl(M2C_FIELD(arg0, void **, 0x390), 0xF);
            Instance__SetHolographic(M2C_FIELD(M2C_FIELD(arg0, void **, 0x390), void **, 0x84), 1);
            M2C_FIELD(arg0, s32 *, 0x5C8) = 1;
        }
        M2C_FIELD(arg0, s32 *, 0x5C0) = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x5C8) != 0) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x390), f32 *, 0x2B4) = lbl_8031F38C;
    } else {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x390), f32 *, 0x2B4) = lbl_8031F388;
    }
}
