/* MainMenu__UpdateUpgradeScreenTransition @ 0x8014E760 (size: 0xC8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
void Menu__RebuildButtonPromptWidget(s32);
s32 Game__GetConfiguredPlayerCount(void *);
void HUD__EnsureInitialized(void *, s32);
s32 ConfirmationDialog__AreAnimationsActive(void *);
void ConfirmationDialog__Hide(void *);
void Sound__Play2D(s32, s32);
void MainMenu__AdvanceWidgetAnimationState(void *);
M2C_UNK MainMenu__ExitUpgradeScreen(s32);
extern M2C_UNK lbl_8032539C __attribute__((section(".data")));
extern void *lbl_803DC3C0;
extern void *lbl_803DC654;

void MainMenu__UpdateUpgradeScreenTransition(void *arg0) {
    void *self = arg0;
    char *base = (char *)self + 0x10000;

    switch (M2C_FIELD(base, s32 *, -20848)) {
    case 3:
        Menu__RebuildButtonPromptWidget((s32)(base - 14028));
    case 2:
        MainMenu__ExitUpgradeScreen((s32)self);
        HUD__EnsureInitialized(lbl_803DC654, Game__GetConfiguredPlayerCount(lbl_803DC3C0));
        break;
    case 4: {
        void *dlg = base + 1664;
        if (ConfirmationDialog__AreAnimationsActive(dlg) != 0) {
            break;
        }
        ConfirmationDialog__Hide(dlg);
        goto set3;
    }
    case 5:
        Sound__Play2D((s32)&lbl_8032539C, 0);
        MainMenu__AdvanceWidgetAnimationState(base + 6276);
set3:
        M2C_FIELD(base, s32 *, -20848) = 3;
        break;
    }
}
