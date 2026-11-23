/* SaveMenu__FormatMemoryCardForPendingSave @ 0x800549C4 (size: 0x134, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef unsigned short u16; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef short s16; typedef int s32; typedef float f32;
typedef struct { s32 a; s32 b; } Pair;
void Task__WaitSeconds(f32);
void fn_80267318(void *, int, float);
extern f32 lbl_8031A6F4 __attribute__((section(".data")));
extern f32 lbl_8031A6F8 __attribute__((section(".data")));
extern f32 lbl_8031A6FC __attribute__((section(".data")));
extern char lbl_8031A0E4[] __attribute__((section(".data")));
extern char lbl_8031A0F0[] __attribute__((section(".data")));
extern char lbl_80319C0C[] __attribute__((section(".data")));
extern Pair lbl_8031A6E4 __attribute__((section(".data")));
extern void *lbl_803DCC60;
extern void *lbl_803DCC70;
extern s32 lbl_803DC40C;
#define F(e, t, o) (*(t)((char *)(e) + (o)))

void SaveMenu__FormatMemoryCardForPendingSave(void *self) {
    void *t2; void *t3; void *t4; void *t1; void *t5;
    s32 r;
    Pair p;

    F(lbl_803DCC60, s32 *, 8) = 1;
    t1 = F(self, void **, 0x19C);
    F(t1, void (**)(void *, char *, char *), 0x3DC)((char *)self + F(t1, s16 *, 0x3D8), lbl_8031A0E4, lbl_80319C0C);
    Task__WaitSeconds(lbl_8031A6F4);
    t2 = F(lbl_803DCC70, void **, 0xC);
    r = F(t2, s32 (**)(void *), 0x54)((char *)lbl_803DCC70 + F(t2, s16 *, 0x50));
    F(lbl_803DCC60, s32 *, 8) = 0;
    if (r != 0) {
        t3 = F(self, void **, 0x19C);
        F(t3, void (**)(void *, s32), 0x3B4)((char *)self + F(t3, s16 *, 0x3B0), r);
        return;
    }
    t4 = F(self, void **, 0x19C);
    F(t4, void (**)(void *, char *, char *), 0x3DC)((char *)self + F(t4, s16 *, 0x3D8), lbl_8031A0E4, lbl_8031A0F0);
    Task__WaitSeconds(lbl_8031A6F8);
    fn_80267318((char *)self + 0x1A4, 0, lbl_8031A6FC);
    p = lbl_8031A6E4;
    t5 = F(self, void **, 0x19C);
    F(t5, void (**)(void *, Pair *), 0x40C)((char *)self + F(t5, s16 *, 0x408), &p);
    lbl_803DC40C = 1;
}
