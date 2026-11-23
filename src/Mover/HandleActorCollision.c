/* Mover__HandleActorCollision @ 0x802B9E4C (size: 0xB0, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef int M2C_UNK; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;
#define NULL 0
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))

void Simple__HandleActorCollision(void *, s32, s32);
extern s32 lbl_803DCF10;
extern f32 lbl_80352110 __attribute__((section(".data")));

void Mover__HandleActorCollision(void *arg0, s32 arg1, s32 arg2) {
    void *vt;
    void *base;
    s16 adj;
    void (*fn)(void *, s32, s32, s32);
    f32 k;
    f32 *p;

    if (M2C_FIELD(arg0, s32 *, 0x534) != 0) {
        if (lbl_803DCF10 != 0) {
            vt = M2C_FIELD(arg0, void **, 0x1B4);
            base = (char *)arg0 + 412;
            adj = M2C_FIELD(vt, s16 *, 16);
            fn = M2C_FIELD(vt, void (**)(void *, s32, s32, s32), 20);
            fn((char *)base + adj, lbl_803DCF10, 0, 0);
        }
        M2C_FIELD(arg0, s32 *, 0x534) = 0;
    }
    Simple__HandleActorCollision(arg0, arg1, arg2);
    if (M2C_FIELD(arg0, s32 *, 0x554) != 0) {
        M2C_FIELD(arg0, s32 *, 0x554) = 0;
        k = lbl_80352110;
        M2C_FIELD(arg0, f32 *, 0x68) = k;
        p = (f32 *)((char *)arg0 + 104);
        p[1] = k;
        p[2] = k;
    }
}
