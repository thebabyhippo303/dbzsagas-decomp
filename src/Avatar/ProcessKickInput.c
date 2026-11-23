/* Avatar__ProcessKickInput @ 0x800A3608 (size: 0x228, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

int Avatar__GetAnimScriptVarInt(void *, void *, void *);
s32 Avatar__GetInputState(void *);
void Avatar__SetAnimScriptVarIntImpl(void *, char *, int, int);
int Avatar__StartAnimationImpl(void *, unsigned short, int, int, int, int);
void fn_800A5750(void *);
M2C_UNK AvatarControls__GetActionState(M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK lbl_8031F438 __attribute__((section(".data")));
extern s8 lbl_8031F4B4 __attribute__((section(".data")));
extern s8 lbl_803201D0 __attribute__((section(".data")));
extern s8 lbl_80320210 __attribute__((section(".data")));
extern f32 lbl_8032021C __attribute__((section(".data")));

void Avatar__ProcessKickInput(void **arg0) {
    s16 temp_r0;
    s16 temp_r0_3;
    s16 temp_r0_4;
    s32 temp_cr0_eq;
    s32 temp_r0_2;
    s32 var_cr0_eq;
    s32 var_r10;
    s32 var_r11;
    s32 var_r5;
    s32 var_r8;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r9;

    temp_r3 = *arg0;
    temp_r0 = M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x84), void **, 0xF0), s16 *, 0xA);
    if (temp_r0 != 0x900) {
        temp_r0_2 = temp_r0 & 0xFF00;
        switch (temp_r0_2) {                        /* irregular */
        case 0x300:
            break;
        case 0x600:
        case 0xE00:
            Avatar__SetAnimScriptVarIntImpl(temp_r3, &lbl_803201D0, 5, 0);
            break;
        default:
            Avatar__GetInputState(temp_r3);
            AvatarControls__GetActionState(3, 1);
            temp_cr0_eq = Avatar__GetAnimScriptVarInt(*arg0, &lbl_8031F438, (void *)1) == 0;
            var_r8 = 1;
            if (temp_cr0_eq != 0) {
                var_r8 = 0;
            }
            M2C_ERROR(/* "cmpwi $cr7, $r30, 0x0" is not supported, the first arg is not $cr0 */);
            if (temp_cr0_eq == 0) {
                temp_r9 = *arg0;
                var_r10 = 0;
                if ((s32) M2C_FIELD(M2C_FIELD(temp_r9, void **, 0x159C), s32 *, 0xD38) != 0) {
                    var_r10 = 1;
                }
                var_cr0_eq = var_r10 == 0;
                if ((var_cr0_eq == 0) && ((temp_r0_3 = M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_r9, void **, 0x84), void **, 0xF4), s16 *, 0xA), ((temp_r0_3 == 0x100) != 0)) || (var_cr0_eq = (s32) (temp_r0_3 & 0xFF00) == 0x500, (var_cr0_eq != 0)))) {
                    Avatar__StartAnimationImpl(temp_r9, 0x800U, 1, 0, 1, 1);
                    goto block_27;
                }
                if ((var_cr0_eq == 0) && (var_r8 == 0)) {
                    var_r11 = 0;
                    if ((s32) M2C_FIELD(M2C_FIELD(temp_r9, void **, 0x159C), s32 *, 0xD38) != 0) {
                        var_r11 = 1;
                    }
                    if ((var_r11 != 0) && ((s32) (M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_r9, void **, 0x84), void **, 0xF4), s16 *, 0xA) & 0xFF00) == 0x400)) {
                        var_r5 = 4;
                        goto block_26;
                    }
                    goto block_21;
                }
                goto block_21;
            }
block_21:
            temp_r3_2 = *arg0;
            temp_r0_4 = M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_r3_2, void **, 0x84), void **, 0xF4), s16 *, 0xA);
            if (temp_r0_4 == 0x100) {
                if (M2C_FIELD(temp_r3_2, f32 *, 0x2DC) == lbl_8032021C) {
                    Avatar__StartAnimationImpl(temp_r3_2, 0x400U, 1, 0, 1, 1);
                } else {
                    Avatar__StartAnimationImpl(temp_r3_2, 0xF00U, 1, 0, 1, 1);
                }
                var_r5 = 1;
block_26:
                Avatar__SetAnimScriptVarIntImpl(*arg0, &lbl_8031F4B4, var_r5, 1);
block_27:
                fn_800A5750(arg0);
            } else if ((s32) (temp_r0_4 & 0xFF00) == 0x400) {
                Avatar__SetAnimScriptVarIntImpl(temp_r3_2, &lbl_8031F4B4, 1, 1);
            }
            break;
        }
        Avatar__SetAnimScriptVarIntImpl(*arg0, &lbl_80320210, 1, 1);
    }
}

