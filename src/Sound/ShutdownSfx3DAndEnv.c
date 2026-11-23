/* Sound__ShutdownSfx3DAndEnv @ 0x801888F8 (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 Audio__UnloadBank(void *, s32);
char * Sfx3DGroup__GetName(void);
const char * SfxEnvGroup__GetName(void);
M2C_UNK Audio__DestroySfxPlayer(void *, s32, M2C_UNK); /* extern */
M2C_UNK Audio__DestroySoundGroup(void *, s8 *);     /* extern */
extern s32 lbl_803DCBF8 __attribute__((section(".sdata")));
extern s32 lbl_803DCC04;
extern s32 lbl_803DCC08;
extern void *lbl_803DCC20 __attribute__((section(".sdata")));

void Sound__ShutdownSfx3DAndEnv(void) {
    void *temp_r30;
    void *temp_r30_2;

    Audio__DestroySfxPlayer(lbl_803DCC20, lbl_803DCC08, 0);
    lbl_803DCC08 = 0;
    Audio__DestroySfxPlayer(lbl_803DCC20, lbl_803DCC04, 0);
    temp_r30 = lbl_803DCC20;
    lbl_803DCC04 = 0;
    Audio__DestroySoundGroup(temp_r30, Sfx3DGroup__GetName());
    temp_r30_2 = lbl_803DCC20;
    Audio__DestroySoundGroup(temp_r30_2, SfxEnvGroup__GetName());
    Audio__UnloadBank(lbl_803DCC20, lbl_803DCBF8);
    lbl_803DCBF8 = 0;
}
