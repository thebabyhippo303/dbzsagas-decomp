/* Options__SetRumbleMode @ 0x80128860 (size: 0x1A4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 ControllerMap__GetPlayerController(void *, u32);
int PersistentData__SetGlobalImpl(void *, char *, int);
extern s8 lbl_8032788C __attribute__((section(".data")));
extern s32 lbl_803DC368;
extern void *lbl_803DCC74;

void Options__SetRumbleMode(s32 arg1) {
    char *p_1f0;
    s32 var_r30;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r9;
    register void *temp_r9_3;
    void *temp_r9_2;
    void *temp_r9_4;

    switch (arg1) {                                 /* irregular */
    case 0:
        var_r30 = 1;
block_15:
        M2C_FIELD(ControllerMap__GetPlayerController(lbl_803DCC74, 0U), s32 *, 0x1F4) = var_r30;
        temp_r3 = ControllerMap__GetPlayerController(lbl_803DCC74, 1U);
        p_1f0 = (char *)temp_r3 + 0x1f0;
        temp_r9 = M2C_FIELD(p_1f0, void **, 0x8);
        if (M2C_FIELD(temp_r9, s32 (**)(void *), 0x24)(temp_r3 + M2C_FIELD(temp_r9, s16 *, 0x20)) != 0) {
            M2C_FIELD(ControllerMap__GetPlayerController(lbl_803DCC74, 1U), s32 *, 0x1F4) = var_r30;
        }
        break;
    case 1:
        M2C_FIELD(ControllerMap__GetPlayerController(lbl_803DCC74, 0U), s32 *, 0x1F4) = arg1;
        temp_r3_2 = ControllerMap__GetPlayerController(lbl_803DCC74, 1U);
        temp_r9_2 = M2C_FIELD(temp_r3_2, void **, 0x1F8);
        if (M2C_FIELD(temp_r9_2, s32 (**)(void *), 0x24)(temp_r3_2 + M2C_FIELD(temp_r9_2, s16 *, 0x20)) != 0) {
            M2C_FIELD(ControllerMap__GetPlayerController(lbl_803DCC74, 1U), s32 *, 0x1F4) = 0;
        }
        break;
    case 2:
        temp_r9_3 = M2C_FIELD(p_1f0, void **, 0x8);
        temp_r3 = ControllerMap__GetPlayerController(lbl_803DCC74, 0U);
        if (M2C_FIELD(temp_r9_3, s32 (**)(void *), 0x24)(temp_r3 + M2C_FIELD(temp_r9_3, s16 *, 0x20)) != 0) {
            M2C_FIELD(ControllerMap__GetPlayerController(lbl_803DCC74, 0U), s32 *, 0x1F4) = 0;
        }
        temp_r9 = ControllerMap__GetPlayerController(lbl_803DCC74, 1U);
        temp_r9_4 = M2C_FIELD(temp_r9, void **, 0x1F8);
        if (M2C_FIELD(temp_r9_4, s32 (**)(void *), 0x24)(temp_r9 + M2C_FIELD(temp_r9_4, s16 *, 0x20)) != 0) {
            M2C_FIELD(ControllerMap__GetPlayerController(lbl_803DCC74, 1U), s32 *, 0x1F4) = 1;
        }
        break;
    case 3:
        var_r30 = 0;
        goto block_15;
    }
    PersistentData__SetGlobalImpl(lbl_803DC368 + 0x12C, &lbl_8032788C, arg1);
}
