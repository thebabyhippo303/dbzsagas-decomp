/* AI__AdvanceAttackChanceRecoveryPhase @ 0x8006268C (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
void AI__ChooseAttackOrSuppressedStateByChance(void *);

void AI__AdvanceAttackChanceRecoveryPhase(void *arg0) {
    s32 state = M2C_FIELD(arg0, s32 *, 0x53C);
    if (state == 1) goto case_one;
    if (state <= 1) return;
    if (state == 2) goto case_two;
    if (state == 3) goto case_three;
    return;
case_one:
    M2C_FIELD(arg0, s32 *, 0x53C) = 2;
    AI__ChooseAttackOrSuppressedStateByChance(arg0);
    return;
case_two:
    M2C_FIELD(arg0, s32 *, 0x53C) = 3;
    return;
case_three:
    M2C_FIELD(arg0, s32 *, 0x53C) = 0;
}
