/* Simple__GetRot @ 0x802AE7C0 (size: 0x6C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

void * Script__PopActor(void *, void *, s32);
void Script__PushFloat(void *, s32, f32);
void Simple__GetRot(void *arg0, void *arg1) {
    void *temp_r29;
    void *temp_r3;

    temp_r3 = Script__PopActor(arg0, arg1, 0);
    temp_r29 = temp_r3 + 0x2A8;
    Script__PushFloat(arg0, (s32) arg1, M2C_FIELD(temp_r3, f32 *, 0x2A8));
    Script__PushFloat(arg0, (s32) arg1, M2C_FIELD(temp_r29, f32 *, 4));
    Script__PushFloat(arg0, (s32) arg1, M2C_FIELD(temp_r29, f32 *, 8));
}
