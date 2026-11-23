/* LoadContext__SetBasePath @ 0x80251F64 (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Mem__DeleteArray(void *);
char * strcpy(char *, const char *);
int strlen(const char *);
char * Mem__NewArray(s32);

u32 LoadContext__SetBasePath(void *arg0, s8 *arg1) {
    char *old;
    char *buf;

    old = M2C_FIELD(arg0, char **, 0);
    if (old != NULL) {
        Mem__DeleteArray(old);
    }
    M2C_FIELD(arg0, char **, 0) = NULL;
    if (arg1 == NULL) {
        goto ret1;
    }
    buf = Mem__NewArray(strlen(arg1) + 2);
    M2C_FIELD(arg0, char **, 0) = buf;
    if (buf == NULL) {
        return 0;
    }
    strcpy(buf, arg1);
ret1:
    return 1;
}
