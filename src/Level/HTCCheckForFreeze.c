/* Level__HTCCheckForFreeze @ 0x80042E20 (size: 0x594, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void * Game__GetPlayerImpl(void *, s32);
s32 Emitter__CreateFromAsset(void *, s32, s32, s32, s32, s32, s32, s32, s32);
void Sound__Play2D(s32, s32);
void * CActor__FindBoneByName(void *, char *);
void Instance__SetHolographic(void *, s32);
s32 Emitter__Kill(u32);
s32 Avatar__GetAnimScriptVarInt(void *, void *, void *);
void Attacher__Destroy(s32);
void Avatar__SetAnimScriptVarIntImpl(void *, s32, s32, s32);
s32 Game__GetConfiguredPlayerCount(void *);
void Script__PushFloat(void *, s32, f32);
void Script__PushInt(void *, s32, s32);
int Avatar__StartAnimationImpl(void *, unsigned short, int, int, int, int);
float Script__PopFloat(void *, void *);
void * Script__PopInt(void *, void *);
void fn_8021CDC8(void *, void *, s32, s32, s32, s32, s32, s32, f32, f32, f32, f32, s32, s32);
void fn_80251650(void *, int, int, void *, void *);
void * fn_802ABF24(char *);
M2C_UNK fn_8021716C(s32);
M2C_UNK fn_802171A0(s32, f32);
f32 fn_802171D4(s32);
void *fn_80216294(s32, void *, void *, f32 *, f32, f32);
s32 *fn_802521A0(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK);
extern M2C_UNK lbl_80311D68 __attribute__((section(".data")));
extern M2C_UNK lbl_80311D78 __attribute__((section(".data")));
extern M2C_UNK lbl_80311D88 __attribute__((section(".data")));
extern s8 lbl_80311D9C __attribute__((section(".data")));
extern M2C_UNK lbl_80311DA4 __attribute__((section(".data")));
extern M2C_UNK lbl_80311DB0 __attribute__((section(".data")));
extern M2C_UNK lbl_80311DBC __attribute__((section(".data")));
extern s8 lbl_80311DCC __attribute__((section(".data")));
extern M2C_UNK lbl_80311DD8 __attribute__((section(".data")));
extern f32 lbl_80311DEC __attribute__((section(".data")));
extern f32 lbl_80311DF0 __attribute__((section(".data")));
extern f32 lbl_80311DF4 __attribute__((section(".data")));
extern f32 lbl_80311DF8 __attribute__((section(".data")));
extern f32 lbl_80311DFC __attribute__((section(".data")));
extern f32 lbl_80311E00 __attribute__((section(".data")));
extern f32 lbl_803A35BC __attribute__((section(".data")));
extern M2C_UNK lbl_803B1DDC __attribute__((section(".data")));
extern M2C_UNK lbl_803B1E84 __attribute__((section(".data")));
extern void *lbl_803DC3C0;
extern void *lbl_803DC654;

void Level__HTCCheckForFreeze(void *arg0, void *arg1) {
    void *sp34;
    union { void * value; unsigned char bytes[8]; } sp30;
    void *sp2C;
    union { void * value; unsigned char bytes[8]; } sp28;
    f32 sp24;
    union { f32 value; unsigned char bytes[8]; } sp20;
    union { f32 value; unsigned char bytes[16]; } sp10;
    s32 spC;
    register s32 sp8;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f12;
    f32 temp_f31;
    f32 var_f31;
    s16 temp_r0;
    s16 temp_r0_2;
    s32 *temp_r3;
    s32 temp_cr0_eq;
    s32 temp_cr0_eq_2;
    s32 temp_cr0_eq_3;
    s32 temp_r30;
    s32 var_r22;
    void *temp_r10;
    void *temp_r11;
    void *temp_r28;
    void *temp_r31;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r3_5;
    void *temp_r3_6;
    void *temp_r3_7;
    void *temp_r9;

    var_r22 = 0;
    sp20.value = Script__PopFloat(arg0, arg1);
    sp24 = Script__PopFloat(arg0, arg1);
    sp28.value = Script__PopInt(arg0, arg1);
    sp2C = Script__PopInt(arg0, arg1);
    sp30.value = Script__PopInt(arg0, arg1);
    sp34 = Script__PopInt(arg0, arg1);
loop_47:
    if (var_r22 >= Game__GetConfiguredPlayerCount(lbl_803DC3C0)) {
        Script__PushFloat(arg0, (s32) arg1, sp20.value);
        Script__PushFloat(arg0, (s32) arg1, M2C_FIELD(((f32 *)sp20.bytes), f32 *, 4));
        Script__PushInt(arg0, (s32) arg1, (s32) sp28.value);
        Script__PushInt(arg0, (s32) arg1, M2C_FIELD(((void * *)sp28.bytes), s32 *, 4));
        Script__PushInt(arg0, (s32) arg1, (s32) sp30.value);
        Script__PushInt(arg0, (s32) arg1, M2C_FIELD(((void * *)sp30.bytes), s32 *, 4));
    } else {
        temp_r28 = Game__GetPlayerImpl(lbl_803DC3C0, var_r22);
        if ((s32) M2C_FIELD(lbl_803DC654, s32 *, 0x2F28) == 0) {
            temp_r11 = M2C_FIELD(temp_r28, void **, 0x84);
            temp_r0 = M2C_FIELD(M2C_FIELD(temp_r11, void **, 0xF0), s16 *, 0xA);
            if ((temp_r0 == 0x101) || (temp_r0 == 0xE00)) {
                temp_r0_2 = M2C_FIELD(M2C_FIELD(temp_r11, void **, 0xF4), s16 *, 0xA);
                if ((temp_r0_2 == 0x100) || (temp_r0_2 == 0x500)) {
                    temp_f0 = (((f32 *)sp20.bytes))[var_r22];
                    temp_cr0_eq = temp_f0 >= lbl_80311DEC;
                    if (temp_cr0_eq == 0) {
                        if (temp_cr0_eq == 0) {
                            temp_f0_2 = temp_f0 - lbl_803A35BC;
                            (((f32 *)sp20.bytes))[var_r22] = temp_f0_2;
                            if (temp_f0_2 != lbl_80311DEC) {
                                goto block_12;
                            }
                        } else {
                            if (temp_cr0_eq == 0) {
                                temp_f0_3 = temp_f0 + lbl_803A35BC;
                                (((f32 *)sp20.bytes))[var_r22] = temp_f0_3;
                                if (temp_f0_3 != lbl_80311DEC) {
block_12:
                                    (((f32 *)sp20.bytes))[var_r22] = lbl_80311DEC;
                                }
                            }
                        }
                        if (!((((f32 *)sp20.bytes))[var_r22] < lbl_80311DF0) && ((void *) (((void * *)sp28.bytes))[var_r22] == NULL)) {
                            sp8 = -1;
                            (((void * *)sp28.bytes))[var_r22] = Emitter__CreateFromAsset(&lbl_80311D68, (s32) (temp_r28 + 0x38), (s32) (temp_r28 + 0x68), 0, 0, 0, 0, 0, M2C_ERROR(/* Unable to find stack arg 0x0 in block */));
                            Sound__Play2D((s32) &lbl_80311D78, 0);
                        } else if (((((f32 *)sp20.bytes))[var_r22] == lbl_80311DEC) && ((void *) (((void * *)sp28.bytes))[var_r22] != NULL) && ((void *) (((void * *)sp30.bytes))[var_r22] == NULL)) {
                            temp_r3 = fn_802521A0(&lbl_803B1E84, &lbl_80311D88, 0, 0);
                            if (temp_r3 != NULL) {
                                temp_r30 = *temp_r3;
                                temp_f31 = lbl_80311DF4;
                                sp34 = CActor__FindBoneByName(temp_r28, &lbl_80311D9C);
                                sp10.value = temp_f31;
                                M2C_FIELD(((f32 *)sp10.bytes), f32 *, 4) = temp_f31;
                                M2C_FIELD(((f32 *)sp10.bytes), f32 *, 8) = temp_f31;
                                temp_r3_2 = fn_80216294(temp_r30, temp_r28, sp34, ((f32 *)sp10.bytes), temp_f31, temp_f31);
                                (((void * *)sp30.bytes))[var_r22] = temp_r3_2;
                                Instance__SetHolographic(fn_8021716C((s32) temp_r3_2), 1);
                                M2C_FIELD(fn_8021716C((s32) (((void * *)sp30.bytes))[var_r22]), f32 *, 0x8C) = temp_f31;
                                fn_802171A0((s32) (((void * *)sp30.bytes))[var_r22], lbl_80311DF8);
                                Avatar__StartAnimationImpl(temp_r28, 0xE00U, 1, 0, 0, 1);
                                Sound__Play2D((s32) &lbl_80311DA4, 0);
                            }
                        }
                    } else if (temp_cr0_eq != 0) {
                        temp_r3_3 = (((void * *)sp30.bytes))[var_r22];
                        if (temp_r3_3 != NULL) {
                            temp_r3_4 = fn_8021716C((s32) temp_r3_3);
                            temp_f12 = M2C_FIELD(temp_r3_4, f32 *, 0x8C);
                            temp_cr0_eq_2 = temp_f12 == lbl_80311E00;
                            temp_f0_4 = lbl_803A35BC * lbl_80311DFC;
                            if (temp_cr0_eq_2 == 0) {
                                temp_f0_5 = temp_f12 - temp_f0_4;
                                M2C_FIELD(temp_r3_4, f32 *, 0x8C) = temp_f0_5;
                                if (temp_f0_5 != lbl_80311E00) {
                                    goto block_28;
                                }
                            } else {
                                if (temp_cr0_eq_2 == 0) {
                                    temp_f0_6 = temp_f12 + temp_f0_4;
                                    M2C_FIELD(temp_r3_4, f32 *, 0x8C) = temp_f0_6;
                                    if (temp_f0_6 != lbl_80311E00) {
block_28:
                                        M2C_FIELD(temp_r3_4, f32 *, 0x8C) = (f32) lbl_80311E00;
                                    }
                                }
                            }
                            var_f31 = fn_802171D4((s32) (((void * *)sp30.bytes))[var_r22]);
                            temp_cr0_eq_3 = 1;
                            if (var_f31 > lbl_80311E00) {
                                temp_cr0_eq_3 = 0;
                            }
                            if (temp_cr0_eq_3 == 0) {
                                var_f31 -= lbl_803A35BC;
                                if (!(var_f31 >= lbl_80311E00)) {
                                    goto block_34;
                                }
                            } else {
                                if (temp_cr0_eq_3 == 0) {
                                    var_f31 += lbl_803A35BC;
                                    if (!(var_f31 <= lbl_80311E00)) {
block_34:
                                        var_f31 = lbl_80311E00;
                                    }
                                }
                            }
                            fn_802171A0((s32) (((void * *)sp30.bytes))[var_r22], var_f31);
                            if (var_f31 == lbl_80311E00) {
                                temp_r3_5 = (((void * *)sp28.bytes))[var_r22];
                                if (temp_r3_5 != NULL) {
                                    Emitter__Kill((u32) temp_r3_5);
                                    (((void * *)sp28.bytes))[var_r22] = NULL;
                                }
                            }
                        }
                    }
                } else {
                    goto block_38;
                }
            } else {
                goto block_39;
            }
        } else {
block_38:
            if ((s16) M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_r28, void **, 0x84), void **, 0xF0), s16 *, 0xA) != 0xE00) {
block_39:
                temp_r3_6 = (((void * *)sp28.bytes))[var_r22];
                (((f32 *)sp20.bytes))[var_r22] = lbl_80311DF4;
                if (temp_r3_6 != NULL) {
                    Emitter__Kill((u32) temp_r3_6);
                    (((void * *)sp28.bytes))[var_r22] = NULL;
                }
            }
        }
        if (Avatar__GetAnimScriptVarInt(temp_r28, &lbl_80311DB0, NULL) != 0) {
            if ((void *) (((void * *)sp30.bytes))[var_r22] != NULL) {
                temp_r31 = temp_r28 + 0x38;
                sp8 = 0;
                spC = 0;
                fn_8021CDC8(&lbl_80311DBC, temp_r31, 0, 0, 0, 0, 0, -1, lbl_80311DF4, lbl_80311E00, lbl_80311E00, lbl_80311E00, M2C_ERROR(/* Unable to find stack arg 0x0 in block */), M2C_ERROR(/* Unable to find stack arg 0x4 in block */));
                Attacher__Destroy((u32) (((void * *)sp30.bytes))[var_r22]);
                (((void * *)sp30.bytes))[var_r22] = NULL;
                temp_r3_7 = fn_802ABF24(&lbl_80311DCC);
                if (temp_r3_7 != NULL) {
                    temp_r10 = temp_r3_7 + 0x38;
                    M2C_FIELD(temp_r3_7, s32 *, 0x38) = (s32) M2C_FIELD(temp_r28, s32 *, 0x38);
                    M2C_FIELD(temp_r10, s32 *, 8) = (s32) M2C_FIELD(temp_r31, s32 *, 8);
                    M2C_FIELD(temp_r10, s32 *, 4) = (s32) M2C_FIELD(temp_r31, s32 *, 4);
                    temp_r9 = M2C_FIELD(temp_r3_7, void **, 0x34);
                    M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0xAC)(temp_r3_7 + M2C_FIELD(temp_r9, s16 *, 0xA8));
                    fn_80251650(&lbl_803B1DDC, 0x2000C, 0, NULL, temp_r3_7);
                    Sound__Play2D((s32) &lbl_80311DD8, 0);
                }
            }
            Avatar__SetAnimScriptVarIntImpl(temp_r28, (s32) &lbl_80311DB0, 0, 0);
        }
        var_r22 += 1;
        goto loop_47;
    }
}
