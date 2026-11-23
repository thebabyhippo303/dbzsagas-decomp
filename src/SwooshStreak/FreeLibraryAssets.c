/* SwooshStreak__FreeLibraryAssets @ 0x8023015C (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void SwooshStreak__FreeEntry(void *);
s32 ParticleMgr__FindLibraryIndex(s32);
extern void *lbl_803ADE88 __attribute__((section(".data")));

void SwooshStreak__FreeLibraryAssets(s32 arg0) {
    s32 idx = -1;
    void *p;
    void *cur;

    if (arg0 != 0) {
        idx = ParticleMgr__FindLibraryIndex(arg0);
        if (idx == 0x14) {
            return;
        }
    }
    p = lbl_803ADE88;
    while (p != NULL) {
        cur = p;
        p = M2C_FIELD(cur, void **, 4);
        if ((arg0 == 0) || (M2C_FIELD(cur, s32 *, 0xC) == idx)) {
            SwooshStreak__FreeEntry(cur);
        }
    }
}
