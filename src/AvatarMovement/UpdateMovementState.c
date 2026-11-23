/* AvatarMovement__UpdateMovementState @ 0x800A6F78 (size: 0x4E0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

int PersistentData__GetGlobalImpl(void *, char *);
s32 fn_800B51F4(void *, s32);                       /* extern */
extern s8 lbl_80320A78 __attribute__((section(".data")));
extern s32 lbl_803DC368;
extern void *lbl_803DC3C0;

void AvatarMovement__UpdateMovementState(void *arg0) {
    f32 tmp_7A0;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 sp20;
    f32 sp1C;
    f32 sp18;
    f32 sp10;
    f32 spC;
    f32 sp8;
    f32 *temp_r27;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f10_3;
    f32 temp_f11;
    f32 temp_f11_2;
    f32 temp_f11_3;
    f32 temp_f12;
    f32 temp_f13;
    f32 temp_f9;
    f32 temp_f9_2;
    f32 temp_f9_3;
    f32 temp_f9_4;
    s32 temp_r0;
    s32 var_r0;
    void **temp_r28;
    void *temp_r10;
    void *temp_r10_2;
    void *temp_r10_3;
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r11_3;
    void *temp_r11_4;
    void *temp_r11_5;
    void *temp_r11_6;
    void *temp_r11_7;
    void *temp_r26;
    void *temp_r5;
    void *temp_r6;
    void *temp_r9;
    void *temp_r9_10;
    void *temp_r9_11;
    void *temp_r9_12;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;
    void *temp_r9_5;
    void *temp_r9_6;
    void *temp_r9_7;
    void *temp_r9_8;
    void *temp_r9_9;

    temp_r11 = arg0 + 0x5AC;
    temp_r10 = arg0 + 0x5CC;
    M2C_FIELD(arg0, s32 *, 0x5BC) = (s32) M2C_FIELD(arg0, s32 *, 0x58C);
    M2C_FIELD(arg0, s32 *, 0x5CC) = (s32) M2C_FIELD(arg0, s32 *, 0x5AC);
    M2C_FIELD(temp_r10, s32 *, 8) = (s32) M2C_FIELD(temp_r11, s32 *, 8);
    M2C_FIELD(temp_r10, s32 *, 4) = (s32) M2C_FIELD(temp_r11, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x634) = 1;
    M2C_FIELD(arg0, void **, 0x5C0) = (void *) M2C_FIELD(arg0, void **, 0x590);
    M2C_FIELD(arg0, f32 *, 0x610) = (f32) M2C_FIELD(arg0, f32 *, 0x568);
    M2C_FIELD(arg0, f32 *, 0x5C8) = (f32) M2C_FIELD(arg0, f32 *, 0x598);
    temp_r0 = M2C_FIELD(M2C_FIELD(lbl_803DC3C0, void **, 0x238), s32 *, 4);
    if ((temp_r0 == 0x11) || (temp_r0 == 0x13) || (temp_r0 == 0x15)) {
        var_r0 = 1;
    } else {
        var_r0 = 1;
        if (PersistentData__GetGlobalImpl(lbl_803DC368 + 0x12C, &lbl_80320A78) == 0) {
            var_r0 = 0;
        }
    }
    M2C_FIELD(arg0, s32 *, 0x6D0) = var_r0;
    if (fn_800B51F4(arg0, M2C_FIELD(arg0, s32 *, 0x5BC)) != 0) {
        temp_r9 = M2C_FIELD(arg0, void **, 0);
        M2C_FIELD(temp_r9, s32 *, 0x1E4) = (s32) (M2C_FIELD(temp_r9, s32 *, 0x1E4) & 0xFFFFFFFB);
        temp_r10_2 = M2C_FIELD(arg0, void **, 0x590);
        M2C_FIELD(arg0, s32 *, 0x5C4) = (s32) M2C_FIELD(arg0, s32 *, 0x594);
        if (temp_r10_2 != NULL) {
            temp_r9_2 = temp_r10_2 + 0x44;
            temp_r11_2 = temp_r10_2 + 0x74;
            temp_f13 = M2C_FIELD(temp_r11_2, f32 *, 4);
            temp_f0 = M2C_FIELD(temp_r10_2, f32 *, 0x74);
            temp_f12 = M2C_FIELD(temp_r11_2, f32 *, 8);
            temp_r26 = arg0 + 0x5CC;
            temp_r9_3 = M2C_FIELD(arg0, void **, 0);
            temp_r27 = arg0 + 0x59C;
            sp8 = (temp_f12 * M2C_FIELD(temp_r9_2, f32 *, 0x18)) + ((temp_f0 * M2C_FIELD(temp_r10_2, f32 *, 0x44)) + (temp_f13 * M2C_FIELD(temp_r9_2, f32 *, 0xC)));
            temp_r9_4 = temp_r9_3 + 0x77C;
            sp10 = (temp_f12 * M2C_FIELD(temp_r9_2, f32 *, 0x20)) + ((temp_f0 * M2C_FIELD(temp_r9_2, f32 *, 8)) + (temp_f13 * M2C_FIELD(temp_r9_2, f32 *, 0x14)));
            spC = (temp_f12 * M2C_FIELD(temp_r9_2, f32 *, 0x1C)) + ((temp_f0 * M2C_FIELD(temp_r9_2, f32 *, 4)) + (temp_f13 * M2C_FIELD(temp_r9_2, f32 *, 0x10)));
            M2C_FIELD(arg0, f32 *, 0x60C) = (f32) (M2C_FIELD(temp_r9_3, f32 *, 0x7B0) - M2C_FIELD(&sp8, f32 *, 4));
            temp_r28 = M2C_FIELD(temp_r10_2, void ***, 0x9C);
            sp18 = M2C_FIELD(temp_r9_4, f32 *, 0x18);
            sp1C = M2C_FIELD(temp_r9_4, f32 *, 0x1C);
            sp20 = M2C_FIELD(temp_r9_4, f32 *, 0x20);
            sp8 = sp18;
            M2C_FIELD(&sp8, f32 *, 8) = (f32) M2C_FIELD(&sp18, f32 *, 8);
            M2C_FIELD(&sp8, f32 *, 4) = (f32) M2C_FIELD(&sp18, f32 *, 4);
            temp_r9_5 = *temp_r28;
            M2C_FIELD(temp_r9_5, M2C_UNK (**)(f32 *, void *, f32 *), 0x54)(&sp18, temp_r28 + M2C_FIELD(temp_r9_5, s16 *, 0x50), &sp8);
            temp_r11_3 = arg0 + 0x5DC;
            M2C_FIELD(arg0, f32 *, 0x5DC) = sp18;
            M2C_FIELD(temp_r11_3, f32 *, 4) = (f32) M2C_FIELD(&sp18, f32 *, 4);
            M2C_FIELD(temp_r11_3, f32 *, 8) = (f32) M2C_FIELD(&sp18, f32 *, 8);
            temp_r9_6 = *temp_r28;
            M2C_FIELD(temp_r9_6, M2C_UNK (**)(f32 *, void *, void *), 0x3C)(&sp18, temp_r28 + M2C_FIELD(temp_r9_6, s16 *, 0x38), temp_r26);
            temp_r11_4 = arg0 + 0x5F4;
            M2C_FIELD(arg0, f32 *, 0x5F4) = sp18;
            M2C_FIELD(temp_r11_4, f32 *, 4) = (f32) M2C_FIELD(&sp18, f32 *, 4);
            M2C_FIELD(temp_r11_4, f32 *, 8) = (f32) M2C_FIELD(&sp18, f32 *, 8);
            temp_r9_7 = *temp_r28;
            M2C_FIELD(temp_r9_7, M2C_UNK (**)(f32 *, void *, f32 *), 0x54)(&sp18, temp_r28 + M2C_FIELD(temp_r9_7, s16 *, 0x50), temp_r27);
            temp_r11_5 = arg0 + 0x5E8;
            M2C_FIELD(arg0, f32 *, 0x5E8) = sp18;
            M2C_FIELD(temp_r11_5, f32 *, 4) = (f32) M2C_FIELD(&sp18, f32 *, 4);
            M2C_FIELD(temp_r11_5, f32 *, 8) = (f32) M2C_FIELD(&sp18, f32 *, 8);
            temp_r9_8 = *temp_r28;
            M2C_FIELD(temp_r9_8, M2C_UNK (**)(f32 *, void *, void *), 0x4C)(&sp18, temp_r28 + M2C_FIELD(temp_r9_8, s16 *, 0x48), temp_r26);
            sp8 = sp18;
            M2C_FIELD(&sp8, f32 *, 8) = (f32) M2C_FIELD(&sp18, f32 *, 8);
            M2C_FIELD(&sp8, f32 *, 4) = (f32) M2C_FIELD(&sp18, f32 *, 4);
            temp_r9_9 = M2C_FIELD(arg0, void **, 0);
            temp_r9_10 = temp_r9_9 + 0x7A0;
            sp18 = M2C_FIELD(temp_r9_9, f32 *, 0x7A0) - sp8;
            sp1C = M2C_FIELD(temp_r9_10, f32 *, 4) - M2C_FIELD(&sp8, f32 *, 4);
            sp20 = M2C_FIELD(temp_r9_10, f32 *, 8) - M2C_FIELD(&sp8, f32 *, 8);
            sp8 = sp18;
            M2C_FIELD(&sp8, f32 *, 4) = (f32) M2C_FIELD(&sp18, f32 *, 4);
            M2C_FIELD(&sp8, f32 *, 8) = (f32) M2C_FIELD(&sp18, f32 *, 8);
            temp_f9 = M2C_FIELD(temp_r27, f32 *, 8);
            temp_f11 = M2C_FIELD(arg0, f32 *, 0x59C);
            temp_f10 = M2C_FIELD(temp_r27, f32 *, 4);
            sp3C = M2C_FIELD(&sp8, f32 *, 4) * temp_f10;
            temp_f0_2 = sp8 * temp_f11;
            sp40 = M2C_FIELD(&sp8, f32 *, 8) * temp_f9;
            sp38 = temp_f0_2;
            temp_f0_3 = temp_f0_2 + M2C_FIELD(&sp38, f32 *, 4) + M2C_FIELD(&sp38, f32 *, 8);
            temp_f11_2 = temp_f11 * temp_f0_3;
            sp28 = temp_f11_2;
            temp_f9_2 = temp_f9 * temp_f0_3;
            temp_f10_2 = temp_f10 * temp_f0_3;
            sp30 = temp_f9_2;
            sp2C = temp_f10_2;
            sp38 = sp8 - temp_f11_2;
            sp3C = M2C_FIELD(&sp8, f32 *, 4) - temp_f10_2;
            sp40 = M2C_FIELD(&sp8, f32 *, 8) - temp_f9_2;
            sp8 = sp38;
            M2C_FIELD(&sp8, f32 *, 4) = sp3C;
            M2C_FIELD(&sp8, f32 *, 8) = sp40;
            sp18 = sp38;
            sp20 = sp40;
            sp1C = sp3C;
            temp_r9_11 = *temp_r28;
            M2C_FIELD(temp_r9_11, M2C_UNK (**)(f32 *, void *), 0x54)(&sp18, temp_r28 + M2C_FIELD(temp_r9_11, s16 *, 0x50));
            temp_r11_6 = arg0 + 0x600;
            M2C_FIELD(temp_r11_6, f32 *, 8) = (f32) M2C_FIELD(&sp18, f32 *, 8);
            M2C_FIELD(arg0, f32 *, 0x600) = sp18;
            M2C_FIELD(temp_r11_6, f32 *, 4) = (f32) M2C_FIELD(&sp18, f32 *, 4);
        } else {
            temp_r11_7 = M2C_FIELD(arg0, void **, 0);
            temp_r10_3 = arg0 + 0x59C;
            temp_r9_12 = temp_r11_7 + 0x7A0;
            temp_r6 = arg0 + 0x600;
            temp_f9_3 = M2C_FIELD(arg0, f32 *, 0x59C);
            temp_r5 = arg0 + 0x5E8;
            sp2C = M2C_FIELD(temp_r9_12, f32 *, 4) * M2C_FIELD(temp_r10_3, f32 *, 4);
            tmp_7A0 = M2C_FIELD(temp_r11_7, f32 *, 0x7A0);
            temp_f0_4 = tmp_7A0 * temp_f9_3;
            sp30 = M2C_FIELD(temp_r9_12, f32 *, 8) * M2C_FIELD(temp_r10_3, f32 *, 8);
            sp28 = temp_f0_4;
            temp_f0_5 = temp_f0_4 + M2C_FIELD(&sp28, f32 *, 4) + M2C_FIELD(&sp28, f32 *, 8);
            temp_f9_4 = temp_f9_3 * temp_f0_5;
            temp_f11_3 = M2C_FIELD(temp_r10_3, f32 *, 8) * temp_f0_5;
            sp18 = temp_f9_4;
            temp_f10_3 = M2C_FIELD(temp_r10_3, f32 *, 4) * temp_f0_5;
            sp20 = temp_f11_3;
            sp1C = temp_f10_3;
            sp8 = tmp_7A0 - temp_f9_4;
            sp10 = M2C_FIELD(temp_r9_12, f32 *, 8) - temp_f11_3;
            spC = M2C_FIELD(temp_r9_12, f32 *, 4) - temp_f10_3;
            M2C_FIELD(arg0, f32 *, 0x600) = sp8;
            M2C_FIELD(temp_r6, f32 *, 8) = (f32) M2C_FIELD(&sp8, f32 *, 8);
            M2C_FIELD(temp_r6, f32 *, 4) = (f32) M2C_FIELD(&sp8, f32 *, 4);
            M2C_FIELD(arg0, f32 *, 0x5E8) = (f32) M2C_FIELD(arg0, f32 *, 0x59C);
            M2C_FIELD(temp_r5, f32 *, 4) = (f32) M2C_FIELD(temp_r10_3, f32 *, 4);
            M2C_FIELD(temp_r5, f32 *, 8) = (f32) M2C_FIELD(temp_r10_3, f32 *, 8);
        }
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x584) != 0) {
        M2C_FIELD(arg0, s32 *, 0x554) = 5;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x588) != 0) {
        M2C_FIELD(arg0, s32 *, 0x564) = 5;
    }
}
