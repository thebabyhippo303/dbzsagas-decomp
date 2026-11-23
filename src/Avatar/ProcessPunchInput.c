/* Avatar__ProcessPunchInput @ 0x800A3864 (size: 0x2FC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

int Avatar__GetAnimScriptVarInt(void *, void *, void *);
s32 Avatar__GetInputState(void *);
s32 Avatar__SetAnimScriptVarIntImpl(void *, char *, int, int);
int Avatar__StartAnimationImpl(void *, unsigned short, int, int, int, int);
void fn_800A5750(void *);
M2C_UNK AvatarControls__GetActionState(M2C_UNK, M2C_UNK); /* extern */
extern s8 lbl_803201D0 __attribute__((section(".data")));
extern s8 lbl_80320220 __attribute__((section(".data")));
extern f32 lbl_8032022C __attribute__((section(".data")));

void Avatar__ProcessPunchInput(void *arg0) {
    char *p_80;
    char *p_70;
    s16 temp_r0;
    s16 temp_r0_3;
    s16 temp_r0_4;
    s32 temp_cr0_eq;
    s32 var_cr0_eq;
    s32 var_r10;
    s32 var_r8;
    s32 var_r11_2;
    s32 var_r5;
    s32 var_r11;
    s32 var_r9;
    void *temp_r11;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r9;

    temp_r3 = M2C_FIELD(arg0, void **, 0);
    temp_r0 = M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x84), void **, 0xF0), s16 *, 0xA);
    if (temp_r0 != 0x900) {
        switch ((temp_r0 & 0xFF00)) {                        /* irregular */
        case 0x300:
            break;
        case 0x600:
        case 0xE00:
            Avatar__SetAnimScriptVarIntImpl(temp_r3, &lbl_803201D0, 6, 0);
            break;
        default:
            Avatar__GetInputState(temp_r3);
            AvatarControls__GetActionState(3, 1);
            temp_cr0_eq = Avatar__GetAnimScriptVarInt(M2C_FIELD(arg0, void **, 0), (void *)0x8031F438, (void *)1) == 0;
            var_r8 = 1;
            if (temp_cr0_eq != 0) {
                var_r8 = 0;
            }
            M2C_ERROR(/* "cmpwi $cr7, $r30, 0x0" is not supported, the first arg is not $cr0 */);
            if (temp_cr0_eq == 0) {
                temp_r9 = M2C_FIELD(arg0, void **, 0);
                var_r10 = 0;
                temp_r11 = M2C_FIELD(temp_r9, void **, 0x159C) + 0x24;
                if ((s32) M2C_FIELD(temp_r11, s32 *, 0xCF0) != 0) {
                    var_r10 = 1;
                }
                if (var_r10 == 0) {
                    var_r9 = 0;
                    if ((s32) M2C_FIELD(temp_r11, s32 *, 0xD38) != 0) {
                        var_r9 = 1;
                    }
                    var_cr0_eq = 1;
                    if (var_r9 != 0) {
                        var_cr0_eq = 0;
                    }
                    if (var_cr0_eq == 0) {
                        goto block_14;
                    }
                    goto block_22;
                }
block_14:
                p_80 = (char *)temp_r9 + 0x80;
                temp_r0_3 = M2C_FIELD(M2C_FIELD(M2C_FIELD(p_80, void **, 0x4), void **, 0xF4), s16 *, 0xA);
                if ((temp_r0_3 == 0x100) || (var_cr0_eq = (s32) (temp_r0_3 & 0xFF00) == 0x500, (var_cr0_eq != 0))) {
                    p_70 = (char *)arg0 + 0x70;
                    if ((s32) M2C_FIELD(M2C_FIELD(p_70, void **, 0xc), s32 *, 0x58C) != 0) {
                        var_r11 = 0;
                        if ((s32) M2C_FIELD(M2C_FIELD(temp_r9, void **, 0x159C), s32 *, 0xD5C) != 0) {
                            var_r11 = 1;
                        }
                        if (var_r11 != 0) {
                            Avatar__StartAnimationImpl(temp_r9, 0x700U, 1, 0, 1, 1);
                        } else {
                            Avatar__StartAnimationImpl(temp_r9, 0xB00U, 1, 0, 1, 1);
                        }
                    }
                    goto block_43;
                }
block_22:
                if ((var_cr0_eq == 0) && (var_r8 == 0)) {
                    var_r11_2 = 0;
                    temp_r11 = M2C_FIELD(temp_r9, void **, 0x159C) + 0x24;
                    if ((s32) M2C_FIELD(temp_r11, s32 *, 0xCF0) != 0) {
                        var_r11_2 = 1;
                    }
                    if (var_r11_2 == 0) {
                        if (((s32) M2C_FIELD(temp_r11, s32 *, 0xD38) != 0) != 0) {
                            goto block_30;
                        }
                        goto block_37;
                    }
block_30:
                    if ((s32) (M2C_FIELD(M2C_FIELD(M2C_FIELD(p_80, void **, 0x4), void **, 0xF4), s16 *, 0xA) & 0xFF00) == 0x400) {
                        if ((s32) M2C_FIELD(M2C_FIELD(p_70, void **, 0xc), s32 *, 0x58C) != 0) {
                            var_r11 = 0;
                            if (0 != (s32) M2C_FIELD(M2C_FIELD(temp_r9, void **, 0x159C), s32 *, 0xD5C)) {
                                var_r11 = 1;
                            }
                            if (var_r11 != 0) {
                                var_r5 = 5;
                                goto block_42;
                            }
                            Avatar__SetAnimScriptVarIntImpl(temp_r9, (s8 *)0x8031F4B4, 3, 1);
                        }
                        goto block_43;
                    }
                    goto block_37;
                }
                goto block_37;
            }
block_37:
            temp_r3_2 = M2C_FIELD(arg0, void **, 0);
            temp_r0_4 = M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_r3_2, void **, 0x84), void **, 0xF4), s16 *, 0xA);
            if (temp_r0_4 == 0x100) {
                if (M2C_FIELD(temp_r3_2, f32 *, 0x2DC) == lbl_8032022C) {
                    Avatar__StartAnimationImpl(temp_r3_2, 0x400U, 1, 0, 1, 1);
                } else {
                    Avatar__StartAnimationImpl(temp_r3_2, 0xF00U, 1, 0, 1, 1);
                }
                var_r5 = 0;
block_42:
                Avatar__SetAnimScriptVarIntImpl(M2C_FIELD(arg0, void **, 0), (s8 *)0x8031F4B4, var_r5, 1);
block_43:
                fn_800A5750(arg0);
            } else if ((s32) (temp_r0_4 & 0xFF00) == 0x400) {
                Avatar__SetAnimScriptVarIntImpl(temp_r3_2, (s8 *)0x8031F4B4, 0, 1);
            }
            break;
        }
        Avatar__SetAnimScriptVarIntImpl(M2C_FIELD(arg0, void **, 0), &lbl_80320220, 1, 1);
    }
}
