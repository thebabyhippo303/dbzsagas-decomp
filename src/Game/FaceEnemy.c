/* Game__FaceEnemy @ 0x800452BC (size: 0x1F0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef double f64; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef float f32; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
float Script__PopFloat(void *, int);
void Script__PushFloat(void *, int, float);
float atan2f(float, float);
extern f32 lbl_80311FA0 __attribute__((section(".data")));
extern f32 lbl_80311FA4 __attribute__((section(".data")));
extern f32 lbl_80311FA8 __attribute__((section(".data")));
extern f32 lbl_80311FAC __attribute__((section(".data")));
extern f32 lbl_803DE500;
extern f32 lbl_803DE504;
extern f32 lbl_803DE524;
void Game__FaceEnemy(void *arg0, int arg1) {
    struct { f32 dx; f32 zero; f32 dz; } st;
    f32 p1; f32 p2; f32 p3; f32 p4;
    f32 a; f32 a2; f32 z; f32 dx; f32 dz;
    f32 *pp;
    p1 = Script__PopFloat(arg0, arg1);
    p2 = Script__PopFloat(arg0, arg1);
    p3 = Script__PopFloat(arg0, arg1);
    p4 = Script__PopFloat(arg0, arg1);
    dx = p3 - p1;
    dz = p4 - p2;
    z = lbl_80311FA0;
    st.dx = dx;
    pp = &st.dx;
    pp[1] = z;
    pp[2] = dz;
    dx = st.dx;
    if (dz == z) {
        if (dx == z) {
            a = z;
        } else if (!(dx <= z)) {
            a = lbl_803DE500 * lbl_80311FA4;
        } else {
            a = -lbl_803DE500 * lbl_80311FA4;
        }
    } else {
        a = atan2f(dx, dz);
    }
    if (a > lbl_80311FA8 || !(a >= lbl_80311FAC)) {
        a = lbl_80311FA0;
    }
    if (!(a >= -lbl_803DE500)) {
        do { a += lbl_803DE504; } while (a < -lbl_803DE500);
    }
    { float pi = lbl_803DE500;
        if (!(a <= pi)) {
            do { a -= lbl_803DE504; } while (a > pi);
        } }
    a2 = a + lbl_803DE500;
    if (a2 > lbl_80311FA8 || !(a2 >= lbl_80311FAC)) {
        a2 = lbl_80311FA0;
    }
    if (!(a2 >= -lbl_803DE500)) {
        do { a2 += lbl_803DE504; } while (a2 < -lbl_803DE500);
    }
    { float pi = lbl_803DE500;
        if (!(a2 <= pi)) {
            do { a2 -= lbl_803DE504; } while (a2 > pi);
        } }
    a = a * lbl_803DE524;
    a2 = a2 * lbl_803DE524;
    Script__PushFloat(arg0, arg1, a);
    Script__PushFloat(arg0, arg1, a2);
}
