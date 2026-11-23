/* EzString__GetChar @ 0x80270030 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 EzString__GetChar(void *arg0, s32 idx) {
    void *t;
    char *p;

    t = M2C_FIELD(arg0, void **, 8);
    if ((p = M2C_FIELD(t, char *(**)(void *), 76)((char *)arg0 + M2C_FIELD(t, s16 *, 72)))) {
        return (s32)(s8)p[idx];
    }
    return 0;
}
