/* BackgroundExp__InitHole @ 0x8003D810 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

extern int Script__PopInt(void *, int);
extern char *Script__PopString(void *, int, int *);
extern void *Cast__FindActorByInstanceName(char *);
extern void Mem__DeleteArray(void *);
void BackgroundExp__InitHole(void *arg0, int arg1) {
    void *obj;
    int owned;
    char *name;
    void *actor;
    obj = (void *)Script__PopInt(arg0, arg1);
    name = Script__PopString(arg0, arg1, &owned);
    actor = Cast__FindActorByInstanceName(name);
    if (actor != 0)
        *(void **)((char *)obj + 0x594) = actor;
    else
        *(void **)((char *)obj + 0x594) = actor;
    if (owned != 0 && name != 0)
        Mem__DeleteArray(name);
}
