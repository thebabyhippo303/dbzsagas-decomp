/* BaseMenu__IsSelectable @ 0x802638BC (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef short s16;
typedef int s32;
#define NULL 0
char *EzString__GetCStr(void *);
s32 BaseMenu__IsSelectable(void *arg0) {
    if (*(void **)((char *)arg0 + 160) != NULL
        || *(void **)((char *)arg0 + 164) != NULL
        || *(s16 *)((char *)arg0 + 170) != 0
        || *(s16 *)((char *)arg0 + 178) != 0
        || *(void **)((char *)arg0 + 184) != NULL)
        goto ret1;
    if (EzString__GetCStr((char *)arg0 + 120) == 0)
        goto ret0;
ret1:
    return 1;
ret0:
    return 0;
}
