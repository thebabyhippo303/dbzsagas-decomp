/* AI__ConstructDefaultEnemy @ 0x80074560 (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void * AI__ConstructBase(void *);
void AI__EnsureActionPatternInitialized(void *);
int AI__InitializeActorAndState(void *);
M2C_UNK AI__UpdateHealthThresholdReaction(void *);
extern M2C_UNK lbl_803346B0 __attribute__((section(".data")));

void *AI__ConstructDefaultEnemy(void *arg0, void *arg1) {
    s32 zero;

    zero = 0;
    AI__ConstructBase(arg0);
    M2C_FIELD(arg0, void **, 0x38C) = arg1;
    M2C_FIELD(arg0, M2C_UNK **, 0x57C) = &lbl_803346B0;
    M2C_FIELD(arg0, s32 *, 0x390) = M2C_FIELD(arg1, s32 *, 0xC8);
    AI__InitializeActorAndState(arg0);
    AI__EnsureActionPatternInitialized(arg0);
    AI__UpdateHealthThresholdReaction(arg0);
    M2C_FIELD(arg0, s32 *, 0x58C) = zero;
    M2C_FIELD(arg0, s32 *, 0x590) = zero;
    M2C_FIELD(arg0, s32 *, 0x594) = zero;
    M2C_FIELD(arg0, s32 *, 0x598) = zero;
    M2C_FIELD(arg0, s32 *, 0x5A8) = 1;
    M2C_FIELD(arg0, s32 *, 0x5B8) = zero;
    return arg0;
}
