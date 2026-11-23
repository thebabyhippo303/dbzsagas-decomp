/* UI__SetSelectedEntry @ 0x80271B58 (size: 0x98, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0

void UI__SetSelectedEntry(void *arg0, void *arg1) {
    void *vt;
    void *old;
    void *vt2;

    if (*(s32 *)((char *)arg0 + 472) == 1) {
        vt = *(void **)((char *)arg0 + 412);
        ((void (*)(void *, s32))*(void **)((char *)vt + 1092))((char *)arg0 + *(s16 *)((char *)vt + 1088), 1);
    }
    vt = *(void **)((char *)arg0 + 412);
    ((void (*)(void *))*(void **)((char *)vt + 916))((char *)arg0 + *(s16 *)((char *)vt + 912));
    old = *(void **)((char *)arg0 + 496);
    if (old != NULL) {
        vt2 = *(void **)((char *)old + 8);
        ((void (*)(void *, s32))*(void **)((char *)vt2 + 12))((char *)old + *(s16 *)((char *)vt2 + 8), 3);
    }
    *(void **)((char *)arg0 + 496) = arg1;
}
