/* TextureMgr__AllocRenderTarget @ 0x8024835C (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
extern char lbl_803B1C6C[];

s32 TextureMgr__AllocRenderTarget(s32 idx) {
    s32 o0 = idx * 4;
    char *base = lbl_803B1C6C;
    char *t = base + 0xA0;
    char *p = *(char **)(t + o0);
    char *c;
    char *q;
    s32 n;
    s32 i;
    if (p == NULL) {
        return 0;
    }
    c = base + 0xAC;
    n = *(s32 *)(c + o0);
    q = p;
    for (i = 0; i < n; i++, q += 24) {
        if (*(s32 *)(q + 20) != 0) {
            *(s32 *)(q + 20) = 0;
            return i | 0x8000;
        }
    }
    return 0;
}
