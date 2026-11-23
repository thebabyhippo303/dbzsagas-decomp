/* EzString__StrGreater @ 0x8026FCD8 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
s32 EzString__StrGreater(char *s1, char *s2) {
    s32 i = 0;
    while (s1[i] == s2[i]) {
        if (s1[i] == 0) {
            return 0;
        }
        i++;
    }
    if (((s32)(s8)s1[i] - (s32)(s8)s2[i]) > 0) {
        return -1;
    }
    return 0;
}
