/* Engine__Shutdown @ 0x80202FEC (size: 0x78, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void TextureMgr__Shutdown(void);
void EffectHandle__ShutdownSystem(void);
void WindMgr__Shutdown(void);
void Database__Shutdown(void);
void Gfx__Shutdown(s32);
void App__ShutdownRuntime(void);
M2C_UNK Attacher__ShutdownSystem(void);
M2C_UNK ParticleMgr__Shutdown(void);
M2C_UNK SwooshStreak__ShutdownSystem(void);
M2C_UNK DBFileMgr__Shutdown(void);
M2C_UNK fn_8022870C(void);
M2C_UNK ReflectionMgr__Shutdown(void);
M2C_UNK SceneMgr__Shutdown(void);
M2C_UNK ShadowMgr__Shutdown(void);
M2C_UNK SceneLights__Shutdown(void);
M2C_UNK fn_8021AFD4(void);
M2C_UNK FrustumPool__Shutdown(void);
M2C_UNK InstancePool__Shutdown(void);
extern s32 lbl_80373BE0 __attribute__((section(".data")));

void Engine__Shutdown(void) {
    lbl_80373BE0 = 0x12345678;
    Attacher__ShutdownSystem();
    ParticleMgr__Shutdown();
    SwooshStreak__ShutdownSystem();
    DBFileMgr__Shutdown();
    TextureMgr__Shutdown();
    fn_8022870C();
    ReflectionMgr__Shutdown();
    SceneMgr__Shutdown();
    ShadowMgr__Shutdown();
    EffectHandle__ShutdownSystem();
    SceneLights__Shutdown();
    WindMgr__Shutdown();
    fn_8021AFD4();
    FrustumPool__Shutdown();
    InstancePool__Shutdown();
    Database__Shutdown();
    Gfx__Shutdown(1);
    App__ShutdownRuntime();
}
