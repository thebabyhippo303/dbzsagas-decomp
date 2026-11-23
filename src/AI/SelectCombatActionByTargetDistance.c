/* AI__SelectCombatActionByTargetDistance @ 0x800781A0 (size: 0x128, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;
typedef float f32;
typedef double f64;
typedef int M2C_UNK;

#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 AIActionPattern__SelectHighestTransitionCount(void *);
void AI__ActivateSelectedAction(void *);
int AI__SelectFuzzyRangeForTargetDistance(void *);
s32 AI__SelectRandomActionForImmuneTarget(void *);
int Avatar__GetAnimScriptVarInt(void *, void *, void *);
void *Game__FindNearestEligibleAvatar(void *);
s32 AI__SelectWeightedAction(void *, s32, s32, s32);

extern M2C_UNK lbl_8031E3F4 __attribute__((section(".data")));
extern s32 lbl_803639C0[] __attribute__((section(".data")));
extern s32 lbl_80363A20[] __attribute__((section(".data")));
extern s32 lbl_80363A34[] __attribute__((section(".data")));

void AI__SelectCombatActionByTargetDistance(void *arg0) {
    s32 temp_r0;
    s32 temp_r28;
    s32 var_r3;
    s32 *var_r9;
    void *temp_r29;
    void *temp_r3;

    if ((s16)M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x38C), void **, 0xF4), s16 *, 0xA) == 0x100) {
        AIActionPattern__SelectHighestTransitionCount(M2C_FIELD(arg0, void **, 0x324));
        temp_r3 = M2C_FIELD(arg0, void **, 0x390);
        temp_r28 = M2C_FIELD(temp_r3, s32 *, 0xB8C);
        temp_r29 = Game__FindNearestEligibleAvatar(temp_r3);
        temp_r0 = lbl_803639C0[AI__SelectFuzzyRangeForTargetDistance(arg0)];
        switch (temp_r0) {
        case 3:
            var_r3 = AI__SelectWeightedAction((char *)arg0 + 0x90, temp_r28, 4, 0) * 4;
            var_r9 = lbl_80363A20;
            goto join;
        case 0:
        case 1:
        case 2:
        case 4:
            var_r3 = AI__SelectWeightedAction((char *)arg0 + 0x90, temp_r28, 5, 0) * 4;
            var_r9 = lbl_80363A34;
        join:
            M2C_FIELD(arg0, s32 *, 0x74) = *(s32 *)((char *)var_r9 + var_r3);
            break;
        default:
            break;
        }
        if ((temp_r29 != NULL) && ((Avatar__GetAnimScriptVarInt(temp_r29, &lbl_8031E3F4, NULL) != 0) ||
                                   ((s16)M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_r29, void **, 0x84), void **, 0xF0), s16 *, 0xA) == 0x900))) {
            M2C_FIELD(arg0, s32 *, 0x74) = AI__SelectRandomActionForImmuneTarget(arg0);
        }
        AI__ActivateSelectedAction(arg0);
    }
}
