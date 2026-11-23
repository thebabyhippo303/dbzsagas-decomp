/* Render__DrawFrame @ 0x8022876C (size: 0x124, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })
typedef struct {
    s32 c0;
    void (*fn0)(s32);
    s32 a0;
    char pad[24];
    s32 c1;
    void (*fn1)(s32);
    s32 a1;
    s32 c2;
    void (*fn2)(s32);
    s32 a2;
    s32 c3;
    void (*fn3)(s32);
    s32 a3;
} RenderCB;
typedef struct { char pad[52]; s32 f34; s32 f38; } ClearG;
extern RenderCB lbl_803AD99C __attribute__((section(".data")));
extern s32 lbl_803ADA48 __attribute__((section(".data")));
extern ClearG lbl_80374294 __attribute__((section(".data")));
s32 Gfx__BeginFrame(void);
void RenderStats__BeginFrame(void);
void EffectHandle__FlipBuffers(void);
void Fade__UpdateAll(void);
void Profiler__BeginSection(s32);
void ShadowMgr__RenderShadowMaps(void);
void Profiler__EndSection(s32);
void Gfx__Clear(s32, s32 *, s32);
void SceneMgr__RenderAll(void);
void Render__DrawCapturedFrame(void);
void FullScreenGrid__UpdateEntries(void);
void FullScreenGrid__Draw(void);
void EffectHandle__RenderAll(void);
void SceneMgr__DrawOverlayBackgrounds(void);
void RenderStats__EndFrame(void);
void Gfx__EndFrame(s32);
void Render__DrawFrame(void) {
    RenderCB *t;
    s32 c0;
    if (Gfx__BeginFrame() != 0) {
        RenderStats__BeginFrame();
        EffectHandle__FlipBuffers();
        c0 = lbl_803AD99C.c0;
        t = &lbl_803AD99C;
        if (c0 != 0) {
            t->fn0(t->a0);
        }
        Fade__UpdateAll();
        Profiler__BeginSection(10);
        ShadowMgr__RenderShadowMaps();
        Profiler__EndSection(10);
        if (lbl_803ADA48 != 0) {
            Gfx__Clear(lbl_80374294.f38, &lbl_80374294.f34, 0);
        }
        SceneMgr__RenderAll();
        if (t->c1 != 0) {
            t->fn1(t->a1);
        }
        Render__DrawCapturedFrame();
        FullScreenGrid__UpdateEntries();
        FullScreenGrid__Draw();
        Profiler__BeginSection(5);
        EffectHandle__RenderAll();
        Profiler__EndSection(5);
        SceneMgr__DrawOverlayBackgrounds();
        if (t->c2 != 0) {
            t->fn2(t->a2);
        }
        if (t->c3 != 0) {
            t->fn3(t->a3);
        }
        RenderStats__EndFrame();
        Gfx__EndFrame(0);
    }
}
