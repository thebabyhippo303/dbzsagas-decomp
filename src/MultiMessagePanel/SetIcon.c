/* MultiMessagePanel__SetIcon @ 0x8026A5EC (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })
typedef void (*FnA)(void *, s32, s32, s32);
typedef void (*FnB)(void *, f32, f32);
extern f32 lbl_80349ECC __attribute__((section(".data")));
void MultiMessagePanel__SetIcon(void *self, s32 idx, s32 a, s32 b, s32 c) {
    char *t;
    char *t2;
    char *t2_b;
    FnA fn;
    FnB fn2;
    f32 v;
    s32 off;
    idx *= 1360;
    t = (char *) (idx + (s32) self + 0x6D0C);
    off = idx + 0x6D0C;
    self = (char *) self + off;
    t2 = *(char **) ((char *) t + 412);
    fn = *(FnA *) (t2 + 868);
    fn((char *) self + *(s16 *) (t2 + 864), a, b, c);
    t2_b = *(char **) ((char *) t + 412);
    v = lbl_80349ECC;
    fn2 = *(FnB *) (t2_b + 236);
    fn2((char *) self + *(s16 *) (t2_b + 232), v, v);
}