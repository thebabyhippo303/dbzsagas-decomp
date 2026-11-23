/* SplinePath__DebugDraw @ 0x801FF300 (size: 0x144, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 Path__IsLooped(void *);
void DebugDraw__Line(s32, s32, s32);
void DebugDraw__Point(s32, s32, f32);
extern f32 lbl_803454E4 __attribute__((section(".data")));

typedef struct { f32 x, y, z; } Vec3;
void SplinePath__DebugDraw(void *arg0) {
    Vec3 a;
    Vec3 b;
    Vec3 *pts;
    s32 i;

    for (i = 0; i < M2C_FIELD(arg0, s32 *, 0x18); i++) {
        pts = M2C_FIELD(arg0, Vec3 **, 0x1C);
        a = pts[i];
        if (i == M2C_FIELD(arg0, s32 *, 0x18) - 1) {
            if (Path__IsLooped(arg0) != 0) {
                b = M2C_FIELD(arg0, Vec3 **, 0x1C)[0];
            } else {
                b = a;
            }
        } else {
            b = pts[i + 1];
        }
        DebugDraw__Line((s32) &a, (s32) &b, 3);
        DebugDraw__Point((s32) &a, 3, lbl_803454E4);
        if (i == 0) {
            DebugDraw__Point((s32) &a, 1, lbl_803454E4);
        }
        if (i == M2C_FIELD(arg0, s32 *, 0x18) - 1) {
            DebugDraw__Point((s32) &b, 0, lbl_803454E4);
        }
    }
}
