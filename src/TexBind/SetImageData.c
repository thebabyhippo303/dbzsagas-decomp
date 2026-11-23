/* TexBind__SetImageData @ 0x8024F1D0 (size: 0xCC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void *fn_80247E34(void *, void *);
void *fn_80247E04();
void *fn_80247E10();
void *TexBind__FindBlock(void *, void *);
extern void *lbl_803DCDFC __attribute__((section(".sdata")));

s32 TexBind__SetImageData(void *arg0, void *arg1) {
    void *img = arg1;
    void *x = arg0;
    void *g = lbl_803DCDFC;
    void *blk;
    void *entry;
    u32 bits;
    if (fn_80247E34(arg0, arg1) != NULL) {
        fn_80247E04();
        if (x == fn_80247E10()) {
            x = fn_80247E04();
        }
    }
    blk = TexBind__FindBlock(g, x);
    if (blk == NULL) {
        entry = NULL;
    } else {
        s32 d;
        void *f4 = M2C_FIELD(blk, void **, 4);
        if (f4 == NULL) {
            d = 0;
        } else {
            s32 id = M2C_FIELD(blk, u16 *, 0);
            d = (s32)((char *)f4 + ((s32)x - id) * 168);
        }
        entry = (void *)d;
    }
    M2C_FIELD(entry, void **, 0) = M2C_FIELD(img, void **, 12);
    bits = (u32)M2C_FIELD(img, u32 *, 0) & 0x38;
    if (bits == 8 || bits == 40) {
        M2C_FIELD(entry, void **, 4) = M2C_FIELD(img, void **, 28);
    }
    M2C_FIELD(entry, u16 *, 162) |= 8;
    return 1;
}
