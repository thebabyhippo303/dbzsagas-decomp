/* Script__GetYRotationActor @ 0x802B1430 (size: 0x44, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef struct {
    char pad[0x2AC];
    f32 yRotation;
} YRotationActor;
void *Script__PopActor(void *, void *, s32);
void Script__PushFloat(void *, s32, f32);
void Script__GetYRotationActor(void *arg0, void *arg1) {
    YRotationActor *actor = Script__PopActor(arg0, arg1, 0);
    Script__PushFloat(arg0, (s32) arg1, actor->yRotation);
}