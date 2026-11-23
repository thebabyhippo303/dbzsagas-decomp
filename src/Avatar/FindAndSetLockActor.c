/* Avatar__FindAndSetLockActor @ 0x80098560 (size: 0x80, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct { int x, y, z; } V3;
void *Avatar__FindBestLockTarget(void *, V3, V3, float, float);
void Avatar__SetLockActor(void *, void *);
void Avatar__FindAndSetLockActor(void *self, V3 *p, V3 *q, float a, float b) {
    void *t = Avatar__FindBestLockTarget(self, *p, *q, a, b);
    if (t != 0) {
        Avatar__SetLockActor(self, t);
    }
}
