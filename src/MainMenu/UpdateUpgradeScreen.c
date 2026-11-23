/* MainMenu__UpdateUpgradeScreen @ 0x8014D6B8 (size: 0xBC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef struct Menu { char pad[0xAE90]; s32 state; s32 flag; } Menu;

void MainMenu__PopulateUpgradeScreenLists(void *);
void MainMenu__WaitForUpgradeWidgetAnimations(void *);
void MainMenu__FinishUpgradeScreenExit(void *);
void fn_8026BF14(void *);
void UpgradeMenu__RefreshWidgetLayout(void *);

void MainMenu__UpdateUpgradeScreen(Menu *m) {
    switch (m->state) {
    case 0:
        MainMenu__PopulateUpgradeScreenLists(m);
        break;
    case 1:
        MainMenu__WaitForUpgradeWidgetAnimations(m);
        break;
    case 2:
        m->flag = 1;
        break;
    case 3:
    case 4:
    case 5:
        break;
    case 6:
        MainMenu__FinishUpgradeScreenExit(m);
        break;
    case 7:
        m->flag = 0;
        break;
    }
    fn_8026BF14((char *)m + 0x10680);
    UpgradeMenu__RefreshWidgetLayout((char *)m + 0xC934);
    fn_8026BF14(m);
}
