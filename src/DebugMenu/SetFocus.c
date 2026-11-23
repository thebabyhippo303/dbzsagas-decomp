/* DebugMenu__SetFocus @ 0x80264D60 (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void BaseMenu__SetFocus(void *, void *);

void DebugMenu__SetFocus(void *arg0, void *arg1) {
    void **p;
    void **end;
    if (M2C_FIELD(arg0, void **, 140) != M2C_FIELD(arg1, void **, 0)) {
        p = (void **)((char *)arg0 + 948);
        end = (void **)((char *)arg0 + 1016);
        do {
            void *it = *p++;
            void *vt = M2C_FIELD(it, void **, 44);
            s16 adj = M2C_FIELD(vt, s16 *, 200);
            void (*fn)(void *, s32) = M2C_FIELD(vt, void (**)(void *, s32), 204);
            fn((char *)it + adj, 0);
        } while ((s32)p <= (s32)end);
    }
    BaseMenu__SetFocus(arg0, arg1);
}
