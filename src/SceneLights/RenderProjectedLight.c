/* SceneLights__RenderProjectedLight @ 0x8021AD34 (size: 0x13C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

void ProjectedTexture__SetupTexMatrix(s32);
void ProjectedTexture__BeginPass(s32);
void fn_80247630(s32, s32);
u16 TextureSet__GetFrameBind(void *, s32);
void TextureStageState__SetupStage(s32, s32, s32, s32, s32, s32, s32);
void TextureStageState__Lock(s32, s32);
void TextureStageState__SelectStage(s32);
void MatrixStack__SetMode(s32);
void MatrixStack__Push(void);
void MatrixStack__MultMatrix(s32);
void Frustum__TransformToWorld(s32, s32);
void SceneMgr__RenderAllBucketsCulled(s32, s32, s32);
void MatrixStack__Pop(void);
void TextureStageState__UnlockAll(void);
void ProjectedTexture__ResetTexMatrix(void);
void ProjectedTexture__EndPass(void);

void SceneLights__RenderProjectedLight(void *arg0, s32 arg1) {
    ProjectedTexture__SetupTexMatrix(0);
    ProjectedTexture__BeginPass(11);
    fn_80247630(M2C_FIELD(arg0, s32 *, 0x4C), 1);
    TextureStageState__SetupStage(0, 1, TextureSet__GetFrameBind(M2C_FIELD(arg0, void **, 0x4C), 0), 2, 0, 0, 1);
    TextureStageState__Lock(0, 0);
    TextureStageState__Lock(0, 1);
    TextureStageState__Lock(0, 2);
    TextureStageState__Lock(0, 3);
    TextureStageState__Lock(0, 4);
    TextureStageState__Lock(0, 5);
    TextureStageState__SelectStage(0);
    MatrixStack__SetMode(2);
    MatrixStack__Push();
    MatrixStack__MultMatrix(M2C_FIELD(arg0, s32 *, 0x40) + 12);
    MatrixStack__MultMatrix(M2C_FIELD(arg0, s32 *, 0x44) + 12);
    Frustum__TransformToWorld(M2C_FIELD(arg0, s32 *, 0x3C) + 4, M2C_FIELD(arg0, s32 *, 0x48) + 12);
    SceneMgr__RenderAllBucketsCulled(arg1, M2C_FIELD(arg0, s32 *, 0x3C) + 4, 0);
    TextureStageState__SelectStage(0);
    MatrixStack__SetMode(2);
    MatrixStack__Pop();
    fn_80247630(M2C_FIELD(arg0, s32 *, 0x4C), 1);
    TextureStageState__UnlockAll();
    ProjectedTexture__ResetTexMatrix();
    ProjectedTexture__EndPass();
}