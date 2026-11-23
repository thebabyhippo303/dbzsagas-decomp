/* WindMgr__Shutdown @ 0x802176C4 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void memFree(void *);
void memset(void *, int, u32);
void WindMgr__FreeAll(void);
extern M2C_UNK lbl_803ADCB0 __attribute__((section(".data")));

void WindMgr__Shutdown(void) {
    void *mgr;
    void *p;

    WindMgr__FreeAll();
    mgr = &lbl_803ADCB0;
    p = M2C_FIELD(mgr, void **, 0x18);
    if (p != NULL) {
        memFree(p);
    }
    p = M2C_FIELD(mgr, void **, 0x2C);
    if (p != NULL) {
        memFree(p);
    }
    memset(mgr, 0, 0x38U);
}
