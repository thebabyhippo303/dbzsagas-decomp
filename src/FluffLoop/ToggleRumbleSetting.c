/* FluffLoop__ToggleRumbleSetting @ 0x800565F8 (size: 0x148, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 ControllerMap__GetPlayerController(void *, u32);
f32 fn_8026C4B4(s32, s32, s32, s32, s32);
extern void *lbl_803DC368;
extern void *lbl_803DCC74;

void FluffLoop__ToggleRumbleSetting(void *arg0) {
    s32 temp_r31;
    void *temp_r3;
    void *temp_r3_2;
    void *temp_r9;
    void *temp_r9_2;

    temp_r31 = M2C_FIELD(arg0, s32 *, 0x1A644) ^ 1;
    M2C_FIELD(arg0, s32 *, 0x1A644) = temp_r31;
    if (temp_r31 != 0) {
        M2C_FIELD(ControllerMap__GetPlayerController(lbl_803DCC74, 0U), s32 *, 0x1F4) = 1;
        temp_r3 = ControllerMap__GetPlayerController(lbl_803DCC74, 0U);
        temp_r9 = M2C_FIELD(temp_r3, void **, 0x1F8);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK, M2C_UNK, M2C_UNK), 0x3C)(temp_r3 + M2C_FIELD(temp_r9, s16 *, 0x38), 0x1F4, 0xC8, 0);
        fn_8026C4B4((s32) (arg0 + 0x16200), 0x12345678, 0, 1, 1);
        fn_8026C4B4((s32) (arg0 + 0x163A0), 0x12345678, 0, 1, 1);
    } else {
        temp_r3_2 = ControllerMap__GetPlayerController(lbl_803DCC74, 0U);
        temp_r9_2 = M2C_FIELD(temp_r3_2, void **, 0x1F8);
        M2C_FIELD(temp_r9_2, M2C_UNK (**)(void *, M2C_UNK), 0x44)(temp_r3_2 + M2C_FIELD(temp_r9_2, s16 *, 0x40), 1);
        M2C_FIELD(ControllerMap__GetPlayerController(lbl_803DCC74, 0U), s32 *, 0x1F4) = temp_r31;
        fn_8026C4B4((s32) (arg0 + 0x16200), 0x12345678, 0, 1, 1);
        fn_8026C4B4((s32) (arg0 + 0x163A0), 0x12345678, 0, 1, 1);
    }
    M2C_FIELD(lbl_803DC368, s32 *, 0x11C) = (s32) M2C_FIELD(arg0, s32 *, 0x1A644);
}
