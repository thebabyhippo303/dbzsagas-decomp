/* fputs @ 0x802CDF7C (size: 0x58, .text, ProDG 3.9.3 -O2) - MATCHED */
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0

int strlen(const char *);
int __sfvwrite(void *, void *);

typedef struct { void *base; s32 len; } Siov;
typedef struct { Siov *iov; s32 cnt; s32 len; } Suio;

int fputs(const char *s, void *fp) {
    Suio uio;
    Siov iov;

    iov.base = (void *)s;
    uio.len = strlen(s);
    iov.len = uio.len;
    uio.iov = &iov;
    uio.cnt = 1;
    __sfvwrite(fp, &uio);
}
