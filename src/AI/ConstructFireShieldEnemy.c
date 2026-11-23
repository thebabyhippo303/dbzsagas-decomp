/* AI__ConstructFireShieldEnemy @ 0x80084A24 (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void * AI__ConstructEnemyBase(void *);
void AI__EnsureActionPatternInitialized(void *);
int AI__InitializeActorAndState(void *);
void AI__ResetEnemyCombatState(void *);
void Avatar__StartFireShieldImpl(void *, int);
extern M2C_UNK lbl_8032F4E0 __attribute__((section(".data")));
extern s32 lbl_803DC434;

void *AI__ConstructFireShieldEnemy(void *arg0, s32 arg1) {
    s32 zero = 0;

    AI__ConstructEnemyBase(arg0);
    M2C_FIELD(arg0, s32 *, 0x38C) = arg1;
    M2C_FIELD(arg0, M2C_UNK **, 0x57C) = &lbl_8032F4E0;
    AI__InitializeActorAndState(arg0);
    AI__EnsureActionPatternInitialized(arg0);
    AI__ResetEnemyCombatState(arg0);
    Avatar__StartFireShieldImpl(M2C_FIELD(arg0, void **, 0x390), 0xE);
    M2C_FIELD(arg0, s32 *, 0x5C8) = zero;
    M2C_FIELD(arg0, s32 *, 0x5C0) = zero;
    M2C_FIELD(arg0, s32 *, 0x5C4) = zero;
    lbl_803DC434 = zero;
    M2C_FIELD(arg0, s32 *, 0x5B8) = zero;
    return arg0;
}
