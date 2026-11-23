/* VarMatrix3__SetFromString @ 0x8018DBA4 (size: 0x150, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
s32 sscanf(char *, char *, ...);
extern char lbl_8033EAB0[];
extern char lbl_8033EADC[];
s32 VarMatrix3__SetFromString(void *arg0, char *arg1) {
    f32 f[9];
    if (((M2C_FIELD(arg0, s32 *, 0) & 1) == 0) && ((sscanf(arg1, lbl_8033EAB0, &f[0], &f[1], &f[2], &f[3], &f[4], &f[5], &f[6], &f[7], &f[8]) == 9) || (sscanf(arg1, lbl_8033EADC, &f[0], &f[1], &f[2], &f[3], &f[4], &f[5], &f[6], &f[7], &f[8]) == 9))) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x40), f32 *, 0) = f[0];
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x40), f32 *, 4) = f[1];
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x40), f32 *, 8) = f[2];
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x40), f32 *, 0xC) = f[3];
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x40), f32 *, 0x10) = f[4];
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x40), f32 *, 0x14) = f[5];
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x40), f32 *, 0x18) = f[6];
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x40), f32 *, 0x1C) = f[7];
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x40), f32 *, 0x20) = f[8];
        return 1;
    }
    return 0;
}
