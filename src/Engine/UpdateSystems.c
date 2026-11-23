/* Engine__UpdateSystems @ 0x80203064 (size: 0x38, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void Timer__UpdateFrameDelta(void);
void TextureMgr__UpdateAnimations(void);
M2C_UNK WindMgr__Update(void);
M2C_UNK SwooshStreak__UpdateAll(void);
M2C_UNK ParticleMgr__Update(void);
M2C_UNK fn_80217324(void);
M2C_UNK Attacher__UpdateAll();

void Engine__UpdateSystems(void) {
    Timer__UpdateFrameDelta();
    Attacher__UpdateAll();
    WindMgr__Update();
    SwooshStreak__UpdateAll();
    ParticleMgr__Update();
    fn_80217324();
    TextureMgr__UpdateAnimations();
}
