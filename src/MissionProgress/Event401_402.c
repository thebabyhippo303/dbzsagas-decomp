/* MissionProgress__Event401_402 @ 0x8012A37C (size: 0x98, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: MissionProgress__Event401_402 @ 0x8012A37C (0x98). ProDG -O2. */
typedef struct {
    char *name;
    int id;
    char pad[0x14];
    int event;
} MissionProgress401;

extern void *lbl_803DC654 __attribute__((section(".sdata")));
extern void *lbl_803DC3C0 __attribute__((section(".sdata")));
extern void *lbl_803DC6A0 __attribute__((section(".sdata")));
extern float lbl_80327ACC __attribute__((section(".data")));

extern void MissionCollect__Event(MissionProgress401 *self, int event, int id);
extern void MissionProgress__Complete(MissionProgress401 *self);
extern void HUD__HideAllPlayerWidgets(void *hud);
extern void SimLoop__ActivateControls(void *loop, int active);
extern void MissionUI__InitializeFailureAndRetryScreen(void *ui, const char *text, float offset);

void MissionProgress__Event401_402(MissionProgress401 *self, int event, int id) {
    MissionCollect__Event(self, event, id);
    if (id == self->event) {
        switch (event) {
        case 401:
            MissionProgress__Complete(self);
            MissionCollect__Event(self, 101, self->id);
            return;
        case 402:
            HUD__HideAllPlayerWidgets(lbl_803DC654);
            SimLoop__ActivateControls(lbl_803DC3C0, 0);
            MissionUI__InitializeFailureAndRetryScreen(lbl_803DC6A0, self->name, lbl_80327ACC);
            break;
        }
    }
}
