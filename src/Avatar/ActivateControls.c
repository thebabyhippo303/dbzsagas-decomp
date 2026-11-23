/* Avatar__ActivateControls @ 0x8008CA24 (size: 0xB8, .text, ProDG 3.9.3 -O2) - MATCHED */
extern void Debug__FormatMessage(const char *fmt, ...);
extern void AvatarControls__DispatchActiveActionCallbacks(void *ctl);
extern void Avatar__ClearBlockAndKiChargeHoldAnimVars(void *p);

typedef struct Ctl {
    int pad0;
    int enabledA;
    int active;
    int active2;
} Ctl;

void Avatar__ActivateControls(char *self, int enable) {
    Ctl *c;
    Debug__FormatMessage("Avatar::ActivateControls( %s )\n", enable ? "true" : "false");
    c = *(Ctl **)(self + 1824);
    if (c != 0) {
        int v;
        if (c->active != 0 && enable == 0) {
            AvatarControls__DispatchActiveActionCallbacks(c);
            if (self + 2380 != 0) {
                Avatar__ClearBlockAndKiChargeHoldAnimVars(self + 2380);
            }
        }
        c = *(Ctl **)(self + 1824);
        v = 0;
        if (enable != 0 && c->enabledA != 0) {
            v = 1;
        }
        c->active = v;
        c->active2 = v;
    }
}
