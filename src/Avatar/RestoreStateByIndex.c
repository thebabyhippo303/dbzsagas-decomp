/* Avatar__RestoreStateByIndex @ 0x800B5B28 (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Avatar__RequestStandardRoamImpl(void *);
void * fn_800A6164(s32);
void Avatar__RestoreStateByIndex(void *arg0, s32 arg1) {
    void *temp_r9;
    void *temp_r11;
    void *temp_r0;

    switch (arg1) {                                 /* irregular */
    case 0:
        Avatar__RequestStandardRoamImpl(arg0);
        return;
    case 2:
        fn_800A6164((s32) arg0);
        return;
    case 3:
        temp_r11 = M2C_FIELD(arg0, void **, 0x144);
        temp_r9 = M2C_FIELD(temp_r11, void **, 4);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *), 0x3C)(temp_r11 + M2C_FIELD(temp_r9, s16 *, 0x38));
        temp_r0 = arg0 + 0x478;
        M2C_FIELD(arg0, void **, 0x148) = temp_r0;
        M2C_FIELD(arg0, void **, 0x144) = temp_r0;
        return;
    }
}

