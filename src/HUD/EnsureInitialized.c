/* HUD__EnsureInitialized @ 0x8010C0A0 (size: 0x104, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef struct {
    char pad[4];
    int mode;
} HudModeState;

typedef struct {
    char pad[0x238];
    HudModeState *state;
} HudGame;

typedef struct {
    int initialized;
    char pad1[0x1268 - 4];
    char groups[2][0x50C];
    char pad2[0x2BA4 - 0x1268 - 2 * 0x50C];
    volatile int field2BA4;
    volatile int field2BA8;
    int field2BAC;
    volatile int field2BB0;
    volatile int field2BB4;
} HUD;

extern void *lbl_803DC3C0;
extern void HUD__ResetWidgetGroups(void *hud, void *group);
extern void HUD__InitializePlayerWidgetGroups(void *hud, int index);
extern void MenuInput__ResetWeaponActionPromptState(void *hud);
extern void HUD__ResetWidgetCollectionState(void *hud);
extern void HUD__ResetComboButtonState(void *hud);
extern void HUD__InitializeWidgetCollections(void *hud);
extern void HUD__EnsureHourglassTimerWidgets(void *hud);

void HUD__EnsureInitialized(HUD *hud, int count) {
    char *group;
    int left;
    int index;
    int mode;
    int skip;

    if (hud->initialized != 0) {
        return;
    }

    group = (char *)hud + 0x1268;
    hud->initialized = 1;
    left = 2;
    do {
        HUD__ResetWidgetGroups(hud, group);
        group += 0x50C;
        left -= 1;
    } while (left != 0);

    hud->field2BA8 = left;
    hud->field2BA4 = left;
    hud->field2BB0 = left;
    hud->field2BB4 = left;

    mode = ((HudGame *)lbl_803DC3C0)->state->mode;
    if (mode != 0) {
        skip = 0;
        if ((unsigned)(mode - 31) <= 1U || mode == 28 || mode == 30 || mode == 29) {
            skip = 1;
        }
        if (skip == 0) {
            for (index = 0; index < count; index += 1) {
                HUD__InitializePlayerWidgetGroups(hud, index);
            }
        }
    }

    MenuInput__ResetWeaponActionPromptState(hud);
    HUD__ResetWidgetCollectionState(hud);
    HUD__ResetComboButtonState(hud);
    HUD__InitializeWidgetCollections(hud);
    HUD__EnsureHourglassTimerWidgets(hud);
}
