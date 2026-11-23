/* Protagonist__StepPhysics @ 0x801F1960 (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef void (*StepFn0)(void *);
typedef void (*StepFn1)(void *, f32);

void Protagonist__StepPhysics(void *arg0, f32 farg0) {
    void *vt;
    StepFn0 fn0;
    StepFn1 fn1;

    vt = M2C_FIELD(arg0, void **, 0x34);
    fn0 = M2C_FIELD(vt, StepFn0 *, 0xD4);
    fn0((char *) arg0 + M2C_FIELD(vt, s16 *, 0xD0));
    vt = M2C_FIELD(arg0, void **, 0x34);
    fn1 = M2C_FIELD(vt, StepFn1 *, 0xDC);
    fn1((char *) arg0 + M2C_FIELD(vt, s16 *, 0xD8), farg0);
    vt = M2C_FIELD(arg0, void **, 0x34);
    fn1 = M2C_FIELD(vt, StepFn1 *, 0xE4);
    fn1((char *) arg0 + M2C_FIELD(vt, s16 *, 0xE0), farg0);
}
