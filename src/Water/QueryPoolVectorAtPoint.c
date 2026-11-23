/* Water__QueryPoolVectorAtPoint @ 0x80294080 (size: 0xEC, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

typedef struct Vec { void **data; s32 count; } Vec;
typedef struct Water { Vec *pools; } Water;

s32 WaterPool__QuerySurfaceAtPoint(void *, s32, s32);
extern f32 lbl_8034F970 __attribute__((section(".data")));

s32 Water__QueryPoolVectorAtPoint(Water *self, s32 arg1, s32 arg2, f32 *out) {
    s32 i = 0;
    u32 n = self->pools->count;
    if (i < n) {
        f32 g = lbl_8034F970;
        do {
            Vec *v = self->pools;
            s32 idx = i;
            void **e;
            void *p;
            if (i < 0) {
                idx = v->count - 1;
            }
            if (idx >= v->count || v->count == 0) {
                e = 0;
            } else {
                e = (void **)v->data + idx;
            }
            p = *e;
            if (WaterPool__QuerySurfaceAtPoint(p, arg1, arg2) != 0) {
                if (out != NULL) {
                    out[0] = g;
                    out[1] = g;
                    out[2] = g;
                }
                return i;
            }
            i++;
        } while (i < n);
    }
    return -1;
}
