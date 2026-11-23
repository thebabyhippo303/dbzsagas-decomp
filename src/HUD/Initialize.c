/* HUD__Initialize @ 0x800FF2D4 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched: HUD__Initialize @ 0x800FF2D4 (0x58). ProDG -O2. */
typedef struct {
    char pad[0x2CC8];
    int field2CC8;
} HUDInit;

extern void HUD__EnsureInitialized(void);
extern void CombatHUD__ResetAttemptBreakerState(void *hud);
extern void Minimap__Update(void);
extern void fn_80119E58(float value);
extern void PlayerIndicator__Initialize(void);
extern void ProgressArrow__RegisterActors(void);
extern void HUD__CreateBossStatBars(void);
extern char lbl_80320000[];

void HUD__Initialize(HUDInit *hud) {
    HUD__EnsureInitialized();
    CombatHUD__ResetAttemptBreakerState(hud);
    Minimap__Update();
    fn_80119E58(*(float *)(lbl_80320000 + 0x5120));
    PlayerIndicator__Initialize();
    ProgressArrow__RegisterActors();
    HUD__CreateBossStatBars();
    hud->field2CC8 = 0;
}
