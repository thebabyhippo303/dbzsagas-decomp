/* LightMgr__Destroy @ 0x80208D8C (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed int s32;
#define NULL 0
void LightMgr__Clear(void *self);
void Mem__Delete(void *p);
void LightMgr__Destroy(void *self, s32 flags) {
    void *p;

    LightMgr__Clear(self);
    p = *(void **)((char *)self + 0x18);
    if (p != NULL) {
        Mem__Delete(p);
    }
    if (flags & 1) {
        Mem__Delete(self);
    }
}
