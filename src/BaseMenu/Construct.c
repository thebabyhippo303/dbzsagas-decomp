/* BaseMenu__Construct @ 0x80262A7C (size: 0x88, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef float f32; typedef double f64; typedef int M2C_UNK; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef unsigned int u32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
extern char lbl_8034C5E0[]; extern void EzNode__Construct(void*); extern void EzString__Construct(void*); extern void BaseMenu__ResetState(void*);
void *BaseMenu__Construct(void *arg0) {
    void *self = arg0;
    u32 i = 7;
    void *p = (char*)self + 24;
    EzNode__Construct(self);
    M2C_FIELD(self, void **, 0x10) = lbl_8034C5E0;
    do { EzString__Construct(p); p = (char*)p + 12; } while (i-- != 0);
    EzString__Construct((char*)self + 120);
    M2C_FIELD(self, void **, 0x84) = self; M2C_FIELD(self, void **, 0x88) = self; M2C_FIELD(self, void **, 0x8C) = self;
    M2C_FIELD(self, s32 *, 0x14) = 0; M2C_FIELD(self, s32 *, 0x90) = 0; M2C_FIELD(self, s32 *, 0x94) = 0;
    BaseMenu__ResetState(self);
    return self;
}
