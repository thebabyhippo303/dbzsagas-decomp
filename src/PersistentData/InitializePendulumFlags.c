/* PersistentData__InitializePendulumFlags @ 0x80127D94 (size: 0xAC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

int PersistentData__GetGlobalImpl(void *, char *);
int PersistentData__SetGlobalImpl(void *, char *, int);
extern s8 lbl_80327730 __attribute__((section(".data")));
extern s8 lbl_80327740 __attribute__((section(".data")));
extern s32 lbl_803DC368;

void PersistentData__InitializePendulumFlags(void) {
    s32 temp_r3;
    s32 temp_r3_2;

    temp_r3 = PersistentData__GetGlobalImpl(lbl_803DC368 + 0x12C, &lbl_80327730);
    if (temp_r3 == 0) {
        PersistentData__SetGlobalImpl(lbl_803DC368 + 0x12C, &lbl_80327730, 0);
    } else {
        PersistentData__SetGlobalImpl(lbl_803DC368 + 0x12C, &lbl_80327730, temp_r3);
    }
    temp_r3_2 = PersistentData__GetGlobalImpl(lbl_803DC368 + 0x12C, &lbl_80327740);
    if (temp_r3_2 == 0) {
        PersistentData__SetGlobalImpl(lbl_803DC368 + 0x12C, &lbl_80327740, 0);
        return;
    }
    PersistentData__SetGlobalImpl(lbl_803DC368 + 0x12C, &lbl_80327740, temp_r3_2);
}
