/* CActor__DebugDrawCollision @ 0x801DE9D8 (size: 0xB4, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })


void OrientedBox__DebugDraw(void *, int);
void fn_8025E280(void *, int);

#define VCALL(obj, off) \
    ((void *(*)(void *))*(void **)(*(char **)(obj) + (off) + 4))((char *)(obj) + *(short *)(*(char **)(obj) + (off)))

void CActor__DebugDrawCollision(void *arg0) {
    void *obj = M2C_FIELD(arg0, void **, 0x9C);

    if (obj != NULL) {
        if (VCALL(obj, 0x88) != NULL) {
            fn_8025E280(VCALL(obj, 0x88), 1);
        } else if (VCALL(obj, 0x78) != NULL) {
            OrientedBox__DebugDraw(VCALL(obj, 0x78), 0);
        }
    }
}
