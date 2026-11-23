/* SoundDriver__SetSampleRate @ 0x80195BA0 (size: 0xB0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef short s16;
typedef float f32;
typedef int M2C_UNK;
#define FIELD(p, t, o) (*(t)((char *)(p) + (o)))
s32 AISetDSPSampleRate(s32);
extern f32 lbl_8033F650 __attribute__((section(".data")));
extern f32 lbl_8033F654 __attribute__((section(".data")));
extern f32 lbl_803DCC28 __attribute__((section(".sdata")));
s32 SoundDriver__SetSampleRate(void *arg0, s32 arg1) {
    void *temp_r9;
    s32 temp_r3;
    if (arg1 == 32000) goto rate32;
    if (arg1 == 48000) goto rate48;
    return 0;
rate32:
    lbl_803DCC28 = lbl_8033F650;
    AISetDSPSampleRate(0);
    goto common;
rate48:
    lbl_803DCC28 = lbl_8033F654;
    AISetDSPSampleRate(1);
common:
    temp_r9 = FIELD(arg0, void **, 0x60);
    temp_r3 = FIELD(temp_r9, s32 (**)(void *), 0x2C)(arg0 + FIELD(temp_r9, s16 *, 0x28));
    FIELD(arg0, s32 *, 8) = temp_r3;
    temp_r9 = FIELD(arg0, void **, 0x60);
    FIELD(temp_r9, M2C_UNK (**)(void *, s32), 0x34)(arg0 + FIELD(temp_r9, s16 *, 0x30), temp_r3);
    return 1;
}
