/* AnimScript__StartLabel @ 0x80234640 (size: 0x8C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct LabelThread { char pad[8]; s8 b8; s8 b9; s16 f10; char pad2[4]; s32 f16; } LabelThread;
typedef struct { char pad[240]; LabelThread *threads[1]; } AnimState;
void AnimScript__SetLabelAddress(void *, s32, u32);

void AnimScript__StartLabel(AnimState *script, s32 idx, u32 label, s32 flag) {
    LabelThread *thread;
    u32 f;

    if (flag != 0 || (script->threads[idx]->f10 & 0xFF00) != (s32)(label & 0xFF00)) {
        f = M2C_FIELD(script, s32 *, 0x104) & 0x20000000;
        if (f == 0) {
            thread = script->threads[idx];
            if (thread != NULL) {
                thread->b9 = -1;
                thread->b8 = -1;
            }
            AnimScript__SetLabelAddress(script, idx, label >> 8);
            thread->f16 = f;
            thread->f10 = (s16)label;
        }
    }
}
