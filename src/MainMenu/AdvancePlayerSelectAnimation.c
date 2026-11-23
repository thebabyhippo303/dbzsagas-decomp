/* MainMenu__AdvancePlayerSelectAnimation @ 0x800124D4 (size: 0xB4, .text, ProDG 3.9.3 -O2) - MATCHED */
/* MainMenu__AdvancePlayerSelectAnimation @ 0x800124D4 */

typedef struct PlayerSelectAnim {
    void *obj;
    char pad[432];
} PlayerSelectAnim;

typedef struct MainMenuAdvance {
    char pad0[3480];
    int state;
    char pad1[404];
    PlayerSelectAnim anims[7];
} MainMenuAdvance;

extern int fn_80260A5C(void *obj);
extern void fn_80188B64(char *name, int flags);
extern int MainMenu__GetSelectedCharacterId(MainMenuAdvance *menu);
extern void fn_80010CAC(MainMenuAdvance *menu, int characterId);
extern void MainMenu__SetPlayerSelectState(MainMenuAdvance *menu, int state);

extern char lbl_8030D8B4[];

void MainMenu__AdvancePlayerSelectAnimation(MainMenuAdvance *menu) {
    int allDone;
    int i;
    PlayerSelectAnim *anim;

    allDone = 1;
    anim = menu->anims;
    for (i = 7; i != 0; i--) {
        void *obj;

        obj = anim->obj;
        anim++;
        allDone = (allDone != 0) & (fn_80260A5C((char *)obj + 52) != 0);
    }

    if (allDone == 0 && menu->state == 2) {
        fn_80188B64(lbl_8030D8B4, 0);
        fn_80010CAC(menu, MainMenu__GetSelectedCharacterId(menu));
        MainMenu__SetPlayerSelectState(menu, 3);
    }
}
