/* GroundDecalMgr__Construct @ 0x80284D0C (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void * Mem__NewArray(u32);
void memset(void *, int, u32);

void *GroundDecalMgr__Construct(void *self) {
    register s32 four = 4;
    register s32 zero = 0;
    void *buf;
    register s32 one = 1;
    void *buf_b;
    buf = Mem__NewArray(32);
    M2C_FIELD(self, void **, 0) = buf;
    M2C_FIELD(self, s32 *, 0x10) = one;
    M2C_FIELD(self, s32 *, 4) = zero;
    M2C_FIELD(self, s32 *, 8) = four;
    M2C_FIELD(self, s32 *, 0xC) = four;
    M2C_FIELD(self, s32 *, 0x14) = zero;
    if (buf) {
        memset(buf, 0, 32);
    }
    buf_b = (char *)self + 0x18;
    M2C_FIELD(buf_b, s32 *, 4) = zero;
    M2C_FIELD(self, s32 *, 0x18) = zero;
    M2C_FIELD(buf_b, s32 *, 8) = zero;
    M2C_FIELD(buf_b, s32 *, 0xC) = zero;
    return self;
}
