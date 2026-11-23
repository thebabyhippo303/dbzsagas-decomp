/* BaseMenu__AddFunctionItem @ 0x80262D78 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct {
    char pad[0xA0];
    short adjust;
    short unused;
    void *fn;
} MenuVT;

typedef struct {
    char pad[0xE8];
    short adjust;
    short unused;
    void *fn;
} ItemVT;

void *BaseMenu__AddFunctionItem(void *arg0, void *arg1, void *arg2) {
    MenuVT *vt = *(MenuVT **)((char *)arg0 + 0x10);
    void *item = ((void *(*)(void *, void *))vt->fn)((char *)arg0 + vt->adjust, arg1);
    if (item != 0) {
        ItemVT *vt2 = *(ItemVT **)((char *)item + 0x10);
        ((void (*)(void *, void *))vt2->fn)((char *)item + vt2->adjust, arg2);
    }
    return item;
}
