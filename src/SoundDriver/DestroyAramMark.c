/* SoundDriver__DestroyAramMark @ 0x80194210 (size: 0x40, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void SoundDriver__DestroyAramMark(void *arg0, void *arg1) {
    void *p = arg1;
    if (p == 0) {
        return;
    }
    {
        void *q = M2C_FIELD(p, void **, 12);
        void (*fn)(void *, s32) = M2C_FIELD(q, void (**)(void *, s32), 28);
        fn((char *)p + M2C_FIELD(q, s16 *, 24), 3);
    }
}
