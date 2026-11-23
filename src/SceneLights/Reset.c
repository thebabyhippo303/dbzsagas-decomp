/* SceneLights__Reset @ 0x8021A57C (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct { int x, y, z; } Ambient;
extern Ambient lbl_803465E8;
void Gfx__SetAmbientColor(void *);
void SceneLights__RemoveAll(void *);
void SceneLights__Reset(void *arg0) {
    Ambient sp8;
    Ambient sp18;

    sp8 = lbl_803465E8;
    sp18 = sp8;
    Gfx__SetAmbientColor(&sp18);
    SceneLights__RemoveAll(arg0);
}
