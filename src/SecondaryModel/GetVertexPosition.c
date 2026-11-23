/* SecondaryModel__GetVertexPosition @ 0x8023FF94 (size: 0x2C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
#define M2C_FIELD(expr,type,offset) (*(type)((char *)(expr)+(offset)))
s32 SecondaryModel__GetVertexPosition(void *arg0, s32 arg1) {
    void *entry = *(void **)((char *)M2C_FIELD(arg0, s32 *, 0xC) + arg1 * 0x24);
    void *node = M2C_FIELD(entry, void **, 0);
    s32 index = M2C_FIELD(entry, s32 *, 4);
    void *table = M2C_FIELD(node, void **, 0);
    s32 stride = M2C_FIELD(table, s32 *, 0x24);
    s32 base = M2C_FIELD(table, s32 *, 0x2C);
    return base + index * stride;
}