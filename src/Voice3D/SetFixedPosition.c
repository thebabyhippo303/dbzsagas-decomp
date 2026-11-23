/* Voice3D__SetFixedPosition @ 0x8019BF80 (size: 0x48, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
typedef struct { s32 x, y, z; } V3;
typedef struct { char pad[0x64]; s32 x, y, z; s32 gap; s32 w; } Voice;

extern void Voice3D__ApplySpatialization(void *);

void Voice3D__SetFixedPosition(Voice *self, V3 *p) {
    s32 x = p->x;
    Voice *s = self;
    s32 y = p->y;
    s32 *pos = &s->x;
    s32 z = p->z;
    s32 zero = 0;
    s->x = x;
    pos[1] = y;
    pos[2] = z;
    s->w = zero;
    Voice3D__ApplySpatialization(self);
}
