/* Avatar__EndComboButtons @ 0x80034324 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: Avatar__EndComboButtons @ 0x80034324 (0x40). ProDG -O2. */
typedef struct {
    char pad[0x660];
    int combo;
} AvatarCombo;

extern void *Script__PopInt(void *script, void *context);
extern void *lbl_803DC654;
extern void HUD__EndComboButtons(void *hud, void *avatar);

void Avatar__EndComboButtons(void *script, void *context) {
    AvatarCombo *avatar = Script__PopInt(script, context);
    HUD__EndComboButtons(lbl_803DC654, avatar);
    avatar->combo = 0;
}
