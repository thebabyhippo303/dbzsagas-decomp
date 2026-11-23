/* WaterMesh__AddImpulseBilinear @ 0x8029FF4C (size: 0x10C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void WaterMesh__SetCellImpulse(void *, s32, s32, f32);
void WaterMesh__SplitGridCoord(s32 *, s32 *, f32 *, f32, f32);
extern f32 lbl_80350790 __attribute__((section(".data")));
extern f32 lbl_80350794 __attribute__((section(".data")));

void WaterMesh__AddImpulseBilinear(void *arg0, void *arg1, f32 farg0) {
    s32 ix0;
    s32 ix1;
    f32 tmp1;
    s32 iz0;
    s32 iz1;
    f32 tmp2;
    f32 amp = farg0;
    f32 fx;
    f32 fz;
    f32 one;
    f32 gx;
    f32 gz;
    WaterMesh__SplitGridCoord(&ix0, &ix1, &tmp1, M2C_FIELD(arg1, f32 *, 0), M2C_FIELD(arg0, f32 *, 0xA4));
    WaterMesh__SplitGridCoord(&iz0, &iz1, &tmp2, M2C_FIELD(arg1, f32 *, 4), M2C_FIELD(arg0, f32 *, 0xA8));
    fx = tmp1;
    one = lbl_80350790;
    fz = tmp2;
    gx = one - fx;
    amp = amp * lbl_80350794;
    gz = one - fz;
    WaterMesh__SetCellImpulse(arg0, ix0, iz0, (gx + gz) * amp);
    WaterMesh__SetCellImpulse(arg0, ix1, iz0, (fx + gz) * amp);
    WaterMesh__SetCellImpulse(arg0, ix0, iz1, (gx + fz) * amp);
    WaterMesh__SetCellImpulse(arg0, ix1, iz1, (fx + fz) * amp);
}
