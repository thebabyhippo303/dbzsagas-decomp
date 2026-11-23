/* AvatarControls__UpdateFlightAndChargeState @ 0x800A3F1C (size: 0x4C0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Avatar__SetAnimScriptVarIntImpl(void *, s32, s32, s32);
s32 Avatar__IsFlyingImpl(void *);
s32 Avatar__CanAffordItemImpl(void *, f32);
void Avatar__StartFlyingImpl(void *, f32);
void AvatarMovement__UpdateAnimationMotionConstraints(char *);
int Avatar__StartAnimationImpl(void *, unsigned short, int, int, int, int);
void fn_800A5750(void *);
void fn_800B6810(void *, void *);
M2C_UNK fn_80098C54(s32);
extern M2C_UNK lbl_8031F484 __attribute__((section(".data")));
extern M2C_UNK lbl_8031F4D4 __attribute__((section(".data")));
extern f32 lbl_80320260 __attribute__((section(".data")));
extern f32 lbl_80320264 __attribute__((section(".data")));
extern f32 lbl_80320268 __attribute__((section(".data")));
extern f32 lbl_8032026C __attribute__((section(".data")));
extern f32 lbl_80320278 __attribute__((section(".data")));
extern f32 lbl_8032027C __attribute__((section(".data")));
extern f32 lbl_80320280 __attribute__((section(".data")));
extern u32 lbl_803A35AC __attribute__((section(".data")));
extern f32 lbl_803A35BC __attribute__((section(".data")));
extern void *lbl_803DC3C0;

void AvatarControls__UpdateFlightAndChargeState(void *arg0) {
    char sp8[72];
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f13;
    f32 temp_f13_2;
    f32 temp_f13_3;
    f32 temp_f13_4;
    f32 temp_f13_5;
    f32 temp_f13_6;
    s16 temp_r9;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 var_r11;
    s8 *temp_r3;
    void *temp_r10;
    void *temp_r10_2;
    void *temp_r10_3;
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r11_3;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r3_5;
    void *temp_r6;
    void *temp_r6_2;
    void *temp_r9_2;

    AvatarMovement__UpdateAnimationMotionConstraints(M2C_FIELD(arg0, s8 **, 0x7C));
    temp_r3 = M2C_FIELD(arg0, s8 **, 0x7C);
    fn_800B6810(temp_r3 + 0x68, temp_r3 + 0x70);
    temp_r3_2 = M2C_FIELD(arg0, void **, 0);
    temp_r11 = M2C_FIELD(temp_r3_2, void **, 0x84);
    temp_r9 = M2C_FIELD(M2C_FIELD(temp_r11, void **, 0xF0), s16 *, 0xA);
    if (temp_r9 != 0x900) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x18C) != 0) {
            if ((M2C_FIELD(temp_r3_2, f32 *, 0x294) / M2C_FIELD(temp_r3_2, f32 *, 0x298)) == lbl_80320260) {
                Avatar__SetAnimScriptVarIntImpl(temp_r3_2, (s32) &lbl_8031F484, 1, 1);
            }
        } else if ((s32) M2C_FIELD(arg0, s32 *, 0x190) != 0) {
            temp_f0 = M2C_FIELD(arg0, f32 *, 0x1A0) + lbl_803A35BC;
            M2C_FIELD(arg0, f32 *, 0x1A0) = temp_f0;
            if (!(temp_f0 < lbl_80320264)) {
                if ((Avatar__IsFlyingImpl(temp_r3_2) != 0) || ((s32) M2C_FIELD(M2C_FIELD(arg0, s8 **, 0x7C), s32 *, 0x58C) != 0)) {
                    temp_r3_3 = M2C_FIELD(arg0, void **, 0);
                    if ((s16) M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_r3_3, void **, 0x84), void **, 0xF4), s16 *, 0xA) == 0x100) {
                        temp_r9_2 = M2C_FIELD(temp_r3_3, void **, 0x159C);
                        var_r11 = M2C_FIELD(temp_r9_2, s32 *, 0x1008) != 0;
                        if ((var_r11 != 0) && (Avatar__CanAffordItemImpl(temp_r3_3, M2C_FIELD(temp_r9_2, f32 *, 0x10)) != 0)) {
                            Avatar__StartAnimationImpl(M2C_FIELD(arg0, void **, 0), 0x300U, 1, 0, 1, 1);
                            fn_800A5750(arg0);
                        }
                    }
                } else {
                    M2C_FIELD(arg0, f32 *, 0x1A0) = (f32) lbl_80320268;
                }
            }
        } else if ((s32) M2C_FIELD(arg0, s32 *, 0x194) != 0) {
            temp_r0 = temp_r9 & 0xFF00;
            if ((temp_r0 != 0x600) && (temp_r0 != 0xE00) && (temp_r0 != 0x300) && ((s16) M2C_FIELD(M2C_FIELD(temp_r11, void **, 0xF4), s16 *, 0xA) == 0x100)) {
                if ((s32) M2C_FIELD(arg0, s32 *, 0x198) != 0) {
                    M2C_FIELD(arg0, s32 *, 0x18C) = 1;
                    Avatar__StartAnimationImpl(temp_r3_2, 0x600U, 1, 0, 1, 1);
                    M2C_FIELD(M2C_FIELD(arg0, void **, 0), f32 *, 0x2AC) = (f32) lbl_8032026C;
                } else {
                    Avatar__StartAnimationImpl(temp_r3_2, 0x500U, 1, 1, 1, 1);
                }
                fn_800A5750(arg0);
            }
        }
        temp_r3_4 = M2C_FIELD(arg0, void **, 0);
        if ((s32) (M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_r3_4, void **, 0x84), void **, 0xF4), s16 *, 0xA) & 0xFF00) == 0x300) {
            if (fn_80098C54((s32) temp_r3_4) != 0) {
                temp_r6 = M2C_FIELD(arg0, void **, 0);
                temp_f0_2 = ((f32) (f64) lbl_803A35AC * lbl_80320278 * lbl_8032026C) + M2C_FIELD(temp_r6, f32 *, 0x2A8);
                M2C_FIELD(temp_r6, f32 *, 0x2A8) = temp_f0_2;
                if (!(temp_f0_2 >= lbl_80320268)) {
                    M2C_FIELD(temp_r6, f32 *, 0x2A8) = (f32) lbl_80320268;
                }
                temp_f13 = M2C_FIELD(temp_r6, f32 *, 0x2AC);
                if (!(M2C_FIELD(temp_r6, f32 *, 0x2A8) <= temp_f13)) {
                    M2C_FIELD(temp_r6, f32 *, 0x2A8) = temp_f13;
                }
            } else {
                temp_r10 = M2C_FIELD(arg0, void **, 0);
                temp_f13_2 = (lbl_803A35BC * lbl_8032026C) + M2C_FIELD(temp_r10, f32 *, 0x2A8);
                M2C_FIELD(temp_r10, f32 *, 0x2A8) = temp_f13_2;
                if (!(temp_f13_2 >= lbl_80320268)) {
                    M2C_FIELD(temp_r10, f32 *, 0x2A8) = (f32) lbl_80320268;
                }
                temp_f13_3 = M2C_FIELD(temp_r10, f32 *, 0x2AC);
                if (!(M2C_FIELD(temp_r10, f32 *, 0x2A8) <= temp_f13_3)) {
                    M2C_FIELD(temp_r10, f32 *, 0x2A8) = temp_f13_3;
                }
            }
            temp_r3_5 = M2C_FIELD(arg0, void **, 0);
            if ((M2C_FIELD(temp_r3_5, f32 *, 0x2A8) / M2C_FIELD(temp_r3_5, f32 *, 0x2AC)) == lbl_80320260) {
                Avatar__SetAnimScriptVarIntImpl(temp_r3_5, (s32) &lbl_8031F4D4, 1, 1);
            }
        } else if (fn_80098C54((s32) temp_r3_4) != 0) {
            temp_r6_2 = M2C_FIELD(arg0, void **, 0);
            temp_f0_3 = ((f32) (f64) lbl_803A35AC * lbl_80320278 * lbl_8032027C) + M2C_FIELD(temp_r6_2, f32 *, 0x2A8);
            M2C_FIELD(temp_r6_2, f32 *, 0x2A8) = temp_f0_3;
            if (!(temp_f0_3 >= lbl_80320268)) {
                M2C_FIELD(temp_r6_2, f32 *, 0x2A8) = (f32) lbl_80320268;
            }
            temp_f13_4 = M2C_FIELD(temp_r6_2, f32 *, 0x2AC);
            if (!(M2C_FIELD(temp_r6_2, f32 *, 0x2A8) <= temp_f13_4)) {
                M2C_FIELD(temp_r6_2, f32 *, 0x2A8) = temp_f13_4;
            }
        } else {
            temp_r10_2 = M2C_FIELD(arg0, void **, 0);
            temp_f13_5 = (lbl_803A35BC * lbl_8032027C) + M2C_FIELD(temp_r10_2, f32 *, 0x2A8);
            M2C_FIELD(temp_r10_2, f32 *, 0x2A8) = temp_f13_5;
            if (!(temp_f13_5 >= lbl_80320268)) {
                M2C_FIELD(temp_r10_2, f32 *, 0x2A8) = (f32) lbl_80320268;
            }
            temp_f13_6 = M2C_FIELD(temp_r10_2, f32 *, 0x2AC);
            if (!(M2C_FIELD(temp_r10_2, f32 *, 0x2A8) <= temp_f13_6)) {
                M2C_FIELD(temp_r10_2, f32 *, 0x2A8) = temp_f13_6;
            }
        }
    }
    M2C_FIELD(sp8, s32 *, 4) = 0;
    temp_r10_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x7BC);
    temp_r11_2 = M2C_FIELD(temp_r10_3, void **, 4);
    M2C_FIELD(temp_r11_2, M2C_UNK (**)(void *, M2C_UNK *), 0x14)(temp_r10_3 + M2C_FIELD(temp_r11_2, s16 *, 0x10), sp8);
    if ((s32) M2C_FIELD(sp8, u8 *, 0x22) == (s32) M2C_FIELD(lbl_803DC3C0, s32 *, 0x2144)) {
        temp_r11_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x84);
        temp_r0_2 = M2C_FIELD(M2C_FIELD(temp_r11_3, void **, 0xF0), s16 *, 0xA) & 0xFFFFFF00;
        if ((temp_r0_2 != 0x300) && (temp_r0_2 != 0x900) && (temp_r0_2 != 0xC00) && (temp_r0_2 != 0x500) && ((s32) (M2C_FIELD(M2C_FIELD(temp_r11_3, void **, 0xF4), s16 *, 0xA) & 0xFFFFFF00 & 0xF00) != 0x400)) {
            Avatar__StartFlyingImpl(M2C_FIELD(arg0, s8 **, 0x7C), lbl_80320280);
            Avatar__StartAnimationImpl(M2C_FIELD(arg0, void **, 0), 0x500U, 1, 0, 0, 1);
        }
    }
}
