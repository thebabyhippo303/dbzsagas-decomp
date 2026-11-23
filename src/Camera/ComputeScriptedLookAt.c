/* Camera__ComputeScriptedLookAt @ 0x802A9970 (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
void Camera__LookAt(void *, void *, void *, s32);

void Camera__ComputeScriptedLookAt(void *arg0, s32 arg1) {
    char *p1 = (char *)arg0 + 16;
    char *p2 = (char *)arg0 + 28;
    f32 tmp[3];

    tmp[1] = M2C_FIELD(p1, f32 *, 4) + M2C_FIELD(p2, f32 *, 4);
    tmp[2] = M2C_FIELD(p1, f32 *, 8) + M2C_FIELD(p2, f32 *, 8);
    tmp[0] = M2C_FIELD(arg0, f32 *, 16) + M2C_FIELD(arg0, f32 *, 28);
    Camera__LookAt(p1, tmp, (char *)arg0 + 40, arg1);
}
