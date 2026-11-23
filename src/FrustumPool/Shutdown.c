/* FrustumPool__Shutdown @ 0x8021B1AC (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void memFree(void *);
void memset(void *, int, u32);
extern M2C_UNK lbl_803ADD08 __attribute__((section(".data")));

void FrustumPool__Shutdown(void) {
    void *sys;
    void *p;
    if ((void *) M2C_FIELD(&lbl_803ADD08, void **, 0) != NULL) {
        sys = &lbl_803ADD08;
        p = M2C_FIELD(sys, void **, 4);
        if (p != NULL) {
            memFree(p);
        }
        memset(sys, 0, 0x20U);
    }
}
