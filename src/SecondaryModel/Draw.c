/* SecondaryModel__Draw @ 0x8020A954 (size: 0xA0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct SMDrawVT {
    char pad[16];
    s16 adjust;
    s16 pad2;
    void (*draw)(void *, void *, void *, void *, f32);
} SMDrawVT;

typedef struct SMDrawItem {
    char pad[24];
    SMDrawVT *vt;
} SMDrawItem;

extern u8 lbl_803ACD60[] __attribute__((section(".data")));

void SecondaryModel__Draw(void *self, void *a, void *b, f32 f) {
    u32 i = 0;
    u32 baseAddr;
    SMDrawItem *it;
    SMDrawVT *vt;

    if (i < *(u16 *)((char *)*(void **)((char *)self + 4) + 50)) {
        do {
            baseAddr = *(u32 *)((char *)self + 24);
            it = (SMDrawItem *)((i * 28) + baseAddr);
            vt = it->vt;
            vt->draw((char *)it + vt->adjust, a, b, lbl_803ACD60, f);
            i++;
        } while (i < *(u16 *)((char *)*(void **)((char *)self + 4) + 50));
    }
}
