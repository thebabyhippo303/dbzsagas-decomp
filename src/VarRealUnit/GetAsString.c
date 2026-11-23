/* VarRealUnit__GetAsString @ 0x8018C9E8 (size: 0xA8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

int sprintf(char *, char *, ...);
extern char lbl_8033E9B0[];

typedef f32 (*RealFn)(void *, f32);
typedef f32 (*RealFn1)(f32);

char *VarRealUnit__GetAsString(void *self, char *buf) {
    f32 v;
    if (M2C_FIELD(self, u32 *, 0) & 2) {
        return NULL;
    }
    if (M2C_FIELD(self, s32 *, 0x48) != 0) {
        v = M2C_FIELD(self, RealFn *, 0x54)(M2C_FIELD(self, void **, 0x4C), *M2C_FIELD(self, f32 **, 0x40));
        sprintf(buf, lbl_8033E9B0, v);
    } else {
        v = M2C_FIELD(self, RealFn1 *, 0x54)(*M2C_FIELD(self, f32 **, 0x40));
        sprintf(buf, lbl_8033E9B0, v);
    }
    return buf;
}
