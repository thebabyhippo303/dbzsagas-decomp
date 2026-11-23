/* EzNode__GetChildAt @ 0x80265C88 (size: 0x24, .text, ProDG 3.9.3 -O2) - MATCHED */
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
void *EzNode__GetChildAt(void *arg0, s32 arg1) {
    void *child;
    child = M2C_FIELD(arg0, void **, 4);
    if (arg1 > 0) {
        do {
            if (child != NULL) {
                child = M2C_FIELD(child, void **, 8);
            }
            arg1 -= 1;
        } while (arg1 != 0);
    }
    return child;
}
