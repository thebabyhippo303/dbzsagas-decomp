/* SceneMgr__SetRenderStageCallback @ 0x80228744 (size: 0x28, .text, ProDG 3.9.3 -O2) - MATCHED */
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
typedef struct {
    u32 f0;
    u32 f4;
    u32 f8;
} RSEntry;
extern RSEntry lbl_803AD99C[] __attribute__((section(".data")));
void SceneMgr__SetRenderStageCallback(s32 i, void *cb0, void *cb1) {
    lbl_803AD99C[i].f0 = 1;
    lbl_803AD99C[i].f4 = (u32)cb0;
    lbl_803AD99C[i].f8 = (u32)cb1;
}
