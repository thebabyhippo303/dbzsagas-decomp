/* MissionProgress__Event301_303 @ 0x8012A4F4 (size: 0xC8, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: MissionProgress__Event301_303 @ 0x8012A4F4 (0xC8). ProDG -O2. */
extern void MissionCollect__Event(void *mission, int event, int arg);
extern void MissionProgress__Complete(void *mission);
extern void HUD__HideAllPlayerWidgets(void *hud);
extern void SimLoop__ActivateControls(int enable, int arg);
extern void MissionUI__InitializeFailureAndRetryScreen(void *screen, char *text, float value);
extern void DisplayInfo__ShowEntry(void *display, int type, int arg2, int arg3, float value);
extern float lbl_80327AD0 __attribute__((section(".data")));
extern void *lbl_803DC3A0;
extern int lbl_803DC3C0;
extern void *lbl_803DC654;
extern void *lbl_803DC6A0;

void MissionProgress__Event301_303(void *arg0, int arg1, int arg2) {
    MissionCollect__Event(arg0, arg1, arg2);
    if (arg2 == *(int *)((char *)arg0 + 0x1C)) {
        switch (arg1) {
        case 0x12D:
            MissionProgress__Complete(arg0);
            MissionCollect__Event(arg0, 0x65, *(int *)((char *)arg0 + 4));
            return;
        case 0x12E:
            HUD__HideAllPlayerWidgets(lbl_803DC654);
            SimLoop__ActivateControls(lbl_803DC3C0, 0);
            MissionUI__InitializeFailureAndRetryScreen(lbl_803DC6A0, *(char **)arg0, lbl_80327AD0);
            return;
        case 0x12F:
            DisplayInfo__ShowEntry(lbl_803DC3A0, 4, *(int *)((char *)arg0 + 0x20), 0, lbl_80327AD0);
            break;
        }
    }
}
