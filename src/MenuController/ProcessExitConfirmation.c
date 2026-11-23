/* MenuController__ProcessExitConfirmation @ 0x8004B54C (size: 0xD4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef short s16;
typedef float f32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))

void ConfirmationDialog__Hide(void *);
void Game__QuitGameImpl(void *);
int Game__GetConfiguredPlayerCount(void *);
void HUD__EnsureInitialized(void *, int);
void SimLoop__ActivateControls(void *, int);
void SimLoop__PauseSimulation(void *, int, int, int);
void fn_80267318(void *, int, f32);
extern f32 lbl_80316F58 __attribute__((section(".data")));
extern void *lbl_803DC3C0 __attribute__((section(".sdata")));
extern s32 lbl_803DC654 __attribute__((section(".sdata")));

void MenuController__ProcessExitConfirmation(void *arg0) {
    void *vtable;
    void *dialog;
    void *game_instance;
    void *hud_manager;
    s32 dialog_state;
    s32 configured_count;

    vtable = M2C_FIELD(arg0, void **, 0x19C);
    if (M2C_FIELD(vtable, s32 (**)(void *), 0x3A4)(arg0 + M2C_FIELD(vtable, s16 *, 0x3A0)) == 0) {
        return;
    }
    dialog = M2C_FIELD(arg0, void **, 0xAE9C);
    dialog_state = M2C_FIELD(dialog, s32 *, 0x11CC);
    ConfirmationDialog__Hide(dialog);
    fn_80267318(arg0, 0, lbl_80316F58);
    vtable = M2C_FIELD(arg0, void **, 0x19C);
    M2C_FIELD(vtable, s32 (**)(void *), 0x1E4)(arg0 + M2C_FIELD(vtable, s16 *, 0x1E0));
    if (dialog_state != 0) {
        Game__QuitGameImpl(lbl_803DC3C0);
        return;
    }
    SimLoop__ActivateControls(lbl_803DC3C0, 1);
    SimLoop__PauseSimulation(lbl_803DC3C0, 0, 0, 1);
    game_instance = lbl_803DC3C0;
    hud_manager = (void *) lbl_803DC654;
    configured_count = Game__GetConfiguredPlayerCount(game_instance);
    HUD__EnsureInitialized(hud_manager, configured_count);
}
