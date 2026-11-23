/* CameraCurve__ComputeMatrix @ 0x800BE0E4 (size: 0x138, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

typedef struct { u32 x, y, z; } Vec3Bits;

extern void Debug__FormatMessage(char *fmt, ...);
extern char lbl_80321720[];
extern char lbl_80321754[];
extern f32 lbl_803A35BC __attribute__((section(".data")));

void CCameraCurve__ComputeMatrix(char *arg0) {
    Vec3Bits a;
    Vec3Bits b;
    char *obj;
    char *vt;
    char *first;
    f32 ret;

    first = M2C_FIELD(arg0, char **, 72);
    if (first == NULL) {
        Debug__FormatMessage(lbl_80321720);
        return;
    }
    if (M2C_FIELD(arg0, char **, 76) == NULL) {
        Debug__FormatMessage(lbl_80321754);
        return;
    }
    M2C_FIELD(arg0, f32 *, 68) = M2C_FIELD(arg0, f32 *, 64) * lbl_803A35BC + M2C_FIELD(arg0, f32 *, 68);
    vt = M2C_FIELD(first, char **, 0);
    ret = ((f32 (*)(void *))M2C_FIELD(vt, void **, 84))(first + M2C_FIELD(vt, s16 *, 80));
    if (!(M2C_FIELD(arg0, f32 *, 68) <= ret)) {
        M2C_FIELD(arg0, f32 *, 68) = ret;
        M2C_FIELD(arg0, s32 *, 80) = 1;
    }
    obj = M2C_FIELD(arg0, char **, 72);
    vt = M2C_FIELD(obj, char **, 0);
    ((void (*)(void *, void *, f32))M2C_FIELD(vt, void **, 20))(&a, obj + M2C_FIELD(vt, s16 *, 16), M2C_FIELD(arg0, f32 *, 68));
    obj = M2C_FIELD(arg0, char **, 76);
    vt = M2C_FIELD(obj, char **, 0);
    ((void (*)(void *, void *, f32))M2C_FIELD(vt, void **, 20))(&b, obj + M2C_FIELD(vt, s16 *, 16), M2C_FIELD(arg0, f32 *, 68));
    *(Vec3Bits *)(arg0 + 0) = a;
    *(Vec3Bits *)(arg0 + 12) = b;
}
