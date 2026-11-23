/* SceneMgr__CycleDebugRenderMode @ 0x8022B2DC (size: 0x124, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })
typedef struct { char pad[0x128]; s16 dx; char pad2[2]; void (*fn)(void *, char *); } Inner;
typedef struct { char pad[0x10]; Inner *in; } TObj;
typedef struct { char pad[0xE8]; u32 mode; TObj *dbg; } SceneGlobals;
extern SceneGlobals lbl_803AD7B0 __attribute__((section(".data")));
extern TObj *lbl_803AD89C __attribute__((section(".data")));
void SceneMgr__CycleDebugRenderMode(void) {
    TObj *t;
    if (++lbl_803AD7B0.mode > 5) {
        lbl_803AD7B0.mode = 0;
    }
    t = lbl_803AD7B0.dbg;
    if (t == NULL) {
        return;
    }
    switch (lbl_803AD7B0.mode) {
    case 0:
    default: lbl_803AD89C->in->fn((char *)lbl_803AD89C + lbl_803AD89C->in->dx, "Render: All"); break;
    case 1: t->in->fn((char *)t + t->in->dx, "Render: Opaque"); break;
    case 2: t->in->fn((char *)t + t->in->dx, "Render: Transparent"); break;
    case 3: t->in->fn((char *)t + t->in->dx, "Render: Draw-first"); break;
    case 4: t->in->fn((char *)t + t->in->dx, "Render: Draw-last"); break;
    case 5: t->in->fn((char *)t + t->in->dx, "Render: No-Fade"); break;
    }
}
