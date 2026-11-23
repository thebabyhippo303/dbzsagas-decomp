/* Simple__SetSurfaceType @ 0x802C8150 (size: 0xC0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

int strlen(const char *);
char *strncpy(char *, const char *, u32);
s32 EnumTable__ResolveName(void *, char *, s32, s32);
s32 SurfaceType__ResolveIndex(void *, char *, s32, s32);
extern char lbl_803BEF74[];
extern char lbl_80352AD4[];
extern void *lbl_803DCCC0 __attribute__((section(".sdata")));

char *Simple__SetSurfaceType(void *self, char *name, s32 table) {
    if (strlen(name) != 0) {
        strncpy(lbl_803BEF74, name, 64);
    } else {
        ((u32 *)lbl_803BEF74)[0] = ((u32 *)lbl_80352AD4)[0];
        ((u32 *)lbl_803BEF74)[1] = ((u32 *)lbl_80352AD4)[1];
    }
    lbl_803BEF74[63] = 0;
    if (table != 0)
        M2C_FIELD(self, s32 *, 0x208) = EnumTable__ResolveName(lbl_803DCCC0, lbl_803BEF74, -1, 64);
    else
        M2C_FIELD(self, s32 *, 0x208) = SurfaceType__ResolveIndex(lbl_803DCCC0, lbl_803BEF74, -1, 64);
    return lbl_803BEF74;
}
