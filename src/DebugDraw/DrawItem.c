/* DebugDraw__DrawItem @ 0x80186448 (size: 0x134, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void DebugDraw__Line(s32, s32, s32);
void DebugDraw__Point(s32, s32, f32);
void DebugDraw__Vector(void *, void *, void *, f32);
M2C_UNK DebugDraw__Sphere(s32, s32, f32);
M2C_UNK DebugDraw__Box(s32, s32, s32, s32, s32);
M2C_UNK DebugDraw__Cone(s32, s32, s32, s32, s32, f32);
void DebugDraw__DrawItem(void *arg0) {
    s32 temp_r0;
    void *temp_r28;
    void *temp_r29;
    void *temp_r30;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0);
    switch (temp_r0) {                              /* irregular */
    case 0:
        DebugDraw__Line((s32) (arg0 + 4), (s32) (arg0 + 0x10), M2C_FIELD(arg0, s32 *, 0x28));
        return;
    case 1:
        DebugDraw__Point((s32) (arg0 + 4), M2C_FIELD(arg0, s32 *, 0x28), M2C_FIELD(arg0, f32 *, 0x34));
        return;
    case 2:
        DebugDraw__Sphere((s32) (arg0 + 4), M2C_FIELD(arg0, s32 *, 0x28), M2C_FIELD(arg0, f32 *, 0x34));
        return;
    case 3:
        DebugDraw__Box((s32) (arg0 + 4), (s32) (arg0 + 0x10), 0, 0, M2C_FIELD(arg0, s32 *, 0x28));
        return;
    case 4:
        DebugDraw__Vector(arg0 + 4, arg0 + 0x10, (void *) M2C_FIELD(arg0, s32 *, 0x28), M2C_FIELD(arg0, f32 *, 0x34));
        return;
    case 5:
        DebugDraw__Cone((s32) (arg0 + 4), (s32) (arg0 + 0x10), M2C_FIELD(arg0, s32 *, 0x28), M2C_FIELD(arg0, s32 *, 0x2C), M2C_FIELD(arg0, s32 *, 0x30), M2C_FIELD(arg0, f32 *, 0x34));
        return;
    case 6:
        temp_r30 = arg0 + 4;
        temp_r29 = arg0 + 0x10;
        temp_r28 = arg0 + 0x1C;
        DebugDraw__Line((s32) temp_r30, (s32) temp_r29, M2C_FIELD(arg0, s32 *, 0x28));
        DebugDraw__Line((s32) temp_r29, (s32) temp_r28, M2C_FIELD(arg0, s32 *, 0x28));
        DebugDraw__Line((s32) temp_r28, (s32) temp_r30, M2C_FIELD(arg0, s32 *, 0x28));
        return;
    }
}
