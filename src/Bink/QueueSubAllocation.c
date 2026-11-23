/* Bink__QueueSubAllocation @ 0x802FB9BC (size: 0x10C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef unsigned int u32;
#define NULL 0
void *radmalloc(s32);
void radfree(void *);
void *memcpy(void *, const void *, u32, ...);
extern s32 lbl_8038A6E0 __attribute__((section(".data")));
extern s32 lbl_8038A6E4 __attribute__((section(".data")));
extern void *lbl_8038A6E8 __attribute__((section(".data")));
extern void *lbl_8038A6EC __attribute__((section(".data")));
extern s32 lbl_8038A6F0 __attribute__((section(".data")));
void Bink__QueueSubAllocation(s32 arg0, s32 arg1) {
    void *newp;
    void *new2;
    s32 n;
    s32 nn;
    s32 cnt;
    s32 q;
    n = lbl_8038A6F0;
    if (n == lbl_8038A6E4) {
        newp = radmalloc(n << 4);
        new2 = (char *)newp + (lbl_8038A6F0 << 3);
        memcpy(newp, lbl_8038A6E8, lbl_8038A6F0 << 2);
        memcpy(new2, lbl_8038A6EC, lbl_8038A6F0 << 2);
        nn = lbl_8038A6F0 + lbl_8038A6F0;
        lbl_8038A6F0 = nn;
        if (nn != 64) {
            radfree(lbl_8038A6E8);
        }
        lbl_8038A6E8 = newp;
        lbl_8038A6EC = new2;
    }
    arg1 = (arg1 + 31) & 0xFFFFFFE0;
    cnt = lbl_8038A6E4;
    q = (((lbl_8038A6E0 >> 5) & 31) - ((arg1 >> 5) & 31)) + 33;
    arg1 += ((q << 5) & 0x3E0);
    lbl_8038A6E0 += arg1;
    ((s32 *)lbl_8038A6EC)[cnt] = arg1;
    ((s32 *)lbl_8038A6E8)[cnt] = arg0;
    lbl_8038A6E4 = cnt + 1;
}
