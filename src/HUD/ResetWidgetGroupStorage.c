/* HUD__ResetWidgetGroupStorage @ 0x8010B24C (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
typedef float f32;

extern f32 lbl_80326214 __attribute__((section(".data")));

void HUD__ResetWidgetGroupStorage(void *hud, void *group) {
    s32 *p;
    s32 n;
    s32 zero;
    s32 m;
    s32 z;

    zero = 0;
    n = 1;
    p = (s32 *)((char *)group + 196);
    do {
        *p = zero;
        n--;
        p--;
    } while (n >= 0);
    m = 48;
    z = 0;
    p = (s32 *)((char *)group + 188);
    do {
        *p = z;
        m--;
        p--;
    } while (m != 0);
    *(f32 *)((char *)group + 220) = lbl_80326214;
}
