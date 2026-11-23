/* ShadowMgr__Reset @ 0x8022CFEC (size: 0xD0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

/* Byte-matched: ShadowMgr__Reset @ 0x8022CFEC (0xD0). ProDG -O2. */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
extern void *lbl_803ADB30 __attribute__((section(".data")));
extern int lbl_803ADB24 __attribute__((section(".data")));
extern void *lbl_803ADB20 __attribute__((section(".data")));
extern s32 lbl_803ADB44 __attribute__((section(".data")));
void ShadowMgr__ReleaseLightSlot(void *, s32);
void SList__Init(void *, s32);
void SList__LinkArray(void *, void *, s32, s32);
void ShadowMgr__Reset(void) {
    void *p;
    void *b;
    s32 i;
    s32 nn;
    p = lbl_803ADB30;
    while (p != NULL) {
        for (i = 0; i < M2C_FIELD(p, s32 *, 24); i++) {
            ShadowMgr__ReleaseLightSlot(p, i);
        }
        p = M2C_FIELD(p, void **, 0);
    }
    SList__Init(&lbl_803ADB24, 0);
    b = &lbl_803ADB20;
    nn = 152;
    SList__LinkArray(&lbl_803ADB24, lbl_803ADB20, M2C_FIELD(b, s32 *, 32), nn);
    SList__Init((void *)((char *)b + 16), 0);
    p = M2C_FIELD(b, void **, 4);
    while (p != NULL) {
        M2C_FIELD(p, s32 *, 144) = 0;
        p = M2C_FIELD(p, void **, 0);
    }
    lbl_803ADB44 = 1;
}
