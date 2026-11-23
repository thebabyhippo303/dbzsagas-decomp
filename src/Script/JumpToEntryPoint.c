/* Script__JumpToEntryPoint @ 0x802B1A9C (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

s32 Script__PopInt(void *, void *);
void AnimScript__StartLabel(void *, void *, u32, s32);
void Script__JumpToEntryPoint(void *self, void *ctx) {
    s32 id = Script__PopInt(self, ctx);
    s32 flag = 1;
    s32 label;
    if (id == 0) {
        flag = 0;
    }
    label = Script__PopInt(self, ctx);
    AnimScript__StartLabel(self, ctx, (u32)(label & 0xFF) << 8, flag);
}
