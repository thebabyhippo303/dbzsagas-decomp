/* SurfaceMap__Construct @ 0x801F95A4 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

extern M2C_UNK lbl_803448D8 __attribute__((section(".data")));
void SurfaceMap__Construct(void *self) {
    s32 *p;
    s32 i;

    M2C_FIELD(self, M2C_UNK **, 0) = &lbl_803448D8;
    M2C_FIELD(self, s32 *, 4) = 0;
    M2C_FIELD(self, s32 *, 20) = -64;
    p = (s32 *)((char *)self + 280);
    M2C_FIELD(self, s32 *, 8) = -1;
    M2C_FIELD(self, s32 *, 24) = 1;
    M2C_FIELD(self, s32 *, 16) = -1;
    for (i = 0; i < 64; i++) {
        *p = -1;
        p--;
    }
}