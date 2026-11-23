/* FullScreenEffect__RemoveInactive @ 0x800E18D0 (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
s32 FullScreenEffect__Update(s32);
void FullScreenEffect__Remove(s32, s32);
void FullScreenEffect__RemoveInactive(char *self) {
    s32 i = 0;
    char *v = self + 4;
    if (i < *(s32 *)(v + 4)) {
        char *w = v;
        s32 off = 0;
        do {
            v = *(char **)(self + 4);
            if (FullScreenEffect__Update(*(s32 *)(v + off)) == 0) {
                v = *(char **)(self + 4);
                FullScreenEffect__Remove((s32)self, *(s32 *)(v + off));
            } else {
                off += 4;
                i += 1;
            }
        } while (i < *(s32 *)(w + 4));
    }
}
