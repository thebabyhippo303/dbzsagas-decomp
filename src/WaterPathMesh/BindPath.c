/* WaterPathMesh__BindPath @ 0x80278684 (size: 0x84, .text, ProDG 3.9.3 -O2) - MATCHED */
typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16; typedef unsigned int u32; typedef float f32; typedef double f64; typedef signed long long s64; typedef unsigned long long u64;
#define M2C_ERROR(...) 0
#define M2C_BITWISE(type, expr) ({ typedef char mt_same_width[(sizeof(type) == sizeof(expr)) ? 1 : -1]; union { __typeof__(expr) from; type to; } mt_bits = {(expr)}; mt_bits.to; })

typedef int s32; typedef int M2C_UNK;
#define M2C_FIELD(expr, type, offset) (*(type)((char *)(expr) + (offset)))
#define NULL 0
s32 PathManager__GetInstance(void);
void *PathManager__FindPath(s32, char *, s32);
s32 fn_8027F8F0(void *, void *, void *);
s32 WaterPathMesh__BindPath(void *self, void *arg1, char *arg2) {
    s32 pm; void *path1; void *path2;
    pm = PathManager__GetInstance();
    if (pm == 0) return 0;
    path1 = PathManager__FindPath(pm, arg2 + 24, -1);
    path2 = PathManager__FindPath(pm, arg2 + 56, -1);
    if ((path1 == 0) || (path2 == 0)) return 0;
    return fn_8027F8F0(arg1, path1, path2);
}
