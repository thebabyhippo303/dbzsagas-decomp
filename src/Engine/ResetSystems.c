/* Engine__ResetSystems @ 0x80202F38 (size: 0xB4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Attacher__ResetSystem(void);
void SwooshStreak__ResetSystem(void);
void DBFileMgr__UnloadAll(s32);
void TextureMgr__UnloadAll(void *);
void Fade__ResetSystem(void);
void ReflectionMgr__Reset(void);
void SceneMgr__Reset(void);
void EffectHandle__ResetSystem(void);
void SceneLights__Reset(void *);
void WindMgr__Reset(void);
void App__ClearProfilerAndTaskLists(void);
void MatrixPool__FreeAll(void);
void FrustumPool__FreeAll(void);
void InstancePool__FreeAll(void);
void Database__ResetIterators(void);
s32 App__HasMemoryHeaps(void);
void TextureMgr__Reset(void);
M2C_UNK ParticleMgr__Reset(void);
M2C_UNK ShadowMgr__Reset(void);
M2C_UNK Gfx__EndFrame(s32);
extern f32 lbl_80345BD0 __attribute__((section(".data")));
extern void *lbl_803DCC2C;

void Engine__ResetSystems(void) {
    void *temp_r9;

    Attacher__ResetSystem();
    SwooshStreak__ResetSystem();
    ParticleMgr__Reset();
    DBFileMgr__UnloadAll(0);
    ShadowMgr__Reset();
    TextureMgr__UnloadAll(NULL);
    Fade__ResetSystem();
    ReflectionMgr__Reset();
    SceneMgr__Reset();
    EffectHandle__ResetSystem();
    SceneLights__Reset((void *)1);
    WindMgr__Reset();
    App__ClearProfilerAndTaskLists();
    MatrixPool__FreeAll();
    FrustumPool__FreeAll();
    InstancePool__FreeAll();
    Database__ResetIterators();
    if ((void *) lbl_803DCC2C != NULL) {
        temp_r9 = M2C_FIELD(lbl_803DCC2C, void **, 0x60);
        M2C_FIELD(temp_r9, M2C_UNK (**)(void *, M2C_UNK, f32), 0xFC)(lbl_803DCC2C + M2C_FIELD(temp_r9, s16 *, 0xF8), 0, lbl_80345BD0);
    }
    Gfx__EndFrame(0);
    Gfx__EndFrame(0);
    App__HasMemoryHeaps();
    TextureMgr__Reset();
}
