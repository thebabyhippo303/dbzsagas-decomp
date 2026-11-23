/* Mover__CompactStateList @ 0x802BD18C (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0
void Mover__CompactStateList(s32 arg0) {
    s32 n;
    s32 src;
    s32 dst;
    s32 end;
    s32 v;
    s32 p;
    s32 off;
    s32 off2;
    n = 0;
    if (*(s32 *)(arg0 + 8) != 0) {
        *(s32 *)(arg0 + 68) = *(s32 *)(arg0 + 8);
        n = 1;
    }
    src = arg0 + 60;
    off = n * 4 + 68;
    dst = off + arg0;
    end = arg0 + 64;
    do {
        v = *(s32 *)src;
        src += 4;
        if (v != 0 && v != *(s32 *)(arg0 + 8)) {
            *(s32 *)dst = v;
            n += 1;
            dst += 4;
        }
    } while (src <= end);
    if (n <= 2) {
        off2 = n * 4 + 68;
        p = off2 + arg0;
        n = 3 - n;
        do {
            *(s32 *)p = 0;
            p += 4;
        } while (--n != 0);
    }
}
