/* TexBind__SetWrap @ 0x8024F4EC (size: 0x10C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
extern s8 *lbl_803DCDFC;
extern u32 lbl_803DD624;
u16 TextureMgr__HasOverriddenBind(void);
u16 TextureMgr__GetOverrideReplacementBind(void);
u16 TextureMgr__GetOverriddenBind(void);
void *TexBind__FindBlock(char *, u32);
void *TexBind__SetWrap(s32 bind, s32 wrapS, s32 wrapT, s32 force) {
    s32 b = bind;
    s32 bS = wrapS;
    s32 bT = wrapT;
    s8 *m = lbl_803DCDFC;
    s32 fc = force;
    void *block;
    s32 arr;
    s32 off;
    void *e;
    s32 s1;
    if (TextureMgr__HasOverriddenBind() != 0) {
        TextureMgr__GetOverrideReplacementBind();
        if (b == TextureMgr__GetOverriddenBind()) {
            b = TextureMgr__GetOverrideReplacementBind();
        }
    }
    block = TexBind__FindBlock((char *)m, (u32)b);
    if (block == NULL) {
        return NULL;
    }
    arr = M2C_FIELD(block, s32 *, 4);
    off = 0;
    if (arr != 0) {
        off = arr + (b - (s32)M2C_FIELD(block, u16 *, 0)) * 168;
        e = (void *)off;
    } else {
        e = block;
    }
    if (lbl_803DD624 & 2) {
        return e;
    }
    if (fc == 0 && bS == (s32)M2C_FIELD(e, u8 *, 36) && bT == (s32)M2C_FIELD(e, u8 *, 37)) {
        return e;
    }
    s1 = (bS == 1);
    M2C_FIELD(e, u8 *, 36) = (u8)bS;
    M2C_FIELD(e, u16 *, 162) = M2C_FIELD(e, u16 *, 162) | 8;
    M2C_FIELD(e, u8 *, 37) = (u8)bT;
    if (s1) {
        M2C_FIELD(e, u32 *, 40) = (u32)bS;
    } else {
        M2C_FIELD(e, u32 *, 40) = 0;
    }
    if (bT == 1) {
        M2C_FIELD(e, u32 *, 44) = (u32)bT;
    } else {
        M2C_FIELD(e, u32 *, 44) = 0;
    }
    return e;
}
