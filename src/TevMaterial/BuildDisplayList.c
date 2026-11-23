/* TevMaterial__BuildDisplayList @ 0x8024C038 (size: 0x1AC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;
typedef float f32;
typedef double f64;
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64;
typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })
typedef struct {
    s32 f0;
    s32 f4;
    s32 f8;
    s32 fC;
    s32 f10;
    s32 f14;
    u8 f18;
    u8 pad19[3];
    s32 f1C;
    s32 f20;
    s32 f24;
    s32 f28;
    s32 f2C;
    s32 f30;
    s32 f34;
    s32 f38;
    u8 f3C;
    u8 pad3D[3];
    s32 f40;
    s32 f44;
    s32 f48;
    s32 f4C;
    s32 f50;
    s32 f54;
    s32 f58;
    s32 f5C;
    u8 f60;
    u8 pad61[3];
    s32 f64;
    s32 f68;
    s32 f6C;
} StageA;
void OSLockMutex(void *);
void GDInitGDLObj(void *, s32, s32);
void GDSetOverflowCallback(void *);
void GDSetTevOrder(s32, s32, s32, s32, s32, s32, s32);
void GDSetTexCoordGen(s32, s32, s32, s32, s32);
void GDSetTevKonstantSel(s32, s32, s32, s32, s32);
void GDSetTevColorCalc(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void GDSetTevAlphaCalcAndSwap(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void GDSetGenMode2(s32, s32, s32);
void GDPadCurr32(void);
void GDFlushCurrToMem(void);
void OSUnlockMutex(void *);
void fn_8024C030(void);
extern void *lbl_803DCDF4 __attribute__((section(".sdata")));
extern void *lbl_803DD8A0 __attribute__((section(".sdata")));
void TevMaterial__BuildDisplayList(char *self) {
    u8 buf[16];
    s32 i;
    StageA *a;
    StageA *b;
    void *ctx;
    char *m;
    i = 0;
    a = (StageA *)(self + 0x40C);
    b = (StageA *)(self + 0x47C);
    OSLockMutex((char *)lbl_803DCDF4 + 0x5C);
    GDInitGDLObj(buf, self, 1024);
    lbl_803DD8A0 = buf;
    GDSetOverflowCallback(fn_8024C030);
    if (i < *(u8 *)(self + 0x408)) {
        do {
            if ((i & 1) == 0) {
                GDSetTevOrder(i, a->f0, a->f4, a->f8, b->f0, b->f4, b->f8);
            }
            if (i <= 7) {
                GDSetTexCoordGen(a->fC, a->f10, a->f14, a->f18, a->f1C);
            }
            if ((i & 1) == 0) {
                GDSetTevKonstantSel(i, a->f68, a->f6C, b->f68, b->f6C);
            }
            GDSetTevColorCalc(i, a->f20, a->f24, a->f28, a->f2C, a->f30, a->f34, a->f38, a->f3C, a->f40);
            GDSetTevAlphaCalcAndSwap(i, a->f44, a->f48, a->f4C, a->f50, a->f54, a->f58, a->f5C, a->f60, a->f64, 0, 0);
            a++;
            b++;
            i++;
        } while (i < *(u8 *)(self + 0x408));
    }
    GDSetGenMode2(*(u8 *)(self + 0x409), *(u8 *)(self + 0x40A), *(u8 *)(self + 0x408));
    GDPadCurr32();
    GDFlushCurrToMem();
    ctx = lbl_803DD8A0;
    m = (char *)lbl_803DCDF4 + 0x5C;
    *(s32 *)(self + 0xB14) = ((s32 *)ctx)[2] - ((s32 *)ctx)[0];
    OSUnlockMutex(m);
}
