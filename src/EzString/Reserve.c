/* EzString__Reserve @ 0x8026FD98 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Mem__DeleteArray(void *);
void *Mem__NewArray(s32);
void EzString__Reserve(void *self, s32 n) {
    char *buf = M2C_FIELD(self, char **, 4);
    char *nb;
    if (buf != NULL) {
        Mem__DeleteArray(buf);
    }
    nb = Mem__NewArray(n + 1);
    M2C_FIELD(self, char **, 4) = nb;
    if (nb != NULL) {
        nb[n] = 0;
        nb[0] = 0;
    }
    M2C_FIELD(self, s32 *, 0) = n;
}
