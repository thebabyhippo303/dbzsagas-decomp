/* Script__GetPow @ 0x802B1FFC (size: 0x60, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

float Script__PopFloat(void *, void *);
void Script__PushFloat(void *, void *, float);
float powf(float, float);
void Script__GetPow(void *arg0, void *arg1) {
    f32 temp_f31;

    temp_f31 = Script__PopFloat(arg0, arg1);
    Script__PushFloat(arg0, arg1, powf(temp_f31, Script__PopFloat(arg0, arg1)));
}
