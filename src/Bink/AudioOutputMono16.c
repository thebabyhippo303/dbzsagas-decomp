/* Bink__AudioOutputMono16 @ 0x802F6F70 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Bink__AudioOutputMono16(s16 *dst, f32 scale, f32 *src, s32 count) {
    s32 i;
    for (i = count; i != 0; i--) {
        s16 *d = dst;
        s32 v;
        s32 c;
        dst++;
        v = (s32)(*src * scale);
        if (v <= 32766) {
            if (v > -32768) {
                c = v;
            } else {
                c = -32768;
            }
        } else {
            c = 32767;
        }
        *d = c;
        src++;
    }
}
