/* FileStream__GetUnderlyingHandle @ 0x8017F36C (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct { int kind; char pad[8]; void *handle; } FS;
int FileStream__GetUnderlyingHandle(FS *);
int FileStream__GetUnderlyingHandle(FS *s) {
    int result;
    switch (s->kind) {
    case 19:
        result = FileStream__GetUnderlyingHandle(s->handle);
        break;
    case 17:
    case 18:
        result = (int)s->handle;
        break;
    case 33:
    case 34:
    case 35:
        result = 0;
        break;
    default:
        result = 0;
        break;
    }
    return result;
}