/* AI__InitializeEnemyController @ 0x80085F48 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void *AI__ConstructEnemyBase(void *);
void AI__EnsureActionPatternInitialized(void *);
int AI__InitializeActorAndState(void *);
void AI__ResetEnemyCombatState(void *);
extern M2C_UNK lbl_8032F3B0 __attribute__((section(".data")));
extern f32 lbl_8031F3D0 __attribute__((section(".data")));

void *AI__InitializeEnemyController(void *arg0, s32 arg1) {
    AI__ConstructEnemyBase(arg0);
    M2C_FIELD(arg0, s32 *, 0x38C) = arg1;
    M2C_FIELD(arg0, M2C_UNK **, 0x57C) = &lbl_8032F3B0;
    AI__InitializeActorAndState(arg0);
    AI__EnsureActionPatternInitialized(arg0);
    AI__ResetEnemyCombatState(arg0);
    M2C_FIELD(arg0, f32 *, 0x540) = (f32) lbl_8031F3D0;
    return arg0;
}
