/* GXGetTexObjFmt @ 0x802E4384 (size: 0x8, .text, MWCC GC/1.x (Dolphin SDK)) - MATCHED */
typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef float f32; typedef double f64;

typedef struct GXTexObj {
    char pad[0x14];
    s32 fmt;
} GXTexObj;

s32 GXGetTexObjFmt(GXTexObj *obj) {
    return obj->fmt;
}
