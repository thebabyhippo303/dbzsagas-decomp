/* AI__ConstructDefaultPlayer @ 0x80075B54 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void * AI__ConstructBase(void *);
void AI__EnsureActionPatternInitialized(void *);
int AI__InitializeActorAndState(void *);
extern M2C_UNK lbl_803316C8 __attribute__((section(".data")));
extern s32 lbl_803DC438;

void *AI__ConstructDefaultPlayer(void *arg0, s32 arg1) {
    s32 zero = 0;

    AI__ConstructBase(arg0);
    M2C_FIELD(arg0, s32 *, 0x38C) = arg1;
    M2C_FIELD(arg0, M2C_UNK **, 0x57C) = &lbl_803316C8;
    AI__InitializeActorAndState(arg0);
    AI__EnsureActionPatternInitialized(arg0);
    lbl_803DC438 = zero;
    return arg0;
}

