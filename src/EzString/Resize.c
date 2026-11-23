/* EzString__Resize @ 0x8026FDF8 (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

char *Mem__NewArray(s32);
void Mem__DeleteArray(void *);
void EzString__StrNCopy(char *, char *, s32);

void EzString__Resize(void *self, s32 newsize) {
    char *newbuf;

    newbuf = Mem__NewArray(newsize + 1);
    if (newbuf != NULL) {
        newbuf[newsize] = 0;
        EzString__StrNCopy(newbuf, M2C_FIELD(self, char **, 4), newsize);
        if (M2C_FIELD(self, void **, 4) != NULL) {
            Mem__DeleteArray(M2C_FIELD(self, void **, 4));
        }
        M2C_FIELD(self, char **, 4) = newbuf;
        M2C_FIELD(self, s32 *, 0) = newsize;
    }
}
