/* AI__ActivateSelectedAction @ 0x800756A8 (size: 0xC4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void AI__SetState(void *, s32);
void * Actor__GetStateHandler(int);
void Avatar__ClearPurpleSpiralEffects(void *);
M2C_UNK AI__AdvancePostActionTimerAndState(void *); /* extern */
s32 AI__CanEnterTargetedCombatState(void *);        /* extern */
M2C_UNK AI__SelectNextMovementState(void *);        /* extern */

void AI__ActivateSelectedAction(void *arg0) {
    s32 var_r3;
    void *temp_r9;

    AI__SetState(arg0, 0);
    Avatar__ClearPurpleSpiralEffects(arg0);
    temp_r9 = M2C_FIELD(arg0, void **, 0x57C);
    M2C_FIELD(arg0, s32 *, 0xF8) = 1;
    if (M2C_FIELD(temp_r9, s32 (**)(void *), 0x64)(arg0 + M2C_FIELD(temp_r9, s16 *, 0x60)) != 0) {
        M2C_FIELD(arg0, s32 *, 0x74) = 0x78;
        AI__AdvancePostActionTimerAndState(arg0);
        var_r3 = M2C_FIELD(arg0, s32 *, 0x74);
        M2C_FIELD(arg0, void **, 0x388) = Actor__GetStateHandler(var_r3);
        AI__SelectNextMovementState(arg0);
        return;
    }
    if (AI__CanEnterTargetedCombatState(arg0) != 0) {
        var_r3 = 0xB;
        M2C_FIELD(arg0, s32 *, 0x74) = 0xB;
        M2C_FIELD(arg0, void **, 0x388) = Actor__GetStateHandler(var_r3);
        AI__SelectNextMovementState(arg0);
        return;
    }
    AI__AdvancePostActionTimerAndState(arg0);
    M2C_FIELD(arg0, void **, 0x388) = Actor__GetStateHandler(M2C_FIELD(arg0, s32 *, 0x74));
    AI__SelectNextMovementState(arg0);
}
