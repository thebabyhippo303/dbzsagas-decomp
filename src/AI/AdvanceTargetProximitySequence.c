/* AI__AdvanceTargetProximitySequence @ 0x80070918 (size: 0x1A8, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void AI__SetState(void *, s32);
float sqrtf(float);
void AI__ComputeTargetingInfo(void *, void *);
extern f32 lbl_8031EE30 __attribute__((section(".data")));
extern f32 lbl_8031EE34 __attribute__((section(".data")));

typedef struct { f32 x, y, z; } Vec3;
void AI__AdvanceTargetProximitySequence(s32 arg0) {
    Vec3 a;
    Vec3 b;
    Vec3 c;
    Vec3 d;
    char *t;

    switch (M2C_FIELD(arg0, s32 *, 0x7C)) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x3AC) = 1;
        M2C_FIELD(arg0, s32 *, 0x380) = 0x19;
        AI__SetState((void *) arg0, 1);
        return;
    case 1:
        t = M2C_FIELD(arg0, char **, 0x390);
        a = M2C_FIELD(t + 0x38, Vec3 *, 0);
        a.y = lbl_8031EE30;
        b = M2C_FIELD(arg0 + 0x400, Vec3 *, 0);
        b.y = lbl_8031EE30;
        d.x = a.x - b.x;
        d.z = a.z - b.z;
        d.y = a.y - b.y;
        a = d;
        c = d;
        c.x = a.x * a.x;
        c.z = a.z * a.z;
        c.y = a.y * a.y;
        if (sqrtf(c.x + c.y + c.z) < lbl_8031EE34) {
            M2C_FIELD(arg0, s32 *, 0x380) = 0x1B;
            AI__SetState((void *) arg0, 2);
        }
        return;
    case 2:
        M2C_FIELD(arg0, s32 *, 0x3AC) = 0;
        AI__SetState((void *) arg0, 3);
        AI__ComputeTargetingInfo(&a, (void *) arg0);
        break;
    }
}
