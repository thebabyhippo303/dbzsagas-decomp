/* DebugTextPager__DestroyPages @ 0x8026F858 (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct DTPVTab {
    char pad[0x18];
    s16 off;
    char pad2[2];
    void (*fn)(void *, s32);
} DTPVTab;
typedef struct DTPPage {
    char pad[0x10];
    DTPVTab *vt;
} DTPPage;
typedef struct DTPager {
    char pad[0x4E4];
    DTPPage *f4E4;
    DTPPage *f4E8;
} DTPager;

void DebugTextPager__DestroyPages(DTPager *self) {
    DTPPage *p;
    DTPVTab *vt;

    while (self->f4E8 != NULL) {
        p = self->f4E8;
        vt = p->vt;
        vt->fn((char *)p + vt->off, 3);
    }
    while (self->f4E4 != NULL) {
        p = self->f4E4;
        vt = p->vt;
        vt->fn((char *)p + vt->off, 3);
    }
}
