/* Model__RegisterLoaded @ 0x8018854C (size: 0x3C, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))

void Model__RegisterLodGroup(void *, s32);
void Model__RegisterMesh(s32, s32);
void Model__RegisterLoaded(void *arg0, s32 arg1) {
    s32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_r3 == 0) {
        Model__RegisterLodGroup(M2C_FIELD(arg0, void **, 4), arg1);
        return;
    }
    Model__RegisterMesh(temp_r3, arg1);
}
