/* UiAnimator__Restart @ 0x80260788 (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

typedef struct {
    char pad[0xD0];
    s16 adjD0;
    char pad2[2];
    void (*fnD4)(void *, s32);
    char pad3[8];
    s16 adjE0;
    char pad4[2];
    void (*fnE4)(void *, s32);
} Vt;

typedef struct UiAnimator {
    char pad[44];
    Vt *vt;
} UiAnimator;

void UiAnimator__Restart(UiAnimator *arg0, s32 arg1) {
    Vt *vt;

    vt = arg0->vt;
    vt->fnE4((char *)arg0 + vt->adjE0, arg1);
    vt = arg0->vt;
    vt->fnD4((char *)arg0 + vt->adjD0, arg1);
}
