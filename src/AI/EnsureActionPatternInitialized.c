/* AI__EnsureActionPatternInitialized @ 0x80063A90 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void * fn_801842C4(unsigned int);
s32 AIActionPattern__Construct(s32, s32);           /* extern */
M2C_UNK AIActionPattern__RebuildTransitionCounts(s32); /* extern */

void AI__EnsureActionPatternInitialized(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x328) == 0) {
        s32 actionPattern = (s32)fn_801842C4(0x14U);
        actionPattern = AIActionPattern__Construct(actionPattern, M2C_FIELD(arg0, s32 *, 0xC8));
        M2C_FIELD(arg0, s32 *, 0x324) = actionPattern;
        AIActionPattern__RebuildTransitionCounts(actionPattern);
        M2C_FIELD(arg0, s32 *, 0x328) = 1;
    }
}
