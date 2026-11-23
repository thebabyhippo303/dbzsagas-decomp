/* LineQuery__EndQuery @ 0x8025E024 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
extern u32 lbl_803DE570 __attribute__((section(".sdata2")));
void LineQuery__EndQuery(void *arg0) {
    char *p = (char *)arg0 + 224;
    u32 t;
    f32 a;
    f32 b;
    t = *(u32 *)(p + 28) & lbl_803DE570;
    *(s32 *)(p + 48) = 0;
    switch (t) {
    case 16:
        a = *(f32 *)(p + 36);
        b = *(f32 *)(p + 40);
        *(f32 *)(p + 40) = a;
        *(f32 *)(p + 36) = b;
        break;
    case 32:
        a = *(f32 *)(p + 32);
        b = *(f32 *)(p + 40);
        *(f32 *)(p + 40) = a;
        *(f32 *)(p + 32) = b;
        break;
    }
}
