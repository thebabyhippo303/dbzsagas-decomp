/* HUD__RefreshStarBeepWidgets @ 0x801099FC (size: 0xD0, .text, ProDG 3.9.3 -O2) - MATCHED */
/* HUD__RefreshStarBeepWidgets @ 0x801099FC (0xD0). ProDG -O2. */

#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))

extern void *lbl_803DC3C0;
extern float lbl_80325B54 __attribute__((section(".data")));
extern float lbl_80325B58 __attribute__((section(".data")));
extern float lbl_80325B5C __attribute__((section(".data")));

extern void *Game__GetPlayerImpl(void *game, int index);
extern void HUD__ClearStarBeepWidgets(void *self, void *group);
extern void HUD__BuildStarBeepWidgetGroup(void *self, void *group, int flag, float x, float y);
extern void HUD__ResetStarBeepWidgetSlots(void *self, void *group);

void HUD__RefreshStarBeepWidgets(void *self) {
    int state;
    void *player;
    void *group;

    state = M2C_FIELD(M2C_FIELD(lbl_803DC3C0, void **, 0x238), int *, 4);
    if (state == 0x11 || state == 0x13) {
        player = Game__GetPlayerImpl(lbl_803DC3C0, 0);
        M2C_FIELD(player, int *, 0x2B0) = 0;
        group = (char *)self + 0x1268;
        HUD__ClearStarBeepWidgets(self, group);
        HUD__BuildStarBeepWidgetGroup(self, group, 0, lbl_80325B54, lbl_80325B58);
        player = M2C_FIELD(self, void **, 0x1C80);
        if (player != 0) {
            M2C_FIELD(player, int *, 0x2B0) = 0;
        }
        group = (char *)self + 0x1C80;
        HUD__ClearStarBeepWidgets(self, group);
        HUD__ResetStarBeepWidgetSlots(self, group);
        HUD__BuildStarBeepWidgetGroup(self, group, 0, lbl_80325B5C, lbl_80325B58);
    }
}
