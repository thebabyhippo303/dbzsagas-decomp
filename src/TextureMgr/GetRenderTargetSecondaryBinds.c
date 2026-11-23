/* TextureMgr__GetRenderTargetSecondaryBinds @ 0x802482F8 (size: 0x64, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))

extern char lbl_803B1C6C[];

void TextureMgr__GetRenderTargetSecondaryBinds(s32 arg0, s32 arg1, u16 *o1, u16 *o2, u16 *o3, u16 *o4) {
    s32 m = arg1 & 0x7FFF;
    char *base = lbl_803B1C6C;
    s32 off1 = m * 24;
    s32 off0 = arg0 * 4;
    char *t = base + 0xA0;
    char *e = *(char **)(t + off0) + off1;
    if (o1) {
        *o1 = *(u16 *)(e + 12);
    }
    if (o2 != NULL) {
        *o2 = *(u16 *)(e + 14);
    }
    if (o3 != NULL) {
        *o3 = *(u16 *)(e + 16);
    }
    if (o4 != NULL) {
        *o4 = *(u16 *)(e + 18);
    }
}
