/* PersistentData__SetPlayerKi @ 0x80128360 (size: 0x98, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 PersistentData__SetGlobalImpl(void *data, const char *name, s32 value);
extern char lbl_80327780[] __attribute__((section(".data")));
extern char lbl_8032778C[] __attribute__((section(".data")));
extern char lbl_803277DC[] __attribute__((section(".data")));
extern char lbl_803277EC[] __attribute__((section(".data")));
extern void *lbl_803DC368 __attribute__((section(".sdata")));

void PersistentData__SetPlayerKi(void *arg0, s32 player, s32 ki, s32 maxKi) {
    switch (player) {
    case 0:
        PersistentData__SetGlobalImpl((char *)lbl_803DC368 + 0x12C, lbl_80327780, ki);
        PersistentData__SetGlobalImpl((char *)lbl_803DC368 + 0x12C, lbl_803277DC, maxKi);
        break;
    case 1:
        PersistentData__SetGlobalImpl((char *)lbl_803DC368 + 0x12C, lbl_8032778C, ki);
        PersistentData__SetGlobalImpl((char *)lbl_803DC368 + 0x12C, lbl_803277EC, maxKi);
        break;
    }
}
