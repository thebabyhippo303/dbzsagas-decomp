/* MultiMessagePanel__SetMessageTextMetrics @ 0x8026A468 (size: 0x7C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef void (*FnA)(void *);
typedef void (*FnB)(void *, f32);

void MultiMessagePanel__SetMessageTextMetrics(void *self, s32 idx, f32 dummy, f32 val) {
    char *t;
    char *t2;
    FnA fn;
    FnB fn2;
    f32 v;
    s32 off;

    v = val;
    idx *= 500;
    t = (char *) (idx + (s32) self + 0x5D6C);
    off = idx + 0x5D6C;
    self = (char *) self + off;
    t2 = *(char **) ((char *) t + 412);
    fn = *(FnA *) (t2 + 1004);
    fn((char *) self + *(s16 *) (t2 + 1000));
    t2 = *(char **) ((char *) t + 412);
    fn2 = *(FnB *) (t2 + 1020);
    fn2((char *) self + *(s16 *) (t2 + 1016), v);
}
