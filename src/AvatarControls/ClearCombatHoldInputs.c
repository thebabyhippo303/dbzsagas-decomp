/* AvatarControls__ClearCombatHoldInputs @ 0x800A4C50 (size: 0xC0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Avatar__SetAnimScriptVarIntImpl(void *, char *, int, int);
extern s8 lbl_8031F444 __attribute__((section(".data")));
extern s8 lbl_8031F474 __attribute__((section(".data")));
extern s8 lbl_8031F4C0 __attribute__((section(".data")));
extern s8 lbl_80320210 __attribute__((section(".data")));
extern s8 lbl_80320220 __attribute__((section(".data")));
extern f32 lbl_803202A4 __attribute__((section(".data")));

void AvatarControls__ClearHeldActionState(void *arg0) {
    f32 value;

    Avatar__SetAnimScriptVarIntImpl(M2C_FIELD(arg0, void **, 0), &lbl_8031F444, 0, 1);
    Avatar__SetAnimScriptVarIntImpl(M2C_FIELD(arg0, void **, 0), &lbl_8031F474, 0, 1);
    Avatar__SetAnimScriptVarIntImpl(M2C_FIELD(arg0, void **, 0), &lbl_80320210, 0, 1);
    Avatar__SetAnimScriptVarIntImpl(M2C_FIELD(arg0, void **, 0), &lbl_80320220, 0, 1);
    Avatar__SetAnimScriptVarIntImpl(M2C_FIELD(arg0, void **, 0), &lbl_8031F4C0, 0, 1);
    value = lbl_803202A4;
    M2C_FIELD(arg0, volatile s32 *, 0x198) = 0;
    M2C_FIELD(arg0, volatile f32 *, 0x1A0) = value;
    M2C_FIELD(arg0, volatile s32 *, 0x18C) = 0;
    M2C_FIELD(arg0, volatile s32 *, 0x190) = 0;
    M2C_FIELD(arg0, volatile s32 *, 0x194) = 0;
}
