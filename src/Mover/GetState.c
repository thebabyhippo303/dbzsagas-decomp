/* Mover__GetState @ 0x802B9EFC (size: 0x98, .text, ProDG 3.9.3 -O2) - MATCHED */
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0

s32 Mover__GetState(void *arg0) {
    void *self = arg0;
    void *t;
    s32 v;
    s32 c;
    s32 r;
    s32 flag;

    v = M2C_FIELD(self, s32 *, 0x200);
    if (v != -1) {
        return v;
    }
    if (M2C_FIELD(self, s32 *, 0x258) != 0) {
        if (M2C_FIELD(self, s32 *, 0x554) != 0) {
            return 2;
        }
        flag = (M2C_FIELD(self, s32 *, 0x3C0) != 0);
        if (flag == 0) {
            t = M2C_FIELD(self, void **, 0x34);
            c = M2C_FIELD(t, s32 (**)(void *), 0x1BC)((char *)self + M2C_FIELD(t, s16 *, 0x1B8));
            r = 5;
            if (c == 0) {
                r = 7;
            }
            return r;
        }
    }
    return 0;
}
