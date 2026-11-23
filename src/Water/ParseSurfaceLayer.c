/* Water__ParseSurfaceLayer @ 0x80278564 (size: 0x120, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef float f32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
s32 MaterialLayer__ParseTevMode(void *, char *);
s32 MaterialLayer__ParseLightingMode(void *, char *);
s32 MaterialLayer__ParseMapType(void *, char *);
s32 Water__ParseSurfaceLayer(void *arg0, void *arg1, void *arg2) {
    s32 t;
    t = MaterialLayer__ParseTevMode(arg0, (char *)arg1 + 4);
    M2C_FIELD(arg2, s32 *, 4) = t;
    if (t < 0) {
        return 0;
    }
    M2C_FIELD(arg2, s32 *, 0) = M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg2, s32 *, 8) = MaterialLayer__ParseLightingMode(arg0, (char *)arg1 + 36);
    if (M2C_FIELD(arg1, s32 *, 68) != 0) {
        M2C_FIELD(arg2, s32 *, 12) = 0;
    } else {
        M2C_FIELD(arg2, s32 *, 12) = 1;
    }
    if (M2C_FIELD(arg1, s32 *, 72) != 0) {
        M2C_FIELD(arg2, s32 *, 16) = 1;
    }
    M2C_FIELD(arg2, f32 *, 20) = M2C_FIELD(arg1, f32 *, 76);
    M2C_FIELD(arg2, f32 *, 24) = M2C_FIELD(arg1, f32 *, 80);
    t = MaterialLayer__ParseMapType(arg0, (char *)arg1 + 84);
    M2C_FIELD(arg2, s32 *, 28) = t;
    switch (t) {
    case 1: {
        s32 *a = (s32 *)((char *)arg1 + 116);
        s32 *o = (s32 *)((char *)arg2 + 32);
        s32 v0 = a[0];
        s32 v1 = a[2];
        s32 v2 = a[1];
        o[0] = v0;
        o[2] = v1;
        o[1] = v2;
        break;
    }
    case 6:
        M2C_FIELD(arg2, f32 *, 44) = M2C_FIELD(arg1, f32 *, 128);
        M2C_FIELD(arg2, f32 *, 48) = M2C_FIELD(arg1, f32 *, 132);
        break;
    case 3:
    case 4:
    case 5:
        M2C_FIELD(arg2, f32 *, 44) = M2C_FIELD(arg1, f32 *, 136);
        M2C_FIELD(arg2, f32 *, 48) = M2C_FIELD(arg1, f32 *, 140);
        break;
    default:
        break;
    }
    return 1;
}
