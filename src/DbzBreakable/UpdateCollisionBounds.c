/* DbzBreakable__UpdateCollisionBounds @ 0x800E7774 (size: 0x650, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void DbzBreakable__DispatchEventToNumberedPieces(void *);
void fn_802B4E0C(void *, float);
extern f32 lbl_80323670 __attribute__((section(".data")));
extern f32 lbl_80323674 __attribute__((section(".data")));
extern f64 lbl_80323678 __attribute__((section(".data")));
extern f32 lbl_803A35BC __attribute__((section(".data")));

void DbzBreakable__UpdateCollisionBounds(void *arg0, f32 farg0) {
    f32 sp30;
    f32 sp2C;
    union { f32 value; unsigned char bytes[16]; } sp8;
    f32 sp20;
    f32 sp1C;
    union { f32 value; unsigned char bytes[12]; } sp18;
    union { f32 value; unsigned char bytes[12]; } sp28;
    M2C_UNK (*temp_r9_2)(void *);
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f11;
    f32 temp_f11_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f13;
    f32 temp_f13_2;
    f32 temp_f13_3;
    f32 temp_f13_4;
    f32 temp_f7;
    f32 temp_f7_2;
    f32 temp_f7_3;
    f32 temp_f8;
    f32 temp_f8_2;
    f32 temp_f8_3;
    s32 temp_r0;
    s32 temp_r0_2;
    void *temp_r10;
    void *temp_r10_2;
    void *temp_r11;
    void *temp_r11_2;
    void *temp_r11_3;
    void *temp_r11_4;
    void *temp_r11_5;
    void *temp_r29;
    void *temp_r30;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r4;
    void *temp_r4_2;
    void *temp_r7;
    void *temp_r7_2;
    void *temp_r7_3;
    void *temp_r8;
    void *temp_r8_2;
    void *temp_r9;
    void *temp_r9_3;
    void *temp_r9_4;
    void *temp_r9_5;
    void *temp_r9_6;
    void *temp_r9_7;
    void *temp_r9_8;
    void *temp_r9_9;
    void *var_r7;
    void *var_r7_2;

    sp8.value = lbl_80323670;
    M2C_FIELD(((f32 *)sp8.bytes), f32 *, 8) = (f32) lbl_80323670;
    M2C_FIELD(((f32 *)sp8.bytes), f32 *, 4) = (f32) lbl_80323670;
    if (((s32) M2C_FIELD(arg0, s32 *, 0x544) == 5) && ((s32) M2C_FIELD(arg0, s32 *, 0x548) <= 4)) {
        temp_f0 = M2C_FIELD(arg0, f32 *, 0x820) - farg0;
        M2C_FIELD(arg0, f32 *, 0x820) = temp_f0;
        if (!(temp_f0 > lbl_80323670)) {
            M2C_FIELD(arg0, s32 *, 0x544) = 4;
            M2C_FIELD(arg0, f32 *, 0x820) = (f32) lbl_80323674;
        }
    }
    temp_f0_2 = M2C_FIELD(arg0, f32 *, 0x81C) - lbl_803A35BC;
    M2C_FIELD(arg0, f32 *, 0x81C) = temp_f0_2;
    if (temp_f0_2 != lbl_80323670) {
        M2C_FIELD(arg0, f32 *, 0x81C) = (f32) lbl_80323670;
    }
    temp_r4 = M2C_FIELD(arg0, void **, 0x84);
    if (M2C_FIELD(temp_r4, u8 *, 1) & 0x20) {
        temp_r3 = M2C_FIELD(temp_r4, void **, 0x78);
        temp_r9 = M2C_FIELD(temp_r3, void **, 0);
        temp_r9_2 = M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK), 0x24);
        temp_r9_2(temp_r3 + M2C_FIELD(temp_r9, s16 *, 0x20));
    } else {
        if (!(M2C_FIELD(temp_r4, u16 *, 2) & 4)) {
            var_r7 = M2C_FIELD(temp_r4, void **, 0x78);
        } else {
            temp_r11 = M2C_FIELD(temp_r4, void **, 0x78);
            if (!(lbl_80323670 >= M2C_FIELD(temp_r11, f32 *, 8))) {
                var_r7 = M2C_FIELD(temp_r11, void **, 0);
            } else if (!(lbl_80323670 >= M2C_FIELD(temp_r11, f32 *, 0xC))) {
                var_r7 = M2C_FIELD(temp_r11, void **, 4);
            } else {
                var_r7 = M2C_BITWISE(void *, M2C_FIELD(temp_r11, f32 *, 8));
            }
        }
        if (var_r7 != NULL) {
            temp_r9_3 = temp_r4 + 0x10;
            temp_r11_2 = var_r7 + 4;
            temp_f8 = M2C_FIELD(temp_r11_2, f32 *, 4);
            temp_r10 = temp_r4 + 0x50;
            temp_r8 = temp_r4 + 0x60;
            temp_f7 = M2C_FIELD(var_r7, f32 *, 4);
            temp_f0_3 = M2C_FIELD(temp_r11_2, f32 *, 8);
            temp_r7 = temp_r4 + 0x6C;
            sp18.value = (temp_f0_3 * M2C_FIELD(temp_r9_3, f32 *, 0x20)) + ((temp_f7 * M2C_FIELD(temp_r4, f32 *, 0x10)) + (temp_f8 * M2C_FIELD(temp_r9_3, f32 *, 0x10))) + M2C_FIELD(temp_r9_3, f32 *, 0x30);
            sp20 = (temp_f0_3 * M2C_FIELD(temp_r9_3, f32 *, 0x28)) + ((temp_f7 * M2C_FIELD(temp_r9_3, f32 *, 8)) + (temp_f8 * M2C_FIELD(temp_r9_3, f32 *, 0x18))) + M2C_FIELD(temp_r9_3, f32 *, 0x38);
            sp1C = (temp_f0_3 * M2C_FIELD(temp_r9_3, f32 *, 0x24)) + ((temp_f7 * M2C_FIELD(temp_r9_3, f32 *, 4)) + (temp_f8 * M2C_FIELD(temp_r9_3, f32 *, 0x14))) + M2C_FIELD(temp_r9_3, f32 *, 0x34);
            M2C_FIELD(temp_r4, f32 *, 0x50) = sp18.value;
            M2C_FIELD(temp_r10, f32 *, 4) = sp1C;
            M2C_FIELD(temp_r10, f32 *, 8) = sp20;
            temp_f13 = M2C_FIELD(temp_r4, f32 *, 0x5C);
            sp1C = M2C_FIELD(temp_r10, f32 *, 4) - temp_f13;
            sp18.value = M2C_FIELD(temp_r4, f32 *, 0x50) - temp_f13;
            sp20 = M2C_FIELD(temp_r10, f32 *, 8) - temp_f13;
            M2C_FIELD(temp_r4, f32 *, 0x60) = sp18.value;
            M2C_FIELD(temp_r8, f32 *, 8) = sp20;
            M2C_FIELD(temp_r8, f32 *, 4) = sp1C;
            temp_f11 = M2C_FIELD(temp_r4, f32 *, 0x5C);
            sp20 = M2C_FIELD(temp_r10, f32 *, 8) + temp_f11;
            sp18.value = M2C_FIELD(temp_r4, f32 *, 0x50) + temp_f11;
            sp1C = M2C_FIELD(temp_r10, f32 *, 4) + temp_f11;
            M2C_FIELD(temp_r4, f32 *, 0x6C) = sp18.value;
            M2C_FIELD(temp_r7, f32 *, 8) = sp20;
            M2C_FIELD(temp_r7, f32 *, 4) = sp1C;
        }
    }
    temp_r9_4 = M2C_FIELD(arg0, void **, 0x8C4);
    temp_r29 = arg0 + 0x38;
    temp_r30 = arg0 + 0x44;
    if (temp_r9_4 != NULL) {
        temp_r9_5 = temp_r9_4 + 0x10;
        M2C_FIELD(temp_r9_5, f32 *, 0x30) = (f32) M2C_FIELD(arg0, f32 *, 0x38);
        M2C_FIELD(temp_r9_5, f32 *, 0x34) = (f32) M2C_FIELD(temp_r29, f32 *, 4);
        M2C_FIELD(temp_r9_5, f32 *, 0x38) = (f32) M2C_FIELD(temp_r29, f32 *, 8);
        temp_r11_3 = M2C_FIELD(arg0, void **, 0x8C4);
        temp_r9_6 = temp_r11_3 + 0x10;
        M2C_FIELD(temp_r11_3, f32 *, 0x10) = (f32) M2C_FIELD(arg0, f32 *, 0x44);
        M2C_FIELD(temp_r9_6, f32 *, 4) = (f32) M2C_FIELD(temp_r30, f32 *, 4);
        M2C_FIELD(temp_r9_6, f32 *, 8) = (f32) M2C_FIELD(temp_r30, f32 *, 8);
        M2C_FIELD(temp_r9_6, f32 *, 0x10) = (f32) M2C_FIELD(temp_r30, f32 *, 0xC);
        M2C_FIELD(temp_r9_6, f32 *, 0x14) = (f32) M2C_FIELD(temp_r30, f32 *, 0x10);
        M2C_FIELD(temp_r9_6, f32 *, 0x18) = (f32) M2C_FIELD(temp_r30, f32 *, 0x14);
        M2C_FIELD(temp_r9_6, f32 *, 0x20) = (f32) M2C_FIELD(temp_r30, f32 *, 0x18);
        M2C_FIELD(temp_r9_6, f32 *, 0x24) = (f32) M2C_FIELD(temp_r30, f32 *, 0x1C);
        M2C_FIELD(temp_r9_6, f32 *, 0x28) = (f32) M2C_FIELD(temp_r30, f32 *, 0x20);
        temp_r4_2 = M2C_FIELD(arg0, void **, 0x8C4);
        if (M2C_FIELD(temp_r4_2, u8 *, 1) & 0x20) {
            temp_r3_2 = M2C_FIELD(temp_r4_2, void **, 0x78);
            temp_r9_7 = M2C_FIELD(temp_r3_2, void **, 0);
            M2C_FIELD(temp_r9_7, M2C_UNK (**)(void *), 0x24)(temp_r3_2 + M2C_FIELD(temp_r9_7, s16 *, 0x20));
        } else {
            if (!(M2C_FIELD(temp_r4_2, u16 *, 2) & 4)) {
                var_r7_2 = M2C_FIELD(temp_r4_2, void **, 0x78);
            } else {
                temp_r11_4 = M2C_FIELD(temp_r4_2, void **, 0x78);
                if (!(lbl_80323670 >= M2C_FIELD(temp_r11_4, f32 *, 8))) {
                    var_r7_2 = M2C_FIELD(temp_r11_4, void **, 0);
                } else if (!(lbl_80323670 >= M2C_FIELD(temp_r11_4, f32 *, 0xC))) {
                    var_r7_2 = M2C_FIELD(temp_r11_4, void **, 4);
                } else {
                    var_r7_2 = M2C_BITWISE(void *, M2C_FIELD(temp_r11_4, f32 *, 8));
                }
            }
            if (var_r7_2 != NULL) {
                temp_r9_8 = temp_r4_2 + 0x10;
                temp_r11_5 = var_r7_2 + 4;
                temp_f8_2 = M2C_FIELD(temp_r11_5, f32 *, 4);
                temp_r10_2 = temp_r4_2 + 0x50;
                temp_r8_2 = temp_r4_2 + 0x60;
                temp_f7_2 = M2C_FIELD(var_r7_2, f32 *, 4);
                temp_f0_4 = M2C_FIELD(temp_r11_5, f32 *, 8);
                temp_r7_2 = temp_r4_2 + 0x6C;
                sp18.value = (temp_f0_4 * M2C_FIELD(temp_r9_8, f32 *, 0x20)) + ((temp_f7_2 * M2C_FIELD(temp_r4_2, f32 *, 0x10)) + (temp_f8_2 * M2C_FIELD(temp_r9_8, f32 *, 0x10))) + M2C_FIELD(temp_r9_8, f32 *, 0x30);
                sp20 = (temp_f0_4 * M2C_FIELD(temp_r9_8, f32 *, 0x28)) + ((temp_f7_2 * M2C_FIELD(temp_r9_8, f32 *, 8)) + (temp_f8_2 * M2C_FIELD(temp_r9_8, f32 *, 0x18))) + M2C_FIELD(temp_r9_8, f32 *, 0x38);
                sp1C = (temp_f0_4 * M2C_FIELD(temp_r9_8, f32 *, 0x24)) + ((temp_f7_2 * M2C_FIELD(temp_r9_8, f32 *, 4)) + (temp_f8_2 * M2C_FIELD(temp_r9_8, f32 *, 0x14))) + M2C_FIELD(temp_r9_8, f32 *, 0x34);
                M2C_FIELD(temp_r4_2, f32 *, 0x50) = sp18.value;
                M2C_FIELD(temp_r10_2, f32 *, 4) = sp1C;
                M2C_FIELD(temp_r10_2, f32 *, 8) = sp20;
                temp_f13_2 = M2C_FIELD(temp_r4_2, f32 *, 0x5C);
                sp1C = M2C_FIELD(temp_r10_2, f32 *, 4) - temp_f13_2;
                sp18.value = M2C_FIELD(temp_r4_2, f32 *, 0x50) - temp_f13_2;
                sp20 = M2C_FIELD(temp_r10_2, f32 *, 8) - temp_f13_2;
                M2C_FIELD(temp_r4_2, f32 *, 0x60) = sp18.value;
                M2C_FIELD(temp_r8_2, f32 *, 8) = sp20;
                M2C_FIELD(temp_r8_2, f32 *, 4) = sp1C;
                temp_f11_2 = M2C_FIELD(temp_r4_2, f32 *, 0x5C);
                sp18.value = M2C_FIELD(temp_r4_2, f32 *, 0x50) + temp_f11_2;
                sp20 = M2C_FIELD(temp_r10_2, f32 *, 8) + temp_f11_2;
                sp1C = M2C_FIELD(temp_r10_2, f32 *, 4) + temp_f11_2;
                M2C_FIELD(temp_r4_2, f32 *, 0x6C) = sp18.value;
                M2C_FIELD(temp_r7_2, f32 *, 8) = sp20;
                M2C_FIELD(temp_r7_2, f32 *, 4) = sp1C;
            }
        }
    }
    temp_f12 = M2C_FIELD(arg0, f32 *, 0x864);
    if (!(temp_f12 <= (f32) lbl_80323678)) {
        M2C_FIELD(arg0, f32 *, 0x864) = (f32) (temp_f12 - farg0);
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x548);
    if ((temp_r0 > 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x598) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x858) == 0)) {
        temp_f13_3 = M2C_FIELD(arg0, f32 *, 0x7D0);
        if (!(temp_f13_3 <= lbl_80323670)) {
            M2C_FIELD(arg0, f32 *, 0x7D0) = (f32) (temp_f13_3 - farg0);
        } else {
            goto block_40;
        }
    } else if (temp_r0 == 5) {
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x598);
        if ((temp_r0_2 != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x858) == 3)) {
            temp_f13_4 = M2C_FIELD(arg0, f32 *, 0x7D4);
            if (!(temp_f13_4 > lbl_80323670)) {
block_40:
                DbzBreakable__DispatchEventToNumberedPieces(arg0);
            } else {
                M2C_FIELD(arg0, f32 *, 0x7D4) = (f32) (temp_f13_4 - farg0);
            }
        } else if ((temp_r0 == 5) && (temp_r0_2 != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x858) == 2)) {
            DbzBreakable__DispatchEventToNumberedPieces(arg0);
        }
    }
    temp_r9_9 = arg0 + 0x840;
    temp_f7_3 = M2C_FIELD(temp_r9_9, f32 *, 4);
    temp_f8_3 = M2C_FIELD(arg0, f32 *, 0x840);
    temp_f12_2 = M2C_FIELD(temp_r9_9, f32 *, 8);
    temp_r7_3 = arg0 + 0x84C;
    sp28.value = (temp_f12_2 * M2C_FIELD(temp_r30, f32 *, 0x18)) + ((temp_f8_3 * M2C_FIELD(arg0, f32 *, 0x44)) + (temp_f7_3 * M2C_FIELD(temp_r30, f32 *, 0xC)));
    sp30 = (temp_f12_2 * M2C_FIELD(temp_r30, f32 *, 0x20)) + ((temp_f8_3 * M2C_FIELD(temp_r30, f32 *, 8)) + (temp_f7_3 * M2C_FIELD(temp_r30, f32 *, 0x14)));
    sp2C = (temp_f12_2 * M2C_FIELD(temp_r30, f32 *, 0x1C)) + ((temp_f8_3 * M2C_FIELD(temp_r30, f32 *, 4)) + (temp_f7_3 * M2C_FIELD(temp_r30, f32 *, 0x10)));
    sp18.value = sp28.value;
    M2C_FIELD(((f32 *)sp18.bytes), s32 *, 8) = (s32) M2C_FIELD(((f32 *)sp28.bytes), s32 *, 8);
    M2C_FIELD(((f32 *)sp18.bytes), s32 *, 4) = (s32) M2C_FIELD(((f32 *)sp28.bytes), s32 *, 4);
    sp28.value = sp18.value + M2C_FIELD(arg0, f32 *, 0x38);
    sp2C = sp1C + M2C_FIELD(temp_r29, f32 *, 4);
    sp30 = sp20 + M2C_FIELD(temp_r29, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x84C) = sp28.value;
    M2C_FIELD(temp_r7_3, s32 *, 8) = (s32) M2C_FIELD(((f32 *)sp28.bytes), s32 *, 8);
    M2C_FIELD(temp_r7_3, s32 *, 4) = (s32) M2C_FIELD(((f32 *)sp28.bytes), s32 *, 4);
    fn_802B4E0C(arg0, farg0);
}
