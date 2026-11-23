/* FireShieldEnemy__SelectTargetAction @ 0x800852E0 (size: 0x128, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
typedef short s16;
typedef struct InnerS { char pad[10]; s16 v10; } InnerS;
typedef struct MidA { char pad[244]; InnerS *pF4; } MidA;
typedef struct CtxB { char pad[2956]; void *pB8C; } CtxB;
typedef struct MidC { char pad[240]; InnerS *pF0; } MidC;
typedef struct AvC { char pad[132]; MidC *p84; } AvC;
typedef struct FireShieldSelf {
    char pad0[116];
    int actionState;
    char pad1[804 - 120];
    void *pattern;
    char pad2[908 - 808];
    MidA *midA;
    CtxB *ctxB;
} FireShieldSelf;
extern int lbl_80363040[];
extern int lbl_803630A0[];
extern int lbl_803630B4[];
extern int AIActionPattern__SelectHighestTransitionCount(void *pattern);
extern void *Game__FindNearestEligibleAvatar(void *ctx);
extern int AI__SelectFuzzyRangeForTargetDistance(void *self);
extern int AI__SelectWeightedAction(void *a, void *b, int c, int d);
extern int Avatar__GetAnimScriptVarInt(void *avatar, const char *name, int idx);
extern int AI__SelectRandomStateForImmuneTarget(void *self);
extern void AI__ActivateSelectedAction(void *self);
void FireShieldEnemy__SelectTargetAction(FireShieldSelf *self) {
    void *ctx;
    void *w28;
    void *avatar;
    int v;
    if (self->midA->pF4->v10 != 256) {
        return;
    }
    AIActionPattern__SelectHighestTransitionCount(self->pattern);
    ctx = self->ctxB;
    w28 = ((CtxB *)ctx)->pB8C;
    avatar = Game__FindNearestEligibleAvatar(ctx);
    v = lbl_80363040[AI__SelectFuzzyRangeForTargetDistance(self)];
    switch (v) {
    case 3:
        self->actionState = lbl_803630A0[AI__SelectWeightedAction((void *)((char *)self + 144), w28, 4, 0)];
        break;
    case 0:
    case 1:
    case 2:
    case 4:
        self->actionState = lbl_803630B4[AI__SelectWeightedAction((void *)((char *)self + 144), w28, 5, 0)];
        break;
    default:
        break;
    }
    if (avatar != 0) {
        if (Avatar__GetAnimScriptVarInt(avatar, "immuneToAttack", 0) != 0) {
            goto immune;
        }
        if (((AvC *)avatar)->p84->pF0->v10 != 2304) {
            goto activate;
        }
immune:
        self->actionState = AI__SelectRandomStateForImmuneTarget(self);
    }
activate:
    AI__ActivateSelectedAction(self);
}
