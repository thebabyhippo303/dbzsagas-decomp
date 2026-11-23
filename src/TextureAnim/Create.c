/* TextureAnim__Create @ 0x80247CD4 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

extern void *Mem__New(unsigned int size);
extern void *TextureAnim__Init(void *buf, void *a0, void *a1, void *a2, void *a3);
extern void SList__PushFront(void *list, void *entry);
extern char lbl_803B1D44[] __attribute__((section(".data")));

void *TextureAnim__Create(void *a0, void *a1, void *a2, void *a3) {
    void *t = TextureAnim__Init(Mem__New(48), a0, a1, a2, a3);
    SList__PushFront(lbl_803B1D44, t);
    return t;
}
