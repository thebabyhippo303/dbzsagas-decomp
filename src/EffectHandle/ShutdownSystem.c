/* EffectHandle__ShutdownSystem @ 0x8022E770 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void memFree(void *);
void EffectHandle__FreeAuxBuffer(void);
void memset(void *, int, u32);
extern char lbl_803ADD88[];

void EffectHandle__ShutdownSystem(void) {
    char *s = lbl_803ADD88;
    void *p = M2C_FIELD(s, void **, 4);
    if (p != NULL) {
        memFree(p);
        memFree(M2C_FIELD(s, void **, 0x34));
        memFree(M2C_FIELD(s, void **, 0x38));
        memFree(M2C_FIELD(s, void **, 0x3C));
        EffectHandle__FreeAuxBuffer();
        memset(s, 0, 244U);
    }
}
