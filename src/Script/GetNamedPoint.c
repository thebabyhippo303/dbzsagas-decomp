/* Script__GetNamedPoint @ 0x802B20F8 (size: 0xD4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

extern char *Script__PopString(void *script, void *context, int *owned);
extern void *NamedPoint__FindByName(void *table, char *name, int flags);
extern void Script__PushFloat(void *script, void *context, float value);
extern void Script__PushInt(void *script, void *context, int value);
extern void Mem__DeleteArray(void *ptr);
extern char lbl_803B1E84[];

void Script__GetNamedPoint(void *script, void *context) {
    int owned;
    char *name;
    float *point;

    name = Script__PopString(script, context, &owned);
    point = NamedPoint__FindByName(lbl_803B1E84, name, 0);
    if (point != 0) {
        Script__PushFloat(script, context, point[0]);
        Script__PushFloat(script, context, point[1]);
        Script__PushFloat(script, context, point[2]);
    } else {
        Script__PushInt(script, context, -1);
        Script__PushInt(script, context, -1);
        Script__PushInt(script, context, -1);
    }
    if (owned != 0 && name != 0) {
        Mem__DeleteArray(name);
    }
}
