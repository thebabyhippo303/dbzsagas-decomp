/* SimLoop__ApplyConfiguredAudioVolumesAndGetMode @ 0x8001E00C (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Audio__SetMasterDialogVolume(void *, f32);
M2C_UNK fn_801904E4(void *, f32);                   /* extern */
M2C_UNK fn_80190558(void *, f32);                   /* extern */
extern void *lbl_803DCC20 __attribute__((section(".sdata")));

s32 SimLoop__ApplyConfiguredAudioVolumesAndGetMode(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x2118) == 0) {
        if ((s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x238), s32 *, 0x20) != 2) goto return_three;
        goto return_four;
    }
    fn_801904E4(lbl_803DCC20, M2C_FIELD(M2C_FIELD(arg0, void **, 0x238), f32 *, 0x24));
    fn_80190558(lbl_803DCC20, M2C_FIELD(M2C_FIELD(arg0, void **, 0x238), f32 *, 0x28));
    Audio__SetMasterDialogVolume(lbl_803DCC20, M2C_FIELD(M2C_FIELD(arg0, void **, 0x238), f32 *, 0x2C));
return_four:
    return 4;
return_three:
    return 3;
}
