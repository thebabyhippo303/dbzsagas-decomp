/* SceneMgr__RenderAll @ 0x8022A1FC (size: 0x104, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct SceneG {
    char pad[16];
    s32 w10;
    char pad2[24];
    s32 w2C;
    char pad3[92];
    s32 w8C;
} SceneG;
typedef struct RNode {
    struct RNode *next;
    char pad[792];
    s32 type;
    u16 id;
} RNode;

void ParticleMgr__ResetRenderState(void);
void TexBind__SetRenderTarget(u16, s32);
void TexBind__CopyFramebuffer(void);
void Gfx__Clear(s32, void *, s32);
void SceneMgr__RenderScene(void *, s32);
extern SceneG lbl_803AD7B0 __attribute__((section(".data")));
extern s32 lbl_803ADA48 __attribute__((section(".data")));
extern s32 lbl_80374294 __attribute__((section(".data")));
extern RNode *lbl_803AD7C0 __attribute__((section(".data")));
extern s32 lbl_803AD7EC __attribute__((section(".data")));

void SceneMgr__RenderAll(void) {
    SceneG *g = &lbl_803AD7B0;
    RNode *n;
    s32 *b74294;

    if (g->w2C == 0) {
        return;
    }
    g->w8C++;
    if ((g->w10 == 0) && (lbl_803ADA48 == 0)) {
        b74294 = (s32 *)&lbl_80374294;
        Gfx__Clear(b74294[14], b74294 + 13, 0);
        return;
    }
    ParticleMgr__ResetRenderState();
    n = lbl_803AD7C0;
    if (n != NULL) {
        do {
            if (n->type == 1) {
                TexBind__SetRenderTarget(n->id, 0);
                SceneMgr__RenderScene(n, 0);
                TexBind__CopyFramebuffer();
            }
            n = n->next;
        } while (n != NULL);
    }
    n = lbl_803AD7C0;
    if (n != NULL) {
        do {
            if (n->type == 0) {
                SceneMgr__RenderScene(n, 0);
            }
            n = n->next;
        } while (n != NULL);
    }
    lbl_803AD7EC = 0;
}
