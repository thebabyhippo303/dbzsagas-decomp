/* DebugMenu__AddU8Item @ 0x802653F8 (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void *BaseMenu__AddItem(void *, void *);

typedef struct {
    char pad[0x260];
    short adjust;
    short unused;
    void *fn;
} ItemVTA;

void *DebugMenu__AddU8Item(void *arg0, void *arg1, void *arg2) {
    void *item = BaseMenu__AddItem(arg0, arg1);
    if (item != 0) {
        ItemVTA *vt2 = *(ItemVTA **)((char *)item + 0x10);
        ((void (*)(void *, int, void *))vt2->fn)((char *)item + vt2->adjust, 1, arg2);
    }
    return item;
}
