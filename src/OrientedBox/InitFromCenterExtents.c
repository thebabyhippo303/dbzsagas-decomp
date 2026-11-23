/* OrientedBox__InitFromCenterExtents @ 0x801C224C (size: 0xB8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef float f32;
typedef struct { f32 x, y, z; } V3;
f32 sqrtf(f32);
void *OrientedBox__InitFromCenterExtents(char *self, V3 *in) {
    V3 sq;
    V3 t1;
    V3 t2;
    V3 *pc = (V3 *)(self + 4);
    *(int *)self = 2;
    if (in != 0) {
        V3 *ie = in + 1;
        V3 *pe = (V3 *)(self + 0x10);
        V3 *pq = &sq;
        f32 x;
        *pc = in[0];
        *pe = *ie;
        x = pe->x;
        {
            f32 y = pe->y;
            f32 z = pe->z;
            sq.y = y * y;
            sq.z = z * z;
        }
        sq.x = x * x;
        *(f32 *)(self + 0x1C) = sqrtf(sq.x + pq->y + pq->z);
    }
    return self;
}
