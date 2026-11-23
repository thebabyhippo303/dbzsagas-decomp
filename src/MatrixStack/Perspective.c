/* MatrixStack__Perspective @ 0x80249334 (size: 0x124, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct MatrixStackState {
    s32 *buf;
    s32 *top;
    s32 *projBase;
    s32 *projTop;
    s32 capacity;
    s32 depth;
} MatrixStackState;

void C_MTXPerspective(f32 *, f32, f32, f32, f32);
void MatrixStack__MultMatrix(f32 *);
extern MatrixStackState lbl_803B1D5C[] __attribute__((section(".data")));
extern s32 lbl_803DCDE8;
extern s32 lbl_803DD61C;

void MatrixStack__Perspective(f32 a, f32 b, f32 c, f32 d) {
    f32 m[16];
    f32 t[16];
    f32 *p;
    if (c == d) {
        return;
    }
    C_MTXPerspective(m, a, b, c, d);
    lbl_803DD61C = 0;
    lbl_803B1D5C[lbl_803DCDE8].projTop[0] = 0;
    p = m;
    t[0] = p[0];
    t[1] = p[4];
    t[2] = p[8];
    t[3] = p[12];
    t[4] = p[1];
    t[5] = p[5];
    t[6] = p[9];
    t[7] = p[13];
    t[8] = p[2];
    t[9] = p[6];
    t[10] = p[10];
    t[11] = p[14];
    t[12] = p[3];
    t[13] = p[7];
    t[14] = p[11];
    t[15] = p[15];
    p[0] = t[0];
    p[1] = t[1];
    p[2] = t[2];
    p[3] = t[3];
    p[4] = t[4];
    p[5] = t[5];
    p[6] = t[6];
    p[7] = t[7];
    p[8] = t[8];
    p[9] = t[9];
    p[10] = t[10];
    p[11] = t[11];
    p[12] = t[12];
    p[13] = t[13];
    p[14] = t[14];
    p[15] = t[15];
    MatrixStack__MultMatrix(p);
}
