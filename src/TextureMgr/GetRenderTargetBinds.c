/* TextureMgr__GetRenderTargetBinds @ 0x80248294 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef short s16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef unsigned short u16; typedef int s32;
#define NULL 0
extern char lbl_803B1C6C[] __attribute__((section(".data")));
void TextureMgr__GetRenderTargetBinds(s32 i, s32 j, u16 *a, u16 *b, u16 *c, u16 *d) {
    s32 m = j & 0x7FFF;
    char *base = lbl_803B1C6C;
    s32 k = m * 24;
    s32 o = i * 4;
    char *t = base + 160;
    u8 *e = (u8 *)(*(char **)(t + o) + k);
    if (a) {
        *a = *(u16 *)(e + 4);
    }
    if (b != NULL) {
        *b = *(u16 *)(e + 6);
    }
    if (c != NULL) {
        *c = *(u16 *)(e + 8);
    }
    if (d != NULL) {
        *d = *(u16 *)(e + 10);
    }
}
