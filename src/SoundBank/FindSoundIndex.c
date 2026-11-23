/* SoundBank__FindSoundIndex @ 0x80192D9C (size: 0x94, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 String__CompareIgnoreCase(char *, char *);

s32 SoundBank__FindSoundIndex(char *arg0, char *arg1) {
    s32 lo = 0;
    s32 hi = M2C_FIELD(M2C_FIELD(arg0, char **, 8), s32 *, 0x10) - 1;
    s32 mid;
    s32 cmp;

    while (lo <= hi) {
        mid = (lo + hi) / 2;
        cmp = String__CompareIgnoreCase(arg1, *(char **)(M2C_FIELD(M2C_FIELD(arg0, char **, 8), char **, 0x1C) + mid * 0x14));
        if (cmp < 0) {
            hi = mid - 1;
        } else if (cmp > 0) {
            lo = mid + 1;
        } else {
            return mid;
        }
    }
    return -1;
}
