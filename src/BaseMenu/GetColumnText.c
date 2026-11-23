/* BaseMenu__GetColumnText @ 0x802632A8 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
/* Candidate: BaseMenu__GetColumnText @ 0x802632A8 (0x44). ProDG -O2. */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })
#define NULL 0

void BaseMenu__GetColumnText(void *arg0, s32 arg1) {
    s32 off = arg1 * 12;
    s32 base = off + (s32)arg0;
    void *obj = M2C_FIELD((void *)base, void **, 32);

    M2C_FIELD(obj, M2C_UNK (**)(void *), 76)((char *)arg0 + (off + 24) + M2C_FIELD(obj, s16 *, 72));
}
