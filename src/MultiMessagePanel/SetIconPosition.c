/* MultiMessagePanel__SetIconPosition @ 0x8026A6D8 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

void MultiMessagePanel__SetIconPosition(s32 self, s32 idx) {
    void (*fn)(s32, s32);
    s32 base;
    s32 pos;
    void *item;
    s16 adjust;

    base = idx * 0x550;
    item = *(void **)(base + self + 0x6EA8);
    pos = base + 0x6D0C;
    adjust = *(s16 *)((char *)item + 0xA8);
    fn = *(void (**)(s32, s32))((char *)item + 0xAC);
    fn(self + pos + adjust, pos);
}
