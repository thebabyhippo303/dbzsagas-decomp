/* PersistentData__ResetPlayerVitals @ 0x80127F80 (size: 0xDC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

int PersistentData__GetGlobalImpl(void *, char *);
int PersistentData__SetGlobalImpl(void *, char *, int);
extern s8 lbl_80327760 __attribute__((section(".data")));
extern s8 lbl_80327770 __attribute__((section(".data")));
extern s8 lbl_80327780 __attribute__((section(".data")));
extern s8 lbl_8032778C __attribute__((section(".data")));
extern s8 lbl_80327798 __attribute__((section(".data")));
extern s32 lbl_803DC368;

void PersistentData__ResetPlayerVitals(void) {
    PersistentData__GetGlobalImpl(lbl_803DC368 + 0x12C, &lbl_80327760);
    PersistentData__GetGlobalImpl(lbl_803DC368 + 0x12C, &lbl_80327770);
    PersistentData__GetGlobalImpl(lbl_803DC368 + 0x12C, &lbl_80327780);
    PersistentData__GetGlobalImpl(lbl_803DC368 + 0x12C, &lbl_8032778C);
    PersistentData__SetGlobalImpl(lbl_803DC368 + 0x12C, &lbl_80327760, 0);
    PersistentData__SetGlobalImpl(lbl_803DC368 + 0x12C, &lbl_80327770, 0);
    PersistentData__SetGlobalImpl(lbl_803DC368 + 0x12C, &lbl_80327780, 0);
    PersistentData__SetGlobalImpl(lbl_803DC368 + 0x12C, &lbl_8032778C, 0);
    PersistentData__SetGlobalImpl(lbl_803DC368 + 0x12C, &lbl_80327798, 0);
}
