/* CActor__UnlinkFromAllLists @ 0x801DF5C0 (size: 0x5C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


void CActor__UnlinkFromAllLists(void *arg0) {
    void **obj;
    void *vt;
    void *link;

    while (M2C_FIELD(arg0, void **, 0x88) != NULL) {
        link = M2C_FIELD(arg0, void **, 0x88);
        obj = M2C_FIELD(M2C_FIELD(link, void **, 0xC), void ***, 4);
        vt = *obj;
        M2C_FIELD(vt, M2C_UNK (**)(void *, void *), 0x14)((char *)obj + M2C_FIELD(vt, s16 *, 0x10), link);
    }
}
