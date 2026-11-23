/* EffectHandle__SelectTextureSet @ 0x8022EDEC (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct {
    char pad[0x28];
    void *field28;
    void *field2C;
} EffectActive;

extern EffectActive lbl_803ADD88;
extern char lbl_80345C10[] __attribute__((section(".data")));
extern void *Database__GetTypedObject(void *a, void *b, void *c, void *d);

int EffectHandle__SelectTextureSet(void *arg0) {
    void *o;
    if (lbl_803ADD88.field2C == arg0) {
        return 1;
    }
    o = Database__GetTypedObject((void *)130, lbl_80345C10, arg0, 0);
    if (o == 0) {
        o = Database__GetTypedObject((void *)134, lbl_80345C10, arg0, 0);
    }
    lbl_803ADD88.field28 = o;
    lbl_803ADD88.field2C = arg0;
    return o != 0;
}
