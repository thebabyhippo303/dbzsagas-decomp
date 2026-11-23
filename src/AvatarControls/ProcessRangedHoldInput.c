/* AvatarControls__ProcessRangedHoldInput @ 0x800A2F74 (size: 0x2E8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 Avatar__GetInputState(void *);
s32 Avatar__GetAnimScriptVarInt(void *, void *, void *);
void Avatar__SetAnimScriptVarIntImpl(void *, s32, s32, s32);
f32 Avatar__CanAffordItemImpl(void *, f32);
int Avatar__StartAnimationImpl(void *, unsigned short, int, int, int, int);
M2C_UNK AvatarControls__GetActionState(M2C_UNK, M2C_UNK, M2C_UNK);
extern M2C_UNK lbl_8031F438 __attribute__((section(".data")));
extern M2C_UNK lbl_8031F4B4 __attribute__((section(".data")));
extern M2C_UNK lbl_8031F4C0 __attribute__((section(".data")));
extern M2C_UNK lbl_803201D0 __attribute__((section(".data")));
extern M2C_UNK lbl_803201EC __attribute__((section(".data")));
extern f32 lbl_803201FC __attribute__((section(".data")));
extern void *lbl_803DC3C0;

void AvatarControls__ProcessRangedHoldInput(char *arg0) {
    M2C_UNK *var_r4;
    s16 temp_r11_2;
    s32 temp_cr0_eq;
    s32 action_state;
    s32 temp_r0;
    s32 var_cr0_eq;
    s32 var_r10;
    s32 var_r11;
    s32 var_r11_2;
    s32 var_r5;
    s32 var_r8;
    void *temp_r10;
    void *temp_r10_2;
    void *temp_r11;
    void *temp_r11_3;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r9;
    void *temp_r9_2;

    temp_r3 = M2C_FIELD(arg0, void **, 0);
    if ((s16) M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x84), void **, 0xF0), s16 *, 0xA) != 0x900) {
        temp_r0 = Avatar__GetInputState(temp_r3);
        action_state = AvatarControls__GetActionState(temp_r0, 3, 1);
        temp_cr0_eq = Avatar__GetAnimScriptVarInt(M2C_FIELD(arg0, void **, 0), &lbl_8031F438, (void *)1) == 0;
        var_r8 = 1;
        if ((temp_cr0_eq != 0) && (action_state == 0)) {
            var_r8 = 0;
        }
        temp_r3_2 = M2C_FIELD(arg0, void **, 0);
        if (temp_cr0_eq != 0) {
            temp_r11 = M2C_FIELD(temp_r3_2, void **, 0x84);
            var_cr0_eq = (s32) (M2C_FIELD(M2C_FIELD(temp_r11, void **, 0xF0), s16 *, 0xA) & 0xFF00) == 0x300;
            if (var_cr0_eq == 0) {
                var_cr0_eq = (s32) (M2C_FIELD(M2C_FIELD(temp_r11, void **, 0xF4), s16 *, 0xA) & 0xFF00) == 0x400;
                if (var_cr0_eq != 0) {
                    var_r11 = 0;
                    if ((s32) M2C_FIELD(M2C_FIELD(temp_r3_2, void **, 0x159C), s32 *, 0xD80) != 0) {
                        var_r11 = 1;
                    }
                    var_cr0_eq = var_r11 == 0;
                    if (var_cr0_eq == 0) {
                        var_r5 = 2;
                        var_r4 = &lbl_8031F4B4;
                        goto block_24;
                    }
                    goto block_10;
                }
            }
block_10:
            if (var_cr0_eq == 0) {
                goto block_11;
            }
            goto block_25;
        }
block_11:
        temp_r10 = M2C_FIELD(temp_r3_2, void **, 0x84);
        if ((s32) (M2C_FIELD(M2C_FIELD(temp_r10, void **, 0xF0), s16 *, 0xA) & 0xFF00) != 0x300) {
            var_r11_2 = 0;
            if ((s32) M2C_FIELD(M2C_FIELD(temp_r3_2, void **, 0x159C), s32 *, 0xF54) != 0) {
                var_r11_2 = 1;
            }
            if (var_r11_2 != 0) {
                if ((var_r8 == 0) && ((s32) (M2C_FIELD(M2C_FIELD(temp_r10, void **, 0xF4), s16 *, 0xA) & 0xFF00) == 0x400) && ((temp_r9 = M2C_FIELD(arg0, void **, 0x7C), (((s32) M2C_FIELD(temp_r9, s32 *, 0x57C) == 0) == 0)) || ((s32) M2C_FIELD(temp_r9, s32 *, 0x58C) != 0))) {
                    var_r5 = 6;
                    var_r4 = &lbl_8031F4B4;
                    goto block_24;
                }
                temp_r3_3 = M2C_FIELD(arg0, void **, 0);
                if (((s32) (M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_r3_3, void **, 0x84), void **, 0xF4), s16 *, 0xA) & 0xFF00) == 0x500) && ((temp_r9_2 = M2C_FIELD(arg0, void **, 0x7C), (((s32) M2C_FIELD(temp_r9_2, s32 *, 0x57C) == 0) == 0)) || ((s32) M2C_FIELD(temp_r9_2, s32 *, 0x58C) != 0))) {
                    Avatar__StartAnimationImpl(temp_r3_3, 0xD00U, 1, 0, 1, 1);
                    var_r4 = &lbl_8031F4C0;
                    var_r5 = 1;
block_24:
                    Avatar__SetAnimScriptVarIntImpl(M2C_FIELD(arg0, void **, 0), (s32) var_r4, var_r5, 1);
                }
                goto block_36;
            }
            goto block_25;
        }
block_25:
        temp_r11_2 = M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_r3_2, void **, 0x84), void **, 0xF0), s16 *, 0xA);
        temp_r0 = temp_r11_2 & 0xFF00;
        if ((temp_r0 == 0x600) || (temp_r0 == 0xE00)) {
            Avatar__SetAnimScriptVarIntImpl(temp_r3_2, (s32) &lbl_803201D0, 3, 0);
            return;
        }
        var_r10 = 0;
        if ((s32) M2C_FIELD(M2C_FIELD(temp_r3_2, void **, 0x159C), s32 *, 0xDA4) != 0) {
            var_r10 = 1;
        }
        if ((var_r10 != 0) && ((temp_r11_2 == 0x300) || (temp_r11_2 == 0x301) || (temp_r11_2 == 0x30E)) && (Avatar__CanAffordItemImpl(M2C_FIELD(arg0, void **, 0), M2C_FIELD(lbl_803DC3C0, f32 *, 0x2090)) != 0)) {
            temp_r0 = Avatar__GetInputState(M2C_FIELD(arg0, void **, 0));
            AvatarControls__GetActionState(temp_r0, 3, 1);
            Avatar__SetAnimScriptVarIntImpl(M2C_FIELD(arg0, void **, 0), (s32) &lbl_803201EC, 1, 0);
        }
block_36:
        temp_r10_2 = M2C_FIELD(arg0, void **, 0);
        temp_r11_3 = M2C_FIELD(temp_r10_2, void **, 0x84);
        if (((s32) (M2C_FIELD(M2C_FIELD(temp_r11_3, void **, 0xF0), s16 *, 0xA) & 0xFF00) != 0x300) && ((s16) M2C_FIELD(M2C_FIELD(temp_r11_3, void **, 0xF4), s16 *, 0xA) != 0xE00)) {
            M2C_FIELD(arg0, f32 *, 0x1A0) = (f32) lbl_803201FC;
            M2C_FIELD(arg0, s32 *, 0x190) = 1;
            M2C_FIELD(temp_r10_2, f32 *, 0x2AC) = (f32) M2C_FIELD(M2C_FIELD(temp_r10_2, void **, 0x159C), f32 *, 0x14);
            Avatar__SetAnimScriptVarIntImpl(M2C_FIELD(arg0, void **, 0), (s32) &lbl_8031F4C0, 1, 1);
        }
    }
}
