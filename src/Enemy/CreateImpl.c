/* Enemy__CreateImpl @ 0x80058CA4 (size: 0x370, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 Game__GetConfiguredPlayerCount(void *);
void * Game__GetPlayerImpl(void *, s32);
void Avatar__SetCoopKnockoutFlag(void *, s32);
f32 Random__FloatRange(f32, f32);
void Avatar__SetSpawnPositionAndHeading(void *, void *, f32);
void Cast__AddProtagonist(s32, s32);
void Actor__ToNonProtagonistCastImpl(void *);
void Avatar__SetPositionImpl(int, int, float);
s32 Mem__New(s32);
int String__CompareIgnoreCase(const char *, const char *);
M2C_UNK fn_80251FE4(s32, s32);
M2C_UNK fn_802521A0(s32, s32, s32, s32);
M2C_UNK Avatar__Construct(s32);
M2C_UNK Avatar__InitializeFromCharacterName(s32, s32, s32, s32, s32, s32, s32, s32);
M2C_UNK fn_802520C0(s32);
M2C_UNK AI__PositionAtNamedSpawnPoint(s32, s32, f32);
M2C_UNK AI__InitializeEnemyCombatProperties(void *, s32, s32, s32);
extern s8 lbl_8031E0C0 __attribute__((section(".data")));
extern s8 lbl_8031E0CC __attribute__((section(".data")));
extern M2C_UNK lbl_8031E0D8 __attribute__((section(".data")));
extern f32 lbl_8031E0E4 __attribute__((section(".data")));
extern f32 lbl_8031E0E8 __attribute__((section(".data")));
extern f32 lbl_8031E0EC __attribute__((section(".data")));
extern M2C_UNK lbl_803B1E84 __attribute__((section(".data")));
extern void *lbl_803DC3C0;
extern s32 lbl_803DC460;
extern s32 lbl_803DC464;
extern s32 lbl_803DC470;
extern s32 lbl_803DC474;
extern s32 lbl_803DC478;
extern s32 lbl_803DC47C;
extern s32 lbl_803DC480;
extern s32 lbl_803DC5B4;
extern s32 lbl_803DC5DC;
extern s32 lbl_803DCCB8;

typedef struct { f32 v0, v1, v2; } mt_vec3_f32;
s32 Enemy__CreateImpl(s8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, f32 farg0) {
    s32 sp40;
    mt_vec3_f32 sp20;
    mt_vec3_f32 sp30;
    f32 sp18;
    f32 sp14;
    union { f32 value; unsigned char bytes[12]; } sp10;
    s32 sp8;
    f32 temp_f1;
    f32 temp_f2;
    s32 temp_r0;
    s32 temp_r27;
    s32 temp_r31;
    s32 temp_r3;
    s32 var_r25;
    s32 var_r30;
    s8 *var_r31;
    void *temp_r30;
    void *temp_r30_2;
    void *temp_r9;

    sp40 = M2C_ERROR(/* unknown instruction: mfcr $r12 */);
    var_r31 = arg0;
    if ((s32) M2C_FIELD(M2C_FIELD(lbl_803DC3C0, void **, 0x238), s32 *, 4) == 0xD) {
        if (String__CompareIgnoreCase(arg0, &lbl_8031E0C0) == 0) {
            var_r31 = &lbl_8031E0CC;
        }
    }
    fn_80251FE4((s32) &lbl_803B1E84, (s32) &lbl_8031E0D8);
    var_r25 = arg2;
    temp_r27 = fn_802521A0((s32) &lbl_803B1E84, (s32) var_r31, 0, 0);
    if (var_r25 == 7) {
        var_r25 = arg3 + 7;
    }
    if (arg2 == -1) {
        var_r25 = 0x1C;
    }
    temp_r3 = Avatar__Construct(Mem__New(0x1BF4));
    temp_r31 = temp_r3;
    sp8 = lbl_803DC5B4;
    Avatar__InitializeFromCharacterName(temp_r3, (s32) arg0, (s32) &lbl_8031E0D8, temp_r27, 0, 0, var_r25 + 2, lbl_803DC5DC);
    fn_802520C0((s32) &lbl_803B1E84);
    if (M2C_ERROR(/* Read from unset register $cr0_eq */)) {
        lbl_803DC460 = 1;
        var_r30 = 0;
        M2C_FIELD(temp_r31, s32 *, 0x2D4) = 1;
        temp_r0 = M2C_FIELD(M2C_FIELD(lbl_803DC3C0, void **, 0x238), s32 *, 4);
        if (temp_r0 != 4) {
            if (temp_r0 != 7) {
                if (temp_r0 != 0xA) {
                    if (temp_r0 != 0xB) {
                        if (temp_r0 != 0x10) {
                            if (temp_r0 == 0x15) {
                                goto block_14;
                            }
                        } else {
                            goto block_14;
                        }
                    } else {
                        goto block_14;
                    }
                } else {
                    goto block_14;
                }
            } else {
                goto block_14;
            }
        } else {
block_14:
            var_r30 = 1;
        }
        if (Game__GetConfiguredPlayerCount(lbl_803DC3C0) == 2) {
            if (var_r30 != 0) {
                Avatar__SetCoopKnockoutFlag(Game__GetPlayerImpl(lbl_803DC3C0, 1), 1);
            }
        }
        lbl_803DC464 = 1;
    } else {
        if ((u32) arg2 <= 2U) {
            temp_r30 = temp_r31 + 0x760;
            sp10.value = M2C_FIELD(temp_r31, f32 *, 0x760);
            sp14 = M2C_FIELD(temp_r30, f32 *, 4);
            sp18 = M2C_FIELD(temp_r30, f32 *, 8);
            temp_f2 = M2C_FIELD(((f32 *)sp10.bytes), f32 *, 4) * lbl_8031E0E4;
            temp_f1 = Random__FloatRange(-temp_f2 * lbl_8031E0E8, temp_f2 * lbl_8031E0E8);
            sp30.v0 = M2C_FIELD(temp_r31, f32 *, 0x760) + temp_f1;
            sp30.v1 = M2C_FIELD(temp_r30, f32 *, 4) + temp_f1;
            sp30.v2 = M2C_FIELD(temp_r30, f32 *, 8) + temp_f1;
            M2C_FIELD(temp_r31, f32 *, 0x760) = sp30.v0;
            M2C_FIELD(temp_r30, f32 *, 8) = sp30.v2;
            M2C_FIELD(temp_r30, f32 *, 4) = sp30.v1;
            sp20.v1 = sp30.v1;
            sp20.v0 = M2C_FIELD(temp_r31, f32 *, 0x760);
            sp20.v2 = sp30.v2;
        }
        M2C_FIELD(temp_r31, s32 *, 0x2D4) = 0;
    }
    Avatar__SetPositionImpl(temp_r31, arg1, lbl_8031E0EC);
    sp10.value = M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(((f32 *)sp10.bytes), s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(((f32 *)sp10.bytes), s32 *, 8) = (s32) M2C_FIELD(arg1, s32 *, 8);
    Avatar__SetSpawnPositionAndHeading((void *) temp_r31, ((f32 *)sp10.bytes), lbl_8031E0EC);
    M2C_FIELD(temp_r31, s32 *, 0x8C) = 1;
    Cast__AddProtagonist(lbl_803DCCB8, temp_r31);
    if (arg2 == 4) {
        Actor__ToNonProtagonistCastImpl((void *) temp_r31);
    }
    temp_r9 = M2C_FIELD(temp_r31, void **, 0x34);
    M2C_FIELD(temp_r9, M2C_UNK (**)(s32, M2C_UNK), 0x64)(temp_r31 + M2C_FIELD(temp_r9, s16 *, 0x60), 1);
    temp_r30_2 = M2C_FIELD(temp_r31, void **, 0xB8C);
    if (M2C_ERROR(/* Read from unset register $cr0_eq */)) {
        M2C_FIELD(temp_r30_2, s32 *, 0x468) = arg5;
        M2C_FIELD(temp_r30_2, s32 *, 0x514) = 0;
        M2C_FIELD(temp_r30_2, s32 *, 0x518) = 0;
    } else {
        M2C_FIELD(temp_r30_2, s32 *, 0x518) = 0;
        M2C_FIELD(temp_r30_2, s32 *, 0x468) = 0;
        M2C_FIELD(temp_r30_2, s32 *, 0x514) = arg5;
        if (arg5 != 0) {
            if (arg2 == 1) {
                lbl_803DC470 = arg2;
            } else if (arg2 == 0) {
                lbl_803DC474 = 1;
            } else if (arg2 == 5) {
                lbl_803DC480 = 1;
            } else if (arg2 == 2) {
                lbl_803DC478 = 1;
            } else if (arg2 == 3) {
                lbl_803DC47C = 1;
            }
        }
    }
    AI__InitializeEnemyCombatProperties(temp_r30_2, arg2, arg3, var_r25);
    AI__PositionAtNamedSpawnPoint((s32) temp_r30_2, arg4, farg0);
    return temp_r31;
}
