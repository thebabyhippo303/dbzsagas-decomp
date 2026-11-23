/* read_buf @ 0x802564C4 (size: 0xAC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 adler32(u32, char *, u32);
void *memcpy(void *, const void *, unsigned int);

s32 read_buf(void *arg0, void *arg1, u32 arg2) {
    u32 var_r30;

    var_r30 = M2C_FIELD(arg0, u32 *, 4);
    if (var_r30 > arg2) {
        var_r30 = arg2;
    }
    if ((s32)var_r30 == 0) {
        return 0;
    }
    M2C_FIELD(arg0, u32 *, 4) = (u32)(M2C_FIELD(arg0, u32 *, 4) - var_r30);
    if ((s32)M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), s32 *, 0x18) == 0) {
        M2C_FIELD(arg0, u32 *, 0x30) = adler32(M2C_FIELD(arg0, u32 *, 0x30), M2C_FIELD(arg0, char **, 0), var_r30);
    }
    memcpy(arg1, M2C_FIELD(arg0, char **, 0), var_r30);
    M2C_FIELD(arg0, char **, 0) = &M2C_FIELD(arg0, char **, 0)[var_r30];
    M2C_FIELD(arg0, s32 *, 8) = (s32)(M2C_FIELD(arg0, s32 *, 8) + var_r30);
    return (s32)var_r30;
}
