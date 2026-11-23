/* Xml__FreeDocument @ 0x80306A40 (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void Xml__FreeArenaBlocks(void *);

void Xml__FreeDocument(void *arg0) {
    if ((arg0 != NULL) && (M2C_FIELD(arg0, u8 *, 4) & 0x40)) {
        Xml__FreeArenaBlocks(M2C_FIELD(arg0, void **, 0x10));
    }
}
