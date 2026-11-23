/* SplinePath__EvaluateAtDistance @ 0x801FD9C0 (size: 0x120, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
typedef float f32;

void Profiler__BeginSection(s32);
s32 SplinePath__FindSegmentIndex(s32, f32);
void Profiler__EndSection(s32);
extern s32 lbl_803DCCC8;

typedef struct { f32 x, y, z; } V3;

V3 *SplinePath__EvaluateAtDistance(V3 *arg0, char *arg1, f32 dist) {
    V3 tmp;
    V3 pos;
    V3 scaled;
    char *seg;
    V3 *start;
    V3 *d;
    f32 dt;
    f32 dx, dy, dz;
    f32 sx, sy, sz;
    s32 idx;

    Profiler__BeginSection(lbl_803DCCC8);
    if (*(f32 *)(arg1 + 0x40) != dist) {
        idx = SplinePath__FindSegmentIndex((s32) arg1, dist);
        *(f32 *)(arg1 + 0x40) = dist;
        *(s32 *)(arg1 + 0x50) = idx;
        start = *(V3 **)(*(char **)(arg1 + 0x24) + idx * 0x1C);
        seg = *(char **)(arg1 + 0x24) + idx * 0x1C;
        d = (V3 *)(seg + 8);
        dt = dist - *(f32 *)(seg + 0x18);
        dx = d->x;
        dy = d->y;
        dz = d->z;
        scaled.x = dx * dt;
        scaled.y = dy * dt;
        scaled.z = dz * dt;
        sx = start->x;
        sy = start->y;
        sz = start->z;
        pos.x = sx + scaled.x;
        pos.y = sy + scaled.y;
        pos.z = sz + scaled.z;
        tmp = pos;
        *(V3 *)(arg1 + 0x30) = tmp;
    }
    Profiler__EndSection(lbl_803DCCC8);
    *arg0 = *(V3 *)(arg1 + 0x30);
    return arg0;
}
