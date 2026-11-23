/* DebugTextPage__Destroy @ 0x8026F664 (size: 0x90, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0

extern s32 lbl_8034A5F0[] __attribute__((section(".rodata")));

typedef struct Page {
    char pad[16];
    void *vtbl;
    char sphere;
    char pad2[415];
    char items[4000];
} Page;

void Sphere__DestroyCore(void *p, s32 flags);
void EzNode__Destroy(void *p, s32 flags);

void DebugTextPage__Destroy(Page *self, s32 arg1) {
    char *p;
    void *d;
    self->vtbl = lbl_8034A5F0;
    if ((char *)self + 436 != NULL) {
        p = (char *)self + 4436;
        if ((char *)self + 436 != p) {
            do {
                p -= 500;
                d = *(void **)(p + 412);
                ((void (*)(void *, s32))((s32 *)d)[3])((char *)p + ((s16 *)d)[4], 0);
            } while ((char *)self + 436 != p);
        }
    }
    Sphere__DestroyCore((void *)((char *)self + 20), 2);
    EzNode__Destroy(self, arg1);
}
