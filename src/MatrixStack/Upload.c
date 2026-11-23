/* MatrixStack__Upload @ 0x802499EC (size: 0x394, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Matrix__ToGXMtx(void *, void *);
s32 TextureStageState__GetCurrentStage(void);
void GXSetProjection(f32 *, s32);
void GXLoadPosMtxImm(f32 *, s32);
s32 Matrix__Invert(f32 *, f32 *);
void GXLoadNrmMtxImm(f32 *, s32);
void GXLoadTexMtxImm(f32 *, s32, s32);
extern s32 lbl_803744E0[] __attribute__((section(".data")));
extern s32 lbl_803B1D5C __attribute__((section(".data")));
extern f32 *lbl_803B1D78 __attribute__((section(".data")));
extern f32 *lbl_803B1D90 __attribute__((section(".data")));
extern s32 lbl_803DCDE8;
extern s32 lbl_803DD61C;

void MatrixStack__Upload(void) {
    f32 gx[12];
    f32 a[16];
    f32 b[16];
    s32 mode = lbl_803DCDE8;
    if (mode == 0) {
        s32 *p = &lbl_803B1D5C;
        f32 *src;
        p = (s32 *)((char *)p + 4);
        src = *(f32 **)((char *)p + mode);
        a[0] = src[0];
        a[1] = src[1];
        a[2] = src[2];
        a[3] = src[3];
        a[4] = src[4];
        a[5] = src[5];
        a[6] = src[6];
        a[7] = src[7];
        a[8] = src[8];
        a[9] = src[9];
        a[10] = src[10];
        a[11] = src[11];
        a[12] = src[12];
        a[13] = src[13];
        a[14] = src[14];
        a[15] = src[15];
        b[0] = a[0];
        b[1] = a[4];
        b[2] = a[8];
        b[3] = a[12];
        b[4] = a[1];
        b[5] = a[5];
        b[6] = a[9];
        b[7] = a[13];
        b[8] = a[2];
        b[9] = a[6];
        b[10] = a[10];
        b[11] = a[14];
        b[12] = a[3];
        b[13] = a[7];
        b[14] = a[11];
        b[15] = a[15];
        a[0] = b[0];
        a[1] = b[1];
        a[2] = b[2];
        a[3] = b[3];
        a[4] = b[4];
        a[5] = b[5];
        a[6] = b[6];
        a[7] = b[7];
        a[8] = b[8];
        a[9] = b[9];
        a[10] = b[10];
        a[11] = b[11];
        a[12] = b[12];
        a[13] = b[13];
        a[14] = b[14];
        a[15] = b[15];
        GXSetProjection(a, lbl_803DD61C);
    } else if (mode == 1) {
        f32 *src = lbl_803B1D78;
        a[0] = src[0];
        a[1] = src[1];
        a[2] = src[2];
        a[3] = src[3];
        a[4] = src[4];
        a[5] = src[5];
        a[6] = src[6];
        a[7] = src[7];
        a[8] = src[8];
        a[9] = src[9];
        a[10] = src[10];
        a[11] = src[11];
        a[12] = src[12];
        a[13] = src[13];
        a[14] = src[14];
        a[15] = src[15];
        Matrix__ToGXMtx(a, gx);
        GXLoadPosMtxImm(gx, 0);
        if (Matrix__Invert(a, b) != 0) {
        a[0] = b[0];
        a[1] = b[1];
        a[2] = b[2];
        a[3] = b[3];
        a[4] = b[4];
        a[5] = b[5];
        a[6] = b[6];
        a[7] = b[7];
        a[8] = b[8];
        a[9] = b[9];
        a[10] = b[10];
        a[11] = b[11];
        a[12] = b[12];
        a[13] = b[13];
        a[14] = b[14];
        a[15] = b[15];
        }
        b[0] = a[0];
        b[1] = a[4];
        b[2] = a[8];
        b[3] = a[12];
        b[4] = a[1];
        b[5] = a[5];
        b[6] = a[9];
        b[7] = a[13];
        b[8] = a[2];
        b[9] = a[6];
        b[10] = a[10];
        b[11] = a[14];
        b[12] = a[3];
        b[13] = a[7];
        b[14] = a[11];
        b[15] = a[15];
        a[0] = b[0];
        a[1] = b[1];
        a[2] = b[2];
        a[3] = b[3];
        a[4] = b[4];
        a[5] = b[5];
        a[6] = b[6];
        a[7] = b[7];
        a[8] = b[8];
        a[9] = b[9];
        a[10] = b[10];
        a[11] = b[11];
        a[12] = b[12];
        a[13] = b[13];
        a[14] = b[14];
        a[15] = b[15];
        Matrix__ToGXMtx(a, gx);
        GXLoadNrmMtxImm(gx, 0);
    } else if (mode == 2) {
        Matrix__ToGXMtx(lbl_803B1D90, gx);
        GXLoadTexMtxImm(gx, lbl_803744E0[TextureStageState__GetCurrentStage()], 0);
    }
}
