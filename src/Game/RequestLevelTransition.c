/* Game__RequestLevelTransition @ 0x8001E704 (size: 0x24C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 Game__IsPendulumModeImpl(s32);
s32 Game__GetConfiguredPlayerCount(void *);
void * Fade__IsFadingOut(s32);
s32 PersistentData__SetGlobalImpl(void *, void *, s32);
void fn_801945FC(void *, float);
void * fn_801D6674(void *, int);
s32 fn_801D6750(void *, u32);
M2C_UNK fn_80228D50(s32);
M2C_UNK Fade__StartOutPreset(s32, s32, s32);
extern M2C_UNK lbl_8030FC4C __attribute__((section(".data")));
extern f32 lbl_8030FDC8 __attribute__((section(".data")));
extern f32 lbl_8030FDCC __attribute__((section(".data")));
extern f32 lbl_8030FDD0;
extern f32 lbl_8030FDD4 __attribute__((section(".data")));
extern M2C_UNK lbl_8036CC5C __attribute__((section(".data")));
extern M2C_UNK lbl_803946C4 __attribute__((section(".data")));
extern M2C_UNK lbl_803A35A0;
extern s32 lbl_803DC368;
extern void *lbl_803DCC20;
extern void *lbl_803DCC74;

void Game__RequestLevelTransition(void *arg0, s32 arg1, s32 arg2) {
    f32 var_f0;
    s16 temp_r0;
    s32 temp_r10;
    s32 var_ctr;
    s32 var_ctr_2;
    u16 var_r0;
    u32 var_r31;
    void *temp_r3;
    void *temp_r9;

    if (arg1 != -1) {
        if ((s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x238), s32 *, 4) != 0) {
            M2C_FIELD(&lbl_803946C4, s32 *, 4) = arg1;
            if (Game__IsPendulumModeImpl(lbl_803DC368 + 0x17C) == 0) {
                M2C_FIELD(&lbl_803946C4, u16 *, 0x10) = (u16) M2C_FIELD(((M2C_FIELD(&lbl_803946C4, s32 *, 4) * 8) + &lbl_8036CC5C), u16 *, 2);
                if (Game__GetConfiguredPlayerCount(arg0) == 2) {
                    temp_r10 = M2C_FIELD(&lbl_803946C4, s32 *, 4) * 8;
                    temp_r0 = M2C_FIELD((&lbl_8036CC5C + temp_r10), s16 *, 6);
                    M2C_FIELD(&lbl_803946C4, s16 *, 0x12) = temp_r0;
                    if (temp_r0 == -1) {
                        var_r0 = M2C_FIELD((temp_r10 + &lbl_8036CC5C), u16 *, 2);
                        goto block_7;
                    }
                } else {
                    var_r0 = -1U;
block_7:
                    M2C_FIELD(&lbl_803946C4, s16 *, 0x12) = (s16) var_r0;
                }
            }
        }
    }
    if (arg2 == -1) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x2118) == 0) {
            M2C_FIELD(arg0, s32 *, 0x2114) = 1;
        }
        M2C_FIELD(arg0, s32 *, 0x28) = 1;
    } else {
        switch ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x3C)) { /* irregular */
        case 0:
            var_f0 = lbl_8030FDC8;
block_26:
            M2C_FIELD(&lbl_803A35A0, f32 *, 0x28) = var_f0;
            break;
        case 1:
            if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x40) > 0) {
                var_ctr = M2C_FIELD(&lbl_803A35A0, s32 *, 0x40);
                do {
                    M2C_FIELD(&lbl_803A35A0, f32 *, 0x28) = (f32) (2.0 * M2C_FIELD(&lbl_803A35A0, f32 *, 0x28));
                    var_ctr -= 1;
                } while (var_ctr != 0);
            }
            break;
        case 2:
            if ((s32) M2C_FIELD(&lbl_803A35A0, s32 *, 0x40) > 0) {
                var_ctr_2 = M2C_FIELD(&lbl_803A35A0, s32 *, 0x40);
                var_f0 = M2C_FIELD(&lbl_803A35A0, f32 *, 0x28);
                do {
                    var_f0 *= lbl_8030FDCC;
                    var_ctr_2 -= 1;
                } while (var_ctr_2 != 0);
                goto block_26;
            }
            break;
        }
        M2C_FIELD(&lbl_803A35A0, s32 *, 0x3C) = 0;
        M2C_FIELD(&lbl_803A35A0, f32 *, 0x28) = (f32) lbl_8030FDD0;
        M2C_FIELD(arg0, f32 *, 0x2D8) = (f32) lbl_8030FDD0;
        M2C_FIELD(arg0, f32 *, 0x2D0) = (f32) lbl_8030FDD0;
        if (Fade__IsFadingOut(0) == 0) {
            if (fn_80228D50(0) == 0) {
                Fade__StartOutPreset(arg2, 0, 0);
                fn_801945FC(lbl_803DCC20, lbl_8030FDD4);
            }
        }
        M2C_FIELD(arg0, s32 *, 0x38) = 1;
        PersistentData__SetGlobalImpl(lbl_803DC368 + 0x12C, &lbl_8030FC4C, arg2);
    }
    var_r31 = 0;
loop_35:
    if (var_r31 < (u32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x238), u32 *, 0x10)) {
        if (fn_801D6750(lbl_803DCC74, var_r31) != 0) {
            temp_r3 = fn_801D6674(lbl_803DCC74, (s32) var_r31);
            temp_r9 = M2C_FIELD(temp_r3, void **, 0x1F8);
            M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x44)(temp_r3 + M2C_FIELD(temp_r9, s16 *, 0x40));
        }
        var_r31 += 1;
        goto loop_35;
    }
}
