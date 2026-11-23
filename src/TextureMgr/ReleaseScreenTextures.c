/* TextureMgr__ReleaseScreenTextures @ 0x802472D4 (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

M2C_UNK TexBind__Release(s32, s32);
extern char lbl_803B1C6C[];

void TextureMgr__ReleaseScreenTextures(void) {
    char *p = lbl_803B1C6C;
    if (M2C_FIELD(p, u16 *, 0x14) != 0) {
        TexBind__Release(M2C_FIELD(p, u16 *, 0x14), 0);
        M2C_FIELD(p, u16 *, 0x14) = 0;
    }
    if (M2C_FIELD(p, u16 *, 6) != 0) {
        TexBind__Release(M2C_FIELD(p, u16 *, 6), 0);
        M2C_FIELD(p, u16 *, 6) = 0;
    }
    if (M2C_FIELD(p, u16 *, 8) != 0) {
        TexBind__Release(M2C_FIELD(p, u16 *, 8), 0);
        M2C_FIELD(p, u16 *, 8) = 0;
        M2C_FIELD(p, s32 *, 0xC) = 0;
    }
}
