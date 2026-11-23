/* BaseMenu__AddMethodItem @ 0x80262E50 (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
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
    char pad[0xF8];
    short adjust;
    short unused;
    void *fn;
} ItemVTM;

void *BaseMenu__AddMethodItem(void *arg0, void *arg1, void *arg2, void *arg3) {
    MenuVT *vt = *(MenuVT **)((char *)arg0 + 0x10);
    void *cb = arg2;
    void *b = ((void **)arg3)[1];
    void *a = ((void **)arg3)[0];
    void *pair[2];
    void *item = ((void *(*)(void *, void *))vt->fn)((char *)arg0 + vt->adjust, arg1);
    if (item != 0) {
        ItemVTM *vt2;
        pair[0] = a;
        pair[1] = b;
        vt2 = *(ItemVTM **)((char *)item + 0x10);
        ((void (*)(void *, void *, void *))vt2->fn)((char *)item + vt2->adjust, cb, pair);
    }
    return item;
}
