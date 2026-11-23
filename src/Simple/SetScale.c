/* Simple__SetScale @ 0x802AF4B8 (size: 0x70, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void * Script__PopActor(void *, void *, int);
float Script__PopFloat(void *, void *);
M2C_UNK fn_802C6D00(s32, s32);
void Simple__SetScale(void *arg0, void *arg1) {
    f32 v[3];
    f32 *p = v;

    p[2] = Script__PopFloat(arg0, arg1);
    p[1] = Script__PopFloat(arg0, arg1);
    v[0] = Script__PopFloat(arg0, arg1);
    fn_802C6D00(Script__PopActor(arg0, arg1, 0), (s32) p);
}
