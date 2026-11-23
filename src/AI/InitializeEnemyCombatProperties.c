/* AI__InitializeEnemyCombatProperties @ 0x8005A354 (size: 0x10F0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

f32 Rand__RangeFloat(f32, f32, s32);
s32 Rand__RangeInt(void *, s32, s32);
void * Game__GetInstance(void);
s32 Game__FindLevelIdByName(void *, char *);
void * Game__GetPlayerImpl(void *, s32);
s32 AvatarInventory__AddItem(void *, s32, s32, s32);
s32 Game__GetConfiguredPlayerCount(void *);
f32 AI__GetLevelAdjustedComboBranchChance(void *);
s32 Game__IsPendulumModeImpl(s32);
s32 Game__GetDifficultyLevelImpl(s32);
void AI__ScaleHealthForDifficultyAndPlayers(void *, s32);
void AI__SetAttackSuppressed(void *, s32);
void Avatar__SetHealthImpl(void *, float);
void Bone__SetOpacity(void *, float);
int Skeleton__FindBoneByName(void *, void **, char *);
void * memset(void *, int, u32);
M2C_UNK Avatar__ShowBoneByName(s32, s32);
M2C_UNK AI__InitializeCombatModeHealth(s32);
M2C_UNK AI__PopulateActionStateTable(s32);
M2C_UNK AI__LoadTuningParameters(s32, s32);
extern s8 lbl_8031E248 __attribute__((section(".data")));
extern M2C_UNK lbl_8031E254 __attribute__((section(".data")));
extern M2C_UNK lbl_8031E258 __attribute__((section(".data")));
extern M2C_UNK lbl_8031E260 __attribute__((section(".data")));
extern M2C_UNK lbl_8031E26C __attribute__((section(".data")));
extern M2C_UNK lbl_8031E278 __attribute__((section(".data")));
extern M2C_UNK lbl_8031E288 __attribute__((section(".data")));
extern f32 lbl_8031E298 __attribute__((section(".data")));
extern f32 lbl_8031E29C __attribute__((section(".data")));
extern f32 lbl_8031E2A0 __attribute__((section(".data")));
extern f32 lbl_8031E2A4 __attribute__((section(".data")));
extern f32 lbl_8031E2A8 __attribute__((section(".data")));
extern f32 lbl_8031E2AC __attribute__((section(".data")));
extern f32 lbl_8031E2B0 __attribute__((section(".data")));
extern f32 lbl_8031E2B4 __attribute__((section(".data")));
extern f32 lbl_8031E2B8 __attribute__((section(".data")));
extern f32 lbl_8031E2C8 __attribute__((section(".data")));
extern f32 lbl_8031E2CC __attribute__((section(".data")));
extern M2C_UNK lbl_80361F24 __attribute__((section(".data")));
extern M2C_UNK lbl_803621E4 __attribute__((section(".data")));
extern M2C_UNK lbl_8036527C __attribute__((section(".data")));
extern M2C_UNK lbl_803652CC __attribute__((section(".data")));
extern M2C_UNK lbl_803652DC __attribute__((section(".data")));
extern M2C_UNK lbl_803652EC __attribute__((section(".data")));
extern M2C_UNK lbl_8036543C __attribute__((section(".data")));
extern M2C_UNK lbl_80365450 __attribute__((section(".data")));
extern M2C_UNK lbl_80365648 __attribute__((section(".data")));
extern s32 lbl_803DC368;
extern void *lbl_803DC3C0;
extern s32 lbl_803DC434;
extern f32 lbl_803DC528;
extern f32 lbl_803DC52C;
extern M2C_UNK lbl_803DD634;

void AI__InitializeEnemyCombatProperties(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *sp1C;
    void *sp18;
    M2C_UNK sp10;
    s32 sp8;
    M2C_UNK *var_r5;
    f32 temp_f31;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r0_5;
    s32 temp_r0_6;
    s32 temp_r10;
    s32 temp_r10_2;
    s32 temp_r11;
    s32 temp_r11_2;
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r7;
    s32 temp_r9;
    s32 var_r0;
    s32 var_r11;
    s32 var_r11_10;
    s32 var_r11_11;
    s32 var_r11_12;
    s32 var_r11_13;
    s32 var_r11_14;
    s32 var_r11_15;
    s32 var_r11_16;
    s32 var_r11_17;
    s32 var_r11_18;
    s32 var_r11_19;
    s32 var_r11_20;
    s32 var_r11_21;
    s32 var_r11_22;
    s32 var_r11_3;
    s32 var_r11_4;
    s32 var_r11_5;
    s32 var_r11_6;
    s32 var_r11_7;
    s32 var_r11_8;
    s32 var_r11_9;
    s32 var_r29_2;
    s32 var_r8;
    s32 var_r9;
    s32 var_r9_10;
    s32 var_r9_11;
    s32 var_r9_12;
    s32 var_r9_13;
    s32 var_r9_14;
    s32 var_r9_15;
    s32 var_r9_16;
    s32 var_r9_17;
    s32 var_r9_18;
    s32 var_r9_19;
    s32 var_r9_20;
    s32 var_r9_2;
    s32 var_r9_3;
    s32 var_r9_4;
    s32 var_r9_5;
    s32 var_r9_6;
    s32 var_r9_7;
    s32 var_r9_8;
    s32 var_r9_9;
    void *temp_r11_3;
    void *temp_r29;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r9_10;
    void *temp_r9_11;
    void *temp_r9_12;
    void *temp_r9_13;
    void *temp_r9_14;
    void *temp_r9_15;
    void *temp_r9_16;
    void *temp_r9_17;
    void *temp_r9_18;
    void *temp_r9_19;
    void *temp_r9_20;
    void *temp_r9_21;
    void *temp_r9_22;
    void *temp_r9_23;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;
    void *temp_r9_5;
    void *temp_r9_6;
    void *temp_r9_7;
    void *temp_r9_8;
    void *temp_r9_9;
    void *var_r10;
    void *var_r11_2;
    void *var_r29;
    void *var_r30;
    void *var_r6;
    void *var_r6_2;

    temp_f31 = lbl_8031E298;
    M2C_FIELD(arg0, s32 *, 0xC8) = arg1;
    M2C_FIELD(arg0, s32 *, 0xCC) = arg2;
    M2C_FIELD(arg0, s32 *, 0x80) = 1;
    M2C_FIELD(arg0, s32 *, 0xC4) = arg3;
    M2C_FIELD(arg0, f32 *, 0x450) = temp_f31;
    M2C_FIELD(arg0, f32 *, 0x4A4) = temp_f31;
    M2C_FIELD(arg0, f32 *, 0x4A8) = temp_f31;
    switch (arg3) {                                 /* irregular */
    case 0:
        if (arg2 > 5) {
            M2C_FIELD(arg0, s32 *, 0xCC) = (s32) (arg2 - 0xA);
            lbl_803DC434 += 1;
            M2C_FIELD(arg0, s32 *, 0x420) = 1;
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0xCC) == 3) {
            M2C_FIELD(arg0, f32 *, 0x338) = (f32) (M2C_FIELD(arg0, f32 *, 0x338) * lbl_8031E29C);
            M2C_FIELD(arg0, f32 *, 0x330) = (f32) (M2C_FIELD(arg0, f32 *, 0x330) * lbl_8031E29C);
            M2C_FIELD(arg0, f32 *, 0x334) = (f32) (M2C_FIELD(arg0, f32 *, 0x334) * lbl_8031E29C);
            M2C_FIELD(arg0, f32 *, 0x32C) = (f32) (M2C_FIELD(arg0, f32 *, 0x32C) * lbl_8031E29C);
            M2C_FIELD(arg0, s32 *, 0x3DC) = 1;
        }
        temp_r0 = M2C_FIELD(arg0, s32 *, 0xCC);
        if ((temp_r0 == 1) || (temp_r0 == 3) || (temp_r0 == 0)) {
            M2C_FIELD(arg0, s32 *, 0x3D8) = 1;
            Skeleton__FindBoneByName(M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x38C), void **, 0xC8), void **, 0x84), void **, 0xC), &sp18, &lbl_8031E248);
            Bone__SetOpacity(sp18, lbl_8031E2A0);
        } else {
            Avatar__ShowBoneByName((s32) arg0, (s32) &lbl_8031E254);
        }
block_42:
        var_r29 = arg0 + 0x3E8;
        M2C_FIELD(arg0, s32 *, 0xC4) = -1;
        break;
    case 5:
        var_r29 = arg0 + 0x3E8;
        M2C_FIELD(arg0, f32 *, 0x450) = Rand__RangeFloat(lbl_8031E2A4, lbl_8031E2A8, (s32) &lbl_803DD634);
        M2C_FIELD(arg0, s32 *, 0x454) = Rand__RangeInt(&lbl_803DD634, 0, 2);
        M2C_FIELD(arg0, s32 *, 0x3DC) = 1;
        M2C_FIELD(arg0, s32 *, 0xC4) = -1;
        break;
    case 1:
        M2C_FIELD(arg0, f32 *, 0x450) = Rand__RangeFloat(lbl_8031E2A4, lbl_8031E2A8, (s32) &lbl_803DD634);
        temp_r11 = M2C_FIELD(arg0, s32 *, 0xCC);
        M2C_FIELD(arg0, s32 *, 0x454) = Rand__RangeInt(&lbl_803DD634, 0, 2);
        M2C_FIELD(arg0, s32 *, 0x548) = 2;
        if (temp_r11 > 4) {
            M2C_FIELD(arg0, s32 *, 0xCC) = (s32) (temp_r11 - 0xA);
            lbl_803DC434 += 1;
            M2C_FIELD(arg0, s32 *, 0x420) = arg3;
            M2C_FIELD(arg0, f32 *, 0x450) = Rand__RangeFloat(temp_f31, lbl_8031E2AC, (s32) &lbl_803DD634);
        }
        var_r30 = arg0 + 0x32C;
        var_r11 = 0x48;
        var_r29 = arg0 + 0x3E8;
        var_r6 = (M2C_FIELD(arg0, s32 *, 0xCC) * 0x54) + &lbl_803652EC;
        do {
            var_r11 -= 0x18;
            M2C_FIELD(var_r30, s32 *, 0) = (s32) M2C_FIELD(var_r6, s32 *, 0);
            M2C_FIELD(var_r30, s32 *, 4) = (s32) M2C_FIELD(var_r6, s32 *, 4);
            M2C_FIELD(var_r30, s32 *, 8) = (s32) M2C_FIELD(var_r6, s32 *, 8);
            M2C_FIELD(var_r30, s32 *, 0xC) = (s32) M2C_FIELD(var_r6, s32 *, 0xC);
            M2C_FIELD(var_r30, s32 *, 0x10) = (s32) M2C_FIELD(var_r6, s32 *, 0x10);
            temp_r10 = M2C_FIELD(var_r6, s32 *, 0x14);
            var_r6 += 0x18;
            M2C_FIELD(var_r30, s32 *, 0x14) = temp_r10;
            var_r30 += 0x18;
        } while (var_r11 != 0);
        M2C_FIELD(var_r30, s32 *, 0) = (s32) M2C_FIELD(var_r6, s32 *, 0);
        M2C_FIELD(var_r30, s32 *, 4) = (s32) M2C_FIELD(var_r6, s32 *, 4);
        M2C_FIELD(var_r30, s32 *, 8) = (s32) M2C_FIELD(var_r6, s32 *, 8);
        M2C_FIELD(arg0, s32 *, 0xC4) = -1;
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 0xCC);
        M2C_FIELD(arg0, s32 *, 0x3DC) = 1;
        temp_r10_2 = temp_r0_2 * 4;
        temp_r11_2 = temp_r0_2 * 0x14;
        M2C_FIELD(arg0, f32 *, 0x4A4) = *(f32 *)((char *)&lbl_803652DC + temp_r10_2);
        M2C_FIELD(arg0, f32 *, 0x4A8) = *(f32 *)((char *)&lbl_803652CC + temp_r10_2);
        M2C_FIELD(arg0, f32 *, 0x174) = *(f32 *)((char *)&lbl_8036527C + temp_r11_2);
        M2C_FIELD(arg0, f32 *, 0x178) = *(f32 *)((char *)&lbl_8036527C + 4 + temp_r11_2);
        M2C_FIELD(arg0, f32 *, 0x17C) = *(f32 *)((char *)&lbl_8036527C + 8 + temp_r11_2);
        M2C_FIELD(arg0, f32 *, 0x180) = *(f32 *)((char *)&lbl_8036527C + 0xC + temp_r11_2);
        M2C_FIELD(arg0, f32 *, 0x378) = (f32) lbl_8031E2B0;
        M2C_FIELD(arg0, f32 *, 0x184) = *(f32 *)((char *)&lbl_8036527C + 0x10 + temp_r11_2);
        if (temp_r0_2 != 2) {
            M2C_FIELD(arg0, f32 *, 0x374) = (f32) (M2C_FIELD(arg0, f32 *, 0x374) + Rand__RangeFloat(lbl_8031E2B4, lbl_8031E2B8, (s32) &lbl_803DD634));
        }
        break;
    case 6:
        M2C_FIELD(arg0, f32 *, 0x450) = Rand__RangeFloat(lbl_8031E2A4, lbl_8031E2A8, (s32) &lbl_803DD634);
        M2C_FIELD(arg0, s32 *, 0x4D4) = Rand__RangeInt(&lbl_803DD634, 0, 1);
        if ((s32) M2C_FIELD(arg0, s32 *, 0xCC) == 0xA) {
            M2C_FIELD(arg0, s32 *, 0xCC) = 0;
            lbl_803DC434 += 1;
            M2C_FIELD(arg0, s32 *, 0x420) = 1;
            M2C_FIELD(arg0, f32 *, 0x450) = Rand__RangeFloat(temp_f31, lbl_8031E2AC, (s32) &lbl_803DD634);
        }
        var_r6_2 = arg0 + 0x32C;
        var_r5 = &lbl_80365450;
        var_r0 = 0x48;
        var_r29 = arg0 + 0x3E8;
        do {
            var_r0 -= 0x18;
            M2C_FIELD(var_r6_2, s32 *, 0) = (s32) M2C_FIELD(var_r5, s32 *, 0);
            M2C_FIELD(var_r6_2, s32 *, 4) = (s32) M2C_FIELD(var_r5, s32 *, 4);
            M2C_FIELD(var_r6_2, s32 *, 8) = (s32) M2C_FIELD(var_r5, s32 *, 8);
            M2C_FIELD(var_r6_2, s32 *, 0xC) = (s32) M2C_FIELD(var_r5, s32 *, 0xC);
            M2C_FIELD(var_r6_2, s32 *, 0x10) = (s32) M2C_FIELD(var_r5, s32 *, 0x10);
            temp_r7 = M2C_FIELD(var_r5, s32 *, 0x14);
            var_r5 += 0x18;
            M2C_FIELD(var_r6_2, s32 *, 0x14) = temp_r7;
            var_r6_2 += 0x18;
        } while (var_r0 != 0);
        M2C_FIELD(var_r6_2, s32 *, 0) = (s32) M2C_FIELD(var_r5, s32 *, 0);
        M2C_FIELD(var_r6_2, s32 *, 4) = (s32) M2C_FIELD(var_r5, s32 *, 4);
        M2C_FIELD(var_r6_2, s32 *, 8) = (s32) M2C_FIELD(var_r5, s32 *, 8);
        M2C_FIELD(arg0, s32 *, 0xC4) = -1;
        M2C_FIELD(arg0, s32 *, 0x3DC) = 1;
        M2C_FIELD(arg0, f32 *, 0x4A4) = (f32) lbl_803DC52C;
        M2C_FIELD(arg0, f32 *, 0x4A8) = (f32) lbl_803DC528;
        M2C_FIELD(arg0, f32 *, 0x174) = (f32) M2C_FIELD(&lbl_8036543C, f32 *, 0);
        M2C_FIELD(arg0, f32 *, 0x178) = (f32) M2C_FIELD(&lbl_8036543C, f32 *, 4);
        M2C_FIELD(arg0, f32 *, 0x17C) = (f32) M2C_FIELD(&lbl_8036543C, f32 *, 8);
        M2C_FIELD(arg0, f32 *, 0x180) = (f32) M2C_FIELD(&lbl_8036543C, f32 *, 0xC);
        M2C_FIELD(arg0, f32 *, 0x378) = (f32) lbl_8031E2B0;
        M2C_FIELD(arg0, f32 *, 0x184) = (f32) M2C_FIELD(&lbl_8036543C, f32 *, 0x10);
        break;
    case 2:
        if (arg2 > 4) {
            M2C_FIELD(arg0, s32 *, 0xCC) = (s32) (arg2 - 0xA);
            lbl_803DC434 += 1;
            M2C_FIELD(arg0, s32 *, 0x420) = 1;
        }
        temp_r29 = Game__GetInstance();
        sp8 = M2C_FIELD(&lbl_8031E258, s32 *, 0);
        M2C_FIELD(&sp8, s32 *, 4) = (s32) M2C_FIELD(&lbl_8031E258, s32 *, 4);
        memset(&sp10, 0, 4U);
        temp_r3 = Game__FindLevelIdByName(M2C_FIELD(temp_r29, void **, 0x234), (s8 *) &sp8);
        if (((s32) M2C_FIELD(arg0, s32 *, 0xCC) == 0) && ((s32) M2C_FIELD(M2C_FIELD(lbl_803DC3C0, void **, 0x238), s32 *, 4) == temp_r3)) {
            Skeleton__FindBoneByName(M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x38C), void **, 0xC8), void **, 0x84), void **, 0xC), &sp1C, &lbl_8031E248);
            Bone__SetOpacity(sp1C, lbl_8031E29C);
        } else {
            Avatar__ShowBoneByName((s32) arg0, (s32) &lbl_8031E254);
        }
        var_r10 = arg0 + 0x32C;
        var_r8 = 0x48;
        var_r29 = arg0 + 0x3E8;
        var_r11_2 = (M2C_FIELD(arg0, s32 *, 0xCC) * 0x54) + &lbl_80365648;
        do {
            var_r8 -= 0x18;
            M2C_FIELD(var_r10, s32 *, 0) = (s32) M2C_FIELD(var_r11_2, s32 *, 0);
            M2C_FIELD(var_r10, s32 *, 4) = (s32) M2C_FIELD(var_r11_2, s32 *, 4);
            M2C_FIELD(var_r10, s32 *, 8) = (s32) M2C_FIELD(var_r11_2, s32 *, 8);
            M2C_FIELD(var_r10, s32 *, 0xC) = (s32) M2C_FIELD(var_r11_2, s32 *, 0xC);
            M2C_FIELD(var_r10, s32 *, 0x10) = (s32) M2C_FIELD(var_r11_2, s32 *, 0x10);
            temp_r9 = M2C_FIELD(var_r11_2, s32 *, 0x14);
            var_r11_2 += 0x18;
            M2C_FIELD(var_r10, s32 *, 0x14) = temp_r9;
            var_r10 += 0x18;
        } while (var_r8 != 0);
        M2C_FIELD(var_r10, s32 *, 0) = (s32) M2C_FIELD(var_r11_2, s32 *, 0);
        M2C_FIELD(var_r10, s32 *, 4) = (s32) M2C_FIELD(var_r11_2, s32 *, 4);
        M2C_FIELD(var_r10, s32 *, 8) = (s32) M2C_FIELD(var_r11_2, s32 *, 8);
        M2C_FIELD(arg0, s32 *, 0xC4) = -1;
        temp_r0_3 = M2C_FIELD(arg0, s32 *, 0xCC);
        if (temp_r0_3 == 1) {
            M2C_FIELD(arg0, s32 *, 0x3E0) = temp_r0_3;
        }
        break;
    case 3:
        if (arg2 > 0) {
            M2C_FIELD(arg0, s32 *, 0x420) = 1;
            M2C_FIELD(arg0, s32 *, 0xCC) = (s32) (arg2 - 0xA);
        }
        goto block_42;
    case 4:
        if (arg2 > 0) {
            M2C_FIELD(arg0, s32 *, 0xCC) = (s32) (arg2 - 0xA);
            lbl_803DC434 += 1;
            M2C_FIELD(arg0, s32 *, 0x420) = 1;
        }
        goto block_42;
    default:
        var_r29 = arg0 + 0x3E8;
        if (arg3 == 0x1C) {
            M2C_FIELD(arg0, s32 *, 0x34C) = 0x64;
        }
        break;
    }
    temp_r9_2 = M2C_FIELD(arg0, void **, 0x390);
    temp_r9_3 = temp_r9_2 + 0x38;
    M2C_FIELD(arg0, s32 *, 0x3E8) = (s32) M2C_FIELD(temp_r9_2, s32 *, 0x38);
    M2C_FIELD(var_r29, s32 *, 8) = (s32) M2C_FIELD(temp_r9_3, s32 *, 8);
    M2C_FIELD(var_r29, s32 *, 4) = (s32) M2C_FIELD(temp_r9_3, s32 *, 4);
    if (((s32) M2C_FIELD(arg0, s32 *, 0xC4) == 0x17) && ((s32) M2C_FIELD(arg0, s32 *, 0x468) != 0)) {
        AI__InitializeCombatModeHealth((s32) arg0);
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0xC4) == 0x13) && ((s32) M2C_FIELD(arg0, s32 *, 0x468) != 0)) {
        AI__InitializeCombatModeHealth((s32) arg0);
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0xC4) == 0x18) && ((s32) M2C_FIELD(arg0, s32 *, 0x468) != 0)) {
        AI__InitializeCombatModeHealth((s32) arg0);
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xC4) == 0x16) {
        var_r29_2 = 0;
loop_217:
        if (var_r29_2 < Game__GetConfiguredPlayerCount(lbl_803DC3C0)) {
            temp_r3_2 = Game__GetPlayerImpl(lbl_803DC3C0, var_r29_2);
            var_r11_3 = 0;
            temp_r9_4 = M2C_FIELD(temp_r3_2, void **, 0x159C);
            if (((s32) M2C_FIELD(temp_r9_4, s32 *, 0x112C) != 0x5C) && ((s32) M2C_FIELD(temp_r9_4, s32 *, 0x1134) != 0x5C)) {
                var_r9 = 0;
                if ((s32) M2C_FIELD(temp_r9_4, s32 *, 0xD14) != 0) {
                    var_r9 = 1;
                }
                if (var_r9 != 0) {
                    goto block_61;
                }
            } else {
block_61:
                var_r11_3 = 1;
            }
            if (var_r11_3 != 0) {
                AvatarInventory__AddItem(M2C_FIELD(M2C_FIELD(arg0, void **, 0x390), void **, 0x159C), 0x5C, 0, 1);
            }
            temp_r9_5 = M2C_FIELD(temp_r3_2, void **, 0x159C);
            var_r11_4 = 0;
            if (((s32) M2C_FIELD(temp_r9_5, s32 *, 0x112C) != 0x5D) && ((s32) M2C_FIELD(temp_r9_5, s32 *, 0x1134) != 0x5D)) {
                var_r9_2 = 0;
                if ((s32) M2C_FIELD(temp_r9_5, s32 *, 0xD38) != 0) {
                    var_r9_2 = 1;
                }
                if (var_r9_2 != 0) {
                    goto block_69;
                }
            } else {
block_69:
                var_r11_4 = 1;
            }
            if (var_r11_4 != 0) {
                AvatarInventory__AddItem(M2C_FIELD(M2C_FIELD(arg0, void **, 0x390), void **, 0x159C), 0x5D, 0, 1);
            }
            temp_r9_6 = M2C_FIELD(temp_r3_2, void **, 0x159C);
            var_r11_5 = 0;
            if (((s32) M2C_FIELD(temp_r9_6, s32 *, 0x112C) != 0x60) && ((s32) M2C_FIELD(temp_r9_6, s32 *, 0x1134) != 0x60)) {
                var_r9_3 = 0;
                if ((s32) M2C_FIELD(temp_r9_6, s32 *, 0xDA4) != 0) {
                    var_r9_3 = 1;
                }
                if (var_r9_3 != 0) {
                    goto block_77;
                }
            } else {
block_77:
                var_r11_5 = 1;
            }
            if (var_r11_5 != 0) {
                AvatarInventory__AddItem(M2C_FIELD(M2C_FIELD(arg0, void **, 0x390), void **, 0x159C), 0x60, 0, 1);
            }
            temp_r9_7 = M2C_FIELD(temp_r3_2, void **, 0x159C);
            var_r11_6 = 0;
            if (((s32) M2C_FIELD(temp_r9_7, s32 *, 0x112C) != 0x5E) && ((s32) M2C_FIELD(temp_r9_7, s32 *, 0x1134) != 0x5E)) {
                var_r9_4 = 0;
                if ((s32) M2C_FIELD(temp_r9_7, s32 *, 0xD5C) != 0) {
                    var_r9_4 = 1;
                }
                if (var_r9_4 != 0) {
                    goto block_85;
                }
            } else {
block_85:
                var_r11_6 = 1;
            }
            if (var_r11_6 != 0) {
                AvatarInventory__AddItem(M2C_FIELD(M2C_FIELD(arg0, void **, 0x390), void **, 0x159C), 0x6A, 0, 1);
            }
            temp_r9_8 = M2C_FIELD(temp_r3_2, void **, 0x159C);
            var_r11_7 = 0;
            if (((s32) M2C_FIELD(temp_r9_8, s32 *, 0x112C) != 0x5F) && ((s32) M2C_FIELD(temp_r9_8, s32 *, 0x1134) != 0x5F)) {
                var_r9_5 = 0;
                if ((s32) M2C_FIELD(temp_r9_8, s32 *, 0xD80) != 0) {
                    var_r9_5 = 1;
                }
                if (var_r9_5 != 0) {
                    goto block_93;
                }
            } else {
block_93:
                var_r11_7 = 1;
            }
            if (var_r11_7 != 0) {
                AvatarInventory__AddItem(M2C_FIELD(M2C_FIELD(arg0, void **, 0x390), void **, 0x159C), 0x5F, 0, 1);
            }
            temp_r9_9 = M2C_FIELD(temp_r3_2, void **, 0x159C);
            var_r11_8 = 0;
            if (((s32) M2C_FIELD(temp_r9_9, s32 *, 0x112C) != 0x61) && ((s32) M2C_FIELD(temp_r9_9, s32 *, 0x1134) != 0x61)) {
                var_r9_6 = 0;
                if ((s32) M2C_FIELD(temp_r9_9, s32 *, 0xDC8) != 0) {
                    var_r9_6 = 1;
                }
                if (var_r9_6 != 0) {
                    goto block_101;
                }
            } else {
block_101:
                var_r11_8 = 1;
            }
            if (var_r11_8 != 0) {
                AvatarInventory__AddItem(M2C_FIELD(M2C_FIELD(arg0, void **, 0x390), void **, 0x159C), 0x61, 0, 1);
            }
            temp_r9_10 = M2C_FIELD(temp_r3_2, void **, 0x159C);
            var_r11_9 = 0;
            if (((s32) M2C_FIELD(temp_r9_10, s32 *, 0x112C) != 0x66) && ((s32) M2C_FIELD(temp_r9_10, s32 *, 0x1134) != 0x66)) {
                var_r9_7 = 0;
                if ((s32) M2C_FIELD(temp_r9_10, s32 *, 0xDEC) != 0) {
                    var_r9_7 = 1;
                }
                if (var_r9_7 != 0) {
                    goto block_109;
                }
            } else {
block_109:
                var_r11_9 = 1;
            }
            if (var_r11_9 != 0) {
                AvatarInventory__AddItem(M2C_FIELD(M2C_FIELD(arg0, void **, 0x390), void **, 0x159C), 0x62, 0, 1);
            }
            temp_r9_11 = M2C_FIELD(temp_r3_2, void **, 0x159C);
            var_r11_10 = 0;
            if (((s32) M2C_FIELD(temp_r9_11, s32 *, 0x112C) != 0x63) && ((s32) M2C_FIELD(temp_r9_11, s32 *, 0x1134) != 0x63)) {
                var_r9_8 = 0;
                if ((s32) M2C_FIELD(temp_r9_11, s32 *, 0xE10) != 0) {
                    var_r9_8 = 1;
                }
                if (var_r9_8 != 0) {
                    goto block_117;
                }
            } else {
block_117:
                var_r11_10 = 1;
            }
            if (var_r11_10 != 0) {
                AvatarInventory__AddItem(M2C_FIELD(M2C_FIELD(arg0, void **, 0x390), void **, 0x159C), 0x63, 0, 1);
            }
            temp_r9_12 = M2C_FIELD(temp_r3_2, void **, 0x159C);
            var_r11_11 = 0;
            if (((s32) M2C_FIELD(temp_r9_12, s32 *, 0x112C) != 0x64) && ((s32) M2C_FIELD(temp_r9_12, s32 *, 0x1134) != 0x64)) {
                var_r9_9 = 0;
                if ((s32) M2C_FIELD(temp_r9_12, s32 *, 0xE34) != 0) {
                    var_r9_9 = 1;
                }
                if (var_r9_9 != 0) {
                    goto block_125;
                }
            } else {
block_125:
                var_r11_11 = 1;
            }
            if (var_r11_11 != 0) {
                AvatarInventory__AddItem(M2C_FIELD(M2C_FIELD(arg0, void **, 0x390), void **, 0x159C), 0x64, 0, 1);
            }
            temp_r9_13 = M2C_FIELD(temp_r3_2, void **, 0x159C);
            var_r11_12 = 0;
            if (((s32) M2C_FIELD(temp_r9_13, s32 *, 0x112C) != 0x65) && ((s32) M2C_FIELD(temp_r9_13, s32 *, 0x1134) != 0x65)) {
                var_r9_10 = 0;
                if ((s32) M2C_FIELD(temp_r9_13, s32 *, 0xE58) != 0) {
                    var_r9_10 = 1;
                }
                if (var_r9_10 != 0) {
                    goto block_133;
                }
            } else {
block_133:
                var_r11_12 = 1;
            }
            if (var_r11_12 != 0) {
                AvatarInventory__AddItem(M2C_FIELD(M2C_FIELD(arg0, void **, 0x390), void **, 0x159C), 0x65, 0, 1);
            }
            temp_r9_14 = M2C_FIELD(temp_r3_2, void **, 0x159C);
            var_r11_13 = 0;
            if (((s32) M2C_FIELD(temp_r9_14, s32 *, 0x112C) != 0x66) && ((s32) M2C_FIELD(temp_r9_14, s32 *, 0x1134) != 0x66)) {
                var_r9_11 = 0;
                if ((s32) M2C_FIELD(temp_r9_14, s32 *, 0xE7C) != 0) {
                    var_r9_11 = 1;
                }
                if (var_r9_11 != 0) {
                    goto block_141;
                }
            } else {
block_141:
                var_r11_13 = 1;
            }
            if (var_r11_13 != 0) {
                AvatarInventory__AddItem(M2C_FIELD(M2C_FIELD(arg0, void **, 0x390), void **, 0x159C), 0x66, 0, 1);
            }
            temp_r9_15 = M2C_FIELD(temp_r3_2, void **, 0x159C);
            var_r11_14 = 0;
            if (((s32) M2C_FIELD(temp_r9_15, s32 *, 0x112C) != 0x67) && ((s32) M2C_FIELD(temp_r9_15, s32 *, 0x1134) != 0x67)) {
                var_r9_12 = 0;
                if ((s32) M2C_FIELD(temp_r9_15, s32 *, 0xEA0) != 0) {
                    var_r9_12 = 1;
                }
                if (var_r9_12 != 0) {
                    goto block_149;
                }
            } else {
block_149:
                var_r11_14 = 1;
            }
            if (var_r11_14 != 0) {
                AvatarInventory__AddItem(M2C_FIELD(M2C_FIELD(arg0, void **, 0x390), void **, 0x159C), 0x67, 0, 1);
            }
            temp_r9_16 = M2C_FIELD(temp_r3_2, void **, 0x159C);
            var_r11_15 = 0;
            if (((s32) M2C_FIELD(temp_r9_16, s32 *, 0x112C) != 0x68) && ((s32) M2C_FIELD(temp_r9_16, s32 *, 0x1134) != 0x68)) {
                var_r9_13 = 0;
                if ((s32) M2C_FIELD(temp_r9_16, s32 *, 0xEC4) != 0) {
                    var_r9_13 = 1;
                }
                if (var_r9_13 != 0) {
                    goto block_157;
                }
            } else {
block_157:
                var_r11_15 = 1;
            }
            if (var_r11_15 != 0) {
                AvatarInventory__AddItem(M2C_FIELD(M2C_FIELD(arg0, void **, 0x390), void **, 0x159C), 0x68, 0, 1);
            }
            temp_r9_17 = M2C_FIELD(temp_r3_2, void **, 0x159C);
            var_r11_16 = 0;
            if (((s32) M2C_FIELD(temp_r9_17, s32 *, 0x112C) != 0x69) && ((s32) M2C_FIELD(temp_r9_17, s32 *, 0x1134) != 0x69)) {
                var_r9_14 = 0;
                if ((s32) M2C_FIELD(temp_r9_17, s32 *, 0xEE8) != 0) {
                    var_r9_14 = 1;
                }
                if (var_r9_14 != 0) {
                    goto block_165;
                }
            } else {
block_165:
                var_r11_16 = 1;
            }
            if (var_r11_16 != 0) {
                AvatarInventory__AddItem(M2C_FIELD(M2C_FIELD(arg0, void **, 0x390), void **, 0x159C), 0x69, 0, 1);
            }
            temp_r9_18 = M2C_FIELD(temp_r3_2, void **, 0x159C);
            var_r11_17 = 0;
            if (((s32) M2C_FIELD(temp_r9_18, s32 *, 0x112C) != 0x6A) && ((s32) M2C_FIELD(temp_r9_18, s32 *, 0x1134) != 0x6A)) {
                var_r9_15 = 0;
                if ((s32) M2C_FIELD(temp_r9_18, s32 *, 0xF0C) != 0) {
                    var_r9_15 = 1;
                }
                if (var_r9_15 != 0) {
                    goto block_173;
                }
            } else {
block_173:
                var_r11_17 = 1;
            }
            if (var_r11_17 != 0) {
                AvatarInventory__AddItem(M2C_FIELD(M2C_FIELD(arg0, void **, 0x390), void **, 0x159C), 0x6B, 0, 1);
            }
            temp_r9_19 = M2C_FIELD(temp_r3_2, void **, 0x159C);
            var_r11_18 = 0;
            if (((s32) M2C_FIELD(temp_r9_19, s32 *, 0x112C) != 0x6B) && ((s32) M2C_FIELD(temp_r9_19, s32 *, 0x1134) != 0x6B)) {
                var_r9_16 = 0;
                if ((s32) M2C_FIELD(temp_r9_19, s32 *, 0xF30) != 0) {
                    var_r9_16 = 1;
                }
                if (var_r9_16 != 0) {
                    goto block_181;
                }
            } else {
block_181:
                var_r11_18 = 1;
            }
            if (var_r11_18 != 0) {
                AvatarInventory__AddItem(M2C_FIELD(M2C_FIELD(arg0, void **, 0x390), void **, 0x159C), 0x6C, 0, 1);
            }
            temp_r9_20 = M2C_FIELD(temp_r3_2, void **, 0x159C);
            var_r11_19 = 0;
            if (((s32) M2C_FIELD(temp_r9_20, s32 *, 0x112C) != 0x6C) && ((s32) M2C_FIELD(temp_r9_20, s32 *, 0x1134) != 0x6C)) {
                var_r9_17 = 0;
                if ((s32) M2C_FIELD(temp_r9_20, s32 *, 0xF54) != 0) {
                    var_r9_17 = 1;
                }
                if (var_r9_17 != 0) {
                    goto block_189;
                }
            } else {
block_189:
                var_r11_19 = 1;
            }
            if (var_r11_19 != 0) {
                AvatarInventory__AddItem(M2C_FIELD(M2C_FIELD(arg0, void **, 0x390), void **, 0x159C), 0x6D, 0, 1);
            }
            temp_r9_21 = M2C_FIELD(temp_r3_2, void **, 0x159C);
            var_r11_20 = 0;
            if (((s32) M2C_FIELD(temp_r9_21, s32 *, 0x112C) != 0x6D) && ((s32) M2C_FIELD(temp_r9_21, s32 *, 0x1134) != 0x6D)) {
                var_r9_18 = 0;
                if ((s32) M2C_FIELD(temp_r9_21, s32 *, 0xF78) != 0) {
                    var_r9_18 = 1;
                }
                if (var_r9_18 != 0) {
                    goto block_197;
                }
            } else {
block_197:
                var_r11_20 = 1;
            }
            if (var_r11_20 != 0) {
                AvatarInventory__AddItem(M2C_FIELD(M2C_FIELD(arg0, void **, 0x390), void **, 0x159C), 0x6D, 0, 1);
            }
            temp_r9_22 = M2C_FIELD(temp_r3_2, void **, 0x159C);
            var_r11_21 = 0;
            if (((s32) M2C_FIELD(temp_r9_22, s32 *, 0x112C) != 0x6E) && ((s32) M2C_FIELD(temp_r9_22, s32 *, 0x1134) != 0x6E)) {
                var_r9_19 = 0;
                if ((s32) M2C_FIELD(temp_r9_22, s32 *, 0xF9C) != 0) {
                    var_r9_19 = 1;
                }
                if (var_r9_19 != 0) {
                    goto block_205;
                }
            } else {
block_205:
                var_r11_21 = 1;
            }
            if (var_r11_21 != 0) {
                AvatarInventory__AddItem(M2C_FIELD(M2C_FIELD(arg0, void **, 0x390), void **, 0x159C), 0x6E, 0, 1);
            }
            temp_r3_3 = M2C_FIELD(temp_r3_2, void **, 0x159C);
            var_r11_22 = 0;
            if (((s32) M2C_FIELD(temp_r3_3, s32 *, 0x112C) != 0x6F) && ((s32) M2C_FIELD(temp_r3_3, s32 *, 0x1134) != 0x6F)) {
                var_r9_20 = 0;
                if ((s32) M2C_FIELD(temp_r3_3, s32 *, 0xFC0) != 0) {
                    var_r9_20 = 1;
                }
                if (var_r9_20 != 0) {
                    goto block_213;
                }
            } else {
block_213:
                var_r11_22 = 1;
            }
            if (var_r11_22 != 0) {
                AvatarInventory__AddItem(M2C_FIELD(M2C_FIELD(arg0, void **, 0x390), void **, 0x159C), 0x6F, 0, 1);
            }
            var_r29_2 += 1;
            goto loop_217;
        }
    }
    AI__GetLevelAdjustedComboBranchChance(arg0);
    AI__PopulateActionStateTable((s32) arg0);
    temp_r0_4 = M2C_FIELD(arg0, s32 *, 0xC8);
    if ((temp_r0_4 != -1) && (temp_r0_4 != 6)) {
        temp_r0_5 = M2C_FIELD(M2C_FIELD(lbl_803DC3C0, void **, 0x238), s32 *, 4);
        if (((temp_r0_5 == 0x11) || (temp_r0_5 == 0x13)) && ((s32) M2C_FIELD(arg0, s32 *, 0xC4) == 7)) {
            if (Game__IsPendulumModeImpl(lbl_803DC368 + 0x17C) == 0) {
                AI__LoadTuningParameters((s32) arg0, (s32) &lbl_8031E260);
            } else {
                AI__LoadTuningParameters((s32) arg0, (s32) &lbl_8031E26C);
            }
        } else if (Game__IsPendulumModeImpl(lbl_803DC368 + 0x17C) == 0) {
            temp_r0_6 = M2C_FIELD(arg0, s32 *, 0xC4);
            if ((temp_r0_6 == 0xB) && ((s32) M2C_FIELD(M2C_FIELD(lbl_803DC3C0, void **, 0x238), s32 *, 4) == 0xD)) {
                AI__LoadTuningParameters((s32) arg0, (s32) &lbl_8031E278);
            } else if ((temp_r0_6 == 0xC) && ((s32) M2C_FIELD(M2C_FIELD(lbl_803DC3C0, void **, 0x238), s32 *, 0xD) == 0xD)) {
                AI__LoadTuningParameters((s32) arg0, (s32) &lbl_8031E288);
            } else {
                AI__LoadTuningParameters((s32) arg0, *(s32 *)((char *)&lbl_80361F24 + ((M2C_FIELD(arg0, s32 *, 0xCC) * 4) + (M2C_FIELD(arg0, s32 *, 0xC8) * 0x58))));
            }
        } else {
            AI__LoadTuningParameters((s32) arg0, *(s32 *)((char *)&lbl_803621E4 + ((M2C_FIELD(arg0, s32 *, 0xCC) * 4) + (M2C_FIELD(arg0, s32 *, 0xC8) * 0x58))));
        }
    }
    AI__ScaleHealthForDifficultyAndPlayers(arg0, Game__GetDifficultyLevelImpl(lbl_803DC368 + 0x370));
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x548);
    if (temp_r4 > 0) {
        AvatarInventory__AddItem(M2C_FIELD(M2C_FIELD(arg0, void **, 0x390), void **, 0x159C), temp_r4 + 0x61, 0, 1);
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xC8) == 7) {
        M2C_FIELD(arg0, s32 *, 0x4EC) = 0;
        AI__SetAttackSuppressed(arg0, 1);
        temp_r11_3 = M2C_FIELD(arg0, void **, 0x390);
        temp_r9_23 = M2C_FIELD(temp_r11_3, void **, 0x34);
        M2C_FIELD(temp_r9_23, M2C_UNK (**)(void *, M2C_UNK), 0x64)(temp_r11_3 + M2C_FIELD(temp_r9_23, s16 *, 0x60), 0);
    } else {
        M2C_FIELD(arg0, s32 *, 0x4EC) = 1;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x390), f32 *, 0x28C) = (f32) (f64) M2C_FIELD(arg0, s32 *, 0x34C);
    Avatar__SetHealthImpl(M2C_FIELD(arg0, void **, 0x390), (f32) (f64) M2C_FIELD(arg0, s32 *, 0x34C));
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x390), s32 *, 0x664) = (s32) M2C_FIELD(arg0, s32 *, 0x37C);
    M2C_FIELD(arg0, f32 *, 0x44C) = (f32) (lbl_8031E2CC - (((M2C_FIELD(arg0, f32 *, 0x348) * lbl_8031E2A0) + (M2C_FIELD(arg0, f32 *, 0x344) * lbl_8031E2A0)) * lbl_8031E2C8));
}
