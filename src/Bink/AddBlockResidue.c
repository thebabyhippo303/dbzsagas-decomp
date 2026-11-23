/* Bink__AddBlockResidue @ 0x80305830 (size: 0x444, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef unsigned char u8;
typedef int s32;

void Bink__DecodeBlockResidue(u8 *buf, s32 a, s32 b);

void Bink__AddBlockResidue(u8 *dst, s32 stride, s32 a2, s32 a3, u8 *src) {
    u8 buf[64];
    u8 *d;

    Bink__DecodeBlockResidue(buf, a2, a3);
    d = dst + stride;
    dst[0] = buf[0] + src[0];
    dst[1] = buf[1] + src[1];
    dst[2] = buf[4] + src[2];
    dst[3] = buf[5] + src[3];
    dst[4] = buf[8] + src[4];
    dst[5] = buf[9] + src[5];
    dst[6] = buf[12] + src[6];
    dst[7] = buf[13] + src[7];
    dst[stride] = buf[2] + src[8];
    d[1] = buf[3] + src[9];
    d[2] = buf[6] + src[10];
    d[3] = buf[7] + src[11];
    d[4] = buf[10] + src[12];
    d[5] = buf[11] + src[13];
    d[6] = buf[14] + src[14];
    d[7] = buf[15] + src[15];
    *(d += stride) = buf[24] + src[16];
    d[1] = buf[25] + src[17];
    d[2] = buf[44] + src[18];
    d[3] = buf[45] + src[19];
    d[4] = buf[16] + src[20];
    d[5] = buf[17] + src[21];
    d[6] = buf[20] + src[22];
    d[7] = buf[21] + src[23];
    *(d += stride) = buf[26] + src[24];
    d[1] = buf[27] + src[25];
    d[2] = buf[46] + src[26];
    d[3] = buf[47] + src[27];
    d[4] = buf[18] + src[28];
    d[5] = buf[19] + src[29];
    d[6] = buf[22] + src[30];
    d[7] = buf[23] + src[31];
    *(d += stride) = buf[28] + src[32];
    d[1] = buf[29] + src[33];
    d[2] = buf[32] + src[34];
    d[3] = buf[33] + src[35];
    d[4] = buf[48] + src[36];
    d[5] = buf[49] + src[37];
    d[6] = buf[52] + src[38];
    d[7] = buf[53] + src[39];
    *(d += stride) = buf[30] + src[40];
    d[1] = buf[31] + src[41];
    d[2] = buf[34] + src[42];
    d[3] = buf[35] + src[43];
    d[4] = buf[50] + src[44];
    d[5] = buf[51] + src[45];
    d[6] = buf[54] + src[46];
    d[7] = buf[55] + src[47];
    *(d += stride) = buf[36] + src[48];
    d[1] = buf[37] + src[49];
    d[2] = buf[40] + src[50];
    d[3] = buf[41] + src[51];
    d[4] = buf[56] + src[52];
    d[5] = buf[57] + src[53];
    d[6] = buf[60] + src[54];
    d[7] = buf[61] + src[55];
    *(d += stride) = buf[38] + src[56];
    d[1] = buf[39] + src[57];
    d[2] = buf[42] + src[58];
    d[3] = buf[43] + src[59];
    d[4] = buf[58] + src[60];
    d[5] = buf[59] + src[61];
    d[6] = buf[62] + src[62];
    d[7] = buf[63] + src[63];
}
