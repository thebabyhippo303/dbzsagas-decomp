/* FluffLoop__ToggleStereoSetting @ 0x80056524 (size: 0xD4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Audio__SetOutputMode(void *, s32);
f32 fn_8026C4B4(s32, s32, s32, s32, s32);
extern void *lbl_803DCC20;

void FluffLoop__ToggleStereoSetting(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u32 *, 0x1A640) ^ 1;
    M2C_FIELD(arg0, s32 *, 0x1A640) = temp_r0;
    if (temp_r0 != 0) {
        Audio__SetOutputMode(lbl_803DCC20, 1);
        fn_8026C4B4((s32) (arg0 + 0x15EC0), 0x12345678, 0, 1, 1);
        fn_8026C4B4((s32) (arg0 + 0x16060), 0x12345678, 0, 1, 1);
        return;
    }
    Audio__SetOutputMode(lbl_803DCC20, 0);
    fn_8026C4B4((s32) (arg0 + 0x15EC0), 0x12345678, 0, 1, 1);
    fn_8026C4B4((s32) (arg0 + 0x16060), 0x12345678, 0, 1, 1);
}

