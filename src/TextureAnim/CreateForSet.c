/* TextureAnim__CreateForSet @ 0x80247D3C (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

extern void *Mem__New(unsigned int size);
extern void *TextureAnim__Init(void *buf, void *arg0, int a, int b, int c);
extern void SList__PushFront(void *list, void *entry);
extern char lbl_803B1D44[] __attribute__((section(".data")));

void *TextureAnim__CreateForSet(void *arg0) {
    void *t = TextureAnim__Init(Mem__New(48), arg0, 0, 0, -1);
    SList__PushFront(lbl_803B1D44, t);
    return t;
}
