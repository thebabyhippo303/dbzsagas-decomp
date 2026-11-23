/* Render__DrawCapturedFrame @ 0x80242E10 (size: 0x2BC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 TextureMgr__IsFramebufferCaptured(void);
void MatrixStack__SetMode(s32);
s32 MatrixStack__LoadIdentity(void);
void TextureStageState__SelectStage(s32);
void VertexStream__SetPositionArray(s32, s32, s32, s32);
void VertexStream__SetTexCoordArray(s32, s32, s32, s32);
void VertexStream__Enable(s32);
void VertexStream__Disable(s32);
void RenderState__Change(s32, s32);
s32 Gfx__PackColor(void *);
f32 TextureStageState__SetupStage(s32, s32, s32, s32, s32, s32, s32);
void MatrixStack__Pop(void);
void DCFlushRange(void *, u32);
void GXCallDisplayList(s32, s32);
void MatrixStack__Push(void);
M2C_UNK MatrixStack__Ortho(f32, f64, f32, f32, f32, f32);
s32 TextureMgr__AcquireFramebufferTexture(void);
M2C_UNK VertexStream__Draw(M2C_UNK, M2C_UNK, M2C_UNK);
extern f32 lbl_80347648 __attribute__((section(".data")));
extern f32 lbl_8034764C __attribute__((section(".data")));
extern f32 lbl_80347650 __attribute__((section(".data")));
extern f32 lbl_80347660 __attribute__((section(".data")));
extern f64 lbl_80347670 __attribute__((section(".data")));
extern M2C_UNK lbl_80374294 __attribute__((section(".data")));
extern M2C_UNK lbl_803B1398 __attribute__((section(".data")));
extern M2C_UNK lbl_803B13C8 __attribute__((section(".data")));
extern void *lbl_803DCDF4;

void Render__DrawCapturedFrame(void) {
    char sp8[8];
    f32 temp_f13;
    f32 temp_f11;
    f32 temp_f11_2;
    f32 temp_f12;
    f32 temp_f0;
    s32 v;
    s32 w;
    u8 *cp;
    M2C_UNK *rp;
    f32 *tex;
    f32 ort0;
    f32 ort1;
    f32 ort2;

    rp = &lbl_80374294;
    if ((M2C_FIELD(rp, s32 *, 0x54) != 0) && (TextureMgr__IsFramebufferCaptured() != 0)) {
        MatrixStack__SetMode(0);
        MatrixStack__Push();
        MatrixStack__LoadIdentity();
        ort1 = lbl_8034764C;
        ort0 = lbl_80347648;
        ort2 = lbl_80347650;
        MatrixStack__Ortho(ort0, ort1, ort0, ort1, ort2, ort1);
        MatrixStack__SetMode(1);
        MatrixStack__Push();
        MatrixStack__LoadIdentity();
        TextureStageState__SelectStage(0);
        MatrixStack__SetMode(2);
        MatrixStack__Push();
        MatrixStack__LoadIdentity();
        VertexStream__SetPositionArray(3, 1, 0, (s32) &lbl_803B1398);
        VertexStream__SetTexCoordArray(2, 1, 0, (s32) &lbl_803B13C8);
        VertexStream__Enable(0);
        VertexStream__Enable(3);
        VertexStream__Disable(1);
        VertexStream__Disable(2);
        RenderState__Change(2, 2);
        RenderState__Change(5, 0);
        RenderState__Change(0x17, 0);
        v = M2C_FIELD(rp, s32 *, 0x54);
        sp8[0] = -1;
        cp = (u8 *) sp8;
        cp[1] = 0xFF;
        cp[2] = 0xFF;
        w = 0xFF;
        if ((v += v) < 0xFF) {
            w = v;
        }
        cp[3] = w;
        RenderState__Change(0x16, Gfx__PackColor(cp));
        temp_f11 = (f32) (f64) M2C_FIELD(rp, u32 *, 0x58) * lbl_80347660;
        temp_f13 = temp_f11 / (f32) (f64) M2C_FIELD(&lbl_80374294, s32 *, 0);
        M2C_FIELD(&lbl_803B13C8, f32 *, 0) = temp_f13;
        tex = (f32 *) &lbl_803B13C8;
        tex[6] = temp_f13;
        temp_f11_2 = temp_f11 / (f32) (f64) M2C_FIELD(rp, s32 *, 4);
        tex[3] = temp_f11_2;
        tex[1] = temp_f11_2;
        temp_f12 = (f32) (lbl_80347670 - (f64) temp_f13);
        temp_f0 = (f32) (lbl_80347670 - (f64) temp_f11_2);
        tex[2] = temp_f12;
        tex[5] = temp_f0;
        tex[4] = temp_f12;
        tex[7] = temp_f0;
        DCFlushRange(tex, 0x20U);
        TextureStageState__SetupStage(0, 1, TextureMgr__AcquireFramebufferTexture(), 3, 0, 0, 1);
        TextureStageState__SetupStage(1, 0, 0, 0, 0, 0, 0);
        GXCallDisplayList(M2C_FIELD(lbl_803DCDF4, s32 *, 0x3C), M2C_FIELD(lbl_803DCDF4, s32 *, 0x40));
        VertexStream__Draw(5, 0, 4);
        MatrixStack__SetMode(0);
        MatrixStack__Pop();
        MatrixStack__SetMode(1);
        MatrixStack__Pop();
        TextureStageState__SelectStage(0);
        MatrixStack__SetMode(2);
        MatrixStack__Pop();
    }
}
