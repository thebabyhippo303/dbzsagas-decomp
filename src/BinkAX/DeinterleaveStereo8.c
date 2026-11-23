/* BinkAX__DeinterleaveStereo8 @ 0x802EB8F0 (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

/* Byte-matched: BinkAX__DeinterleaveStereo8 @ 0x802EB8F0 (0x6C). ProDG -O2. */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
void BinkAX__DeinterleaveStereo8(u32 *in, u16 *outL, u16 *outR, u32 n) {
    u32 i;
    u32 cnt;
    cnt = n >> 1;
    for (i = 0; i < cnt; i++) {
        u32 w = in[0];
        in += 1;
        *outL++ = (u16)(((w >> 16) & 0xFF00) | ((w >> 8) & 0xFF));
        *outR++ = (u16)(((w >> 8) & 0xFF00) | (w & 0xFF));
    }
    if ((n & 1) != 0) {
        u16 h = *(u16 *)in;
        *(u8 *)outL = (u8)(h >> 8);
        *(u8 *)outR = (u8)h;
    }
}
