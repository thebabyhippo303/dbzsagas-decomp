/* Pickup__UpdateImpl @ 0x800F1724 (size: 0x44C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Actor__MarkForDeath(void *, f32);
f32 Rand__RangeFloat(f32, f32, s32);
void Floater__SetStationaryImpl(void *, s32);
void Pickup__UpdateSpin(void *);
void Sound__Play3DWithSource(s32, s32, s32);
void fn_8021CDC8(void *, void *, s32, s32, s32, s32, s32, s32, f32, f32, f32, f32);
float sqrtf(float);
M2C_UNK fn_802B611C(s32);
M2C_UNK Pickup__SpawnWeaponPickupEffects(s32, s32);
extern M2C_UNK lbl_803228F4 __attribute__((section(".data")));
extern M2C_UNK lbl_803240F0 __attribute__((section(".data")));
extern f32 lbl_80324108 __attribute__((section(".data")));
extern f32 lbl_8032410C __attribute__((section(".data")));
extern f32 lbl_80324110 __attribute__((section(".data")));
extern f32 lbl_80324114 __attribute__((section(".data")));
extern f32 lbl_803A35BC __attribute__((section(".data")));
extern M2C_UNK lbl_803ACEE4 __attribute__((section(".data")));
extern s32 lbl_803AD83C __attribute__((section(".data")));
extern M2C_UNK lbl_803DD634;

typedef struct { f32 v0, v1, v2; } mt_vec3_f32;
void Pickup__UpdateImpl(s32 arg0) {
    volatile mt_vec3_f32 sp10;
    volatile mt_vec3_f32 sp20;
    char *p_640;
    char *p_370;
    s32 spC;
    s32 sp8;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f12;
    f32 temp_f13;
    f32 temp_f13_2;
    f32 temp_f13_3;
    f32 temp_f13_4;
    f32 temp_f13_5;
    register f32 temp_f13_6;
    f32 temp_f1;
    f32 temp_f1_2;
    s32 temp_r0_2;
    u8 *temp_r3_2;
    void *temp_r0;
    void *temp_r10;
    void *temp_r11;
    void *temp_r30;
    void *temp_r3;
    void *temp_r8;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;
    void *temp_r9_5;

    fn_802B611C(arg0);
    p_640 = (char *)arg0 + 0x640;
    temp_f13 = M2C_FIELD(p_640, f32 *, 0xc);
    if (!(temp_f13 <= lbl_80324108)) {
        temp_f0 = temp_f13 - lbl_803A35BC;
        M2C_FIELD(p_640, f32 *, 0xc) = temp_f0;
        if (!(temp_f0 > lbl_80324108)) {
            temp_r3 = M2C_FIELD(arg0, void **, 0x5F4);
            if (temp_r3 != NULL) {
                temp_r3_2 = M2C_FIELD(temp_r3, u8 **, 0x10);
                if ((temp_r3_2 != NULL) && ((s32) *temp_r3_2 != 0)) {
                    spC = 0;
                    sp8 = 0;
                    fn_8021CDC8(temp_r3_2, arg0 + 0x38, 0, 0, 0, 0, 0, -1, lbl_80324108, lbl_8032410C, lbl_8032410C, lbl_8032410C);
                }
            }
            Actor__MarkForDeath((void *) arg0, lbl_80324108);
        }
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x258) != 0) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x620) != 0) {
            temp_f13_2 = M2C_FIELD(arg0, f32 *, 0x624);
            if (!(temp_f13_2 > lbl_80324108)) {
                Pickup__SpawnWeaponPickupEffects(arg0, 0);
            } else {
                M2C_FIELD(arg0, f32 *, 0x624) = (f32) (temp_f13_2 - lbl_803A35BC);
            }
        }
        temp_f13_3 = M2C_FIELD(p_640, f32 *, 0x8);
        if (!(temp_f13_3 <= lbl_80324108)) {
            M2C_FIELD(p_640, f32 *, 0x8) = (f32) (temp_f13_3 - lbl_803A35BC);
        }
        temp_f13_4 = M2C_FIELD(p_640, f32 *, 0x10);
        if (!(temp_f13_4 <= lbl_80324108)) {
            temp_f0_2 = temp_f13_4 - lbl_803A35BC;
            M2C_FIELD(p_640, f32 *, 0x10) = temp_f0_2;
            if (!(temp_f0_2 > lbl_80324108)) {
                if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x84), u16 *, 2) & 1) {
                    temp_r9 = M2C_FIELD(arg0, void **, 0x34);
                    M2C_FIELD(p_640, f32 *, 0x10) = (f32) (M2C_FIELD(p_640, f32 *, 0xc) * lbl_80324110);
                    M2C_FIELD(temp_r9, M2C_UNK (**)(s32, M2C_UNK), 0x64)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x60), 0);
                } else {
                    M2C_FIELD(p_640, f32 *, 0x10) = Rand__RangeFloat(lbl_80324114, lbl_80324110, (s32) &lbl_803DD634);
                    temp_r9_2 = M2C_FIELD(arg0, void **, 0x34);
                    M2C_FIELD(temp_r9_2, M2C_UNK (**)(s32, M2C_UNK), 0x64)(arg0 + M2C_FIELD(temp_r9_2, u16 *, 0x60), 1);
                }
            }
        }
        temp_r10 = M2C_FIELD(arg0, void **, 0x630);
        if (temp_r10 != NULL) {
            temp_r11 = temp_r10 + 0x38;
            temp_r9_3 = arg0 + 0x38;
            sp10.v2 = M2C_FIELD(temp_r9_3, f32 *, 8) - M2C_FIELD(temp_r11, f32 *, 8);
            temp_f1 = M2C_FIELD(arg0, f32 *, 0x38) - M2C_FIELD(temp_r10, f32 *, 0x38);
            sp10.v1 = M2C_FIELD(temp_r9_3, f32 *, 4) - M2C_FIELD(temp_r11, f32 *, 4);
            sp10.v0 = temp_f1;
            temp_f1_2 = temp_f1 * temp_f1;
            temp_f0_3 = sp10.v2;
            temp_f13_5 = sp10.v1;
            sp20.v0 = temp_f1_2;
            sp20.v2 = temp_f0_3 * temp_f0_3;
            sp20.v1 = temp_f13_5 * temp_f13_5;
            if (!(sqrtf(temp_f1_2 + sp20.v1 + sp20.v2) <= M2C_FIELD(arg0, f32 *, 0x634))) {
                M2C_FIELD(arg0, void **, 0x630) = NULL;
                p_370 = (char *)arg0 + 0x370;
                M2C_FIELD(p_370, void **, 0xc) = NULL;
                M2C_FIELD(arg0, void **, 0x28) = NULL;
                M2C_FIELD(p_370, void **, 0x10) = NULL;
            }
        }
        if (((s32) M2C_FIELD(arg0, s32 *, 0x614) != 0) || (((s32) M2C_FIELD(arg0, s32 *, 0x51C) != 0) && (temp_r9_4 = arg0 + 0x68, temp_f0_4 = M2C_FIELD(arg0, f32 *, 0x68), temp_f12 = M2C_FIELD(temp_r9_4, f32 *, 8), temp_f13_6 = M2C_FIELD(temp_r9_4, f32 *, 4), temp_f0_5 = temp_f0_4 * temp_f0_4, sp10.v0 = temp_f0_5, sp10.v2 = temp_f12 * temp_f12, sp10.v1 = temp_f13_6 * temp_f13_6, (((temp_f0_5 + sp10.v1 + sp10.v2) == lbl_80324108) != 0)))) {
            temp_r8 = arg0 + 0x68;
            M2C_FIELD(arg0, f32 *, 0x68) = (f32) M2C_FIELD(&lbl_803ACEE4, f32 *, 0);
            M2C_FIELD(temp_r8, s32 *, 8) = (s32) M2C_FIELD(&lbl_803ACEE4, s32 *, 8);
            M2C_FIELD(temp_r8, s32 *, 4) = (s32) M2C_FIELD(&lbl_803ACEE4, s32 *, 4);
            if (!(M2C_FIELD(M2C_FIELD(arg0, void **, 0x5F4), s32 *, 8) & 0x200)) {
                Floater__SetStationaryImpl((void *) arg0, 1);
            }
            temp_r0 = M2C_FIELD(arg0, void **, 0x630);
            if (temp_r0 == NULL) {
                M2C_FIELD(p_370, void **, 0x10) = temp_r0;
                M2C_FIELD(p_370, void **, 0xc) = temp_r0;
                M2C_FIELD(arg0, void **, 0x28) = temp_r0;
            }
        }
        if ((M2C_FIELD(M2C_FIELD(arg0, void **, 0x5F4), s32 *, 8) & 0x2000) && ((s32) M2C_FIELD(arg0, s32 *, 0x620) == 0) && ((s32) M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x84), void **, 0x94), s32 *, 0xC) == (s32) lbl_803AD83C)) {
            M2C_FIELD(arg0, f32 *, 0x628) = (f32) (M2C_FIELD(arg0, f32 *, 0x628) + lbl_803A35BC);
            Pickup__UpdateSpin((void *) arg0);
        }
        temp_r9_5 = M2C_FIELD(arg0, void **, 0x34);
        if (M2C_FIELD(temp_r9_5, s32 (**)(s32), 0x1BC)(arg0 + M2C_FIELD(temp_r9_5, s16 *, 0x1B8)) == 0) {
            temp_r0_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x5F4), s32 *, 8) & 0x200000;
            if (temp_r0_2 == 0) {
                if (!(M2C_FIELD(arg0, f32 *, 0x5A8) <= lbl_80324108) && (M2C_FIELD(arg0, f32 *, 0x62C) == lbl_80324108)) {
                    temp_r30 = arg0 + 0x38;
                    spC = temp_r0_2;
                    sp8 = temp_r0_2;
                    fn_8021CDC8(&lbl_803240F0, temp_r30, 0, 0, 0, 0, 0, -1, lbl_80324108, lbl_8032410C, lbl_8032410C, lbl_8032410C);
                    Sound__Play3DWithSource((s32) &lbl_803228F4, (s32) temp_r30, 0);
                }
                M2C_FIELD(arg0, f32 *, 0x62C) = (f32) M2C_FIELD(arg0, f32 *, 0x5A8);
            }
        }
    }
}
