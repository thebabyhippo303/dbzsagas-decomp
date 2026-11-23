/* PersistentData__StorePlayerStats @ 0x801281C0 (size: 0x1A0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void * Game__GetPlayerImpl(void *, int);
int PersistentData__SetGlobalImpl(void *, char *, int);
extern s8 lbl_80327760 __attribute__((section(".data")));
extern s8 lbl_80327770 __attribute__((section(".data")));
extern s8 lbl_80327780 __attribute__((section(".data")));
extern s8 lbl_8032778C __attribute__((section(".data")));
extern s8 lbl_803277A4 __attribute__((section(".data")));
extern s8 lbl_803277B8 __attribute__((section(".data")));
extern s8 lbl_803277DC __attribute__((section(".data")));
extern s8 lbl_803277EC __attribute__((section(".data")));
extern s8 lbl_803277FC __attribute__((section(".data")));
extern s8 lbl_8032780C __attribute__((section(".data")));
extern s32 lbl_803DC368;
extern void *lbl_803DC3C0;

void PersistentData__StorePlayerStats(void) {
    if (Game__GetPlayerImpl(lbl_803DC3C0, 0) != NULL) {
        PersistentData__SetGlobalImpl(lbl_803DC368 + 0x12C, &lbl_80327760, (s32) M2C_FIELD(lbl_803DC3C0, f32 *, 0x2064));
        PersistentData__SetGlobalImpl(lbl_803DC368 + 0x12C, &lbl_80327770, (s32) M2C_FIELD(lbl_803DC3C0, f32 *, 0x2064));
        PersistentData__SetGlobalImpl(lbl_803DC368 + 0x12C, &lbl_803277A4, (s32) M2C_FIELD(lbl_803DC3C0, f32 *, 0x2064));
        PersistentData__SetGlobalImpl(lbl_803DC368 + 0x12C, &lbl_803277B8, (s32) M2C_FIELD(lbl_803DC3C0, f32 *, 0x2064));
        PersistentData__SetGlobalImpl(lbl_803DC368 + 0x12C, &lbl_80327780, (s32) M2C_FIELD(lbl_803DC3C0, f32 *, 0x2070));
        PersistentData__SetGlobalImpl(lbl_803DC368 + 0x12C, &lbl_8032778C, (s32) M2C_FIELD(lbl_803DC3C0, f32 *, 0x2070));
        PersistentData__SetGlobalImpl(lbl_803DC368 + 0x12C, &lbl_803277DC, (s32) M2C_FIELD(lbl_803DC3C0, f32 *, 0x2070));
        PersistentData__SetGlobalImpl(lbl_803DC368 + 0x12C, &lbl_803277EC, (s32) M2C_FIELD(lbl_803DC3C0, f32 *, 0x2070));
        PersistentData__SetGlobalImpl(lbl_803DC368 + 0x12C, &lbl_803277FC, 0);
        PersistentData__SetGlobalImpl(lbl_803DC368 + 0x12C, &lbl_8032780C, 0);
    }
}

