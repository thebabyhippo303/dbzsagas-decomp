/* Instance__HideByName @ 0x802B07E0 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

/* Byte-matched: Instance__HideByName @ 0x802B07E0 (0x70). ProDG -O2. */
extern char *Script__PopString(void *script, void *context, int *owned);
extern char lbl_803B1E84[];
extern void *Instance__FindByName(void *root, char *name, int a, int b);
extern void Instance__HideImpl(void *instance);
extern void Mem__DeleteArray(void *ptr);

void Instance__HideByName(void *script, void *context) {
    int owned;
    char *name = Script__PopString(script, context, &owned);
    void *instance = Instance__FindByName(lbl_803B1E84, name, 0, 0);

    if (instance != 0)
        Instance__HideImpl(instance);
    if (owned != 0 && name != 0)
        Mem__DeleteArray(name);
}
