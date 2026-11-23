/* TexBind__ComputeTmemCacheRegions @ 0x8025014C (size: 0x78, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0

typedef struct {
    char pad[16];
    s32 mode;
    char pad2[19];
    u8 flag39;
    char pad3[120];
    u16 bits;
} TexBind;

void TexBind__ComputeTmemCacheRegions(TexBind *t, s32 a, s32 *o1, s32 *o2, s32 *o3, s32 *o4) {
    s32 g;
    *o1 = a << 16;
    *o2 = 0;
    *o3 = 0;
    *o4 = 3;
    if (t->mode == 6) {
        *o3 = (a << 15) + 0x80000;
        *o4 = 0;
        return;
    }
    if (t->flag39 == 0) {
        return;
    }
    g = t->bits & 2;
    if (g != 0) {
        *o3 = *o1 + 0x8000;
        *o4 = 0;
        return;
    } else {
        *o3 = (a << 15) + 0x80000;
    }
    *o4 = g;
}
