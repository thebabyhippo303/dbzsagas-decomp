/* AI__CanUseFuzzyReactionAction @ 0x80061C4C (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;
typedef unsigned int u32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))

s32 AI__CanUseFuzzyReactionAction(void *self, s32 action) {
    s32 result = 0;
    if (M2C_FIELD(self, s32 *, 0xC8) == 7) {
        result = 1;
    } else if ((u32)(action - 1) <= 2U) {
        result = 1;
    }
    return result;
}
