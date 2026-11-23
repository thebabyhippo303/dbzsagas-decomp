/* DebugWindowGroup__SetVisible @ 0x802CCC98 (size: 0x74, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void DebugWindow__Show(void *);
void DebugWindow__Hide(void *, int);

void DebugWindowGroup__SetVisible(void *group, int visible) {
    void *w;

    if (group != 0) {
        w = *(void **)group;
        if (w != 0) {
            do {
                if (visible != 0) {
                    DebugWindow__Show(w);
                } else {
                    DebugWindow__Hide(w, 1);
                }
                w = *(void **)((char *)w + 0x98);
            } while (w != 0);
        }
    }
}
