/* OptionsMenu__UpdateChoiceWidgetsForSelection @ 0x80128A04 (size: 0x188, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef unsigned short u16; typedef float f32; typedef double f64;
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef short s16; typedef int s32; typedef unsigned int u32; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))

s32 ControllerMap__GetPlayerController(void *, u32);
extern void *lbl_803DCC74;

void OptionsMenu__UpdateChoiceWidgetsForSelection(void *arg0, s32 arg1) {
    u32 var_r4;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r3_5;
    void *temp_r9;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;
    void *temp_r9_5;

    switch (arg1) {
    case 0:
        M2C_FIELD(ControllerMap__GetPlayerController(lbl_803DCC74, 0U), s32 *, 0x1F4) = (arg1 = 1);
        temp_r3 = (void *)ControllerMap__GetPlayerController(lbl_803DCC74, 0U);
        temp_r9 = M2C_FIELD(temp_r3, void **, 0x1F8);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK, M2C_UNK, M2C_UNK), 0x3C)((char *)temp_r3 + M2C_FIELD(temp_r9, s16 *, 0x38), 0x1F4, 0xC8, 0);
        temp_r3_2 = (void *)ControllerMap__GetPlayerController(lbl_803DCC74, 1U);
        temp_r9_2 = M2C_FIELD(temp_r3_2, void **, 0x1F8);
        if (M2C_FIELD(temp_r9_2, s32 (**)(void *), 0x24)((char *)temp_r3_2 + M2C_FIELD(temp_r9_2, s16 *, 0x20)) != 0) {
            M2C_FIELD(ControllerMap__GetPlayerController(lbl_803DCC74, 1U), s32 *, 0x1F4) = arg1;
            var_r4 = 1;
            goto block_9;
        }
        break;
    case 1:
        M2C_FIELD(ControllerMap__GetPlayerController(lbl_803DCC74, 0U), s32 *, 0x1F4) = arg1;
        var_r4 = 0;
block_9:
        temp_r3_3 = (void *)ControllerMap__GetPlayerController(lbl_803DCC74, var_r4);
        temp_r9_3 = M2C_FIELD(temp_r3_3, void **, 0x1F8);
        M2C_FIELD(temp_r9_3, M2C_UNK (**)(void *, M2C_UNK, M2C_UNK, M2C_UNK), 0x3C)((char *)temp_r3_3 + M2C_FIELD(temp_r9_3, s16 *, 0x38), 0x1F4, 0xC8, 0);
        break;
    case 2:
        temp_r3_4 = (void *)ControllerMap__GetPlayerController(lbl_803DCC74, 1U);
        temp_r9_4 = M2C_FIELD(temp_r3_4, void **, 0x1F8);
        if (M2C_FIELD(temp_r9_4, s32 (**)(void *), 0x24)((char *)temp_r3_4 + M2C_FIELD(temp_r9_4, s16 *, 0x20)) != 0) {
            M2C_FIELD(ControllerMap__GetPlayerController(lbl_803DCC74, 1U), s32 *, 0x1F4) = 1;
            temp_r3_5 = (void *)ControllerMap__GetPlayerController(lbl_803DCC74, 1U);
            temp_r9_5 = M2C_FIELD(temp_r3_5, void **, 0x1F8);
            M2C_FIELD(temp_r9_5, M2C_UNK (**)(void *, M2C_UNK, M2C_UNK, M2C_UNK), 0x3C)((char *)temp_r3_5 + M2C_FIELD(temp_r9_5, s16 *, 0x38), 0x1F4, 0xC8, 0);
        }
        break;
    }
}
