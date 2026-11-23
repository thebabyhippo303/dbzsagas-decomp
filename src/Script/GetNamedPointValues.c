/* Script__GetNamedPointValues @ 0x802B21CC (size: 0x9C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0

s32 Script__PopInt(void *, s32);
void Script__PushFloat(void *, s32, f32);
void Script__PushInt(void *, s32, s32);

void Script__GetNamedPointValues(void *arg0, s32 arg1) {
    s32 temp_r3;

    temp_r3 = Script__PopInt(arg0, arg1);
    if (temp_r3 != 0) {
        Script__PushFloat(arg0, arg1, M2C_FIELD(temp_r3, f32 *, 0));
        Script__PushFloat(arg0, arg1, M2C_FIELD(temp_r3, f32 *, 4));
        Script__PushFloat(arg0, arg1, M2C_FIELD(temp_r3, f32 *, 8));
        return;
    }
    Script__PushInt(arg0, arg1, -1);
    Script__PushInt(arg0, arg1, -1);
    Script__PushInt(arg0, arg1, -1);
}
