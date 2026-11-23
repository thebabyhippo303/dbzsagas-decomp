/* Bink__VideoIDCTPutRowPair @ 0x80303A74 (size: 0x3DC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

/* WIP baseline: Bink__VideoIDCTPutRowPair @ 0x80303A74 (0x3DC). ProDG -O2. */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32;
#define NULL 0

typedef struct {
    s32 t[10];
    s32 tmp[64];
} Frame;

void Bink__VideoIDCTPutRowPair(u8 *dst, s32 stride, s16 *coeffs, s32 *quant) {
    Frame fr;
    s32 *tmp = fr.tmp;
    s32 *tmpSave = tmp;
    s32 step = stride + stride;
    u8 *dstB = dst + stride;
    s32 *q = quant;
    s16 *c = coeffs;
    s32 n = 8;
    s32 i = 8;
    s32 a0, a1, a2, a3, a4, a5, a6, a7, b0, b1, b2, b3;
    s32 dc, v;
    u16 c1, c2, c3, c4, c5, c6, c7;
    u8 *dA;
    u8 *dB;

    do {
        c1 = ((u16 *)c)[8]; c2 = ((u16 *)c)[16]; c3 = ((u16 *)c)[24];
        c4 = ((u16 *)c)[32]; c5 = ((u16 *)c)[40]; c6 = ((u16 *)c)[48];
        c7 = ((u16 *)c)[56];
        if ((c7 | (c6 | (c5 | (c4 | (c3 | (c1 | (u16)c2)))))) == 0) {
            dc = c[0];
            v = q[0];
            c++;
            q++;
            dc = (dc * v) >> 11;
            tmp[56] = dc; tmp[0] = dc; tmp[8] = dc; tmp[16] = dc;
            tmp[24] = dc; tmp[32] = dc; tmp[40] = dc; tmp[48] = dc;
        } else {
            a0 = ((s16)c2 * q[16]) >> 11;
            a1 = ((s16)c6 * q[48]) >> 11;
            a2 = ((s16)c1 * q[8]) >> 11;
            a3 = ((s16)c3 * q[24]) >> 11;
            a4 = ((s16)c5 * q[40]) >> 11;
            b0 = a0 + a1;
            b1 = a4 - a3;
            a5 = ((s16)c7 * q[56]) >> 11;
            b2 = a2 - a5;
            a2 += a5;
            a4 += a3;
            a6 = ((s16)c4 * q[32]) >> 11;
            a7 = (c[0] * q[0]) >> 11;
            b3 = a7 - a6;
            fr.t[9] = (b1 + b2) * 3784 >> 11;
            b1 = ((a0 - a1) * 2896 >> 11) - b0;
            a7 += a6;
            b0 += a4;
            a6 = a7 + b0;
            a1 = ((b1 * -5352 >> 11) + fr.t[9]) - b0;
            a3 = (((a2 - a4) * 2896 >> 11)) - a1;
            v = (((b2 * 2217) >> 11) - fr.t[9]) + a3;
            fr.t[2] = b3 + b1;
            fr.t[4] = b3 - b1;
            fr.t[6] = v;
            c++;
            fr.t[8] = a1;
            q++;
            fr.t[7] = a3;
            fr.t[5] = a7 - b0;
            fr.t[3] = a6;
            fr.t[9-1] = b0;
            tmp[0] = a6 + b0;
            tmp[56] = fr.t[3] - fr.t[9-1];
            tmp[8] = fr.t[2] + fr.t[8];
            tmp[48] = fr.t[2] - fr.t[8];
            tmp[16] = fr.t[4] + fr.t[7];
            tmp[40] = fr.t[4] - fr.t[7];
            tmp[32] = fr.t[5] + v;
            tmp[24] = fr.t[5] - fr.t[6];
        }
        tmp++;
        n--;
    } while (n != 0);
    tmp = tmpSave;
    dA = dst;
    do {
        a0 = tmp[2]; a1 = tmp[6]; a2 = tmp[0]; a3 = tmp[4];
        b0 = a0 - a1;
        b0 = (b0 * 2896) >> 11;
        b1 = a0 + a1;
        b2 = a2 - a3;
        b3 = a2 + a3;
        a4 = b3 - b1;
        a5 = b3 + b1;
        fr.t[3] = a5;
        a6 = ((a0 - a1) * 2896 >> 11) - b1;
        fr.t[5] = a4;
        a7 = b2 - a6;
        v = b2 + a6;
        fr.t[2] = v;
        fr.t[4] = a7;
        a0 = tmp[5]; a1 = tmp[3]; a2 = tmp[1]; a3 = tmp[7];
        b0 = a0 - a1;
        b1 = a0 + a1;
        b2 = a2 - a3;
        a4 = a2 + a3;
        a5 = a4 + b1;
        fr.t[9-1] = a5;
        v = ((b0 + b2) * 3784) >> 11;
        a6 = ((b0 * -5352 >> 11) + v) - a5;
        a7 = (((a4 - b1) * 2896 >> 11)) - a6;
        v = (((b2 * 2217) >> 11) - v) + a7;
        a0 = a5 - a6;
        a1 = a6 - v;
        a2 = a7 + v;
        a3 = v - a2 + a2;
        dB = dA;
        a4 = a5 + a6;
        a5 = a1 + a0;
        a6 = a2 + v;
        dA = dstB;
        a1 = ((a5 - a4 + 0x7F) >> 8) | (((a2 - a6 + 0x7F) << 8) & 0xFF0000);
        a2 = (((a7 + a0 + 0x7F) << 8) & 0xFF0000) | ((a4 - a6 + 0x7F) >> 8);
        a0 = (((a5 + a4 + 0x7F) << 8) & 0xFF0000) | ((a2 + a6 + 0x7F) >> 8);
        a3 = (((a7 - a0 + 0x7F) << 8) & 0xFF0000) | ((a4 + a6 + 0x7F) >> 8);
        a0 |= (a0 << 8); a1 |= (a1 << 8); a2 |= (a2 << 8); a3 |= (a3 << 8);
        *(u32 *)dB = a0; *(u32 *)(dB + 4) = a2;
        tmp += 8;
        *(u32 *)(dB + 8) = a3; *(u32 *)(dB + 12) = a1;
        *(u32 *)dA = a0; dA += step;
        *(u32 *)(dA + 4) = a2; dA = dB + step;
        *(u32 *)(dA + 8) = a3; *(u32 *)(dA + 12) = a1;
        dB += step;
        i--;
    } while (i != 0);
}
