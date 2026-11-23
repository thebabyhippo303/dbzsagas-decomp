/* CCameraFollow__StoreNegativeDistanceBetweenPoints @ 0x800C7514 (size: 0xBC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef float f32;
typedef struct { f32 x, y, z; } V3;
f32 sqrtf(f32);
void CCameraFollow__StoreNegativeDistanceBetweenPoints(char *self, f32 *a, f32 *b) {
    V3 e;
    V3 d;
    V3 sq;
    V3 *pd = &d;
    V3 *pe = &e;
    V3 *pq = &sq;
    f32 x;
    d.x = b[0] - a[0];
    d.y = b[1] - a[1];
    d.z = b[2] - a[2];
    *pe = *pd;
    x = e.x;
    {
        f32 y = pe->y;
        f32 z = pe->z;
        sq.y = y * y;
        sq.z = z * z;
    }
    sq.x = x * x;
    *(f32 *)(self + 0xFC) = -sqrtf(sq.x + pq->y + pq->z);
}
