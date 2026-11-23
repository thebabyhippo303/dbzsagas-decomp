/* AvatarControls__ProcessRecoveryAndFlightInput @ 0x800A2C8C (size: 0x288, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 AIBoss__IsQuickRecoveryBlocked(void *);
s32 Avatar__CanAffordItemImpl(void *, f32);
void Avatar__SetAnimScriptVarIntImpl(void *, s32, s32, s32);
s32 Avatar__GetInputState(void *);
void Avatar__StartFlyingImpl(void *, f32);
void Avatar__StopFlyingImpl(void *);
int Avatar__StartAnimationImpl(void *, unsigned short, int, int, int, int);
void fn_800A5750(void *);
M2C_UNK AvatarControls__GetActionState(s32, s32, s32);
M2C_UNK fn_800A3D60(s32);
extern M2C_UNK lbl_8031E4A8 __attribute__((section(".data")));
extern M2C_UNK lbl_803201D0 __attribute__((section(".data")));
extern f32 lbl_803201E0 __attribute__((section(".data")));
extern f32 lbl_803201E4 __attribute__((section(".data")));
extern f32 lbl_803201E8 __attribute__((section(".data")));
extern void *lbl_803DC3C0;

void AvatarControls__ProcessRecoveryAndFlightInput(void *arg0) {
    union { M2C_UNK value; unsigned char bytes[72]; } sp8;
    M2C_UNK *var_r4;
    M2C_UNK *spp;
    s32 temp_r0;
    s32 temp_r11;
    s32 var_r11;
    s32 var_r11_2;
    s32 var_r5;
    void *temp_r10;
    void *temp_r11_2;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;

    temp_r3 = M2C_FIELD(arg0, void **, 0);
    if ((s16) M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x84), void **, 0xF0), s16 *, 0xA) != 0x900) {
        M2C_FIELD(arg0, s32 *, 0x198) = 1;
        temp_r0 = M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x84), void **, 0xF0), s16 *, 0xA) & 0xFF00;
        if (temp_r0 == 0x600 || temp_r0 == 0xE00) {
            var_r5 = 2;
            var_r4 = &lbl_803201D0;
            Avatar__SetAnimScriptVarIntImpl(M2C_FIELD(arg0, void **, 0), (s32) var_r4, var_r5, 0);
            return;
        }
        if (temp_r0 == 0x300) {
            var_r11 = 0;
            if ((s32) M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x159C), s32 *, 0xF0C) != 0) {
                var_r11 = 1;
            }
            if ((var_r11 != 0) && (AIBoss__IsQuickRecoveryBlocked(temp_r3) == 0) && (Avatar__CanAffordItemImpl(M2C_FIELD(arg0, void **, 0), M2C_FIELD(lbl_803DC3C0, f32 *, 0x208C)) != 0)) {
                var_r4 = &lbl_8031E4A8;
                var_r5 = 1;
                Avatar__SetAnimScriptVarIntImpl(M2C_FIELD(arg0, void **, 0), (s32) var_r4, var_r5, 0);
                return;
            }
        }
        {
            if (AvatarControls__GetActionState(Avatar__GetInputState(M2C_FIELD(arg0, void **, 0)), 3, 1) != 0) {
                temp_r3_2 = M2C_FIELD(arg0, void **, 0);
                if ((s16) M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_r3_2, void **, 0x84), void **, 0xF4), s16 *, 0xA) == 0x500) {
                    M2C_FIELD(arg0, s32 *, 0x18C) = 1;
                    Avatar__StartAnimationImpl(temp_r3_2, 0x600U, 1, 0, 1, 1);
                    M2C_FIELD(M2C_FIELD(arg0, void **, 0), f32 *, 0x2AC) = (f32) lbl_803201E0;
                    fn_800A5750(arg0);
                    return;
                }
            }
            temp_r10 = M2C_FIELD(arg0, void **, 0);
            temp_r9 = M2C_FIELD(temp_r10, void **, 0x84);
            temp_r11 = M2C_FIELD(temp_r9, s32 *, 0x104) & 0x1000;
            if (0 == temp_r11) {
                if ((s16) M2C_FIELD(M2C_FIELD(temp_r9, void **, 0xF4), s16 *, 0xA) == 0x100) {
                    spp = (M2C_UNK *)sp8.bytes;
                    M2C_FIELD(spp, s32 *, 4) = temp_r11;
                    temp_r11_2 = M2C_FIELD(temp_r10, void **, 0x7BC);
                    temp_r9_2 = M2C_FIELD(temp_r11_2, void **, 4);
                    M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, M2C_UNK *), 0x14)(temp_r11_2 + M2C_FIELD(temp_r9_2, s16 *, 0x10), spp);
                    temp_r3_3 = M2C_FIELD(arg0, void **, 0x7C);
                    if (((s32) M2C_FIELD(temp_r3_3, s32 *, 0x57C) == 0) && ((s32) M2C_FIELD(temp_r3_3, s32 *, 0x58C) == 0) && ((s16) M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x84), void **, 0xF0), s16 *, 0xA) == 0x200)) {
                        Avatar__StartFlyingImpl(temp_r3_3, lbl_803201E4);
                        Avatar__StartAnimationImpl(M2C_FIELD(arg0, void **, 0), 0x500U, 1, 1, 0, 1);
                        return;
                    }
                    if (((s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x7C), s32 *, 0x57C) != 0) && ((s32) M2C_FIELD(((M2C_UNK *)sp8.bytes), u8 *, 0x22) != (s32) M2C_FIELD(lbl_803DC3C0, s32 *, 0x2144))) {
                        M2C_FIELD(M2C_FIELD(arg0, void **, 0), f32 *, 0x6C) = (f32) lbl_803201E8;
                        Avatar__StopFlyingImpl(M2C_FIELD(arg0, void **, 0x7C));
                        return;
                    }
                    goto block_24;
                }
block_24:
                temp_r9_3 = M2C_FIELD(arg0, void **, 0x7C);
                var_r11_2 = 0;
                if (((s32) M2C_FIELD(temp_r9_3, s32 *, 0x58C) != 0) && ((s32) M2C_FIELD(temp_r9_3, s32 *, 0x5B8) != 0)) {
                    var_r11_2 = 1;
                }
                if ((var_r11_2 == 0) && ((s32) (M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 0x84), void **, 0xF0), s16 *, 0xA) & 0xFF00) == 0x100)) {
                    fn_800A3D60((s32) arg0);
                }
            }
        }
    }
}
