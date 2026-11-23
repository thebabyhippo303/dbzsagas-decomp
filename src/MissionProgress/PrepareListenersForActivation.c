/* MissionProgress__PrepareListenersForActivation @ 0x80119D04 (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef short s16;
typedef struct { char *items; int count; } L;
extern L lbl_80394194 __attribute__((section(".data")));
void MissionProgress__PrepareListenersForActivation(void) {
    int i = 0;
    int off;
    if (i < lbl_80394194.count) {
        do {
            char *o;
            char *vt;
            off = i * 4;
            o = *(char **)(lbl_80394194.items + off);
            i += 1;
            vt = *(char **)(o + 100);
            ((void (*)(void *))*(void **)(vt + 20))(o + *(s16 *)(vt + 16));
        } while (i < lbl_80394194.count);
    }
}
