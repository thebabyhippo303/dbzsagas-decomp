/* UiSpriteResources__HandleMenuAndPauseInput @ 0x8000EAC4 (size: 0x68C, .text, ProDG 3.9.3 -O2) - MATCHED */
/* WIP 64.0% (268/419, len 416/419). Auto-draft baseline; first diff @0x3EC (tail third).
   Tail has virtual blrl calls + float-bool (fcmpu/cror-lt/mfcr/clrlwi) + HUD/Pause logic;
   needs order/reg refinement across tail. -Muse-L2-M11 */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 ControllerMap__IsPlayerAssigned(void *, u32);
s32 Game__GetConfiguredPlayerCount(void *);
void * Game__GetPlayerImpl(void *, int);
void HUD__ClearAllWidgets(void *);
void HUD__ClearStatsWidgetGroup(char *);
void HUD__DeleteBossStatBar(void *);
void HUD__EnsureInitialized(void *, int);
void HUD__ShowAllPlayerWidgets(int);
void * Instance__FindByName(void *, char *, int, int);
void Instance__HideImpl(void *);
void MainMenu__InitializeScreenWidgets(void *);
void MainMenu__PreparePauseScreen(void *);
s32 MenuInput__HasControllerOwner(void *);
s32 MenuInput__IsStartTriggered(s32);
s32 MenuInput__TryAssignControllerToPlayer(s32);
s32 MenuPanel__IsShown(void *);
s32 Options__GetMusicVolume(s32);
s32 Options__GetSoundVolume(s32);
void Options__SetMusicVolume(void *, int);
void Options__SetSoundVolume(void *, int);
int ScreenFade__IsActive(void);
void SimLoop__PauseSimulation(int, int, int, int);
void Sound__Play2D(s32, s32);
void UI__DispatchMenuInput(void *, s32);
M2C_UNK HUD__ClearBossStatDisplay(s8 *);            /* extern */
M2C_UNK UiSpriteResources__ProcessUnlockInputSequences(void *); /* extern */
M2C_UNK fn_8000F150();                              /* extern */
extern M2C_UNK lbl_8030D6D4 __attribute__((section(".data")));
extern s8 lbl_8030D6E4 __attribute__((section(".data")));
extern f32 lbl_8030D6E8 __attribute__((section(".data")));
extern M2C_UNK lbl_803B1E84 __attribute__((section(".data")));
extern void *lbl_803DC368;
extern void *lbl_803DC3B4;
extern void *lbl_803DC3C0;
extern void *lbl_803DC3F8;
extern void *lbl_803DC650;
extern s8 *lbl_803DC654;
extern void *lbl_803DC69C;
extern void *lbl_803DC6A0;
extern void *lbl_803DC6C4;
extern void *lbl_803DC704;
extern void *lbl_803DC708;
extern void *lbl_803DC70C;
extern void *lbl_803DC710;
extern void *lbl_803DC714;
extern void *lbl_803DC718;
extern void *lbl_803DCC74;

void UiSpriteResources__HandleMenuAndPauseInput(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 var_r31;
    s8 *temp_r30_4;
    s8 *temp_r30_5;
    void *temp_r30;
    void *temp_r30_2;
    void *temp_r30_3;
    void *temp_player;
    void *temp_r31;
    void *temp_r3;
    void *temp_r9;
    void *temp_r9_10;
    void *temp_r9_11;
    void *temp_r9_12;
    void *temp_r9_13;
    void *temp_r9_2;
    void *temp_r9_3;
    void *temp_r9_4;
    void *temp_r9_5;
    void *temp_r9_6;
    void *temp_r9_7;
    void *temp_r9_8;
    void *temp_r9_9;

    fn_8000F150();
    if ((MenuInput__HasControllerOwner(lbl_803DC368) == 0) && (((s32) M2C_FIELD(M2C_FIELD(lbl_803DC3C0, void **, 0x238), s32 *, 0x1C) != 1) || ((s32) M2C_FIELD(arg0, s32 *, 0x8164) == 0))) {
        UiSpriteResources__ProcessUnlockInputSequences(arg0);
        UI__DispatchMenuInput(lbl_803DC650, M2C_FIELD(arg0, s32 *, 0x8258));
        temp_r9 = M2C_FIELD(lbl_803DC704, void **, 0x19C);
        if (M2C_FIELD(temp_r9, s32 (**)(void *), 0x3A4)(lbl_803DC704 + M2C_FIELD(temp_r9, s16 *, 0x3A0)) != 0) {
            temp_r0 = M2C_FIELD(lbl_803DC704, s32 *, 0x22344);
            if ((temp_r0 == 5) || (temp_r0 == 0x11)) {
                MenuInput__TryAssignControllerToPlayer(1);
            }
            if (ControllerMap__IsPlayerAssigned(lbl_803DCC74, 1U) != 0) {
                UI__DispatchMenuInput(lbl_803DC650, 1);
            }
        }
        if (((s32) M2C_FIELD(lbl_803DC708, s32 *, 0x87C) != 0) && ((MenuInput__TryAssignControllerToPlayer(0) != 0) || (MenuInput__TryAssignControllerToPlayer(1) != 0))) {
            Sound__Play2D((s32) &lbl_8030D6D4, 0);
            MainMenu__InitializeScreenWidgets(lbl_803DC708);
            temp_r3 = Instance__FindByName(&lbl_803B1E84, &lbl_8030D6E4, 0, 0);
            if (temp_r3 != NULL) {
                Instance__HideImpl(temp_r3);
            }
            temp_r30 = lbl_803DC368 + 0x370;
            Options__SetSoundVolume(temp_r30, Options__GetSoundVolume((s32) temp_r30));
            temp_r30_2 = lbl_803DC368 + 0x370;
            Options__SetMusicVolume(temp_r30_2, Options__GetMusicVolume((s32) temp_r30_2));
        }
        if ((s32) M2C_FIELD(M2C_FIELD(lbl_803DC3C0, void **, 0x238), s32 *, 0x1C) == 5) {
            temp_r9_2 = M2C_FIELD(lbl_803DC718, void **, 0x19C);
            if (M2C_FIELD(temp_r9_2, s32 (**)(void *), 0x3A4)(lbl_803DC718 + M2C_FIELD(temp_r9_2, s16 *, 0x3A0)) != 0) {
                if ((s32) M2C_FIELD(arg0, s32 *, 0x8258) == 1) {
                    UI__DispatchMenuInput(lbl_803DC650, 0);
                } else if (ControllerMap__IsPlayerAssigned(lbl_803DCC74, 1U) != 0) {
                    UI__DispatchMenuInput(lbl_803DC650, 1);
                }
            }
            if (((ControllerMap__IsPlayerAssigned(lbl_803DCC74, 0U) != 0) && (MenuInput__IsStartTriggered(0) != 0)) || ((ControllerMap__IsPlayerAssigned(lbl_803DCC74, 1U) != 0) && (MenuInput__IsStartTriggered(1) != 0))) {
                temp_r9_3 = M2C_FIELD(lbl_803DC70C, void **, 0x19C);
                if ((M2C_FIELD(temp_r9_3, s32 (**)(void *), 0x3A4)(lbl_803DC70C + M2C_FIELD(temp_r9_3, s16 *, 0x3A0)) == 0) && (temp_r9_4 = M2C_FIELD(lbl_803DC710, void **, 0x19C), ((M2C_FIELD(temp_r9_4, s32 (**)(void *), 0x3A4)(lbl_803DC710 + M2C_FIELD(temp_r9_4, s16 *, 0x3A0)) == 0) != 0)) && (temp_r9_5 = M2C_FIELD(lbl_803DC718, void **, 0x19C), ((M2C_FIELD(temp_r9_5, s32 (**)(void *), 0x3A4)(lbl_803DC718 + M2C_FIELD(temp_r9_5, s16 *, 0x3A0)) == 0) != 0)) && (temp_r9_6 = M2C_FIELD(lbl_803DC714, void **, 0x19C), ((M2C_FIELD(temp_r9_6, s32 (**)(void *), 0x3A4)(lbl_803DC714 + M2C_FIELD(temp_r9_6, s16 *, 0x3A0)) == 0) != 0)) && ((s32) M2C_FIELD(lbl_803DC3B4, s32 *, 0x22C) == 0) && (temp_r9_7 = M2C_FIELD(lbl_803DC6C4, void **, 0x19C), ((M2C_FIELD(temp_r9_7, s32 (**)(void *), 0x3A4)(lbl_803DC6C4 + M2C_FIELD(temp_r9_7, s16 *, 0x3A0)) == 0) != 0)) && (temp_r9_8 = M2C_FIELD(lbl_803DC6A0, void **, 0x19C), ((M2C_FIELD(temp_r9_8, s32 (**)(void *), 0x3A4)(lbl_803DC6A0 + M2C_FIELD(temp_r9_8, s16 *, 0x3A0)) == 0) != 0)) && (MenuPanel__IsShown(M2C_FIELD(lbl_803DC3C0, s32 *, 0x20F0) + 0x6B34) == 0) && (MenuPanel__IsShown(M2C_FIELD(lbl_803DC3C0, s32 *, 0x20F0) + 0x18834) == 0) && (MenuPanel__IsShown(M2C_FIELD(lbl_803DC3C0, s32 *, 0x20F0) + 0xD4C4) == 0) && (MenuPanel__IsShown(M2C_FIELD(lbl_803DC3C0, s32 *, 0x20F0) + 0x3DA28) == 0) && (temp_r9_9 = M2C_FIELD(lbl_803DC3F8, void **, 0x19C), ((M2C_FIELD(temp_r9_9, s32 (**)(void *), 0x3A4)(lbl_803DC3F8 + M2C_FIELD(temp_r9_9, s16 *, 0x3A0)) == 0) != 0)) && (ScreenFade__IsActive() == 0) && (((s32) M2C_FIELD(lbl_803DC69C, s32 *, 0xAEB0) != 0) || (temp_r0_2 = M2C_FIELD(M2C_FIELD(lbl_803DC3C0, void **, 0x238), s32 *, 4), ((temp_r0_2 == 1) != 0)) || (temp_r0_2 == 0x1B))) {
                    var_r31 = 1;
                    temp_player = Game__GetPlayerImpl(lbl_803DC3C0, 1);
                    if (temp_player != NULL) {
                        var_r31 = (M2C_FIELD(temp_player, f32 *, 0x288) <= lbl_8030D6E8);
                    }
                    if ((ControllerMap__IsPlayerAssigned(lbl_803DCC74, 1U) == 0) || (MenuInput__IsStartTriggered(1) == 0) || (var_r31 == 0)) {
                        SimLoop__PauseSimulation((s32) lbl_803DC3C0, 1, 1, 1);
                        HUD__ClearAllWidgets(lbl_803DC654);
                        HUD__DeleteBossStatBar(lbl_803DC654);
                        HUD__ClearStatsWidgetGroup(lbl_803DC654);
                        if (MenuInput__IsStartTriggered(0) != 0) {
                            M2C_FIELD(arg0, s32 *, 0x8258) = 0;
                            return;
                        }
                        M2C_FIELD(arg0, s32 *, 0x8258) = 1;
                    }
                } else {
                    temp_r9_10 = M2C_FIELD(lbl_803DC710, void **, 0x19C);
                    if ((M2C_FIELD(temp_r9_10, s32 (**)(void *), 0x3A4)(lbl_803DC710 + M2C_FIELD(temp_r9_10, s16 *, 0x3A0)) == 0) && (temp_r9_11 = M2C_FIELD(lbl_803DC70C, void **, 0x19C), ((M2C_FIELD(temp_r9_11, s32 (**)(void *), 0x3A4)(lbl_803DC70C + M2C_FIELD(temp_r9_11, s16 *, 0x3A0)) == 0) == 0)) && ((s32) M2C_FIELD(lbl_803DC70C, s32 *, 0xF260) == 0x29A)) {
                        switch ((s32) M2C_FIELD(arg0, s32 *, 0x8258)) { /* irregular */
                        case 0:
                            if (MenuInput__IsStartTriggered(0) == 0) {
                                if (((s32) M2C_FIELD(arg0, s32 *, 0x8258) == 1) && (MenuInput__IsStartTriggered(1) != 0)) {
                                    goto block_56;
                                }
                            } else {
block_56:
                                SimLoop__PauseSimulation((s32) lbl_803DC3C0, 0, 0, 1);
                                temp_r30_3 = Game__GetPlayerImpl(lbl_803DC3C0, 0);
                                temp_r31 = Game__GetPlayerImpl(lbl_803DC3C0, 1);
                                if (Game__GetConfiguredPlayerCount(lbl_803DC3C0) == 1) {
                                    if (!(M2C_FIELD(temp_r30_3, f32 *, 0x288) < lbl_8030D6E8)) {
                                        temp_r30_4 = lbl_803DC654;
                                        HUD__EnsureInitialized(temp_r30_4, Game__GetConfiguredPlayerCount(lbl_803DC3C0));
                                    }
                                } else if (!(M2C_FIELD(temp_r30_3, f32 *, 0x288) < lbl_8030D6E8) && !(M2C_FIELD(temp_r31, f32 *, 0x288) < lbl_8030D6E8)) {
                                    temp_r30_5 = lbl_803DC654;
                                    HUD__EnsureInitialized(temp_r30_5, Game__GetConfiguredPlayerCount(lbl_803DC3C0));
                                }
                                HUD__ClearBossStatDisplay(lbl_803DC654);
                                return;
                            }
                            break;
                        }
                    } else {
                        temp_r9_12 = M2C_FIELD(lbl_803DC710, void **, 0x19C);
                        if ((M2C_FIELD(temp_r9_12, s32 (**)(void *), 0x3A4)(lbl_803DC710 + M2C_FIELD(temp_r9_12, s16 *, 0x3A0)) != 0) && ((((s32) M2C_FIELD(arg0, s32 *, 0x8258) == 0) && (MenuInput__IsStartTriggered(0) != 0)) || (((s32) M2C_FIELD(arg0, s32 *, 0x8258) == 1) && (MenuInput__IsStartTriggered(1) != 0)))) {
                            temp_r9_13 = M2C_FIELD(lbl_803DC710, void **, 0x19C);
                            M2C_FIELD(temp_r9_13, M2C_UNK (**)(void *), 0x1E4)(lbl_803DC710 + M2C_FIELD(temp_r9_13, s16 *, 0x1E0));
                            MainMenu__PreparePauseScreen(lbl_803DC710);
                            SimLoop__PauseSimulation((s32) lbl_803DC3C0, 0, 0, 1);
                            HUD__ShowAllPlayerWidgets((s32) lbl_803DC654);
                        }
                    }
                }
            }
        }
    }
}
