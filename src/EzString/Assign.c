/* EzString__Assign @ 0x8026FF08 (size: 0x68, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef void (*GrowFn)(void *, s32);

s32 EzString__StrLen(const char *);
void EzString__StrCopy(char *, const char *);

void EzString__Assign(void *self, const char *src) {
    s32 len;
    void *p;

    len = EzString__StrLen(src);
    if (len > M2C_FIELD(self, s32 *, 0)) {
        p = M2C_FIELD(self, void **, 8);
        ((GrowFn)M2C_FIELD(p, void **, 20))((char *)self + M2C_FIELD(p, s16 *, 16), len);
    }
    EzString__StrCopy(M2C_FIELD(self, char **, 4), src);
}
