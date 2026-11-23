/* BaseMenu__AddItem @ 0x80262BF0 (size: 0xA8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

typedef struct {
    char pad[0x10];
    short adjust;
    short unused;
    void *fn;
} MenuVT;

typedef struct {
    char pad[0x128];
    short adjust;
    short unused;
    void *fn;
} ItemVT;

typedef struct {
    char pad[0x28];
    short adjust;
    short unused;
    void *fn;
} AttachVT;

void *BaseMenu__AddItem(void *arg0, void *arg1) {
    MenuVT *vt = *(MenuVT **)((char *)arg0 + 0x10);
    void *item = ((void *(*)(void *))vt->fn)((char *)arg0 + vt->adjust);
    if (item != 0) {
        ItemVT *vt2 = *(ItemVT **)((char *)item + 0x10);
        ((void (*)(void *, void *))vt2->fn)((char *)item + vt2->adjust, arg1);
    }
    {
        void *field = M2C_FIELD(arg0, void **, 132);
        AttachVT *vt3 = *(AttachVT **)((char *)field + 0x10);
        ((void (*)(void *, void *))vt3->fn)((char *)field + vt3->adjust, item);
    }
    if (item != 0) {
        M2C_FIELD(arg0, void **, 136) = item;
    }
    return item;
}
