/* BinkAX__FreeVoices @ 0x802EB854 (size: 0x9C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef unsigned int u32;
void BinkAX__SetVoicesState(void *, s32);
void radfree(void *);
void *memset();
void AXFreeVoice(s32);
extern void (*lbl_8037C22C)(s32) __attribute__((section(".data")));

void BinkAX__FreeVoices(char *self) {
    char *p = self + 0x78;
    s32 v;
    *(s32 *)(self + 0xFC) = 1;
    BinkAX__SetVoicesState(p, 0);
    v = *(s32 *)(self + 0xC8);
    if (v != 0) AXFreeVoice(v);
    v = *(s32 *)(self + 0xCC);
    if (v != 0) AXFreeVoice(v);
    do {
    } while (*(volatile s32 *)(self + 0xC4) != 0);
    radfree(*(void **)(self + 0xE4));
    lbl_8037C22C(*(s32 *)(self + 0xD0));
    memset(p, 0, 0xA4);
}
