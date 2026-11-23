/* Game__GetKiCostChargeRate @ 0x8004424C (size: 0x28, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Byte-matched tuning getters. ProDG -O2.
   Each loads lbl_803DC3C0 and passes one field to the script helper.
   Game__GetReactionDizzyTime          @ 0x8004414C (0x28)  float @ 0x205C
   Game__GetKiCostSpecialMove          @ 0x800441AC (0x28)  float @ 0x2084
   Game__GetKiCostKiBlast              @ 0x800441D4 (0x28)  float @ 0x2088
   Game__GetKiCostQuickRecovery        @ 0x800441FC (0x28)  float @ 0x208C
   Game__GetKiCostComboBreaker         @ 0x80044224 (0x28)  float @ 0x2090
   Game__GetKiCostChargeRate           @ 0x8004424C (0x28)  float @ 0x2094
   Game__GetKiCostTurboChargeRate      @ 0x80044274 (0x28)  float @ 0x2098
   Game__GetKiCostTeleport             @ 0x8004429C (0x28)  float @ 0x209C
   Game__GetTimeBeforeRun              @ 0x800442C4 (0x28)  float @ 0x20B0
   Game__GetTimeBeforeFastFloat        @ 0x800442EC (0x28)  float @ 0x20B4
   Game__GetTimeBeforeSuperman         @ 0x80044314 (0x28)  float @ 0x20B8
   Game__GetReactionComboRecoveryTime  @ 0x8004433C (0x28)  float @ 0x2060
   Game__GetCellFinaleAtHealthPct      @ 0x8004444C (0x28)  float @ 0x20C0
   Game__GetVegetaFinaleAtHealthPct    @ 0x80044474 (0x28)  float @ 0x20C4
   Game__GetBeserkAnimRate             @ 0x800444F4 (0x28)  float @ 0x20D8
   Game__GetBeserkAdvanceRatio         @ 0x8004451C (0x28)  float @ 0x20DC
   Game__IsBossDeathMode               @ 0x8004512C (0x28)  int   @ 0x2148
   Game__UnlockPendulumMode            @ 0x80045194 (0x28)  lbl_803DC368+0x17C
*/
typedef struct {
    char pad0[0x205c];
    float reaction_dizzy;
    float reaction_combo_recovery;
    char pad1[0x2084 - 0x2064];
    float ki_special;
    float ki_blast;
    float ki_quick;
    float ki_combo;
    float ki_charge;
    float ki_turbo;
    float ki_teleport;
    char pad2[0x20b0 - 0x20a0];
    float time_run;
    float time_fast_float;
    float time_superman;
    char pad3[0x20c0 - 0x20bc];
    float cell_finale;
    float vegeta_finale;
    char pad4[0x20d8 - 0x20c8];
    float beserk_anim;
    float beserk_advance;
    char pad5[0x2148 - 0x20e0];
    int boss_death_mode;
} GameCfg;

extern GameCfg *lbl_803DC3C0;
void fn_8023A264(void *a, void *b, float c);
void fn_8023A224(void *a, void *b, int c);

void Game__GetReactionDizzyTime(void *a, void *b) {
    fn_8023A264(a, b, lbl_803DC3C0->reaction_dizzy);
}

void Game__GetKiCostSpecialMove(void *a, void *b) {
    fn_8023A264(a, b, lbl_803DC3C0->ki_special);
}

void Game__GetKiCostKiBlast(void *a, void *b) {
    fn_8023A264(a, b, lbl_803DC3C0->ki_blast);
}

void Game__GetKiCostQuickRecovery(void *a, void *b) {
    fn_8023A264(a, b, lbl_803DC3C0->ki_quick);
}

void Game__GetKiCostComboBreaker(void *a, void *b) {
    fn_8023A264(a, b, lbl_803DC3C0->ki_combo);
}

void Game__GetKiCostChargeRate(void *a, void *b) {
    fn_8023A264(a, b, lbl_803DC3C0->ki_charge);
}

void Game__GetKiCostTurboChargeRate(void *a, void *b) {
    fn_8023A264(a, b, lbl_803DC3C0->ki_turbo);
}

void Game__GetKiCostTeleport(void *a, void *b) {
    fn_8023A264(a, b, lbl_803DC3C0->ki_teleport);
}

void Game__GetTimeBeforeRun(void *a, void *b) {
    fn_8023A264(a, b, lbl_803DC3C0->time_run);
}

void Game__GetTimeBeforeFastFloat(void *a, void *b) {
    fn_8023A264(a, b, lbl_803DC3C0->time_fast_float);
}

void Game__GetTimeBeforeSuperman(void *a, void *b) {
    fn_8023A264(a, b, lbl_803DC3C0->time_superman);
}

void Game__GetReactionComboRecoveryTime(void *a, void *b) {
    fn_8023A264(a, b, lbl_803DC3C0->reaction_combo_recovery);
}

void Game__GetCellFinaleAtHealthPct(void *a, void *b) {
    fn_8023A264(a, b, lbl_803DC3C0->cell_finale);
}

void Game__GetVegetaFinaleAtHealthPct(void *a, void *b) {
    fn_8023A264(a, b, lbl_803DC3C0->vegeta_finale);
}

void Game__GetBeserkAnimRate(void *a, void *b) {
    fn_8023A264(a, b, lbl_803DC3C0->beserk_anim);
}

void Game__GetBeserkAdvanceRatio(void *a, void *b) {
    fn_8023A264(a, b, lbl_803DC3C0->beserk_advance);
}

void Game__IsBossDeathMode(void *a, void *b) {
    fn_8023A224(a, b, lbl_803DC3C0->boss_death_mode);
}

extern char *lbl_803DC368;
void fn_80127EF4(void *p);

void Game__UnlockPendulumMode(void) {
    fn_80127EF4(lbl_803DC368 + 0x17C);
}
