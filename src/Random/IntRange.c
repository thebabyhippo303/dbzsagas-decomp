/* Random__IntRange @ 0x801AA278 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int s32;

s32 Random__IntBelow(s32);

s32 Random__IntRange(s32 lo, s32 hi) {
    s32 result;
    if (lo < hi) {
        result = lo + Random__IntBelow(hi - lo);
    } else {
        result = lo;
    }
    return result;
}
