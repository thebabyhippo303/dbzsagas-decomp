/* EzNode__Unlink @ 0x80265BE0 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0


void EzNode__Unlink(void *arg0) {
    void *parent;
    void *next;
    void *prev;

    parent = M2C_FIELD(arg0, void **, 0);
    if ((parent != NULL) && (M2C_FIELD(parent, void **, 4) == arg0)) {
        M2C_FIELD(parent, void **, 4) = M2C_FIELD(arg0, void **, 8);
    }
    next = M2C_FIELD(arg0, void **, 0xC);
    if (next != NULL) {
        M2C_FIELD(next, void **, 8) = M2C_FIELD(arg0, void **, 8);
    }
    prev = M2C_FIELD(arg0, void **, 8);
    if (prev != NULL) {
        M2C_FIELD(prev, void **, 0xC) = M2C_FIELD(arg0, void **, 0xC);
    }
    *(void *volatile *)&M2C_FIELD(arg0, void **, 0xC) = NULL;
    *(void *volatile *)&M2C_FIELD(arg0, void **, 0) = NULL;
    *(void *volatile *)&M2C_FIELD(arg0, void **, 8) = NULL;
}
