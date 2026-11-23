/* Scene__DrawOverlayBackground @ 0x8022BCA0 (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 Scene__GetBackgroundFlags(void *);
s32 fn_8022CF38(void *);
void Scene__DrawBackgroundGradient(void *);
void SceneMgr__RenderBucket(void *, s32);

void Scene__DrawOverlayBackground(void *arg0) {
    s32 flags = Scene__GetBackgroundFlags(arg0);
    s32 masked = flags & 0xF000;
    if (fn_8022CF38(arg0) == 0) {
        return;
    }
    if (masked != 8192) {
        return;
    }
    Scene__DrawBackgroundGradient(arg0);
    if ((Scene__GetBackgroundFlags(arg0) & 16) == 0) {
        return;
    }
    SceneMgr__RenderBucket(arg0, 2);
}
