/* GXInitLightAttn @ 0x802E38C8 (size: 0x1C, .text, MWCC GC/1.x (Dolphin SDK)) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef int s32; typedef unsigned int u32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef float f32;
void GXInitLightAttn(void *arg0, f32 a, f32 b, f32 c, f32 d, f32 e, f32 f) {
    ((f32*)arg0)[5] = b;
    ((f32*)arg0)[6] = c;
    ((f32*)arg0)[7] = d;
    ((f32*)arg0)[8] = e;
    ((f32*)arg0)[9] = f;
    ((f32*)arg0)[4] = a;
}
