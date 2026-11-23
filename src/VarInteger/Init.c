/* VarInteger__Init @ 0x8018CA90 (size: 0x54, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef struct {
    char pad[4];
    void *vt;
    char pad2[0x40 - 8];
    void *x;
    void *y;
} VarInteger;

extern void *Variable__Init(void *self, int a, int b, int c, int d);
extern char lbl_8033F158[];

VarInteger *VarInteger__Init(VarInteger *self, int a, int b, void *x, void *y, int c, int d) {
    Variable__Init(self, a, b, c, d);
    self->x = x;
    self->y = y;
    self->vt = lbl_8033F158;
    return self;
}
