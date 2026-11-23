/* ProjectedTexture__SetupTexMatrix @ 0x8022889C (size: 0xEC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void TextureStageState__SelectStage(s32);
void MatrixStack__SetMode(s32);
void Gfx__SetMaterialChannel(void *, s32, void *);
void GXCallDisplayList(s32, s32);
M2C_UNK MatrixStack__LoadIdentity(void);
M2C_UNK MatrixStack__Translate(f32, f32, f32);
M2C_UNK MatrixStack__Scale(f32, f32, f32);
extern f32 lbl_8034689C __attribute__((section(".data")));
extern f32 lbl_803468A0 __attribute__((section(".data")));
extern f32 lbl_803468A4 __attribute__((section(".data")));
extern f32 lbl_803468A8 __attribute__((section(".data")));
extern s32 lbl_803ADA40 __attribute__((section(".data")));
extern void *lbl_803DCDF4;

void ProjectedTexture__SetupTexMatrix(s32 arg0) {
    u8 chan[4];
    void *temp_r30;
    void *temp_r31;
    void *mgr;

    lbl_803ADA40 = 1;
    TextureStageState__SelectStage(0);
    MatrixStack__SetMode(2);
    MatrixStack__LoadIdentity();
    if (arg0 != 0) {
        MatrixStack__Translate(lbl_8034689C, lbl_8034689C, lbl_803468A0);
        MatrixStack__Scale(lbl_8034689C, lbl_803468A4, lbl_803468A8);
    }
    temp_r31 = lbl_803DCDF4;
    temp_r30 = M2C_FIELD(temp_r31, void **, 0x14);
    if (((s32)M2C_FIELD(temp_r31, s32 *, 0x20) == 0) && ((s32)M2C_FIELD(temp_r31, s32 *, 0x10) != (s32)temp_r30)) {
        GXCallDisplayList((s32)temp_r30, M2C_FIELD(temp_r30, s32 *, 0xB14));
        M2C_FIELD(temp_r31, void **, 0x10) = temp_r30;
    }
    mgr = lbl_803DCDF4;
    M2C_FIELD(mgr, s32 *, 0x20) = 1;
    chan[0] = (u8)-1;
    chan[1] = 255;
    chan[2] = 255;
    chan[3] = 255;
    Gfx__SetMaterialChannel(mgr, 0, chan);
    M2C_FIELD(lbl_803DCDF4, s32 *, 0x24) = 1;
}
