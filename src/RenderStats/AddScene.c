/* RenderStats__AddScene @ 0x8022B1F4 (size: 0x50, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef unsigned int u32;
typedef struct RenderStats {
    s32 unk0;
    void *scenes[33];
    s32 count;
} RenderStats;
extern RenderStats lbl_803AD910 __attribute__((section(".data")));
void memset(void *, int, u32);
void RenderStats__AddScene(void *scene) {
    lbl_803AD910.scenes[lbl_803AD910.count++] = scene;
    memset((char *)scene + 0x368, 0, 92);
}
